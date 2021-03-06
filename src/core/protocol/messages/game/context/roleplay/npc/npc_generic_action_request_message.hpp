//  Generated by desperion protocol_builder

#ifndef core_npc_generic_action_request_message_hpp
#define core_npc_generic_action_request_message_hpp

namespace network
{
    struct npc_generic_action_request_message : dofus_unit
    {
        int32_t npc_id;
        int8_t npc_action_id;
        int32_t npc_map_id;
        
        int16_t id() const override
        { return 5898; } 
        
        npc_generic_action_request_message(const int32_t & npc_id, const int8_t & npc_action_id, const int32_t & npc_map_id)
        {
            _data << npc_id;
            _data << npc_action_id;
            _data << npc_map_id;
        }
        
        npc_generic_action_request_message(byte_buffer & data)
        {
            data >> npc_id;
            data >> npc_action_id;
            data >> npc_map_id;
        }
    };
}

#endif
