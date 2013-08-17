//  Generated by desperion protocol_builder

#ifndef d2fstream_spell_level_hpp
#define d2fstream_spell_level_hpp

namespace datacenter
{
    struct spell_level : data_holder
    {
        int32_t id;
        int32_t spell_id;
        int32_t spell_breed;
        int32_t ap_cost;
        int32_t min_range;
        int32_t range;
        bool cast_in_line;
        bool cast_in_diagonal;
        bool cast_test_los;
        int32_t critical_hit_probability;
        int32_t critical_failure_probability;
        bool need_free_cell;
        bool need_taken_cell;
        bool need_free_trap_cell;
        bool range_can_be_boosted;
        int32_t max_stack;
        int32_t max_cast_per_turn;
        int32_t max_cast_per_target;
        int32_t min_cast_interval;
        int32_t initial_cooldown;
        int32_t global_cooldown;
        int32_t min_player_level;
        bool critical_failure_ends_turn;
        bool hide_effects;
        bool hidden;
        std::vector<int32_t> states_required;
        std::vector<int32_t> states_forbidden;
        std::vector<effect_instance_dice> effects;
        std::vector<effect_instance_dice> critical_effect;
        
        spell_level() = default;
        
        spell_level(const int32_t & id, const int32_t & spell_id, const int32_t & spell_breed, const int32_t & ap_cost, const int32_t & min_range, const int32_t & range, const bool & cast_in_line, const bool & cast_in_diagonal, const bool & cast_test_los, const int32_t & critical_hit_probability, const int32_t & critical_failure_probability, const bool & need_free_cell, const bool & need_taken_cell, const bool & need_free_trap_cell, const bool & range_can_be_boosted, const int32_t & max_stack, const int32_t & max_cast_per_turn, const int32_t & max_cast_per_target, const int32_t & min_cast_interval, const int32_t & initial_cooldown, const int32_t & global_cooldown, const int32_t & min_player_level, const bool & critical_failure_ends_turn, const bool & hide_effects, const bool & hidden, const std::vector<int32_t> & states_required, const std::vector<int32_t> & states_forbidden, const std::vector<effect_instance_dice> & effects, const std::vector<effect_instance_dice> & critical_effect) : id { id }, spell_id { spell_id }, spell_breed { spell_breed }, ap_cost { ap_cost }, min_range { min_range }, range { range }, cast_in_line { cast_in_line }, cast_in_diagonal { cast_in_diagonal }, cast_test_los { cast_test_los }, critical_hit_probability { critical_hit_probability }, critical_failure_probability { critical_failure_probability }, need_free_cell { need_free_cell }, need_taken_cell { need_taken_cell }, need_free_trap_cell { need_free_trap_cell }, range_can_be_boosted { range_can_be_boosted }, max_stack { max_stack }, max_cast_per_turn { max_cast_per_turn }, max_cast_per_target { max_cast_per_target }, min_cast_interval { min_cast_interval }, initial_cooldown { initial_cooldown }, global_cooldown { global_cooldown }, min_player_level { min_player_level }, critical_failure_ends_turn { critical_failure_ends_turn }, hide_effects { hide_effects }, hidden { hidden }, states_required { states_required }, states_forbidden { states_forbidden }, effects { effects }, critical_effect { critical_effect }
        {
        }
        
        spell_level(data_object && data)
        {
            acquire(id, data.second.at("id"));
            acquire(spell_id, data.second.at("spellId"));
            acquire(spell_breed, data.second.at("spellBreed"));
            acquire(ap_cost, data.second.at("apCost"));
            acquire(min_range, data.second.at("minRange"));
            acquire(range, data.second.at("range"));
            acquire(cast_in_line, data.second.at("castInLine"));
            acquire(cast_in_diagonal, data.second.at("castInDiagonal"));
            acquire(cast_test_los, data.second.at("castTestLos"));
            acquire(critical_hit_probability, data.second.at("criticalHitProbability"));
            acquire(critical_failure_probability, data.second.at("criticalFailureProbability"));
            acquire(need_free_cell, data.second.at("needFreeCell"));
            acquire(need_taken_cell, data.second.at("needTakenCell"));
            acquire(need_free_trap_cell, data.second.at("needFreeTrapCell"));
            acquire(range_can_be_boosted, data.second.at("rangeCanBeBoosted"));
            acquire(max_stack, data.second.at("maxStack"));
            acquire(max_cast_per_turn, data.second.at("maxCastPerTurn"));
            acquire(max_cast_per_target, data.second.at("maxCastPerTarget"));
            acquire(min_cast_interval, data.second.at("minCastInterval"));
            acquire(initial_cooldown, data.second.at("initialCooldown"));
            acquire(global_cooldown, data.second.at("globalCooldown"));
            acquire(min_player_level, data.second.at("minPlayerLevel"));
            acquire(critical_failure_ends_turn, data.second.at("criticalFailureEndsTurn"));
            acquire(hide_effects, data.second.at("hideEffects"));
            acquire(hidden, data.second.at("hidden"));
            acquire(states_required, data.second.at("statesRequired"));
            acquire(states_forbidden, data.second.at("statesForbidden"));
            acquire(effects, data.second.at("effects"));
            acquire(critical_effect, data.second.at("criticalEffect"));
        }
        
        data_object to_d2o(const d2o_writer &);
    };

#ifdef d2fstream_d2o_writer_hpp
    data_object to_d2o(const d2o_writer & file)
    {
        data_object data;
        data.first = file.get_class_id_for_type<spell_level>();
        release(id, data.second["id"], file);
        release(spell_id, data.second["spellId"], file);
        release(spell_breed, data.second["spellBreed"], file);
        release(ap_cost, data.second["apCost"], file);
        release(min_range, data.second["minRange"], file);
        release(range, data.second["range"], file);
        release(cast_in_line, data.second["castInLine"], file);
        release(cast_in_diagonal, data.second["castInDiagonal"], file);
        release(cast_test_los, data.second["castTestLos"], file);
        release(critical_hit_probability, data.second["criticalHitProbability"], file);
        release(critical_failure_probability, data.second["criticalFailureProbability"], file);
        release(need_free_cell, data.second["needFreeCell"], file);
        release(need_taken_cell, data.second["needTakenCell"], file);
        release(need_free_trap_cell, data.second["needFreeTrapCell"], file);
        release(range_can_be_boosted, data.second["rangeCanBeBoosted"], file);
        release(max_stack, data.second["maxStack"], file);
        release(max_cast_per_turn, data.second["maxCastPerTurn"], file);
        release(max_cast_per_target, data.second["maxCastPerTarget"], file);
        release(min_cast_interval, data.second["minCastInterval"], file);
        release(initial_cooldown, data.second["initialCooldown"], file);
        release(global_cooldown, data.second["globalCooldown"], file);
        release(min_player_level, data.second["minPlayerLevel"], file);
        release(critical_failure_ends_turn, data.second["criticalFailureEndsTurn"], file);
        release(hide_effects, data.second["hideEffects"], file);
        release(hidden, data.second["hidden"], file);
        release(states_required, data.second["statesRequired"], file);
        release(states_forbidden, data.second["statesForbidden"], file);
        release(effects, data.second["effects"], file);
        release(critical_effect, data.second["criticalEffect"], file);
        return data;
    }
#endif
}
#endif