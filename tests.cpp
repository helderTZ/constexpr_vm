#include "vm.h"


void test_NotA() {
    using PS1 = ProgramState<B00, B01, std::tuple<>, std::tuple<NotA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0xFF, "testing NotA 0x00: NOK");

    using PS2 = ProgramState<BFF, B01, std::tuple<>, std::tuple<NotA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x00, "testing NotA 0xFF: NOK");
}

void test_OrAB() {
    using PS1 = ProgramState<B0A, B05, std::tuple<>, std::tuple<OrAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x0F, "testing OrAB 0x0A 0x05: NOK");

    using PS2 = ProgramState<B0A, B0A, std::tuple<>, std::tuple<OrAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x0A, "testing OrAB 0x0A 0x0A: NOK");
}

void test_AndAB() {
    using PS1 = ProgramState<B01, B01, std::tuple<>, std::tuple<AndAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x01, "testing AndAB 0x01 0x01: NOK");

    using PS2 = ProgramState<B01, B10, std::tuple<>, std::tuple<AndAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x00, "testing AndAB 0x01 0x10: NOK");
}

void test_XorAB() {
    using PS1 = ProgramState<B01, B01, std::tuple<>, std::tuple<XorAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x00, "testing XorAB 0x01 0x01: NOK");

    using PS2 = ProgramState<B01, B02, std::tuple<>, std::tuple<XorAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x03, "testing XorAB 0x01 0x02: NOK");
}

void test_EqAB() {
    using PS1 = ProgramState<B01, B01, std::tuple<>, std::tuple<EqAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x01, "testing EqAB 0x01 0x01: NOK");

    using PS2 = ProgramState<B01, B02, std::tuple<>, std::tuple<EqAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x00, "testing EqAB 0x01 0x02: NOK");
}

void test_IncA() {
    using PS = ProgramState<B01, B00, std::tuple<>, std::tuple<IncA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x02, "testing IncA 0x01: NOK");
}

void test_DecA() {
    using PS = ProgramState<B01, B00, std::tuple<>, std::tuple<DecA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x00, "testing DecA 0x01: NOK");
}

void test_SetA() {
    using PS = ProgramState<B00, B00, std::tuple<>, std::tuple<SetA<B10>>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x10, "testing SetA 0x10: NOK");
}

void test_SetB() {
    using PS = ProgramState<B00, B00, std::tuple<>, std::tuple<SetB<B10>, SwapAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x10, "testing SetB 0x10: NOK");
}

void test_AddAB() {
    using PS = ProgramState<B10, B10, std::tuple<>, std::tuple<AddAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x20, "testing AddAB 0x10 0x10: NOK");
}

void test_PopA() {
    using PS = ProgramState<B00, B00, std::tuple<B01>, std::tuple<PopA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x01, "testing PopA 0x01: NOK");
}

void test_PopB() {
    using PS = ProgramState<B00, B00, std::tuple<B01>, std::tuple<PopB, SwapAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x01, "testing PopA 0x01: NOK");
}

void test_SwapAB() {
    using PS = ProgramState<B20, BAA, std::tuple<>, std::tuple<SwapAB>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0xAA, "testing SwapAB: NOK");
}

void test_SwapTop() {
    using PS = ProgramState<B20, BAA, std::tuple<B01, B02>, std::tuple<SwapTop,PopA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS>>::VALUE == 0x02, "testing SwapAB: NOK");
}

void test_PushAIfNotZero() {
    using PS1 = ProgramState<B01, B00, std::tuple<BAA>, std::tuple<PushAIfNotZero, IncA, PopA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x01, "testing PushAIfNotZero 0x01: NOK");

    using PS2 = ProgramState<B00, B00, std::tuple<BAA>, std::tuple<PushAIfNotZero, IncA, PopA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0xAA, "testing PushAIfNotZero 0x00: NOK");
}

void test_JumpForward() {
    using PS1 = ProgramState<B00, B00, std::tuple<>, std::tuple<JumpForward<B00>, IncA, IncA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x02, "testing JumpForward<B00>: NOK");

    using PS2 = ProgramState<B00, B00, std::tuple<>, std::tuple<JumpForward<B01>, IncA, IncA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x01, "testing JumpForward<B01>: NOK");

    using PS3 = ProgramState<B00, B00, std::tuple<>, std::tuple<JumpForward<B02>, IncA, IncA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS3>>::VALUE == 0x00, "testing JumpForward<B02>: NOK");
}

void test_JumpForwardIfA() {
    using PS1 = ProgramState<B00, B00, std::tuple<>, std::tuple<JumpForwardIfA<B01>, IncA, IncA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS1>>::VALUE == 0x02, "testing JumpForwardIfA<B01> 0x00: NOK");

    using PS2 = ProgramState<B10, B00, std::tuple<>, std::tuple<JumpForward<B01>, IncA, IncA>, std::tuple<>>;
    static_assert(Valued<VMStep<PS2>>::VALUE == 0x11, "testing JumpForwardIfA<B01> 0x10: NOK");
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
    >, std::tuple<>>;

    static_assert(Valued<VMStep<PS>>::VALUE == 0x24, "testing Sum1through9: NOK");
}

void test_Sum1through9WithJumpBackward() {
    using PS = ProgramState<B00, B00, std::tuple<>, std::tuple<
        PushA,
        SetA<B08>, PushA,
        // loop head
        PopA, PushA, SetB<B00>,
        EqAB,
        JumpForwardIfA<B09 /* to end */>,
        // loop body
        PopA, PopB,
        DecA, PushA, IncA,
        AddAB,
        PushA,
        SwapTop,
        JumpBackward<B0D /* to loop head */>,
        // end
        PopA, PopA
    >, std::tuple<>>;

    //FIXME
    // static_assert(Valued<VMStep<PS>>::VALUE == 0x24, "testing test_Sum1through9WithJumpBackward: NOK");
}