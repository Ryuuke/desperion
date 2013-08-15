//  Generated by desperion protocol_builder

#ifndef core_object_use_multiple_message_hpp
#define core_object_use_multiple_message_hpp

namespace network
{
    struct object_use_multiple_message : object_use_message
    {
        int32_t quantity;
        
        int16_t id() const override
        { return 6234; } 
        
        object_use_multiple_message(const int32_t & object_u_i_d, const int32_t & quantity) : object_use_message { object_u_i_d }
        {
            _data << quantity;
        }
        
        object_use_multiple_message(byte_buffer & data) : object_use_message { data }
        {
            data >> quantity;
        }
    };
}

#endif