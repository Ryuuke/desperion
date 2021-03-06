//  Generated by desperion protocol_builder

#ifndef core_guild_informations_hpp
#define core_guild_informations_hpp

namespace network
{
    struct guild_informations : basic_guild_informations
    {
        guild_emblem_ptr guild_emblem;
        
        int16_t id() const override
        { return 127; } 
        
        guild_informations(const int32_t & guild_id, const std::string & guild_name, const guild_emblem_ptr & guild_emblem) : basic_guild_informations { guild_id,guild_name }
        {
            _data << guild_emblem->buffer();
        }
        
        guild_informations(byte_buffer & data) : basic_guild_informations { data }
        {
            guild_emblem = std::make_unique<guild_emblem>(data);
        }
    };
    
    using guild_informations_ptr = std::unique_ptr<guild_informations>;
}

#endif
