//  Generated by desperion protocol_builder

#ifndef core_game_role_play_arena_fighter_status_message_hpp
#define core_game_role_play_arena_fighter_status_message_hpp

namespace network
{
    struct game_role_play_arena_fighter_status_message : dofus_unit
    {
        int32_t fight_id;
        int32_t player_id;
        bool accepted;
        
        int16_t id() const override
        { return 6281; } 
        
        game_role_play_arena_fighter_status_message(const int32_t & fight_id, const int32_t & player_id, const bool & accepted)
        {
            _data << fight_id;
            _data << player_id;
            _data << accepted;
        }
        
        game_role_play_arena_fighter_status_message(byte_buffer & data)
        {
            data >> fight_id;
            data >> player_id;
            data >> accepted;
        }
    };
}

#endif