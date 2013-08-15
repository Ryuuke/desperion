//  Generated by desperion protocol_builder

#ifndef core_exchange_bid_house_generic_item_removed_message_hpp
#define core_exchange_bid_house_generic_item_removed_message_hpp

namespace network
{
    struct exchange_bid_house_generic_item_removed_message : dofus_unit
    {
        int32_t obj_generic_id;
        
        int16_t id() const override
        { return 5948; } 
        
        exchange_bid_house_generic_item_removed_message(const int32_t & obj_generic_id)
        {
            _data << obj_generic_id;
        }
        
        exchange_bid_house_generic_item_removed_message(byte_buffer & data)
        {
            data >> obj_generic_id;
        }
    };
}

#endif