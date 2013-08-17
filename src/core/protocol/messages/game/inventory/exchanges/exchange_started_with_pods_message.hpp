//  Generated by desperion protocol_builder

#ifndef core_exchange_started_with_pods_message_hpp
#define core_exchange_started_with_pods_message_hpp

namespace network
{
    struct exchange_started_with_pods_message : exchange_started_message
    {
        int32_t first_character_id;
        int32_t first_character_current_weight;
        int32_t first_character_max_weight;
        int32_t second_character_id;
        int32_t second_character_current_weight;
        int32_t second_character_max_weight;
        
        int16_t id() const override
        { return 6129; } 
        
        exchange_started_with_pods_message(const int8_t & exchange_type, const int32_t & first_character_id, const int32_t & first_character_current_weight, const int32_t & first_character_max_weight, const int32_t & second_character_id, const int32_t & second_character_current_weight, const int32_t & second_character_max_weight) : exchange_started_message { exchange_type }
        {
            _data << first_character_id;
            _data << first_character_current_weight;
            _data << first_character_max_weight;
            _data << second_character_id;
            _data << second_character_current_weight;
            _data << second_character_max_weight;
        }
        
        exchange_started_with_pods_message(byte_buffer & data) : exchange_started_message { data }
        {
            data >> first_character_id;
            data >> first_character_current_weight;
            data >> first_character_max_weight;
            data >> second_character_id;
            data >> second_character_current_weight;
            data >> second_character_max_weight;
        }
    };
}

#endif