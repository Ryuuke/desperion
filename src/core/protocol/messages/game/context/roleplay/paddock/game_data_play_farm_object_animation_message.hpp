//  Generated by desperion protocol_builder

#ifndef core_game_data_play_farm_object_animation_message_hpp
#define core_game_data_play_farm_object_animation_message_hpp

namespace network
{
    struct game_data_play_farm_object_animation_message : dofus_unit
    {
        std::vector<int16_t> cell_id;
        
        int16_t id() const override
        { return 6026; } 
        
        game_data_play_farm_object_animation_message(const std::vector<int16_t> & cell_id)
        {
            _data << static_cast<int16_t>(cell_id.size());
            for (auto && i : cell_id)
                _data << i;
        }
        
        game_data_play_farm_object_animation_message(byte_buffer & data)
        {
            int16_t cell_id_size;
            data >> cell_id_size;
            cell_id.resize(cell_id_size);
            for (int16_t i = 0; i < cell_id_size; ++i)
                data >> cell_id[i];
        }
    };
}

#endif
