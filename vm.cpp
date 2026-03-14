#include <iostream>

#include "vm.h"

int main() {
    using PS1 = ProgramState<B00, B01, std::tuple<B00>, NotA>;
    using PS2 = ProgramState<BA0, B01, std::tuple<BFF>, PushA>;
    using PS3 = ProgramState<B01, B01, std::tuple<>, AndAB>;
    using PS4 = ProgramState<B02, B01, std::tuple<>, IncA>;
    using PS5 = ProgramState<B02, B01, std::tuple<>, DecA>;
    using PS6 = ProgramState<B04, B04, std::tuple<>, AddAB>;

    VMStep<PS1> vm1;
    VMStep<PS2> vm2;
    VMStep<PS3> vm3;
    VMStep<PS4> vm4;
    VMStep<PS5> vm5;
    VMStep<PS6> vm6;

    std::cout << "output NotA  : 0x" << static_cast<int>(Valued<decltype(vm1)>::VALUE) << "\n";
    std::cout << "output PushA : 0x" << static_cast<int>(Valued<decltype(vm2)>::VALUE) << "\n";
    std::cout << "output AndAB : 0x" << static_cast<int>(Valued<decltype(vm3)>::VALUE) << "\n";
    std::cout << "output IncA  : 0x" << static_cast<int>(Valued<decltype(vm4)>::VALUE) << "\n";
    std::cout << "output DecA  : 0x" << static_cast<int>(Valued<decltype(vm5)>::VALUE) << "\n";
    std::cout << "output AddAB : 0x" << static_cast<int>(Valued<decltype(vm6)>::VALUE) << "\n";

    return 0;
}