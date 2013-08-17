//  Generated by desperion protocol_builder

#ifndef d2fstream_emblem_background_hpp
#define d2fstream_emblem_background_hpp

namespace datacenter
{
    struct emblem_background : data_holder
    {
        int32_t id;
        int32_t order;
        
        emblem_background() = default;
        
        emblem_background(const int32_t & id, const int32_t & order) : id { id }, order { order }
        {
        }
        
        emblem_background(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(order, data.second.at("order"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<emblem_background>();
        release(id, data.second["id"], file);
        release(order, data.second["order"], file);
        return data;
    }
#endif
}
#endif