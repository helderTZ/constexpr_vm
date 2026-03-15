#include <iostream>

#include "vm.h"

int main() {
    using PS1 = ProgramState<B00, B01, std::tuple<>, std::tuple<NotA>>;
    using PS2 = ProgramState<BA0, B01, std::tuple<>, std::tuple<PushA>>;
    using PS3 = ProgramState<B0A, B05, std::tuple<>, std::tuple<OrAB>>;
    using PS4 = ProgramState<B00, B01, std::tuple<>, std::tuple<IncA>>;
    using PS5 = ProgramState<B02, B01, std::tuple<>, std::tuple<DecA>>;
    using PS6 = ProgramState<B10, B10, std::tuple<>, std::tuple<AddAB>>;
    using PS7 = ProgramState<B00, B01, std::tuple<BFF>, std::tuple<PopA>>;
    using PS8 = ProgramState<B00, B01, std::tuple<BFF>, std::tuple<PopB>>;
    using PS9 = ProgramState<B00, B00, std::tuple<BFF>, std::tuple<IncA, IncA>>;
    using PS10 = ProgramState<B00, B00, std::tuple<>, std::tuple<
        IncA, PushA,
        IncA, PushA,
        IncA, PushA,
        IncA, PushA,
        IncA, PushA,
        IncA, PushA,
        IncA, PushA,
        IncA, PushA,
        SwapAB,
        PopB, AddAB,
        PopB, AddAB,
        PopB, AddAB,
        PopB, AddAB,
        PopB, AddAB,
        PopB, AddAB,
        PopB, AddAB,
        PopB, AddAB
    >>;

    VMStep<PS1> vm1;
    VMStep<PS2> vm2;
    VMStep<PS3> vm3;
    VMStep<PS4> vm4;
    VMStep<PS5> vm5;
    VMStep<PS6> vm6;
    VMStep<PS7> vm7;
    VMStep<PS8> vm8;
    VMStep<PS9> vm9;
    VMStep<PS10> vm10;

    std::cout << std::hex << "output NotA  : 0x" << static_cast<int>(Valued<decltype(vm1)>::VALUE) << "\n";
    std::cout << std::hex << "output PushA : 0x" << static_cast<int>(Valued<decltype(vm2)>::VALUE) << "\n";
    std::cout << std::hex << "output OrAB  : 0x" << static_cast<int>(Valued<decltype(vm3)>::VALUE) << "\n";
    std::cout << std::hex << "output IncA  : 0x" << static_cast<int>(Valued<decltype(vm4)>::VALUE) << "\n";
    std::cout << std::hex << "output DecA  : 0x" << static_cast<int>(Valued<decltype(vm5)>::VALUE) << "\n";
    std::cout << std::hex << "output AddAB : 0x" << static_cast<int>(Valued<decltype(vm6)>::VALUE) << "\n";
    std::cout << std::hex << "output PopA  : 0x" << static_cast<int>(Valued<decltype(vm7)>::VALUE) << "\n";
    std::cout << std::hex << "output PopB  : 0x" << static_cast<int>(Valued<decltype(vm8)>::VALUE) << "\n";
    std::cout << std::hex << "output Sum   : 0x" << static_cast<int>(Valued<decltype(vm9)>::VALUE) << "\n";
    std::cout << std::hex << "output Sum   : 0x" << static_cast<int>(Valued<decltype(vm10)>::VALUE) << "\n";

    return 0;
}