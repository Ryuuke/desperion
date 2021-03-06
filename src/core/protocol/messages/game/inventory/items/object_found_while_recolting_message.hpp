//  Generated by desperion protocol_builder

#ifndef core_object_found_while_recolting_message_hpp
#define core_object_found_while_recolting_message_hpp

namespace network
{
    struct object_found_while_recolting_message : dofus_unit
    {
        int32_t generic_id;
        int32_t quantity;
        int32_t ressource_generic_id;
        
        int16_t id() const override
        { return 6017; } 
        
        object_found_while_recolting_message(const int32_t & generic_id, const int32_t & quantity, const int32_t & ressource_generic_id)
        {
            _data << generic_id;
            _data << quantity;
            _data << ressource_generic_id;
        }
        
        object_found_while_recolting_message(byte_buffer & data)
        {
            data >> generic_id;
            data >> quantity;
            data >> ressource_generic_id;
        }
    };
}

#endif
