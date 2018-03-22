#ifndef INSTRUCTION_DIRECTION_H
#define INSTRUCTION_DIRECTION_H

#include "Instruction.h"

class Instruction_direction: public Instruction 
{
private:
    tdirection d;
    tstate x, y;
};

#endif /* INSTRUCTION_DIRECTION_H */

