//  Generated by desperion protocol_builder

#ifndef core_krosmaster_transfer_message_hpp
#define core_krosmaster_transfer_message_hpp

namespace network
{
    struct krosmaster_transfer_message : dofus_unit
    {
        std::string uid;
        int8_t failure;
        
        int16_t id() const override
        { return 6348; } 
        
        krosmaster_transfer_message(const std::string & uid, const int8_t & failure)
        {
            _data << uid;
            _data << failure;
        }
        
        krosmaster_transfer_message(byte_buffer & data)
        {
            data >> uid;
            data >> failure;
        }
    };
}

#endif