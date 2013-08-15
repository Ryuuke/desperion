//  Generated by desperion protocol_builder

#ifndef core_krosmaster_playing_status_message_hpp
#define core_krosmaster_playing_status_message_hpp

namespace network
{
    struct krosmaster_playing_status_message : dofus_unit
    {
        bool playing;
        
        int16_t id() const override
        { return 6347; } 
        
        krosmaster_playing_status_message(const bool & playing)
        {
            _data << playing;
        }
        
        krosmaster_playing_status_message(byte_buffer & data)
        {
            data >> playing;
        }
    };
}

#endif