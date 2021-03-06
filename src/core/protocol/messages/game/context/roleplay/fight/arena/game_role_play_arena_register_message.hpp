//  Generated by desperion protocol_builder

#ifndef core_game_role_play_arena_register_message_hpp
#define core_game_role_play_arena_register_message_hpp

namespace network
{
    struct game_role_play_arena_register_message : dofus_unit
    {
        int32_t battle_mode;
        
        int16_t id() const override
        { return 6280; } 
        
        game_role_play_arena_register_message(const int32_t & battle_mode)
        {
            _data << battle_mode;
        }
        
        game_role_play_arena_register_message(byte_buffer & data)
        {
            data >> battle_mode;
        }
    };
}

#endif
