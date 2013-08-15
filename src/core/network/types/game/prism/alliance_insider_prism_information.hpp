//  Generated by desperion protocol_builder

#ifndef core_alliance_insider_prism_information_hpp
#define core_alliance_insider_prism_information_hpp

namespace network
{
    struct alliance_insider_prism_information : prism_information
    {
        int32_t last_time_slot_modification_date;
        int32_t last_time_slot_modification_author_guild_id;
        int32_t last_time_slot_modification_author_id;
        std::string last_time_slot_modification_author_name;
        
        int16_t id() const override
        { return 431; } 
        
        alliance_insider_prism_information(const int8_t & type_id, const int8_t & state, const int32_t & next_vulnerability_date, const int32_t & placement_date, const int32_t & last_time_slot_modification_date, const int32_t & last_time_slot_modification_author_guild_id, const int32_t & last_time_slot_modification_author_id, const std::string & last_time_slot_modification_author_name) : prism_information { type_id,state,next_vulnerability_date,placement_date }
        {
            _data << last_time_slot_modification_date;
            _data << last_time_slot_modification_author_guild_id;
            _data << last_time_slot_modification_author_id;
            _data << last_time_slot_modification_author_name;
        }
        
        alliance_insider_prism_information(byte_buffer & data) : prism_information { data }
        {
            data >> last_time_slot_modification_date;
            data >> last_time_slot_modification_author_guild_id;
            data >> last_time_slot_modification_author_id;
            data >> last_time_slot_modification_author_name;
        }
    };
    
    using alliance_insider_prism_information_ptr = std::unique_ptr<alliance_insider_prism_information>;
}

#endif