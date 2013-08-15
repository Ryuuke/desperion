//  Generated by desperion protocol_builder

#ifndef core_game_action_fight_spell_cooldown_variation_message_hpp
#define core_game_action_fight_spell_cooldown_variation_message_hpp

namespace network
{
    struct game_action_fight_spell_cooldown_variation_message : abstract_game_action_message
    {
        int32_t target_id;
        int32_t spell_id;
        int16_t value;
        
        int16_t id() const override
        { return 6219; } 
        
        game_action_fight_spell_cooldown_variation_message(const int16_t & action_id, const int32_t & source_id, const int32_t & target_id, const int32_t & spell_id, const int16_t & value) : abstract_game_action_message { action_id,source_id }
        {
            _data << target_id;
            _data << spell_id;
            _data << value;
        }
        
        game_action_fight_spell_cooldown_variation_message(byte_buffer & data) : abstract_game_action_message { data }
        {
            data >> target_id;
            data >> spell_id;
            data >> value;
        }
    };
}

#endif