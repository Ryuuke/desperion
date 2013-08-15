//  Generated by desperion protocol_builder

#ifndef core_spell_forgotten_message_hpp
#define core_spell_forgotten_message_hpp

namespace network
{
    struct spell_forgotten_message : dofus_unit
    {
        std::vector<int16_t> spells_id;
        int16_t boost_point;
        
        int16_t id() const override
        { return 5834; } 
        
        spell_forgotten_message(const std::vector<int16_t> & spells_id, const int16_t & boost_point)
        {
            _data << static_cast<int16_t>(spells_id.size());
            for (auto && i : spells_id)
                _data << i;
            _data << boost_point;
        }
        
        spell_forgotten_message(byte_buffer & data)
        {
            int16_t spells_id_size;
            data >> spells_id_size;
            spells_id.resize(spells_id_size);
            for (int16_t i = 0; i < spells_id_size; ++i)
                data >> spells_id[i];
            data >> boost_point;
        }
    };
}

#endif