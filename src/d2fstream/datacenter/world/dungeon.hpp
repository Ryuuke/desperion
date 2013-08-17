//  Generated by desperion protocol_builder

#ifndef d2fstream_dungeon_hpp
#define d2fstream_dungeon_hpp

namespace datacenter
{
    struct dungeon : data_holder
    {
        int32_t id;
        int32_t name_id;
        int32_t optimal_player_level;
        std::vector<int32_t> map_ids;
        int32_t entrance_map_id;
        int32_t exit_map_id;
        
        dungeon() = default;
        
        dungeon(const int32_t & id, const int32_t & name_id, const int32_t & optimal_player_level, const std::vector<int32_t> & map_ids, const int32_t & entrance_map_id, const int32_t & exit_map_id) : id { id }, name_id { name_id }, optimal_player_level { optimal_player_level }, map_ids { map_ids }, entrance_map_id { entrance_map_id }, exit_map_id { exit_map_id }
        {
        }
        
        dungeon(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(name_id, data.second.at("nameId"));
            acquire(optimal_player_level, data.second.at("optimalPlayerLevel"));
            acquire(map_ids, data.second.at("mapIds"));
            acquire(entrance_map_id, data.second.at("entranceMapId"));
            acquire(exit_map_id, data.second.at("exitMapId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<dungeon>();
        release(id, data.second["id"], file);
        release(name_id, data.second["nameId"], file);
        release(optimal_player_level, data.second["optimalPlayerLevel"], file);
        release(map_ids, data.second["mapIds"], file);
        release(entrance_map_id, data.second["entranceMapId"], file);
        release(exit_map_id, data.second["exitMapId"], file);
        return data;
    }
#endif
}
#endif