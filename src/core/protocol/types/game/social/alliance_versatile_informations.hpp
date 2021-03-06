//  Generated by desperion protocol_builder

#ifndef core_alliance_versatile_informations_hpp
#define core_alliance_versatile_informations_hpp

namespace network
{
    struct alliance_versatile_informations : dofus_unit
    {
        int32_t alliance_id;
        int16_t nb_guilds;
        int16_t nb_members;
        int16_t nb_subarea;
        
        int16_t id() const override
        { return 432; } 
        
        alliance_versatile_informations(const int32_t & alliance_id, const int16_t & nb_guilds, const int16_t & nb_members, const int16_t & nb_subarea)
        {
            _data << alliance_id;
            _data << nb_guilds;
            _data << nb_members;
            _data << nb_subarea;
        }
        
        alliance_versatile_informations(byte_buffer & data)
        {
            data >> alliance_id;
            data >> nb_guilds;
            data >> nb_members;
            data >> nb_subarea;
        }
    };
    
    using alliance_versatile_informations_ptr = std::unique_ptr<alliance_versatile_informations>;
}

#endif
