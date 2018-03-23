#include "Instruction_move.h"

void Instruction_move::parse(std::string instr) {
    x = tstate();
}

void Instruction_move::execute(Bug b) {
    x = tstate();
}