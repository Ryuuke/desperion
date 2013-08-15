//  Generated by desperion protocol_builder

#ifndef core_prism_subarea_empty_info_hpp
#define core_prism_subarea_empty_info_hpp

namespace network
{
    struct prism_subarea_empty_info : dofus_unit
    {
        int16_t sub_area_id;
        
        int16_t id() const override
        { return 438; } 
        
        prism_subarea_empty_info(const int16_t & sub_area_id)
        {
            _data << sub_area_id;
        }
        
        prism_subarea_empty_info(byte_buffer & data)
        {
            data >> sub_area_id;
        }
    };
    
    using prism_subarea_empty_info_ptr = std::unique_ptr<prism_subarea_empty_info>;
}

#endif