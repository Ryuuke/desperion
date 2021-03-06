//
//  game_session_impl.hpp
//  login_server
//
//  Created by Alexandre Martin on 07/08/13.
//  Copyright (c) 2013 alexm. All rights reserved.
//

#ifndef login_server_game_session_impl_hpp
#define login_server_game_session_impl_hpp

#include "../core/protocol/dofus_executor.hpp"
#include <unordered_map>

class game_server;

class game_session : public dofus_session, public std::enable_shared_from_this<game_session>
{
private:
    enum class req_flag
    {
        NOT_CONNECTED,
        CONNECTED,
    };

    struct packet_handler
    {
        void (game_session::*handler)(byte_buffer &);
        req_flag flag;
    };

    static const std::unordered_map<int16_t, packet_handler> _handlers;
    const class game_server * _server = nullptr;
    int8_t _state = 3;
    std::string _salt, _alternative_ip;
    uint16_t _port, _players = 0;

// --- unsafe, called in socket_listener threads
    void handle_error();
    void handle_new_message(int16_t, std::shared_ptr<byte_buffer>) override;
// ---
    
    void handle_state_message(byte_buffer &);
    void handle_players_message(byte_buffer &);
    void handle_connect_message(byte_buffer &);

    void process_data(int16_t, std::shared_ptr<byte_buffer> &);
    void send(const network::dofus_unit &, bool disconnect = false);
    void write(const network::dofus_unit &);
    void flush(bool disconnect = false);

    game_session(boost::asio::ip::tcp::socket &&);
public:
    static std::shared_ptr<game_session> create(boost::asio::ip::tcp::socket &&);
    ~game_session();
    void start() override;
    void send_disconnect_player_message(int);

    const class game_server * game_server() const
    { return _server; }
    
    int8_t state() const
    { return _state; }
    
    const std::string & alternative_ip() const
    { return _alternative_ip; }
    
    uint16_t port() const
    { return _port; }
    
    uint16_t players() const
    {return _players; }

    boost::asio::ip::address get_address() const
    { return _executor.socket().remote_endpoint().address(); }
};

#endif
