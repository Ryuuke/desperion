//  Generated by desperion protocol_builder

#ifndef core_alliance_creation_valid_message_hpp
#define core_alliance_creation_valid_message_hpp

namespace network
{
    struct alliance_creation_valid_message : dofus_unit
    {
        std::string alliance_name;
        std::string alliance_tag;
        guild_emblem_ptr alliance_emblem;
        
        int16_t id() const override
        { return 6393; } 
        
        alliance_creation_valid_message(const std::string & alliance_name, const std::string & alliance_tag, const guild_emblem_ptr & alliance_emblem)
        {
            _data << alliance_name;
            _data << alliance_tag;
            _data << alliance_emblem->buffer();
        }
        
        alliance_creation_valid_message(byte_buffer & data)
        {
            data >> alliance_name;
            data >> alliance_tag;
            alliance_emblem = std::make_unique<guild_emblem>(data);
        }
    };
}

#endif
