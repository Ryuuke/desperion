//  Generated by desperion protocol_builder

#ifndef core_party_update_light_message_hpp
#define core_party_update_light_message_hpp

namespace network
{
    struct party_update_light_message : abstract_party_event_message
    {
        int32_t id;
        int32_t life_points;
        int32_t max_life_points;
        int16_t prospecting;
        int8_t regen_rate;
        
        int16_t id() const override
        { return 6054; } 
        
        party_update_light_message(const int32_t & party_id, const int32_t & id, const int32_t & life_points, const int32_t & max_life_points, const int16_t & prospecting, const int8_t & regen_rate) : abstract_party_event_message { party_id }
        {
            _data << id;
            _data << life_points;
            _data << max_life_points;
            _data << prospecting;
            _data << regen_rate;
        }
        
        party_update_light_message(byte_buffer & data) : abstract_party_event_message { data }
        {
            data >> id;
            data >> life_points;
            data >> max_life_points;
            data >> prospecting;
            data >> regen_rate;
        }
    };
}

#endif
