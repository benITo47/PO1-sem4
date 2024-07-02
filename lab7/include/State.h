#ifndef STATE_H
#define STATE_H

class State 
{
    public:
        enum StateType {Idle, Attacking, Resting};
        
        State(StateType initialState) : currentState(initialState) {}

        void setState(StateType newState) { currentState = newState; }

        StateType getState() const { return currentState; }

    private:
        StateType currentState;
};




#endif
