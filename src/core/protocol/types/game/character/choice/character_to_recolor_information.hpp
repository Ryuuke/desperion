//  Generated by desperion protocol_builder

#ifndef core_character_to_recolor_information_hpp
#define core_character_to_recolor_information_hpp

namespace network
{
    struct character_to_recolor_information : abstract_character_information
    {
        std::vector<int32_t> colors;
        
        int16_t id() const override
        { return 212; } 
        
        character_to_recolor_information(const int32_t & id, const std::vector<int32_t> & colors) : abstract_character_information { id }
        {
            _data << static_cast<int16_t>(colors.size());
            for (auto && i : colors)
                _data << i;
        }
        
        character_to_recolor_information(byte_buffer & data) : abstract_character_information { data }
        {
            int16_t colors_size;
            data >> colors_size;
            colors.resize(colors_size);
            for (int16_t i = 0; i < colors_size; ++i)
                data >> colors[i];
        }
    };
    
    using character_to_recolor_information_ptr = std::unique_ptr<character_to_recolor_information>;
}

#endif