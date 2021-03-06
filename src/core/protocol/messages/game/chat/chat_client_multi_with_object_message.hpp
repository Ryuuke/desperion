//  Generated by desperion protocol_builder

#ifndef core_chat_client_multi_with_object_message_hpp
#define core_chat_client_multi_with_object_message_hpp

namespace network
{
    struct chat_client_multi_with_object_message : chat_client_multi_message
    {
        std::vector<object_item_ptr> objects;
        
        int16_t id() const override
        { return 862; } 
        
        chat_client_multi_with_object_message(const int8_t & channel, const std::string & content, const std::vector<object_item_ptr> & objects) : chat_client_multi_message { channel,content }
        {
            _data << static_cast<int16_t>(objects.size());
            for (auto && i : objects)
                _data << i->buffer();
        }
        
        chat_client_multi_with_object_message(byte_buffer & data) : chat_client_multi_message { data }
        {
            int16_t objects_size;
            data >> objects_size;
            objects.resize(objects_size);
            for (int16_t i = 0; i < objects_size; ++i)
                objects[i] = std::make_unique<object_item>(data);
        }
    };
}

#endif
