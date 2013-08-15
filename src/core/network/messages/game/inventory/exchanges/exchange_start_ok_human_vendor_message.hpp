//  Generated by desperion protocol_builder

#ifndef core_exchange_start_ok_human_vendor_message_hpp
#define core_exchange_start_ok_human_vendor_message_hpp

namespace network
{
    struct exchange_start_ok_human_vendor_message : dofus_unit
    {
        int32_t seller_id;
        std::vector<object_item_to_sell_in_human_vendor_shop_ptr> objects_infos;
        
        int16_t id() const override
        { return 5767; } 
        
        exchange_start_ok_human_vendor_message(const int32_t & seller_id, const std::vector<object_item_to_sell_in_human_vendor_shop_ptr> & objects_infos)
        {
            _data << seller_id;
            _data << static_cast<int16_t>(objects_infos.size());
            for (auto && i : objects_infos)
                _data << i->buffer();
        }
        
        exchange_start_ok_human_vendor_message(byte_buffer & data)
        {
            data >> seller_id;
            int16_t objects_infos_size;
            data >> objects_infos_size;
            objects_infos.resize(objects_infos_size);
            for (int16_t i = 0; i < objects_infos_size; ++i)
                objects_infos[i] = std::make_unique<object_item_to_sell_in_human_vendor_shop>(data);
        }
    };
}

#endif