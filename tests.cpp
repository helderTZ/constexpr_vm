#include "vm.h"


void test_NotA() {
    using PS1 = ProgramState<B00, B01, std::tuple<>, std::tuple<NotA>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0xFF, "testing NotA 0x00: NOK");

    using PS2 = ProgramState<BFF, B01, std::tuple<>, std::tuple<NotA>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x00, "testing NotA 0xFF: NOK");
}

void test_OrAB() {
    using PS1 = ProgramState<B0A, B05, std::tuple<>, std::tuple<OrAB>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x0F, "testing OrAB 0x0A 0x05: NOK");

    using PS2 = ProgramState<B0A, B0A, std::tuple<>, std::tuple<OrAB>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x0A, "testing OrAB 0x0A 0x0A: NOK");
}

void test_AndAB() {
    using PS1 = ProgramState<B01, B01, std::tuple<>, std::tuple<AndAB>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x01, "testing AndAB 0x01 0x01: NOK");

    using PS2 = ProgramState<B01, B10, std::tuple<>, std::tuple<AndAB>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x00, "testing AndAB 0x01 0x10: NOK");
}

void test_XorAB() {
    using PS1 = ProgramState<B01, B01, std::tuple<>, std::tuple<XorAB>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x00, "testing XorAB 0x01 0x01: NOK");

    using PS2 = ProgramState<B01, B02, std::tuple<>, std::tuple<XorAB>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x03, "testing XorAB 0x01 0x02: NOK");
}

void test_IncA() {
    using PS = ProgramState<B01, B00, std::tuple<>, std::tuple<IncA>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x02, "testing IncA 0x01: NOK");
}

void test_DecA() {
    using PS = ProgramState<B01, B00, std::tuple<>, std::tuple<DecA>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x00, "testing DecA 0x01: NOK");
}

void test_AddAB() {
    using PS = ProgramState<B10, B10, std::tuple<>, std::tuple<AddAB>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x20, "testing AddAB 0x10 0x10: NOK");
}

void test_PopA() {
    using PS = ProgramState<B00, B00, std::tuple<B01>, std::tuple<PopA>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x01, "testing PopA 0x01: NOK");
}

void test_PopB() {
    using PS = ProgramState<B00, B00, std::tuple<B01>, std::tuple<PopB, SwapAB>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x01, "testing PopA 0x01: NOK");
}

void test_SwapAB() {
    using PS = ProgramState<B20, BAA, std::tuple<>, std::tuple<SwapAB>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0xAA, "testing SwapAB: NOK");
}

void test_SwapTop() {
    using PS = ProgramState<B20, BAA, std::tuple<B01, B02>, std::tuple<SwapTop,PopA>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x02, "testing SwapAB: NOK");
}

void test_Sum1through9() {
    using PS = ProgramState<B00, B00, std::tuple<>, std::tuple<
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

    static_assert(Valued<VMStep<PS>>::VALUE == 0x24, "testing Sum1through9: NOK");
}
