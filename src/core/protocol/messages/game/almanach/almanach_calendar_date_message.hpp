//  Generated by desperion protocol_builder

#ifndef core_almanach_calendar_date_message_hpp
#define core_almanach_calendar_date_message_hpp

namespace network
{
    struct almanach_calendar_date_message : dofus_unit
    {
        int32_t date;
        
        int16_t id() const override
        { return 6341; } 
        
        almanach_calendar_date_message(const int32_t & date)
        {
            _data << date;
        }
        
        almanach_calendar_date_message(byte_buffer & data)
        {
            data >> date;
        }
    };
}

#endif
