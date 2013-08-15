//  Generated by desperion protocol_builder

#ifndef core_exchange_item_gold_add_as_payment_message_hpp
#define core_exchange_item_gold_add_as_payment_message_hpp

namespace network
{
    struct exchange_item_gold_add_as_payment_message : dofus_unit
    {
        int8_t payment_type;
        int32_t quantity;
        
        int16_t id() const override
        { return 5770; } 
        
        exchange_item_gold_add_as_payment_message(const int8_t & payment_type, const int32_t & quantity)
        {
            _data << payment_type;
            _data << quantity;
        }
        
        exchange_item_gold_add_as_payment_message(byte_buffer & data)
        {
            data >> payment_type;
            data >> quantity;
        }
    };
}

#endif