//  Generated by desperion protocol_builder

#ifndef d2fstream_ornament_hpp
#define d2fstream_ornament_hpp

namespace datacenter
{
    struct ornament : data_holder
    {
        int32_t id;
        int32_t name_id;
        bool visible;
        int32_t asset_id;
        int32_t icon_id;
        int32_t rarity;
        int32_t order;
        
        ornament() = default;
        
        ornament(const int32_t & id, const int32_t & name_id, const bool & visible, const int32_t & asset_id, const int32_t & icon_id, const int32_t & rarity, const int32_t & order) : id { id }, name_id { name_id }, visible { visible }, asset_id { asset_id }, icon_id { icon_id }, rarity { rarity }, order { order }
        {
        }
        
        ornament(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(name_id, data.second.at("nameId"));
            acquire(visible, data.second.at("visible"));
            acquire(asset_id, data.second.at("assetId"));
            acquire(icon_id, data.second.at("iconId"));
            acquire(rarity, data.second.at("rarity"));
            acquire(order, data.second.at("order"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<ornament>();
        release(id, data.second["id"], file);
        release(name_id, data.second["nameId"], file);
        release(visible, data.second["visible"], file);
        release(asset_id, data.second["assetId"], file);
        release(icon_id, data.second["iconId"], file);
        release(rarity, data.second["rarity"], file);
        release(order, data.second["order"], file);
        return data;
    }
#endif
}
#endif