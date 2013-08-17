//  Generated by desperion protocol_builder

#ifndef d2fstream_tips_hpp
#define d2fstream_tips_hpp

namespace datacenter
{
    struct tips : data_holder
    {
        int32_t id;
        int32_t desc_id;
        
        tips() = default;
        
        tips(const int32_t & id, const int32_t & desc_id) : id { id }, desc_id { desc_id }
        {
        }
        
        tips(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(desc_id, data.second.at("descId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<tips>();
        release(id, data.second["id"], file);
        release(desc_id, data.second["descId"], file);
        return data;
    }
#endif
}
#endif