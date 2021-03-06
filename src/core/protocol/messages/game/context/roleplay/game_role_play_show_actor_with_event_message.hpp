//  Generated by desperion protocol_builder

#ifndef core_game_role_play_show_actor_with_event_message_hpp
#define core_game_role_play_show_actor_with_event_message_hpp

namespace network
{
    struct game_role_play_show_actor_with_event_message : game_role_play_show_actor_message
    {
        int8_t actor_event_id;
        
        int16_t id() const override
        { return 6407; } 
        
        game_role_play_show_actor_with_event_message(const game_role_play_actor_informations_ptr & informations, const int8_t & actor_event_id) : game_role_play_show_actor_message { informations }
        {
            _data << actor_event_id;
        }
        
        game_role_play_show_actor_with_event_message(byte_buffer & data) : game_role_play_show_actor_message { data }
        {
            data >> actor_event_id;
        }
    };
}

#endif
