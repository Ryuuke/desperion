//  Generated by desperion protocol_builder

#ifndef core_channel_enabling_message_hpp
#define core_channel_enabling_message_hpp

namespace network
{
    struct channel_enabling_message : dofus_unit
    {
        int8_t channel;
        bool enable;
        
        int16_t id() const override
        { return 890; } 
        
        channel_enabling_message(const int8_t & channel, const bool & enable)
        {
            _data << channel;
            _data << enable;
        }
        
        channel_enabling_message(byte_buffer & data)
        {
            data >> channel;
            data >> enable;
        }
    };
}

#endif