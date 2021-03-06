//  Generated by desperion protocol_builder

#ifndef core_game_role_play_arena_registration_status_message_hpp
#define core_game_role_play_arena_registration_status_message_hpp

namespace network
{
    struct game_role_play_arena_registration_status_message : dofus_unit
    {
        bool registered;
        int8_t step;
        int32_t battle_mode;
        
        int16_t id() const override
        { return 6284; } 
        
        game_role_play_arena_registration_status_message(const bool & registered, const int8_t & step, const int32_t & battle_mode)
        {
            _data << registered;
            _data << step;
            _data << battle_mode;
        }
        
        game_role_play_arena_registration_status_message(byte_buffer & data)
        {
            data >> registered;
            data >> step;
            data >> battle_mode;
        }
    };
}

#endif
