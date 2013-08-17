//  Generated by desperion protocol_builder

#ifndef core_compass_update_message_hpp
#define core_compass_update_message_hpp

namespace network
{
    struct compass_update_message : dofus_unit
    {
        int8_t type;
        int16_t world_x;
        int16_t world_y;
        
        int16_t id() const override
        { return 5591; } 
        
        compass_update_message(const int8_t & type, const int16_t & world_x, const int16_t & world_y)
        {
            _data << type;
            _data << world_x;
            _data << world_y;
        }
        
        compass_update_message(byte_buffer & data)
        {
            data >> type;
            data >> world_x;
            data >> world_y;
        }
    };
}

#endif