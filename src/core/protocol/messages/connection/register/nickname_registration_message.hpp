//  Generated by desperion protocol_builder

#ifndef core_nickname_registration_message_hpp
#define core_nickname_registration_message_hpp

namespace network
{
    struct nickname_registration_message : dofus_unit
    {
        
        int16_t id() const override
        { return 5640; } 
        
        nickname_registration_message()
        {
        }
        
        nickname_registration_message(byte_buffer & data)
        {
        }
    };
}

#endif
