/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : SubsystemIDAllocator_SendFSM_sm.sm
 */

#include "urn_jaus_jss_exp_aeodrs_SubsystemIDAllocator_1_4/Messages/MessageSet.h"
#include "urn_jaus_jss_exp_aeodrs_SubsystemIDAllocator_1_4/SubsystemIDAllocator_SendFSM.h"
#include "include/urn_jaus_jss_exp_aeodrs_SubsystemIDAllocator_1_4/SubsystemIDAllocator_SendFSM_sm.h"

using namespace statemap;

namespace urn_jaus_jss_exp_aeodrs_SubsystemIDAllocator_1_4
{
    // Static class declarations.
    SubsystemIDAllocator_SendFSM_SM_Sending SubsystemIDAllocator_SendFSM_SM::Sending("SubsystemIDAllocator_SendFSM_SM::Sending", 0);
    SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE("SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE", 1);

    void SubsystemIDAllocator_SendFSMState::BroadcastGlobalTransition(SubsystemIDAllocator_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void SubsystemIDAllocator_SendFSMState::BroadcastLocalTransition(SubsystemIDAllocator_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void SubsystemIDAllocator_SendFSMState::QuerySubsystemIDsTransition(SubsystemIDAllocator_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void SubsystemIDAllocator_SendFSMState::ReceiveTransition(SubsystemIDAllocator_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void SubsystemIDAllocator_SendFSMState::RequestSubsystemIDTransition(SubsystemIDAllocator_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void SubsystemIDAllocator_SendFSMState::SendTransition(SubsystemIDAllocator_SendFSMContext& context)
    {
        Default(context);
        return;
    }

    void SubsystemIDAllocator_SendFSMState::Default(SubsystemIDAllocator_SendFSMContext& context)
    {
        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "TRANSITION   : Default"
                << std::endl;
        }

        throw (
            TransitionUndefinedException(
                context.getState().getName(),
                context.getTransition()));

        return;
    }

    void SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition(SubsystemIDAllocator_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastGlobalTransition()"
                << std::endl;
        }


        return;
    }

    void SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition(SubsystemIDAllocator_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::BroadcastLocalTransition()"
                << std::endl;
        }


        return;
    }

    void SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::QuerySubsystemIDsTransition(SubsystemIDAllocator_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QuerySubsystemIDsTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::QuerySubsystemIDsTransition()"
                << std::endl;
        }


        return;
    }

    void SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::ReceiveTransition(SubsystemIDAllocator_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::ReceiveTransition()"
                << std::endl;
        }


        return;
    }

    void SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::RequestSubsystemIDTransition(SubsystemIDAllocator_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestSubsystemIDTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::RequestSubsystemIDTransition()"
                << std::endl;
        }


        return;
    }

    void SubsystemIDAllocator_SendFSM_SM_Internally_Generated_State_DO_NOT_USE::SendTransition(SubsystemIDAllocator_SendFSMContext& context)
    {

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "LEAVING STATE   : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE"
            << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "ENTER TRANSITION: SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }

        if (context.getDebugFlag() == true)
        {
            std::ostream& str = context.getDebugStream();

            str << "EXIT TRANSITION : SubsystemIDAllocator_SendFSM_SM::Internally_Generated_State_DO_NOT_USE::SendTransition()"
                << std::endl;
        }


        return;
    }
}

/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */
