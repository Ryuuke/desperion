//  Generated by desperion protocol_builder

#ifndef core_change_map_message_hpp
#define core_change_map_message_hpp

namespace network
{
    struct change_map_message : dofus_unit
    {
        int32_t map_id;
        
        int16_t id() const override
        { return 221; } 
        
        change_map_message(const int32_t & map_id)
        {
            _data << map_id;
        }
        
        change_map_message(byte_buffer & data)
        {
            data >> map_id;
        }
    };
}

#endif
