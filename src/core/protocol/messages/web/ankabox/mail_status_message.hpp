//  Generated by desperion protocol_builder

#ifndef core_mail_status_message_hpp
#define core_mail_status_message_hpp

namespace network
{
    struct mail_status_message : dofus_unit
    {
        int16_t unread;
        int16_t total;
        
        int16_t id() const override
        { return 6275; } 
        
        mail_status_message(const int16_t & unread, const int16_t & total)
        {
            _data << unread;
            _data << total;
        }
        
        mail_status_message(byte_buffer & data)
        {
            data >> unread;
            data >> total;
        }
    };
}

#endif
