//  Generated by desperion protocol_builder

#ifndef core_game_role_play_mutant_informations_hpp
#define core_game_role_play_mutant_informations_hpp

namespace network
{
    struct game_role_play_mutant_informations : game_role_play_humanoid_informations
    {
        int32_t monster_id;
        int8_t power_level;
        
        int16_t id() const override
        { return 3; } 
        
        game_role_play_mutant_informations(const human_informations_ptr & humanoid_info, const int32_t & account_id, const std::string & name, const int32_t & contextual_id, const entity_look_ptr & look, const entity_disposition_informations_ptr & disposition, const int32_t & monster_id, const int8_t & power_level) : game_role_play_humanoid_informations { humanoid_info,account_id,name,contextual_id,look,disposition }
        {
            _data << monster_id;
            _data << power_level;
        }
        
        game_role_play_mutant_informations(byte_buffer & data) : game_role_play_humanoid_informations { data }
        {
            data >> monster_id;
            data >> power_level;
        }
    };
    
    using game_role_play_mutant_informations_ptr = std::unique_ptr<game_role_play_mutant_informations>;
}

#endif
