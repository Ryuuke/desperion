//  Generated by desperion protocol_builder

#ifndef core_prism_attack_request_message_hpp
#define core_prism_attack_request_message_hpp

namespace network
{
    struct prism_attack_request_message : dofus_unit
    {
        
        int16_t id() const override
        { return 6042; } 
        
        prism_attack_request_message()
        {
        }
        
        prism_attack_request_message(byte_buffer & data)
        {
        }
    };
}

#endif
