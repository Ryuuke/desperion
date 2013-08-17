//  Generated by desperion protocol_builder

#ifndef core_character_replay_with_relook_request_message_hpp
#define core_character_replay_with_relook_request_message_hpp

namespace network
{
    struct character_replay_with_relook_request_message : character_replay_request_message
    {
        int32_t cosmetic_id;
        
        int16_t id() const override
        { return 6354; } 
        
        character_replay_with_relook_request_message(const int32_t & character_id, const int32_t & cosmetic_id) : character_replay_request_message { character_id }
        {
            _data << cosmetic_id;
        }
        
        character_replay_with_relook_request_message(byte_buffer & data) : character_replay_request_message { data }
        {
            data >> cosmetic_id;
        }
    };
}

#endif