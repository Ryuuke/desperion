//  Generated by desperion protocol_builder

#ifndef core_guild_versatile_informations_hpp
#define core_guild_versatile_informations_hpp

namespace network
{
    struct guild_versatile_informations : dofus_unit
    {
        int32_t guild_id;
        int32_t leader_id;
        int16_t guild_level;
        int16_t nb_members;
        
        int16_t id() const override
        { return 435; } 
        
        guild_versatile_informations(const int32_t & guild_id, const int32_t & leader_id, const int16_t & guild_level, const int16_t & nb_members)
        {
            _data << guild_id;
            _data << leader_id;
            _data << guild_level;
            _data << nb_members;
        }
        
        guild_versatile_informations(byte_buffer & data)
        {
            data >> guild_id;
            data >> leader_id;
            data >> guild_level;
            data >> nb_members;
        }
    };
    
    using guild_versatile_informations_ptr = std::unique_ptr<guild_versatile_informations>;
}

#endif
