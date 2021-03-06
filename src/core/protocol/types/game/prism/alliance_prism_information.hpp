//  Generated by desperion protocol_builder

#ifndef core_alliance_prism_information_hpp
#define core_alliance_prism_information_hpp

namespace network
{
    struct alliance_prism_information : prism_information
    {
        alliance_informations_ptr alliance;
        
        int16_t id() const override
        { return 427; } 
        
        alliance_prism_information(const int8_t & type_id, const int8_t & state, const int32_t & next_vulnerability_date, const int32_t & placement_date, const alliance_informations_ptr & alliance) : prism_information { type_id,state,next_vulnerability_date,placement_date }
        {
            _data << alliance->buffer();
        }
        
        alliance_prism_information(byte_buffer & data) : prism_information { data }
        {
            alliance = std::make_unique<alliance_informations>(data);
        }
    };
    
    using alliance_prism_information_ptr = std::unique_ptr<alliance_prism_information>;
}

#endif
