//  Generated by desperion protocol_builder

#ifndef core_living_object_message_request_message_hpp
#define core_living_object_message_request_message_hpp

namespace network
{
    struct living_object_message_request_message : dofus_unit
    {
        int16_t msg_id;
        std::vector<std::string> parameters;
        unsigned_int_ptr living_object;
        
        int16_t id() const override
        { return 6066; } 
        
        living_object_message_request_message(const int16_t & msg_id, const std::vector<std::string> & parameters, const unsigned_int_ptr & living_object)
        {
            _data << msg_id;
            _data << static_cast<int16_t>(parameters.size());
            for (auto && i : parameters)
                _data << i;
            _data << living_object->buffer();
        }
        
        living_object_message_request_message(byte_buffer & data)
        {
            data >> msg_id;
            int16_t parameters_size;
            data >> parameters_size;
            parameters.resize(parameters_size);
            for (int16_t i = 0; i < parameters_size; ++i)
                data >> parameters[i];
            living_object = std::make_unique<unsigned_int>(data);
        }
    };
}

#endif
