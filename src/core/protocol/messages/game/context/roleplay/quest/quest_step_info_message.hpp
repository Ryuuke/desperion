//  Generated by desperion protocol_builder

#ifndef core_quest_step_info_message_hpp
#define core_quest_step_info_message_hpp

namespace network
{
    struct quest_step_info_message : dofus_unit
    {
        quest_active_informations_ptr infos;
        
        int16_t id() const override
        { return 5625; } 
        
        quest_step_info_message(const quest_active_informations_ptr & infos)
        {
            _data << infos->id() << infos->buffer();
        }
        
        quest_step_info_message(byte_buffer & data)
        {
            int16_t infos_id;
            data >> infos_id;
            infos.reset(type_manager::get_quest_active_informations(infos_id, data));
        }
    };
}

#endif
