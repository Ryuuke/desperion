//  Generated by desperion protocol_builder

#ifndef core_basic_set_away_mode_request_message_hpp
#define core_basic_set_away_mode_request_message_hpp

namespace network
{
    struct basic_set_away_mode_request_message : dofus_unit
    {
        bool enable;
        bool invisible;
        
        int16_t id() const override
        { return 5665; } 
        
        basic_set_away_mode_request_message(const bool & enable, const bool & invisible)
        {
            int8_t flag = 0;
            set_bool_flag(flag, 0, enable);
            set_bool_flag(flag, 1, invisible);
            _data << flag;
        }
        
        basic_set_away_mode_request_message(byte_buffer & data)
        {
            int8_t flag;
            data >> flag;
            enable = get_bool_flag(flag, 0);
            invisible = get_bool_flag(flag, 1);
        }
    };
}

#endif
