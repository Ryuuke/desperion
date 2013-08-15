//  Generated by desperion protocol_builder

#ifndef core_party_member_in_fight_message_hpp
#define core_party_member_in_fight_message_hpp

namespace network
{
    struct party_member_in_fight_message : abstract_party_message
    {
        int8_t reason;
        int32_t member_id;
        int32_t member_account_id;
        std::string member_name;
        int32_t fight_id;
        map_coordinates_extended_ptr fight_map;
        int32_t seconds_before_fight_start;
        
        int16_t id() const override
        { return 6342; } 
        
        party_member_in_fight_message(const int32_t & party_id, const int8_t & reason, const int32_t & member_id, const int32_t & member_account_id, const std::string & member_name, const int32_t & fight_id, const map_coordinates_extended_ptr & fight_map, const int32_t & seconds_before_fight_start) : abstract_party_message { party_id }
        {
            _data << reason;
            _data << member_id;
            _data << member_account_id;
            _data << member_name;
            _data << fight_id;
            _data << fight_map->buffer();
            _data << seconds_before_fight_start;
        }
        
        party_member_in_fight_message(byte_buffer & data) : abstract_party_message { data }
        {
            data >> reason;
            data >> member_id;
            data >> member_account_id;
            data >> member_name;
            data >> fight_id;
            fight_map = std::make_unique<map_coordinates_extended>(data);
            data >> seconds_before_fight_start;
        }
    };
}

#endif