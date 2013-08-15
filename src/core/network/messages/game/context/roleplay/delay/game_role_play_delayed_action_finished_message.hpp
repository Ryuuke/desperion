//  Generated by desperion protocol_builder

#ifndef core_game_role_play_delayed_action_finished_message_hpp
#define core_game_role_play_delayed_action_finished_message_hpp

namespace network
{
    struct game_role_play_delayed_action_finished_message : dofus_unit
    {
        int32_t delayed_character_id;
        int8_t delay_type_id;
        
        int16_t id() const override
        { return 6150; } 
        
        game_role_play_delayed_action_finished_message(const int32_t & delayed_character_id, const int8_t & delay_type_id)
        {
            _data << delayed_character_id;
            _data << delay_type_id;
        }
        
        game_role_play_delayed_action_finished_message(byte_buffer & data)
        {
            data >> delayed_character_id;
            data >> delay_type_id;
        }
    };
}

#endif