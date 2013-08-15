//  Generated by desperion protocol_builder

#ifndef core_exchange_gold_payment_for_craft_message_hpp
#define core_exchange_gold_payment_for_craft_message_hpp

namespace network
{
    struct exchange_gold_payment_for_craft_message : dofus_unit
    {
        bool only_success;
        int32_t gold_sum;
        
        int16_t id() const override
        { return 5833; } 
        
        exchange_gold_payment_for_craft_message(const bool & only_success, const int32_t & gold_sum)
        {
            _data << only_success;
            _data << gold_sum;
        }
        
        exchange_gold_payment_for_craft_message(byte_buffer & data)
        {
            data >> only_success;
            data >> gold_sum;
        }
    };
}

#endif