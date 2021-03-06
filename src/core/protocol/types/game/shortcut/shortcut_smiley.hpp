//  Generated by desperion protocol_builder

#ifndef core_shortcut_smiley_hpp
#define core_shortcut_smiley_hpp

namespace network
{
    struct shortcut_smiley : shortcut
    {
        int8_t smiley_id;
        
        int16_t id() const override
        { return 388; } 
        
        shortcut_smiley(const int32_t & slot, const int8_t & smiley_id) : shortcut { slot }
        {
            _data << smiley_id;
        }
        
        shortcut_smiley(byte_buffer & data) : shortcut { data }
        {
            data >> smiley_id;
        }
    };
    
    using shortcut_smiley_ptr = std::unique_ptr<shortcut_smiley>;
}

#endif
