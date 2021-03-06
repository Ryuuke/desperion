//  Generated by desperion protocol_builder

#ifndef core_alliance_membership_message_hpp
#define core_alliance_membership_message_hpp

namespace network
{
    struct alliance_membership_message : alliance_joined_message
    {
        
        int16_t id() const override
        { return 6390; } 
        
        alliance_membership_message(const alliance_informations_ptr & alliance_info, const bool & enabled) : alliance_joined_message { alliance_info,enabled }
        {
        }
        
        alliance_membership_message(byte_buffer & data) : alliance_joined_message { data }
        {
        }
    };
}

#endif
