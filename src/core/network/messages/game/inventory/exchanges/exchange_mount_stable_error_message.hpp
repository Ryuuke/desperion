//  Generated by desperion protocol_builder

#ifndef core_exchange_mount_stable_error_message_hpp
#define core_exchange_mount_stable_error_message_hpp

namespace network
{
    struct exchange_mount_stable_error_message : dofus_unit
    {
        
        int16_t id() const override
        { return 5981; } 
        
        exchange_mount_stable_error_message()
        {
        }
        
        exchange_mount_stable_error_message(byte_buffer & data)
        {
        }
    };
}

#endif