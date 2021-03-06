//  Generated by desperion protocol_builder

#ifndef core_account_logging_kicked_message_hpp
#define core_account_logging_kicked_message_hpp

namespace network
{
    struct account_logging_kicked_message : dofus_unit
    {
        int32_t days;
        int32_t hours;
        int32_t minutes;
        
        int16_t id() const override
        { return 6029; } 
        
        account_logging_kicked_message(const int32_t & days, const int32_t & hours, const int32_t & minutes)
        {
            _data << days;
            _data << hours;
            _data << minutes;
        }
        
        account_logging_kicked_message(byte_buffer & data)
        {
            data >> days;
            data >> hours;
            data >> minutes;
        }
    };
}

#endif
