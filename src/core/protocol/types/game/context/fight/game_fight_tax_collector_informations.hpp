//  Generated by desperion protocol_builder

#ifndef core_game_fight_tax_collector_informations_hpp
#define core_game_fight_tax_collector_informations_hpp

namespace network
{
    struct game_fight_tax_collector_informations : game_fight_a_i_informations
    {
        int16_t first_name_id;
        int16_t last_name_id;
        int16_t level;
        
        int16_t id() const override
        { return 48; } 
        
        game_fight_tax_collector_informations(const int8_t & team_id, const bool & alive, const game_fight_minimal_stats_ptr & stats, const int32_t & contextual_id, const entity_look_ptr & look, const entity_disposition_informations_ptr & disposition, const int16_t & first_name_id, const int16_t & last_name_id, const int16_t & level) : game_fight_a_i_informations { team_id,alive,stats,contextual_id,look,disposition }
        {
            _data << first_name_id;
            _data << last_name_id;
            _data << level;
        }
        
        game_fight_tax_collector_informations(byte_buffer & data) : game_fight_a_i_informations { data }
        {
            data >> first_name_id;
            data >> last_name_id;
            data >> level;
        }
    };
    
    using game_fight_tax_collector_informations_ptr = std::unique_ptr<game_fight_tax_collector_informations>;
}

#endif
