//  Generated by desperion protocol_builder

#ifndef d2fstream_quest_category_hpp
#define d2fstream_quest_category_hpp

namespace datacenter
{
    struct quest_category : data_holder
    {
        int32_t id;
        int32_t name_id;
        int32_t order;
        std::vector<uint32_t> quest_ids;
        
        quest_category() = default;
        
        quest_category(const int32_t & id, const int32_t & name_id, const int32_t & order, const std::vector<uint32_t> & quest_ids) : id { id }, name_id { name_id }, order { order }, quest_ids { quest_ids }
        {
        }
        
        quest_category(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(name_id, data.second.at("nameId"));
            acquire(order, data.second.at("order"));
            acquire(quest_ids, data.second.at("questIds"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<quest_category>();
        release(id, data.second["id"], file);
        release(name_id, data.second["nameId"], file);
        release(order, data.second["order"], file);
        release(quest_ids, data.second["questIds"], file);
        return data;
    }
#endif
}
#endif