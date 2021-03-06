//  Generated by desperion protocol_builder

#ifndef core_exchange_object_removed_from_bag_message_hpp
#define core_exchange_object_removed_from_bag_message_hpp

namespace network
{
    struct exchange_object_removed_from_bag_message : exchange_object_message
    {
        int32_t object_u_i_d;
        
        int16_t id() const override
        { return 6010; } 
        
        exchange_object_removed_from_bag_message(const bool & remote, const int32_t & object_u_i_d) : exchange_object_message { remote }
        {
            _data << object_u_i_d;
        }
        
        exchange_object_removed_from_bag_message(byte_buffer & data) : exchange_object_message { data }
        {
            data >> object_u_i_d;
        }
    };
}

#endif
