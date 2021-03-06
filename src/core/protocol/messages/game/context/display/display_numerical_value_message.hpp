//  Generated by desperion protocol_builder

#ifndef core_display_numerical_value_message_hpp
#define core_display_numerical_value_message_hpp

namespace network
{
    struct display_numerical_value_message : dofus_unit
    {
        int32_t entity_id;
        int32_t value;
        int8_t type;
        
        int16_t id() const override
        { return 5808; } 
        
        display_numerical_value_message(const int32_t & entity_id, const int32_t & value, const int8_t & type)
        {
            _data << entity_id;
            _data << value;
            _data << type;
        }
        
        display_numerical_value_message(byte_buffer & data)
        {
            data >> entity_id;
            data >> value;
            data >> type;
        }
    };
}

#endif
