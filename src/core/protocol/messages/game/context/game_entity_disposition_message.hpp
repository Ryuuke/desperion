//  Generated by desperion protocol_builder

#ifndef core_game_entity_disposition_message_hpp
#define core_game_entity_disposition_message_hpp

namespace network
{
    struct game_entity_disposition_message : dofus_unit
    {
        identified_entity_disposition_informations_ptr disposition;
        
        int16_t id() const override
        { return 5693; } 
        
        game_entity_disposition_message(const identified_entity_disposition_informations_ptr & disposition)
        {
            _data << disposition->buffer();
        }
        
        game_entity_disposition_message(byte_buffer & data)
        {
            disposition = std::make_unique<identified_entity_disposition_informations>(data);
        }
    };
}

#endif