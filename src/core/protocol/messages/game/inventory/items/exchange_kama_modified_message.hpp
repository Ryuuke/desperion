//  Generated by desperion protocol_builder

#ifndef core_exchange_kama_modified_message_hpp
#define core_exchange_kama_modified_message_hpp

namespace network
{
    struct exchange_kama_modified_message : exchange_object_message
    {
        int32_t quantity;
        
        int16_t id() const override
        { return 5521; } 
        
        exchange_kama_modified_message(const bool & remote, const int32_t & quantity) : exchange_object_message { remote }
        {
            _data << quantity;
        }
        
        exchange_kama_modified_message(byte_buffer & data) : exchange_object_message { data }
        {
            data >> quantity;
        }
    };
}

#endif
