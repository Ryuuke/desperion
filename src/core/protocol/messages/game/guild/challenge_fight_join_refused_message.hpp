//  Generated by desperion protocol_builder

#ifndef core_challenge_fight_join_refused_message_hpp
#define core_challenge_fight_join_refused_message_hpp

namespace network
{
    struct challenge_fight_join_refused_message : dofus_unit
    {
        int32_t player_id;
        int8_t reason;
        
        int16_t id() const override
        { return 5908; } 
        
        challenge_fight_join_refused_message(const int32_t & player_id, const int8_t & reason)
        {
            _data << player_id;
            _data << reason;
        }
        
        challenge_fight_join_refused_message(byte_buffer & data)
        {
            data >> player_id;
            data >> reason;
        }
    };
}

#endif
