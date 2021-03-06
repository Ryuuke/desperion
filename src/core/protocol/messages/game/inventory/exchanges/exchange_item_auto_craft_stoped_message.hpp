//  Generated by desperion protocol_builder

#ifndef core_exchange_item_auto_craft_stoped_message_hpp
#define core_exchange_item_auto_craft_stoped_message_hpp

namespace network
{
    struct exchange_item_auto_craft_stoped_message : dofus_unit
    {
        int8_t reason;
        
        int16_t id() const override
        { return 5810; } 
        
        exchange_item_auto_craft_stoped_message(const int8_t & reason)
        {
            _data << reason;
        }
        
        exchange_item_auto_craft_stoped_message(byte_buffer & data)
        {
            data >> reason;
        }
    };
}

#endif
