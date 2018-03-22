#ifndef INSTRUCTION_TURN_H
#define INSTRUCTION_TURN_H

#include "Instruction.h"

class Instruction_turn: public Instruction 
{
private:
    tleftright lr;
    tstate z;
};

#endif /* INSTRUCTION_TURN_H */

