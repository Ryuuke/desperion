//  Generated by desperion protocol_builder

#ifndef core_exchange_bid_house_buy_message_hpp
#define core_exchange_bid_house_buy_message_hpp

namespace network
{
    struct exchange_bid_house_buy_message : dofus_unit
    {
        int32_t uid;
        int32_t qty;
        int32_t price;
        
        int16_t id() const override
        { return 5804; } 
        
        exchange_bid_house_buy_message(const int32_t & uid, const int32_t & qty, const int32_t & price)
        {
            _data << uid;
            _data << qty;
            _data << price;
        }
        
        exchange_bid_house_buy_message(byte_buffer & data)
        {
            data >> uid;
            data >> qty;
            data >> price;
        }
    };
}

#endif
