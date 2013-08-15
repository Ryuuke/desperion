//  Generated by desperion protocol_builder

#ifndef core_object_effect_mount_hpp
#define core_object_effect_mount_hpp

namespace network
{
    struct object_effect_mount : object_effect
    {
        int32_t mount_id;
        double date;
        int16_t model_id;
        
        int16_t id() const override
        { return 179; } 
        
        object_effect_mount(const int16_t & action_id, const int32_t & mount_id, const double & date, const int16_t & model_id) : object_effect { action_id }
        {
            _data << mount_id;
            _data << date;
            _data << model_id;
        }
        
        object_effect_mount(byte_buffer & data) : object_effect { data }
        {
            data >> mount_id;
            data >> date;
            data >> model_id;
        }
    };
    
    using object_effect_mount_ptr = std::unique_ptr<object_effect_mount>;
}

#endif