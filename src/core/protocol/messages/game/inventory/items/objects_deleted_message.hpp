//  Generated by desperion protocol_builder

#ifndef core_objects_deleted_message_hpp
#define core_objects_deleted_message_hpp

namespace network
{
    struct objects_deleted_message : dofus_unit
    {
        std::vector<int32_t> object_u_i_d;
        
        int16_t id() const override
        { return 6034; } 
        
        objects_deleted_message(const std::vector<int32_t> & object_u_i_d)
        {
            _data << static_cast<int16_t>(object_u_i_d.size());
            for (auto && i : object_u_i_d)
                _data << i;
        }
        
        objects_deleted_message(byte_buffer & data)
        {
            int16_t object_u_i_d_size;
            data >> object_u_i_d_size;
            object_u_i_d.resize(object_u_i_d_size);
            for (int16_t i = 0; i < object_u_i_d_size; ++i)
                data >> object_u_i_d[i];
        }
    };
}

#endif