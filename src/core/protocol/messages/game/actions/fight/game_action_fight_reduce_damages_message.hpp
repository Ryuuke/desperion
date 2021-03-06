//  Generated by desperion protocol_builder

#ifndef core_game_action_fight_reduce_damages_message_hpp
#define core_game_action_fight_reduce_damages_message_hpp

namespace network
{
    struct game_action_fight_reduce_damages_message : abstract_game_action_message
    {
        int32_t target_id;
        int32_t amount;
        
        int16_t id() const override
        { return 5526; } 
        
        game_action_fight_reduce_damages_message(const int16_t & action_id, const int32_t & source_id, const int32_t & target_id, const int32_t & amount) : abstract_game_action_message { action_id,source_id }
        {
            _data << target_id;
            _data << amount;
        }
        
        game_action_fight_reduce_damages_message(byte_buffer & data) : abstract_game_action_message { data }
        {
            data >> target_id;
            data >> amount;
        }
    };
}

#endif
