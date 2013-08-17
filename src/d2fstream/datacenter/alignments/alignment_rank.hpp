//  Generated by desperion protocol_builder

#ifndef d2fstream_alignment_rank_hpp
#define d2fstream_alignment_rank_hpp

namespace datacenter
{
    struct alignment_rank : data_holder
    {
        int32_t id;
        int32_t order_id;
        int32_t name_id;
        int32_t description_id;
        int32_t minimum_alignment;
        int32_t objects_stolen;
        std::vector<int32_t> gifts;
        
        alignment_rank() = default;
        
        alignment_rank(const int32_t & id, const int32_t & order_id, const int32_t & name_id, const int32_t & description_id, const int32_t & minimum_alignment, const int32_t & objects_stolen, const std::vector<int32_t> & gifts) : id { id }, order_id { order_id }, name_id { name_id }, description_id { description_id }, minimum_alignment { minimum_alignment }, objects_stolen { objects_stolen }, gifts { gifts }
        {
        }
        
        alignment_rank(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(order_id, data.second.at("orderId"));
            acquire(name_id, data.second.at("nameId"));
            acquire(description_id, data.second.at("descriptionId"));
            acquire(minimum_alignment, data.second.at("minimumAlignment"));
            acquire(objects_stolen, data.second.at("objectsStolen"));
            acquire(gifts, data.second.at("gifts"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<alignment_rank>();
        release(id, data.second["id"], file);
        release(order_id, data.second["orderId"], file);
        release(name_id, data.second["nameId"], file);
        release(description_id, data.second["descriptionId"], file);
        release(minimum_alignment, data.second["minimumAlignment"], file);
        release(objects_stolen, data.second["objectsStolen"], file);
        release(gifts, data.second["gifts"], file);
        return data;
    }
#endif
}
#endif