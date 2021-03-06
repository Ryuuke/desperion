//  Generated by desperion protocol_builder

#ifndef core_object_item_to_sell_in_npc_shop_hpp
#define core_object_item_to_sell_in_npc_shop_hpp

namespace network
{
    struct object_item_to_sell_in_npc_shop : object_item_minimal_information
    {
        int32_t object_price;
        std::string buy_criterion;
        
        int16_t id() const override
        { return 352; } 
        
        object_item_to_sell_in_npc_shop(const int16_t & object_g_i_d, const int16_t & power_rate, const bool & over_max, const std::vector<object_effect_ptr> & effects, const int32_t & object_price, const std::string & buy_criterion) : object_item_minimal_information { object_g_i_d,power_rate,over_max,effects }
        {
            _data << object_price;
            _data << buy_criterion;
        }
        
        object_item_to_sell_in_npc_shop(byte_buffer & data) : object_item_minimal_information { data }
        {
            data >> object_price;
            data >> buy_criterion;
        }
    };
    
    using object_item_to_sell_in_npc_shop_ptr = std::unique_ptr<object_item_to_sell_in_npc_shop>;
}

#endif
