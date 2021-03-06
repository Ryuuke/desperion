//  Generated by desperion protocol_builder

#ifndef core_human_option_followers_hpp
#define core_human_option_followers_hpp

namespace network
{
    struct human_option_followers : human_option
    {
        std::vector<indexed_entity_look_ptr> following_characters_look;
        
        int16_t id() const override
        { return 410; } 
        
        human_option_followers(const std::vector<indexed_entity_look_ptr> & following_characters_look)
        {
            _data << static_cast<int16_t>(following_characters_look.size());
            for (auto && i : following_characters_look)
                _data << i->buffer();
        }
        
        human_option_followers(byte_buffer & data) : human_option { data }
        {
            int16_t following_characters_look_size;
            data >> following_characters_look_size;
            following_characters_look.resize(following_characters_look_size);
            for (int16_t i = 0; i < following_characters_look_size; ++i)
                following_characters_look[i] = std::make_unique<indexed_entity_look>(data);
        }
    };
    
    using human_option_followers_ptr = std::unique_ptr<human_option_followers>;
}

#endif
