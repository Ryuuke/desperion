//  Generated by desperion protocol_builder

#ifndef core_game_fight_new_round_message_hpp
#define core_game_fight_new_round_message_hpp

namespace network
{
    struct game_fight_new_round_message : dofus_unit
    {
        int32_t round_number;
        
        int16_t id() const override
        { return 6239; } 
        
        game_fight_new_round_message(const int32_t & round_number)
        {
            _data << round_number;
        }
        
        game_fight_new_round_message(byte_buffer & data)
        {
            data >> round_number;
        }
    };
}

#endif