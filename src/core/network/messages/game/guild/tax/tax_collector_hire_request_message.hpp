//  Generated by desperion protocol_builder

#ifndef core_tax_collector_hire_request_message_hpp
#define core_tax_collector_hire_request_message_hpp

namespace network
{
    struct tax_collector_hire_request_message : dofus_unit
    {
        
        int16_t id() const override
        { return 5681; } 
        
        tax_collector_hire_request_message()
        {
        }
        
        tax_collector_hire_request_message(byte_buffer & data)
        {
        }
    };
}

#endif