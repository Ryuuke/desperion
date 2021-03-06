//  Generated by desperion protocol_builder

#ifndef core_game_fight_monster_informations_hpp
#define core_game_fight_monster_informations_hpp

namespace network
{
    struct game_fight_monster_informations : game_fight_a_i_informations
    {
        int16_t creature_generic_id;
        int8_t creature_grade;
        
        int16_t id() const override
        { return 29; } 
        
        game_fight_monster_informations(const int8_t & team_id, const bool & alive, const game_fight_minimal_stats_ptr & stats, const int32_t & contextual_id, const entity_look_ptr & look, const entity_disposition_informations_ptr & disposition, const int16_t & creature_generic_id, const int8_t & creature_grade) : game_fight_a_i_informations { team_id,alive,stats,contextual_id,look,disposition }
        {
            _data << creature_generic_id;
            _data << creature_grade;
        }
        
        game_fight_monster_informations(byte_buffer & data) : game_fight_a_i_informations { data }
        {
            data >> creature_generic_id;
            data >> creature_grade;
        }
    };
    
    using game_fight_monster_informations_ptr = std::unique_ptr<game_fight_monster_informations>;
}

#endif
