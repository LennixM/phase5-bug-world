#include "Instruction_pickup.h"

void Instruction_pickup::parse(std::string instr) {
    x = tstate();
}

void Instruction_pickup::execute(Bug b) {
    x = tstate();
}