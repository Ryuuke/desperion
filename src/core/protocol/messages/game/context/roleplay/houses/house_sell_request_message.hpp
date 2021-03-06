//  Generated by desperion protocol_builder

#ifndef core_house_sell_request_message_hpp
#define core_house_sell_request_message_hpp

namespace network
{
    struct house_sell_request_message : dofus_unit
    {
        int32_t amount;
        
        int16_t id() const override
        { return 5697; } 
        
        house_sell_request_message(const int32_t & amount)
        {
            _data << amount;
        }
        
        house_sell_request_message(byte_buffer & data)
        {
            data >> amount;
        }
    };
}

#endif
