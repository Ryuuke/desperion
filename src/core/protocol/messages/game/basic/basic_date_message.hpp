//  Generated by desperion protocol_builder

#ifndef core_basic_date_message_hpp
#define core_basic_date_message_hpp

namespace network
{
    struct basic_date_message : dofus_unit
    {
        int8_t day;
        int8_t month;
        int16_t year;
        
        int16_t id() const override
        { return 177; } 
        
        basic_date_message(const int8_t & day, const int8_t & month, const int16_t & year)
        {
            _data << day;
            _data << month;
            _data << year;
        }
        
        basic_date_message(byte_buffer & data)
        {
            data >> day;
            data >> month;
            data >> year;
        }
    };
}

#endif