#ifndef _H_UNSOLICITEDHEARTBEAT_SENDFSM_SM
#define _H_UNSOLICITEDHEARTBEAT_SENDFSM_SM

/*
 * ex: set ro:
 * DO NOT EDIT.
 * generated by smc (http://smc.sourceforge.net/)
 * from file : UnsolicitedHeartbeat_SendFSM_sm.sm
 */


#define SMC_USES_IOSTREAMS

#include <statemap.h>

namespace urn_jaus_jss_iop_UnsolicitedHeartbeat_1_1
{
    // Forward declarations.
    class UnsolicitedHeartbeat_SendFSM_SM;
    class UnsolicitedHeartbeat_SendFSM_SM_Sending;
    class UnsolicitedHeartbeat_SendFSM_SM_Internally_Generated_State_DO_NOT_USE;
    class UnsolicitedHeartbeat_SendFSM_SM_Default;
    class UnsolicitedHeartbeat_SendFSMState;
    class UnsolicitedHeartbeat_SendFSMContext;
    class UnsolicitedHeartbeat_SendFSM;

    class UnsolicitedHeartbeat_SendFSMState :
        public statemap::State
    {
    public:

        UnsolicitedHeartbeat_SendFSMState(const char *name, int stateId)
        : statemap::State(name, stateId)
        {};

        virtual void Entry(UnsolicitedHeartbeat_SendFSMContext&) {};
        virtual void Exit(UnsolicitedHeartbeat_SendFSMContext&) {};

        virtual void BroadcastGlobalTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void BroadcastLocalTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void CancelEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void CommandCompletedTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void CommandExpiredTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void CreateCommandEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void CreateEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void EventErrorTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void EventOccurredTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void PeriodicTimerTriggerTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void QueryEventTimeoutTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void QueryEventsTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void QueryHeartbeatPulseTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void ReceiveTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void SendTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void TimeoutTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        virtual void UpdateEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);

    protected:

        virtual void Default(UnsolicitedHeartbeat_SendFSMContext& context);
    };

    class UnsolicitedHeartbeat_SendFSM_SM
    {
    public:

        static UnsolicitedHeartbeat_SendFSM_SM_Sending Sending;
        static UnsolicitedHeartbeat_SendFSM_SM_Internally_Generated_State_DO_NOT_USE Internally_Generated_State_DO_NOT_USE;
    };

    class UnsolicitedHeartbeat_SendFSM_SM_Default :
        public UnsolicitedHeartbeat_SendFSMState
    {
    public:

        UnsolicitedHeartbeat_SendFSM_SM_Default(const char *name, int stateId)
        : UnsolicitedHeartbeat_SendFSMState(name, stateId)
        {};

    };

    class UnsolicitedHeartbeat_SendFSM_SM_Sending :
        public UnsolicitedHeartbeat_SendFSM_SM_Default
    {
    public:
        UnsolicitedHeartbeat_SendFSM_SM_Sending(const char *name, int stateId)
        : UnsolicitedHeartbeat_SendFSM_SM_Default(name, stateId)
        {};

    };

    class UnsolicitedHeartbeat_SendFSM_SM_Internally_Generated_State_DO_NOT_USE :
        public UnsolicitedHeartbeat_SendFSM_SM_Default
    {
    public:
        UnsolicitedHeartbeat_SendFSM_SM_Internally_Generated_State_DO_NOT_USE(const char *name, int stateId)
        : UnsolicitedHeartbeat_SendFSM_SM_Default(name, stateId)
        {};

        void BroadcastGlobalTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void BroadcastLocalTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void CancelEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void CommandCompletedTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void CommandExpiredTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void CreateCommandEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void CreateEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void EventErrorTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void EventOccurredTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void PeriodicTimerTriggerTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void QueryEventTimeoutTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void QueryEventsTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void QueryHeartbeatPulseTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void ReceiveTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void SendTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void TimeoutTransition(UnsolicitedHeartbeat_SendFSMContext& context);
        void UpdateEventTransition(UnsolicitedHeartbeat_SendFSMContext& context);
    };

    class UnsolicitedHeartbeat_SendFSMContext :
        public statemap::FSMContext
    {
    public:

        UnsolicitedHeartbeat_SendFSMContext(UnsolicitedHeartbeat_SendFSM& owner)
        : FSMContext(UnsolicitedHeartbeat_SendFSM_SM::Sending),
          _owner(owner)
        {};

        UnsolicitedHeartbeat_SendFSMContext(UnsolicitedHeartbeat_SendFSM& owner, const statemap::State& state)
        : FSMContext(state),
          _owner(owner)
        {};

        virtual void enterStartState()
        {
            getState().Entry(*this);
            return;
        }

        UnsolicitedHeartbeat_SendFSM& getOwner() const
        {
            return (_owner);
        };

        UnsolicitedHeartbeat_SendFSMState& getState() const
        {
            if (_state == NULL)
            {
                throw statemap::StateUndefinedException();
            }

            return (dynamic_cast<UnsolicitedHeartbeat_SendFSMState&>(*_state));
        };

        void BroadcastGlobalTransition()
        {
            setTransition("BroadcastGlobalTransition");
            (getState()).BroadcastGlobalTransition(*this);
            setTransition(NULL);
        };

        void BroadcastLocalTransition()
        {
            setTransition("BroadcastLocalTransition");
            (getState()).BroadcastLocalTransition(*this);
            setTransition(NULL);
        };

        void CancelEventTransition()
        {
            setTransition("CancelEventTransition");
            (getState()).CancelEventTransition(*this);
            setTransition(NULL);
        };

        void CommandCompletedTransition()
        {
            setTransition("CommandCompletedTransition");
            (getState()).CommandCompletedTransition(*this);
            setTransition(NULL);
        };

        void CommandExpiredTransition()
        {
            setTransition("CommandExpiredTransition");
            (getState()).CommandExpiredTransition(*this);
            setTransition(NULL);
        };

        void CreateCommandEventTransition()
        {
            setTransition("CreateCommandEventTransition");
            (getState()).CreateCommandEventTransition(*this);
            setTransition(NULL);
        };

        void CreateEventTransition()
        {
            setTransition("CreateEventTransition");
            (getState()).CreateEventTransition(*this);
            setTransition(NULL);
        };

        void EventErrorTransition()
        {
            setTransition("EventErrorTransition");
            (getState()).EventErrorTransition(*this);
            setTransition(NULL);
        };

        void EventOccurredTransition()
        {
            setTransition("EventOccurredTransition");
            (getState()).EventOccurredTransition(*this);
            setTransition(NULL);
        };

        void PeriodicTimerTriggerTransition()
        {
            setTransition("PeriodicTimerTriggerTransition");
            (getState()).PeriodicTimerTriggerTransition(*this);
            setTransition(NULL);
        };

        void QueryEventTimeoutTransition()
        {
            setTransition("QueryEventTimeoutTransition");
            (getState()).QueryEventTimeoutTransition(*this);
            setTransition(NULL);
        };

        void QueryEventsTransition()
        {
            setTransition("QueryEventsTransition");
            (getState()).QueryEventsTransition(*this);
            setTransition(NULL);
        };

        void QueryHeartbeatPulseTransition()
        {
            setTransition("QueryHeartbeatPulseTransition");
            (getState()).QueryHeartbeatPulseTransition(*this);
            setTransition(NULL);
        };

        void ReceiveTransition()
        {
            setTransition("ReceiveTransition");
            (getState()).ReceiveTransition(*this);
            setTransition(NULL);
        };

        void SendTransition()
        {
            setTransition("SendTransition");
            (getState()).SendTransition(*this);
            setTransition(NULL);
        };

        void TimeoutTransition()
        {
            setTransition("TimeoutTransition");
            (getState()).TimeoutTransition(*this);
            setTransition(NULL);
        };

        void UpdateEventTransition()
        {
            setTransition("UpdateEventTransition");
            (getState()).UpdateEventTransition(*this);
            setTransition(NULL);
        };

    private:

        UnsolicitedHeartbeat_SendFSM& _owner;
    };
}


/*
 * Local variables:
 *  buffer-read-only: t
 * End:
 */

#endif // _H_UNSOLICITEDHEARTBEAT_SENDFSM_SM