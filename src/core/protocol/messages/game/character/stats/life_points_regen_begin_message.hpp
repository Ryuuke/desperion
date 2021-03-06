//  Generated by desperion protocol_builder

#ifndef core_life_points_regen_begin_message_hpp
#define core_life_points_regen_begin_message_hpp

namespace network
{
    struct life_points_regen_begin_message : dofus_unit
    {
        int8_t regen_rate;
        
        int16_t id() const override
        { return 5684; } 
        
        life_points_regen_begin_message(const int8_t & regen_rate)
        {
            _data << regen_rate;
        }
        
        life_points_regen_begin_message(byte_buffer & data)
        {
            data >> regen_rate;
        }
    };
}

#endif
