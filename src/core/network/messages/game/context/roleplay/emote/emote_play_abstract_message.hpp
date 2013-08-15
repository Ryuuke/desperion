//  Generated by desperion protocol_builder

#ifndef core_emote_play_abstract_message_hpp
#define core_emote_play_abstract_message_hpp

namespace network
{
    struct emote_play_abstract_message : dofus_unit
    {
        int8_t emote_id;
        double emote_start_time;
        
        int16_t id() const override
        { return 5690; } 
        
        emote_play_abstract_message(const int8_t & emote_id, const double & emote_start_time)
        {
            _data << emote_id;
            _data << emote_start_time;
        }
        
        emote_play_abstract_message(byte_buffer & data)
        {
            data >> emote_id;
            data >> emote_start_time;
        }
    };
}

#endif