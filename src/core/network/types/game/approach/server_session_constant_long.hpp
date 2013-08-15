//  Generated by desperion protocol_builder

#ifndef core_server_session_constant_long_hpp
#define core_server_session_constant_long_hpp

namespace network
{
    struct server_session_constant_long : server_session_constant
    {
        double value;
        
        int16_t id() const override
        { return 429; } 
        
        server_session_constant_long(const int16_t & id, const double & value) : server_session_constant { id }
        {
            _data << value;
        }
        
        server_session_constant_long(byte_buffer & data) : server_session_constant { data }
        {
            data >> value;
        }
    };
    
    using server_session_constant_long_ptr = std::unique_ptr<server_session_constant_long>;
}

#endif