//  Generated by desperion protocol_builder

#ifndef core_prism_settings_error_message_hpp
#define core_prism_settings_error_message_hpp

namespace network
{
    struct prism_settings_error_message : dofus_unit
    {
        
        int16_t id() const override
        { return 6442; } 
        
        prism_settings_error_message()
        {
        }
        
        prism_settings_error_message(byte_buffer & data)
        {
        }
    };
}

#endif
