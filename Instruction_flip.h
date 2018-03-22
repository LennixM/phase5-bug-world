#ifndef INSTRUCTION_FLIP_H
#define INSTRUCTION_FLIP_H

#include "Instruction.h"

class Instruction_flip: public Instruction 
{
private:
    int p;
    tstate x, y;
    int seed;
public:
    int randomint();
};

#endif /* INSTRUCTION_FLIP_H */

