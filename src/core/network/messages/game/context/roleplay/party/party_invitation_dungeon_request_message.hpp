//  Generated by desperion protocol_builder

#ifndef core_party_invitation_dungeon_request_message_hpp
#define core_party_invitation_dungeon_request_message_hpp

namespace network
{
    struct party_invitation_dungeon_request_message : party_invitation_request_message
    {
        int16_t dungeon_id;
        
        int16_t id() const override
        { return 6245; } 
        
        party_invitation_dungeon_request_message(const std::string & name, const int16_t & dungeon_id) : party_invitation_request_message { name }
        {
            _data << dungeon_id;
        }
        
        party_invitation_dungeon_request_message(byte_buffer & data) : party_invitation_request_message { data }
        {
            data >> dungeon_id;
        }
    };
}

#endif