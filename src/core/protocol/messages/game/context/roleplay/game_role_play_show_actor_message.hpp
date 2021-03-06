//  Generated by desperion protocol_builder

#ifndef core_game_role_play_show_actor_message_hpp
#define core_game_role_play_show_actor_message_hpp

namespace network
{
    struct game_role_play_show_actor_message : dofus_unit
    {
        game_role_play_actor_informations_ptr informations;
        
        int16_t id() const override
        { return 5632; } 
        
        game_role_play_show_actor_message(const game_role_play_actor_informations_ptr & informations)
        {
            _data << informations->id() << informations->buffer();
        }
        
        game_role_play_show_actor_message(byte_buffer & data)
        {
            int16_t informations_id;
            data >> informations_id;
            informations.reset(type_manager::get_game_role_play_actor_informations(informations_id, data));
        }
    };
}

#endif
