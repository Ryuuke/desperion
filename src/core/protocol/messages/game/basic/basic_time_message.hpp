//  Generated by desperion protocol_builder

#ifndef core_basic_time_message_hpp
#define core_basic_time_message_hpp

namespace network
{
    struct basic_time_message : dofus_unit
    {
        int32_t timestamp;
        int16_t timezone_offset;
        
        int16_t id() const override
        { return 175; } 
        
        basic_time_message(const int32_t & timestamp, const int16_t & timezone_offset)
        {
            _data << timestamp;
            _data << timezone_offset;
        }
        
        basic_time_message(byte_buffer & data)
        {
            data >> timestamp;
            data >> timezone_offset;
        }
    };
}

#endif
