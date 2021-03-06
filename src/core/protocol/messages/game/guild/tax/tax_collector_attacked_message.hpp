//  Generated by desperion protocol_builder

#ifndef core_tax_collector_attacked_message_hpp
#define core_tax_collector_attacked_message_hpp

namespace network
{
    struct tax_collector_attacked_message : dofus_unit
    {
        int16_t first_name_id;
        int16_t last_name_id;
        int16_t world_x;
        int16_t world_y;
        int32_t map_id;
        int16_t sub_area_id;
        basic_guild_informations_ptr guild;
        
        int16_t id() const override
        { return 5918; } 
        
        tax_collector_attacked_message(const int16_t & first_name_id, const int16_t & last_name_id, const int16_t & world_x, const int16_t & world_y, const int32_t & map_id, const int16_t & sub_area_id, const basic_guild_informations_ptr & guild)
        {
            _data << first_name_id;
            _data << last_name_id;
            _data << world_x;
            _data << world_y;
            _data << map_id;
            _data << sub_area_id;
            _data << guild->buffer();
        }
        
        tax_collector_attacked_message(byte_buffer & data)
        {
            data >> first_name_id;
            data >> last_name_id;
            data >> world_x;
            data >> world_y;
            data >> map_id;
            data >> sub_area_id;
            guild = std::make_unique<basic_guild_informations>(data);
        }
    };
}

#endif
