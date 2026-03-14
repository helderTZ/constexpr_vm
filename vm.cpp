#include <iostream>

#include "vm.h"

int main() {
    using PS1 = ProgramState<B00, B01, std::tuple<B00>, NotA>;
    using PS2 = ProgramState<BA0, B01, std::tuple<BFF>, PushA>;
    using PS3 = ProgramState<B01, B01, std::tuple<B01, B01>, AndAB>;

    VMStep<PS1> vm1;
    VMStep<PS2> vm2;
    VMStep<PS3> vm3;

    std::cout << "output: 0x" << static_cast<int>(Valued<decltype(vm1)>::VALUE) << "\n";
    std::cout << "output: 0x" << static_cast<int>(Valued<decltype(vm2)>::VALUE) << "\n";
    std::cout << "output: 0x" << static_cast<int>(Valued<decltype(vm3)>::VALUE) << "\n";

    return 0;
}