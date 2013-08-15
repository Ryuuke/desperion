//  Generated by desperion protocol_builder

#ifndef core_guild_list_message_hpp
#define core_guild_list_message_hpp

namespace network
{
    struct guild_list_message : dofus_unit
    {
        std::vector<guild_informations_ptr> guilds;
        
        int16_t id() const override
        { return 6413; } 
        
        guild_list_message(const std::vector<guild_informations_ptr> & guilds)
        {
            _data << static_cast<int16_t>(guilds.size());
            for (auto && i : guilds)
                _data << i->buffer();
        }
        
        guild_list_message(byte_buffer & data)
        {
            int16_t guilds_size;
            data >> guilds_size;
            guilds.resize(guilds_size);
            for (int16_t i = 0; i < guilds_size; ++i)
                guilds[i] = std::make_unique<guild_informations>(data);
        }
    };
}

#endif