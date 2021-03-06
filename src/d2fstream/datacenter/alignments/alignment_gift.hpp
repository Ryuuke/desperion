//  Generated by desperion protocol_builder

#ifndef d2fstream_alignment_gift_hpp
#define d2fstream_alignment_gift_hpp

namespace datacenter
{
    struct alignment_gift : data_holder
    {
        int32_t id;
        int32_t name_id;
        int32_t effect_id;
        int32_t gfx_id;
        
        alignment_gift() = default;
        
        alignment_gift(const int32_t & id, const int32_t & name_id, const int32_t & effect_id, const int32_t & gfx_id) : id { id }, name_id { name_id }, effect_id { effect_id }, gfx_id { gfx_id }
        {
        }
        
        alignment_gift(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(name_id, data.second.at("nameId"));
            acquire(effect_id, data.second.at("effectId"));
            acquire(gfx_id, data.second.at("gfxId"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<alignment_gift>();
        release(id, data.second["id"], file);
        release(name_id, data.second["nameId"], file);
        release(effect_id, data.second["effectId"], file);
        release(gfx_id, data.second["gfxId"], file);
        return data;
    }
#endif
}
#endif