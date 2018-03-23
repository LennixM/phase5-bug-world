#include "Instruction_direction.h"
#include <regex>

void Instruction_direction::parse(std::string instr) {
    d = tdirection();
    x = tstate();
    y = tstate();
}

void Instruction_direction::execute(Bug b) {
    d = tdirection();
}