//  Generated by desperion protocol_builder

#ifndef core_party_invitation_dungeon_details_message_hpp
#define core_party_invitation_dungeon_details_message_hpp

namespace network
{
    struct party_invitation_dungeon_details_message : party_invitation_details_message
    {
        int16_t dungeon_id;
        std::vector<bool> players_dungeon_ready;
        
        int16_t id() const override
        { return 6262; } 
        
        party_invitation_dungeon_details_message(const int8_t & party_type, const int32_t & from_id, const std::string & from_name, const int32_t & leader_id, const std::vector<party_invitation_member_informations_ptr> & members, const std::vector<party_guest_informations_ptr> & guests, const int32_t & party_id, const int16_t & dungeon_id, const std::vector<bool> & players_dungeon_ready) : party_invitation_details_message { party_type,from_id,from_name,leader_id,members,guests,party_id }
        {
            _data << dungeon_id;
            _data << static_cast<int16_t>(players_dungeon_ready.size());
            for (auto && i : players_dungeon_ready)
                _data << i;
        }
        
        party_invitation_dungeon_details_message(byte_buffer & data) : party_invitation_details_message { data }
        {
            data >> dungeon_id;
            int16_t players_dungeon_ready_size;
            data >> players_dungeon_ready_size;
            players_dungeon_ready.resize(players_dungeon_ready_size);
            for (int16_t i = 0; i < players_dungeon_ready_size; ++i)
                data >> players_dungeon_ready[i];
        }
    };
}

#endif
