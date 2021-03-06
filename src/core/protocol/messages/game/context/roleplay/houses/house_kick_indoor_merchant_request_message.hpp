//  Generated by desperion protocol_builder

#ifndef core_house_kick_indoor_merchant_request_message_hpp
#define core_house_kick_indoor_merchant_request_message_hpp

namespace network
{
    struct house_kick_indoor_merchant_request_message : dofus_unit
    {
        int16_t cell_id;
        
        int16_t id() const override
        { return 5661; } 
        
        house_kick_indoor_merchant_request_message(const int16_t & cell_id)
        {
            _data << cell_id;
        }
        
        house_kick_indoor_merchant_request_message(byte_buffer & data)
        {
            data >> cell_id;
        }
    };
}

#endif
