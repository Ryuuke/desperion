//  Generated by desperion protocol_builder

#ifndef core_guild_fight_players_enemies_list_message_hpp
#define core_guild_fight_players_enemies_list_message_hpp

namespace network
{
    struct guild_fight_players_enemies_list_message : dofus_unit
    {
        double fight_id;
        std::vector<character_minimal_plus_look_informations_ptr> player_info;
        
        int16_t id() const override
        { return 5928; } 
        
        guild_fight_players_enemies_list_message(const double & fight_id, const std::vector<character_minimal_plus_look_informations_ptr> & player_info)
        {
            _data << fight_id;
            _data << static_cast<int16_t>(player_info.size());
            for (auto && i : player_info)
                _data << i->buffer();
        }
        
        guild_fight_players_enemies_list_message(byte_buffer & data)
        {
            data >> fight_id;
            int16_t player_info_size;
            data >> player_info_size;
            player_info.resize(player_info_size);
            for (int16_t i = 0; i < player_info_size; ++i)
                player_info[i] = std::make_unique<character_minimal_plus_look_informations>(data);
        }
    };
}

#endif
