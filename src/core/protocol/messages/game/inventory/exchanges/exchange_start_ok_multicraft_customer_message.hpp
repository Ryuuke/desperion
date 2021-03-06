//  Generated by desperion protocol_builder

#ifndef core_exchange_start_ok_multicraft_customer_message_hpp
#define core_exchange_start_ok_multicraft_customer_message_hpp

namespace network
{
    struct exchange_start_ok_multicraft_customer_message : dofus_unit
    {
        int8_t max_case;
        int32_t skill_id;
        int8_t crafter_job_level;
        
        int16_t id() const override
        { return 5817; } 
        
        exchange_start_ok_multicraft_customer_message(const int8_t & max_case, const int32_t & skill_id, const int8_t & crafter_job_level)
        {
            _data << max_case;
            _data << skill_id;
            _data << crafter_job_level;
        }
        
        exchange_start_ok_multicraft_customer_message(byte_buffer & data)
        {
            data >> max_case;
            data >> skill_id;
            data >> crafter_job_level;
        }
    };
}

#endif
