//  Generated by desperion protocol_builder

#ifndef core_guild_houses_information_message_hpp
#define core_guild_houses_information_message_hpp

namespace network
{
    struct guild_houses_information_message : dofus_unit
    {
        std::vector<house_informations_for_guild_ptr> houses_informations;
        
        int16_t id() const override
        { return 5919; } 
        
        guild_houses_information_message(const std::vector<house_informations_for_guild_ptr> & houses_informations)
        {
            _data << static_cast<int16_t>(houses_informations.size());
            for (auto && i : houses_informations)
                _data << i->buffer();
        }
        
        guild_houses_information_message(byte_buffer & data)
        {
            int16_t houses_informations_size;
            data >> houses_informations_size;
            houses_informations.resize(houses_informations_size);
            for (int16_t i = 0; i < houses_informations_size; ++i)
                houses_informations[i] = std::make_unique<house_informations_for_guild>(data);
        }
    };
}

#endif