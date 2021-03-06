//  Generated by desperion protocol_builder

#ifndef core_game_role_play_character_informations_hpp
#define core_game_role_play_character_informations_hpp

namespace network
{
    struct game_role_play_character_informations : game_role_play_humanoid_informations
    {
        actor_alignment_informations_ptr alignment_infos;
        
        int16_t id() const override
        { return 36; } 
        
        game_role_play_character_informations(const human_informations_ptr & humanoid_info, const int32_t & account_id, const std::string & name, const int32_t & contextual_id, const entity_look_ptr & look, const entity_disposition_informations_ptr & disposition, const actor_alignment_informations_ptr & alignment_infos) : game_role_play_humanoid_informations { humanoid_info,account_id,name,contextual_id,look,disposition }
        {
            _data << alignment_infos->buffer();
        }
        
        game_role_play_character_informations(byte_buffer & data) : game_role_play_humanoid_informations { data }
        {
            alignment_infos = std::make_unique<actor_alignment_informations>(data);
        }
    };
    
    using game_role_play_character_informations_ptr = std::unique_ptr<game_role_play_character_informations>;
}

#endif
