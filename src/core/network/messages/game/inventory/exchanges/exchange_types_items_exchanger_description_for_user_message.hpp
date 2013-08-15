//  Generated by desperion protocol_builder

#ifndef core_exchange_types_items_exchanger_description_for_user_message_hpp
#define core_exchange_types_items_exchanger_description_for_user_message_hpp

namespace network
{
    struct exchange_types_items_exchanger_description_for_user_message : dofus_unit
    {
        std::vector<bid_exchanger_object_info_ptr> item_type_descriptions;
        
        int16_t id() const override
        { return 5752; } 
        
        exchange_types_items_exchanger_description_for_user_message(const std::vector<bid_exchanger_object_info_ptr> & item_type_descriptions)
        {
            _data << static_cast<int16_t>(item_type_descriptions.size());
            for (auto && i : item_type_descriptions)
                _data << i->buffer();
        }
        
        exchange_types_items_exchanger_description_for_user_message(byte_buffer & data)
        {
            int16_t item_type_descriptions_size;
            data >> item_type_descriptions_size;
            item_type_descriptions.resize(item_type_descriptions_size);
            for (int16_t i = 0; i < item_type_descriptions_size; ++i)
                item_type_descriptions[i] = std::make_unique<bid_exchanger_object_info>(data);
        }
    };
}

#endif