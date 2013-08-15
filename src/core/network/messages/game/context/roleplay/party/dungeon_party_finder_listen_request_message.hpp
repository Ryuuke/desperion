//  Generated by desperion protocol_builder

#ifndef core_dungeon_party_finder_listen_request_message_hpp
#define core_dungeon_party_finder_listen_request_message_hpp

namespace network
{
    struct dungeon_party_finder_listen_request_message : dofus_unit
    {
        int16_t dungeon_id;
        
        int16_t id() const override
        { return 6246; } 
        
        dungeon_party_finder_listen_request_message(const int16_t & dungeon_id)
        {
            _data << dungeon_id;
        }
        
        dungeon_party_finder_listen_request_message(byte_buffer & data)
        {
            data >> dungeon_id;
        }
    };
}

#endif