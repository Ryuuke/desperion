//  Generated by desperion protocol_builder

#ifndef core_check_file_request_message_hpp
#define core_check_file_request_message_hpp

namespace network
{
    struct check_file_request_message : dofus_unit
    {
        std::string filename;
        int8_t type;
        
        int16_t id() const override
        { return 6154; } 
        
        check_file_request_message(const std::string & filename, const int8_t & type)
        {
            _data << filename;
            _data << type;
        }
        
        check_file_request_message(byte_buffer & data)
        {
            data >> filename;
            data >> type;
        }
    };
}

#endif
