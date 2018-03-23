#include "Instruction_sense.h"

void Instruction_sense::parse(std::string instr) {
    x = tstate();
}

void Instruction_sense::execute(Bug b) {
    x = tstate();
}