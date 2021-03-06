//  Generated by desperion protocol_builder

#ifndef core_guild_house_teleport_request_message_hpp
#define core_guild_house_teleport_request_message_hpp

namespace network
{
    struct guild_house_teleport_request_message : dofus_unit
    {
        int32_t house_id;
        
        int16_t id() const override
        { return 5712; } 
        
        guild_house_teleport_request_message(const int32_t & house_id)
        {
            _data << house_id;
        }
        
        guild_house_teleport_request_message(byte_buffer & data)
        {
            data >> house_id;
        }
    };
}

#endif
