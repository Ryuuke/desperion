//  Generated by desperion protocol_builder

#ifndef core_job_crafter_directory_remove_message_hpp
#define core_job_crafter_directory_remove_message_hpp

namespace network
{
    struct job_crafter_directory_remove_message : dofus_unit
    {
        int8_t job_id;
        int32_t player_id;
        
        int16_t id() const override
        { return 5653; } 
        
        job_crafter_directory_remove_message(const int8_t & job_id, const int32_t & player_id)
        {
            _data << job_id;
            _data << player_id;
        }
        
        job_crafter_directory_remove_message(byte_buffer & data)
        {
            data >> job_id;
            data >> player_id;
        }
    };
}

#endif