//  Generated by desperion protocol_builder

#ifndef core_basic_who_is_no_match_message_hpp
#define core_basic_who_is_no_match_message_hpp

namespace network
{
    struct basic_who_is_no_match_message : dofus_unit
    {
        std::string search;
        
        int16_t id() const override
        { return 179; } 
        
        basic_who_is_no_match_message(const std::string & search)
        {
            _data << search;
        }
        
        basic_who_is_no_match_message(byte_buffer & data)
        {
            data >> search;
        }
    };
}

#endif