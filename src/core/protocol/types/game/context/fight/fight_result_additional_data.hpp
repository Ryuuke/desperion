//  Generated by desperion protocol_builder

#ifndef core_fight_result_additional_data_hpp
#define core_fight_result_additional_data_hpp

namespace network
{
    struct fight_result_additional_data : dofus_unit
    {
        
        int16_t id() const override
        { return 191; } 
        
        fight_result_additional_data()
        {
        }
        
        fight_result_additional_data(byte_buffer & data)
        {
        }
    };
    
    using fight_result_additional_data_ptr = std::unique_ptr<fight_result_additional_data>;
}

#endif
