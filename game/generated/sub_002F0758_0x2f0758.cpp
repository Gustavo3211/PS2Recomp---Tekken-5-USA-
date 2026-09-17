#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F0758
// Address: 0x2f0758 - 0x2f0ce0
void sub_002F0758_0x2f0758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0758_0x2f0758");
#endif

    switch (ctx->pc) {
        case 0x2f0758u: goto label_2f0758;
        case 0x2f075cu: goto label_2f075c;
        case 0x2f0760u: goto label_2f0760;
        case 0x2f0764u: goto label_2f0764;
        case 0x2f0768u: goto label_2f0768;
        case 0x2f076cu: goto label_2f076c;
        case 0x2f0770u: goto label_2f0770;
        case 0x2f0774u: goto label_2f0774;
        case 0x2f0778u: goto label_2f0778;
        case 0x2f077cu: goto label_2f077c;
        case 0x2f0780u: goto label_2f0780;
        case 0x2f0784u: goto label_2f0784;
        case 0x2f0788u: goto label_2f0788;
        case 0x2f078cu: goto label_2f078c;
        case 0x2f0790u: goto label_2f0790;
        case 0x2f0794u: goto label_2f0794;
        case 0x2f0798u: goto label_2f0798;
        case 0x2f079cu: goto label_2f079c;
        case 0x2f07a0u: goto label_2f07a0;
        case 0x2f07a4u: goto label_2f07a4;
        case 0x2f07a8u: goto label_2f07a8;
        case 0x2f07acu: goto label_2f07ac;
        case 0x2f07b0u: goto label_2f07b0;
        case 0x2f07b4u: goto label_2f07b4;
        case 0x2f07b8u: goto label_2f07b8;
        case 0x2f07bcu: goto label_2f07bc;
        case 0x2f07c0u: goto label_2f07c0;
        case 0x2f07c4u: goto label_2f07c4;
        case 0x2f07c8u: goto label_2f07c8;
        case 0x2f07ccu: goto label_2f07cc;
        case 0x2f07d0u: goto label_2f07d0;
        case 0x2f07d4u: goto label_2f07d4;
        case 0x2f07d8u: goto label_2f07d8;
        case 0x2f07dcu: goto label_2f07dc;
        case 0x2f07e0u: goto label_2f07e0;
        case 0x2f07e4u: goto label_2f07e4;
        case 0x2f07e8u: goto label_2f07e8;
        case 0x2f07ecu: goto label_2f07ec;
        case 0x2f07f0u: goto label_2f07f0;
        case 0x2f07f4u: goto label_2f07f4;
        case 0x2f07f8u: goto label_2f07f8;
        case 0x2f07fcu: goto label_2f07fc;
        case 0x2f0800u: goto label_2f0800;
        case 0x2f0804u: goto label_2f0804;
        case 0x2f0808u: goto label_2f0808;
        case 0x2f080cu: goto label_2f080c;
        case 0x2f0810u: goto label_2f0810;
        case 0x2f0814u: goto label_2f0814;
        case 0x2f0818u: goto label_2f0818;
        case 0x2f081cu: goto label_2f081c;
        case 0x2f0820u: goto label_2f0820;
        case 0x2f0824u: goto label_2f0824;
        case 0x2f0828u: goto label_2f0828;
        case 0x2f082cu: goto label_2f082c;
        case 0x2f0830u: goto label_2f0830;
        case 0x2f0834u: goto label_2f0834;
        case 0x2f0838u: goto label_2f0838;
        case 0x2f083cu: goto label_2f083c;
        case 0x2f0840u: goto label_2f0840;
        case 0x2f0844u: goto label_2f0844;
        case 0x2f0848u: goto label_2f0848;
        case 0x2f084cu: goto label_2f084c;
        case 0x2f0850u: goto label_2f0850;
        case 0x2f0854u: goto label_2f0854;
        case 0x2f0858u: goto label_2f0858;
        case 0x2f085cu: goto label_2f085c;
        case 0x2f0860u: goto label_2f0860;
        case 0x2f0864u: goto label_2f0864;
        case 0x2f0868u: goto label_2f0868;
        case 0x2f086cu: goto label_2f086c;
        case 0x2f0870u: goto label_2f0870;
        case 0x2f0874u: goto label_2f0874;
        case 0x2f0878u: goto label_2f0878;
        case 0x2f087cu: goto label_2f087c;
        case 0x2f0880u: goto label_2f0880;
        case 0x2f0884u: goto label_2f0884;
        case 0x2f0888u: goto label_2f0888;
        case 0x2f088cu: goto label_2f088c;
        case 0x2f0890u: goto label_2f0890;
        case 0x2f0894u: goto label_2f0894;
        case 0x2f0898u: goto label_2f0898;
        case 0x2f089cu: goto label_2f089c;
        case 0x2f08a0u: goto label_2f08a0;
        case 0x2f08a4u: goto label_2f08a4;
        case 0x2f08a8u: goto label_2f08a8;
        case 0x2f08acu: goto label_2f08ac;
        case 0x2f08b0u: goto label_2f08b0;
        case 0x2f08b4u: goto label_2f08b4;
        case 0x2f08b8u: goto label_2f08b8;
        case 0x2f08bcu: goto label_2f08bc;
        case 0x2f08c0u: goto label_2f08c0;
        case 0x2f08c4u: goto label_2f08c4;
        case 0x2f08c8u: goto label_2f08c8;
        case 0x2f08ccu: goto label_2f08cc;
        case 0x2f08d0u: goto label_2f08d0;
        case 0x2f08d4u: goto label_2f08d4;
        case 0x2f08d8u: goto label_2f08d8;
        case 0x2f08dcu: goto label_2f08dc;
        case 0x2f08e0u: goto label_2f08e0;
        case 0x2f08e4u: goto label_2f08e4;
        case 0x2f08e8u: goto label_2f08e8;
        case 0x2f08ecu: goto label_2f08ec;
        case 0x2f08f0u: goto label_2f08f0;
        case 0x2f08f4u: goto label_2f08f4;
        case 0x2f08f8u: goto label_2f08f8;
        case 0x2f08fcu: goto label_2f08fc;
        case 0x2f0900u: goto label_2f0900;
        case 0x2f0904u: goto label_2f0904;
        case 0x2f0908u: goto label_2f0908;
        case 0x2f090cu: goto label_2f090c;
        case 0x2f0910u: goto label_2f0910;
        case 0x2f0914u: goto label_2f0914;
        case 0x2f0918u: goto label_2f0918;
        case 0x2f091cu: goto label_2f091c;
        case 0x2f0920u: goto label_2f0920;
        case 0x2f0924u: goto label_2f0924;
        case 0x2f0928u: goto label_2f0928;
        case 0x2f092cu: goto label_2f092c;
        case 0x2f0930u: goto label_2f0930;
        case 0x2f0934u: goto label_2f0934;
        case 0x2f0938u: goto label_2f0938;
        case 0x2f093cu: goto label_2f093c;
        case 0x2f0940u: goto label_2f0940;
        case 0x2f0944u: goto label_2f0944;
        case 0x2f0948u: goto label_2f0948;
        case 0x2f094cu: goto label_2f094c;
        case 0x2f0950u: goto label_2f0950;
        case 0x2f0954u: goto label_2f0954;
        case 0x2f0958u: goto label_2f0958;
        case 0x2f095cu: goto label_2f095c;
        case 0x2f0960u: goto label_2f0960;
        case 0x2f0964u: goto label_2f0964;
        case 0x2f0968u: goto label_2f0968;
        case 0x2f096cu: goto label_2f096c;
        case 0x2f0970u: goto label_2f0970;
        case 0x2f0974u: goto label_2f0974;
        case 0x2f0978u: goto label_2f0978;
        case 0x2f097cu: goto label_2f097c;
        case 0x2f0980u: goto label_2f0980;
        case 0x2f0984u: goto label_2f0984;
        case 0x2f0988u: goto label_2f0988;
        case 0x2f098cu: goto label_2f098c;
        case 0x2f0990u: goto label_2f0990;
        case 0x2f0994u: goto label_2f0994;
        case 0x2f0998u: goto label_2f0998;
        case 0x2f099cu: goto label_2f099c;
        case 0x2f09a0u: goto label_2f09a0;
        case 0x2f09a4u: goto label_2f09a4;
        case 0x2f09a8u: goto label_2f09a8;
        case 0x2f09acu: goto label_2f09ac;
        case 0x2f09b0u: goto label_2f09b0;
        case 0x2f09b4u: goto label_2f09b4;
        case 0x2f09b8u: goto label_2f09b8;
        case 0x2f09bcu: goto label_2f09bc;
        case 0x2f09c0u: goto label_2f09c0;
        case 0x2f09c4u: goto label_2f09c4;
        case 0x2f09c8u: goto label_2f09c8;
        case 0x2f09ccu: goto label_2f09cc;
        case 0x2f09d0u: goto label_2f09d0;
        case 0x2f09d4u: goto label_2f09d4;
        case 0x2f09d8u: goto label_2f09d8;
        case 0x2f09dcu: goto label_2f09dc;
        case 0x2f09e0u: goto label_2f09e0;
        case 0x2f09e4u: goto label_2f09e4;
        case 0x2f09e8u: goto label_2f09e8;
        case 0x2f09ecu: goto label_2f09ec;
        case 0x2f09f0u: goto label_2f09f0;
        case 0x2f09f4u: goto label_2f09f4;
        case 0x2f09f8u: goto label_2f09f8;
        case 0x2f09fcu: goto label_2f09fc;
        case 0x2f0a00u: goto label_2f0a00;
        case 0x2f0a04u: goto label_2f0a04;
        case 0x2f0a08u: goto label_2f0a08;
        case 0x2f0a0cu: goto label_2f0a0c;
        case 0x2f0a10u: goto label_2f0a10;
        case 0x2f0a14u: goto label_2f0a14;
        case 0x2f0a18u: goto label_2f0a18;
        case 0x2f0a1cu: goto label_2f0a1c;
        case 0x2f0a20u: goto label_2f0a20;
        case 0x2f0a24u: goto label_2f0a24;
        case 0x2f0a28u: goto label_2f0a28;
        case 0x2f0a2cu: goto label_2f0a2c;
        case 0x2f0a30u: goto label_2f0a30;
        case 0x2f0a34u: goto label_2f0a34;
        case 0x2f0a38u: goto label_2f0a38;
        case 0x2f0a3cu: goto label_2f0a3c;
        case 0x2f0a40u: goto label_2f0a40;
        case 0x2f0a44u: goto label_2f0a44;
        case 0x2f0a48u: goto label_2f0a48;
        case 0x2f0a4cu: goto label_2f0a4c;
        case 0x2f0a50u: goto label_2f0a50;
        case 0x2f0a54u: goto label_2f0a54;
        case 0x2f0a58u: goto label_2f0a58;
        case 0x2f0a5cu: goto label_2f0a5c;
        case 0x2f0a60u: goto label_2f0a60;
        case 0x2f0a64u: goto label_2f0a64;
        case 0x2f0a68u: goto label_2f0a68;
        case 0x2f0a6cu: goto label_2f0a6c;
        case 0x2f0a70u: goto label_2f0a70;
        case 0x2f0a74u: goto label_2f0a74;
        case 0x2f0a78u: goto label_2f0a78;
        case 0x2f0a7cu: goto label_2f0a7c;
        case 0x2f0a80u: goto label_2f0a80;
        case 0x2f0a84u: goto label_2f0a84;
        case 0x2f0a88u: goto label_2f0a88;
        case 0x2f0a8cu: goto label_2f0a8c;
        case 0x2f0a90u: goto label_2f0a90;
        case 0x2f0a94u: goto label_2f0a94;
        case 0x2f0a98u: goto label_2f0a98;
        case 0x2f0a9cu: goto label_2f0a9c;
        case 0x2f0aa0u: goto label_2f0aa0;
        case 0x2f0aa4u: goto label_2f0aa4;
        case 0x2f0aa8u: goto label_2f0aa8;
        case 0x2f0aacu: goto label_2f0aac;
        case 0x2f0ab0u: goto label_2f0ab0;
        case 0x2f0ab4u: goto label_2f0ab4;
        case 0x2f0ab8u: goto label_2f0ab8;
        case 0x2f0abcu: goto label_2f0abc;
        case 0x2f0ac0u: goto label_2f0ac0;
        case 0x2f0ac4u: goto label_2f0ac4;
        case 0x2f0ac8u: goto label_2f0ac8;
        case 0x2f0accu: goto label_2f0acc;
        case 0x2f0ad0u: goto label_2f0ad0;
        case 0x2f0ad4u: goto label_2f0ad4;
        case 0x2f0ad8u: goto label_2f0ad8;
        case 0x2f0adcu: goto label_2f0adc;
        case 0x2f0ae0u: goto label_2f0ae0;
        case 0x2f0ae4u: goto label_2f0ae4;
        case 0x2f0ae8u: goto label_2f0ae8;
        case 0x2f0aecu: goto label_2f0aec;
        case 0x2f0af0u: goto label_2f0af0;
        case 0x2f0af4u: goto label_2f0af4;
        case 0x2f0af8u: goto label_2f0af8;
        case 0x2f0afcu: goto label_2f0afc;
        case 0x2f0b00u: goto label_2f0b00;
        case 0x2f0b04u: goto label_2f0b04;
        case 0x2f0b08u: goto label_2f0b08;
        case 0x2f0b0cu: goto label_2f0b0c;
        case 0x2f0b10u: goto label_2f0b10;
        case 0x2f0b14u: goto label_2f0b14;
        case 0x2f0b18u: goto label_2f0b18;
        case 0x2f0b1cu: goto label_2f0b1c;
        case 0x2f0b20u: goto label_2f0b20;
        case 0x2f0b24u: goto label_2f0b24;
        case 0x2f0b28u: goto label_2f0b28;
        case 0x2f0b2cu: goto label_2f0b2c;
        case 0x2f0b30u: goto label_2f0b30;
        case 0x2f0b34u: goto label_2f0b34;
        case 0x2f0b38u: goto label_2f0b38;
        case 0x2f0b3cu: goto label_2f0b3c;
        case 0x2f0b40u: goto label_2f0b40;
        case 0x2f0b44u: goto label_2f0b44;
        case 0x2f0b48u: goto label_2f0b48;
        case 0x2f0b4cu: goto label_2f0b4c;
        case 0x2f0b50u: goto label_2f0b50;
        case 0x2f0b54u: goto label_2f0b54;
        case 0x2f0b58u: goto label_2f0b58;
        case 0x2f0b5cu: goto label_2f0b5c;
        case 0x2f0b60u: goto label_2f0b60;
        case 0x2f0b64u: goto label_2f0b64;
        case 0x2f0b68u: goto label_2f0b68;
        case 0x2f0b6cu: goto label_2f0b6c;
        case 0x2f0b70u: goto label_2f0b70;
        case 0x2f0b74u: goto label_2f0b74;
        case 0x2f0b78u: goto label_2f0b78;
        case 0x2f0b7cu: goto label_2f0b7c;
        case 0x2f0b80u: goto label_2f0b80;
        case 0x2f0b84u: goto label_2f0b84;
        case 0x2f0b88u: goto label_2f0b88;
        case 0x2f0b8cu: goto label_2f0b8c;
        case 0x2f0b90u: goto label_2f0b90;
        case 0x2f0b94u: goto label_2f0b94;
        case 0x2f0b98u: goto label_2f0b98;
        case 0x2f0b9cu: goto label_2f0b9c;
        case 0x2f0ba0u: goto label_2f0ba0;
        case 0x2f0ba4u: goto label_2f0ba4;
        case 0x2f0ba8u: goto label_2f0ba8;
        case 0x2f0bacu: goto label_2f0bac;
        case 0x2f0bb0u: goto label_2f0bb0;
        case 0x2f0bb4u: goto label_2f0bb4;
        case 0x2f0bb8u: goto label_2f0bb8;
        case 0x2f0bbcu: goto label_2f0bbc;
        case 0x2f0bc0u: goto label_2f0bc0;
        case 0x2f0bc4u: goto label_2f0bc4;
        case 0x2f0bc8u: goto label_2f0bc8;
        case 0x2f0bccu: goto label_2f0bcc;
        case 0x2f0bd0u: goto label_2f0bd0;
        case 0x2f0bd4u: goto label_2f0bd4;
        case 0x2f0bd8u: goto label_2f0bd8;
        case 0x2f0bdcu: goto label_2f0bdc;
        case 0x2f0be0u: goto label_2f0be0;
        case 0x2f0be4u: goto label_2f0be4;
        case 0x2f0be8u: goto label_2f0be8;
        case 0x2f0becu: goto label_2f0bec;
        case 0x2f0bf0u: goto label_2f0bf0;
        case 0x2f0bf4u: goto label_2f0bf4;
        case 0x2f0bf8u: goto label_2f0bf8;
        case 0x2f0bfcu: goto label_2f0bfc;
        case 0x2f0c00u: goto label_2f0c00;
        case 0x2f0c04u: goto label_2f0c04;
        case 0x2f0c08u: goto label_2f0c08;
        case 0x2f0c0cu: goto label_2f0c0c;
        case 0x2f0c10u: goto label_2f0c10;
        case 0x2f0c14u: goto label_2f0c14;
        case 0x2f0c18u: goto label_2f0c18;
        case 0x2f0c1cu: goto label_2f0c1c;
        case 0x2f0c20u: goto label_2f0c20;
        case 0x2f0c24u: goto label_2f0c24;
        case 0x2f0c28u: goto label_2f0c28;
        case 0x2f0c2cu: goto label_2f0c2c;
        case 0x2f0c30u: goto label_2f0c30;
        case 0x2f0c34u: goto label_2f0c34;
        case 0x2f0c38u: goto label_2f0c38;
        case 0x2f0c3cu: goto label_2f0c3c;
        case 0x2f0c40u: goto label_2f0c40;
        case 0x2f0c44u: goto label_2f0c44;
        case 0x2f0c48u: goto label_2f0c48;
        case 0x2f0c4cu: goto label_2f0c4c;
        case 0x2f0c50u: goto label_2f0c50;
        case 0x2f0c54u: goto label_2f0c54;
        case 0x2f0c58u: goto label_2f0c58;
        case 0x2f0c5cu: goto label_2f0c5c;
        case 0x2f0c60u: goto label_2f0c60;
        case 0x2f0c64u: goto label_2f0c64;
        case 0x2f0c68u: goto label_2f0c68;
        case 0x2f0c6cu: goto label_2f0c6c;
        case 0x2f0c70u: goto label_2f0c70;
        case 0x2f0c74u: goto label_2f0c74;
        case 0x2f0c78u: goto label_2f0c78;
        case 0x2f0c7cu: goto label_2f0c7c;
        case 0x2f0c80u: goto label_2f0c80;
        case 0x2f0c84u: goto label_2f0c84;
        case 0x2f0c88u: goto label_2f0c88;
        case 0x2f0c8cu: goto label_2f0c8c;
        case 0x2f0c90u: goto label_2f0c90;
        case 0x2f0c94u: goto label_2f0c94;
        case 0x2f0c98u: goto label_2f0c98;
        case 0x2f0c9cu: goto label_2f0c9c;
        case 0x2f0ca0u: goto label_2f0ca0;
        case 0x2f0ca4u: goto label_2f0ca4;
        case 0x2f0ca8u: goto label_2f0ca8;
        case 0x2f0cacu: goto label_2f0cac;
        case 0x2f0cb0u: goto label_2f0cb0;
        case 0x2f0cb4u: goto label_2f0cb4;
        case 0x2f0cb8u: goto label_2f0cb8;
        case 0x2f0cbcu: goto label_2f0cbc;
        case 0x2f0cc0u: goto label_2f0cc0;
        case 0x2f0cc4u: goto label_2f0cc4;
        case 0x2f0cc8u: goto label_2f0cc8;
        case 0x2f0cccu: goto label_2f0ccc;
        case 0x2f0cd0u: goto label_2f0cd0;
        case 0x2f0cd4u: goto label_2f0cd4;
        case 0x2f0cd8u: goto label_2f0cd8;
        case 0x2f0cdcu: goto label_2f0cdc;
        default: break;
    }

    ctx->pc = 0x2f0758u;

label_2f0758:
    // 0x2f0758: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f0758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f075c:
    // 0x2f075c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2f075cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f0760:
    // 0x2f0760: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f0760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2f0764:
    // 0x2f0764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0768:
    // 0x2f0768: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2f0768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2f076c:
    // 0x2f076c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2f076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2f0770:
    // 0x2f0770: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f0770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2f0774:
    // 0x2f0774: 0x3c11003e  lui         $s1, 0x3E
    ctx->pc = 0x2f0774u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
label_2f0778:
    // 0x2f0778: 0x26314520  addiu       $s1, $s1, 0x4520
    ctx->pc = 0x2f0778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17696));
label_2f077c:
    // 0x2f077c: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x2f077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
label_2f0780:
    // 0x2f0780: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2f0780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f0784:
    // 0x2f0784: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x2f0784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2f0788:
    // 0x2f0788: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2f0788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_2f078c:
    // 0x2f078c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f078cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0790:
    // 0x2f0790: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f0790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2f0794:
    // 0x2f0794: 0x261201f0  addiu       $s2, $s0, 0x1F0
    ctx->pc = 0x2f0794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 496));
label_2f0798:
    // 0x2f0798: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2f0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2f079c:
    // 0x2f079c: 0x261300a0  addiu       $s3, $s0, 0xA0
    ctx->pc = 0x2f079cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2f07a0:
    // 0x2f07a0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2f07a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2f07a4:
    // 0x2f07a4: 0x2614004c  addiu       $s4, $s0, 0x4C
    ctx->pc = 0x2f07a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_2f07a8:
    // 0x2f07a8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2f07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2f07ac:
    // 0x2f07ac: 0x26150094  addiu       $s5, $s0, 0x94
    ctx->pc = 0x2f07acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_2f07b0:
    // 0x2f07b0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2f07b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2f07b4:
    // 0x2f07b4: 0x26160058  addiu       $s6, $s0, 0x58
    ctx->pc = 0x2f07b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2f07b8:
    // 0x2f07b8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2f07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2f07bc:
    // 0x2f07bc: 0x26170088  addiu       $s7, $s0, 0x88
    ctx->pc = 0x2f07bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
label_2f07c0:
    // 0x2f07c0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2f07c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2f07c4:
    // 0x2f07c4: 0x261e0070  addiu       $fp, $s0, 0x70
    ctx->pc = 0x2f07c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2f07c8:
    // 0x2f07c8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2f07c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2f07cc:
    // 0x2f07cc: 0x26270011  addiu       $a3, $s1, 0x11
    ctx->pc = 0x2f07ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 17));
label_2f07d0:
    // 0x2f07d0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2f07d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2f07d4:
    // 0x2f07d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2f07d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2f07d8:
    // 0x2f07d8: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x2f07d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_2f07dc:
    // 0x2f07dc: 0x260601cc  addiu       $a2, $s0, 0x1CC
    ctx->pc = 0x2f07dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 460));
label_2f07e0:
    // 0x2f07e0: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2f07e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_2f07e4:
    // 0x2f07e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f07e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f07e8:
    // 0x2f07e8: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2f07e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2f07ec:
    // 0x2f07ec: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x2f07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_2f07f0:
    // 0x2f07f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f07f4:
    // 0x2f07f4: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x2f07f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_2f07f8:
    // 0x2f07f8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f07f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f07fc:
    // 0x2f07fc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f07fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2f0800:
    // 0x2f0800: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2f0800u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
label_2f0804:
    // 0x2f0804: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f0804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f0808:
    // 0x2f0808: 0x2609001c  addiu       $t1, $s0, 0x1C
    ctx->pc = 0x2f0808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_2f080c:
    // 0x2f080c: 0x260b0028  addiu       $t3, $s0, 0x28
    ctx->pc = 0x2f080cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_2f0810:
    // 0x2f0810: 0x24844532  addiu       $a0, $a0, 0x4532
    ctx->pc = 0x2f0810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17714));
label_2f0814:
    // 0x2f0814: 0x24634533  addiu       $v1, $v1, 0x4533
    ctx->pc = 0x2f0814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17715));
label_2f0818:
    // 0x2f0818: 0xa1280000  sb          $t0, 0x0($t1)
    ctx->pc = 0x2f0818u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 8));
label_2f081c:
    // 0x2f081c: 0x260d0034  addiu       $t5, $s0, 0x34
    ctx->pc = 0x2f081cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_2f0820:
    // 0x2f0820: 0xad240004  sw          $a0, 0x4($t1)
    ctx->pc = 0x2f0820u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
label_2f0824:
    // 0x2f0824: 0x260f0040  addiu       $t7, $s0, 0x40
    ctx->pc = 0x2f0824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_2f0828:
    // 0x2f0828: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2f0828u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_2f082c:
    // 0x2f082c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f082cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2f0830:
    // 0x2f0830: 0xad630004  sw          $v1, 0x4($t3)
    ctx->pc = 0x2f0830u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 3));
label_2f0834:
    // 0x2f0834: 0x24844534  addiu       $a0, $a0, 0x4534
    ctx->pc = 0x2f0834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17716));
label_2f0838:
    // 0x2f0838: 0xa1600000  sb          $zero, 0x0($t3)
    ctx->pc = 0x2f0838u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f083c:
    // 0x2f083c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f083cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2f0840:
    // 0x2f0840: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f0840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0844:
    // 0x2f0844: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f0844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f0848:
    // 0x2f0848: 0x24634535  addiu       $v1, $v1, 0x4535
    ctx->pc = 0x2f0848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17717));
label_2f084c:
    // 0x2f084c: 0xada40004  sw          $a0, 0x4($t5)
    ctx->pc = 0x2f084cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 4));
label_2f0850:
    // 0x2f0850: 0xa1a00000  sb          $zero, 0x0($t5)
    ctx->pc = 0x2f0850u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0854:
    // 0x2f0854: 0x26180064  addiu       $t8, $s0, 0x64
    ctx->pc = 0x2f0854u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_2f0858:
    // 0x2f0858: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2f0858u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f085c:
    // 0x2f085c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0860:
    // 0x2f0860: 0xade30004  sw          $v1, 0x4($t7)
    ctx->pc = 0x2f0860u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4), GPR_U32(ctx, 3));
label_2f0864:
    // 0x2f0864: 0x2619007c  addiu       $t9, $s0, 0x7C
    ctx->pc = 0x2f0864u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
label_2f0868:
    // 0x2f0868: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x2f0868u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f086c:
    // 0x2f086c: 0x260e0208  addiu       $t6, $s0, 0x208
    ctx->pc = 0x2f086cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
label_2f0870:
    // 0x2f0870: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f0870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0874:
    // 0x2f0874: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f0874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f0878:
    // 0x2f0878: 0x24634536  addiu       $v1, $v1, 0x4536
    ctx->pc = 0x2f0878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17718));
label_2f087c:
    // 0x2f087c: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x2f087cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
label_2f0880:
    // 0x2f0880: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x2f0880u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_2f0884:
    // 0x2f0884: 0x260c019c  addiu       $t4, $s0, 0x19C
    ctx->pc = 0x2f0884u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
label_2f0888:
    // 0x2f0888: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2f0888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2f088c:
    // 0x2f088c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f088cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2f0890:
    // 0x2f0890: 0x24844537  addiu       $a0, $a0, 0x4537
    ctx->pc = 0x2f0890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17719));
label_2f0894:
    // 0x2f0894: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x2f0894u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f0898:
    // 0x2f0898: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x2f0898u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
label_2f089c:
    // 0x2f089c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f08a0:
    // 0x2f08a0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2f08a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f08a4:
    // 0x2f08a4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2f08a8:
    // 0x2f08a8: 0x24634538  addiu       $v1, $v1, 0x4538
    ctx->pc = 0x2f08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17720));
label_2f08ac:
    // 0x2f08ac: 0x24844539  addiu       $a0, $a0, 0x4539
    ctx->pc = 0x2f08acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17721));
label_2f08b0:
    // 0x2f08b0: 0xa3020000  sb          $v0, 0x0($t8)
    ctx->pc = 0x2f08b0u;
    WRITE8(ADD32(GPR_U32(ctx, 24), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f08b4:
    // 0x2f08b4: 0x260a01ac  addiu       $t2, $s0, 0x1AC
    ctx->pc = 0x2f08b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
label_2f08b8:
    // 0x2f08b8: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x2f08b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
label_2f08bc:
    // 0x2f08bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2f08bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f08c0:
    // 0x2f08c0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f08c4:
    // 0x2f08c4: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x2f08c4u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f08c8:
    // 0x2f08c8: 0x2463453b  addiu       $v1, $v1, 0x453B
    ctx->pc = 0x2f08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17723));
label_2f08cc:
    // 0x2f08cc: 0xafc40004  sw          $a0, 0x4($fp)
    ctx->pc = 0x2f08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
label_2f08d0:
    // 0x2f08d0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2f08d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f08d4:
    // 0x2f08d4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_2f08d8:
    // 0x2f08d8: 0x2442453a  addiu       $v0, $v0, 0x453A
    ctx->pc = 0x2f08d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17722));
label_2f08dc:
    // 0x2f08dc: 0xa3200000  sb          $zero, 0x0($t9)
    ctx->pc = 0x2f08dcu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f08e0:
    // 0x2f08e0: 0xaf220004  sw          $v0, 0x4($t9)
    ctx->pc = 0x2f08e0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4), GPR_U32(ctx, 2));
label_2f08e4:
    // 0x2f08e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2f08e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f08e8:
    // 0x2f08e8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2f08e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f08ec:
    // 0x2f08ec: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f08ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_2f08f0:
    // 0x2f08f0: 0x2442453c  addiu       $v0, $v0, 0x453C
    ctx->pc = 0x2f08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17724));
label_2f08f4:
    // 0x2f08f4: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x2f08f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
label_2f08f8:
    // 0x2f08f8: 0xa2e00000  sb          $zero, 0x0($s7)
    ctx->pc = 0x2f08f8u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f08fc:
    // 0x2f08fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f08fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0900:
    // 0x2f0900: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f0900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f0904:
    // 0x2f0904: 0xa2a40000  sb          $a0, 0x0($s5)
    ctx->pc = 0x2f0904u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 4));
label_2f0908:
    // 0x2f0908: 0x2463453d  addiu       $v1, $v1, 0x453D
    ctx->pc = 0x2f0908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17725));
label_2f090c:
    // 0x2f090c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2f090cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_2f0910:
    // 0x2f0910: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2f0910u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2f0914:
    // 0x2f0914: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f0914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2f0918:
    // 0x2f0918: 0x24844568  addiu       $a0, $a0, 0x4568
    ctx->pc = 0x2f0918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17768));
label_2f091c:
    // 0x2f091c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2f091cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_2f0920:
    // 0x2f0920: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2f0920u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0924:
    // 0x2f0924: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2f0924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_2f0928:
    // 0x2f0928: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2f0928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f092c:
    // 0x2f092c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f092cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f0930:
    // 0x2f0930: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x2f0930u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_2f0934:
    // 0x2f0934: 0x24424570  addiu       $v0, $v0, 0x4570
    ctx->pc = 0x2f0934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17776));
label_2f0938:
    // 0x2f0938: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x2f0938u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
label_2f093c:
    // 0x2f093c: 0x24634550  addiu       $v1, $v1, 0x4550
    ctx->pc = 0x2f093cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17744));
label_2f0940:
    // 0x2f0940: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x2f0940u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
label_2f0944:
    // 0x2f0944: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2f0944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_2f0948:
    // 0x2f0948: 0x24844554  addiu       $a0, $a0, 0x4554
    ctx->pc = 0x2f0948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17748));
label_2f094c:
    // 0x2f094c: 0xadc20010  sw          $v0, 0x10($t6)
    ctx->pc = 0x2f094cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 2));
label_2f0950:
    // 0x2f0950: 0xfdc00000  sd          $zero, 0x0($t6)
    ctx->pc = 0x2f0950u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 0));
label_2f0954:
    // 0x2f0954: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2f0954u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_2f0958:
    // 0x2f0958: 0xad830008  sw          $v1, 0x8($t4)
    ctx->pc = 0x2f0958u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
label_2f095c:
    // 0x2f095c: 0xad800000  sw          $zero, 0x0($t4)
    ctx->pc = 0x2f095cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 0));
label_2f0960:
    // 0x2f0960: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f0960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2f0964:
    // 0x2f0964: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2f0964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2f0968:
    // 0x2f0968: 0xad440008  sw          $a0, 0x8($t2)
    ctx->pc = 0x2f0968u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 4));
label_2f096c:
    // 0x2f096c: 0x24634558  addiu       $v1, $v1, 0x4558
    ctx->pc = 0x2f096cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17752));
label_2f0970:
    // 0x2f0970: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2f0970u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_2f0974:
    // 0x2f0974: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2f0974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2f0978:
    // 0x2f0978: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f0978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f097c:
    // 0x2f097c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f097cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2f0980:
    // 0x2f0980: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2f0980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_2f0984:
    // 0x2f0984: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2f0984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_2f0988:
    // 0x2f0988: 0x8e0201d8  lw          $v0, 0x1D8($s0)
    ctx->pc = 0x2f0988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_2f098c:
    // 0x2f098c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0990:
    // 0x2f0990: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0994:
    // 0x2f0994: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0998:
    // 0x2f0998: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2f0998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f099c:
    // 0x2f099c: 0x60f809  jalr        $v1
label_2f09a0:
    if (ctx->pc == 0x2F09A0u) {
        ctx->pc = 0x2F09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F099Cu;
        // 0x2f09a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F09A4u;
        goto label_2f09a4;
    }
    ctx->pc = 0x2F099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F09A4u);
        ctx->pc = 0x2F09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F099Cu;
        // 0x2f09a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F099Cu, 0x2F09A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F09A4u;
label_2f09a4:
    // 0x2f09a4: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x2f09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_2f09a8:
    // 0x2f09a8: 0x260701dc  addiu       $a3, $s0, 0x1DC
    ctx->pc = 0x2f09a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
label_2f09ac:
    // 0x2f09ac: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2f09acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2f09b0:
    // 0x2f09b0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f09b4:
    // 0x2f09b4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2f09b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f09b8:
    // 0x2f09b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f09b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f09bc:
    // 0x2f09bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f09c0:
    // 0x2f09c0: 0x60f809  jalr        $v1
label_2f09c4:
    if (ctx->pc == 0x2F09C4u) {
        ctx->pc = 0x2F09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09C0u;
        // 0x2f09c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F09C8u;
        goto label_2f09c8;
    }
    ctx->pc = 0x2F09C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F09C8u);
        ctx->pc = 0x2F09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09C0u;
        // 0x2f09c4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F09C0u, 0x2F09C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F09C8u;
label_2f09c8:
    // 0x2f09c8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x2f09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_2f09cc:
    // 0x2f09cc: 0x2607016c  addiu       $a3, $s0, 0x16C
    ctx->pc = 0x2f09ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
label_2f09d0:
    // 0x2f09d0: 0x2625002e  addiu       $a1, $s1, 0x2E
    ctx->pc = 0x2f09d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
label_2f09d4:
    // 0x2f09d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f09d8:
    // 0x2f09d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f09d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f09dc:
    // 0x2f09dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f09dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f09e0:
    // 0x2f09e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f09e4:
    // 0x2f09e4: 0x60f809  jalr        $v1
label_2f09e8:
    if (ctx->pc == 0x2F09E8u) {
        ctx->pc = 0x2F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09E4u;
        // 0x2f09e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F09ECu;
        goto label_2f09ec;
    }
    ctx->pc = 0x2F09E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F09ECu);
        ctx->pc = 0x2F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F09E4u;
        // 0x2f09e8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F09E4u, 0x2F09ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F09ECu;
label_2f09ec:
    // 0x2f09ec: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x2f09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_2f09f0:
    // 0x2f09f0: 0x26070178  addiu       $a3, $s0, 0x178
    ctx->pc = 0x2f09f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
label_2f09f4:
    // 0x2f09f4: 0x2625002f  addiu       $a1, $s1, 0x2F
    ctx->pc = 0x2f09f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 47));
label_2f09f8:
    // 0x2f09f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f09fc:
    // 0x2f09fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f09fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a00:
    // 0x2f0a00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0a04:
    // 0x2f0a04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0a08:
    // 0x2f0a08: 0x60f809  jalr        $v1
label_2f0a0c:
    if (ctx->pc == 0x2F0A0Cu) {
        ctx->pc = 0x2F0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A08u;
        // 0x2f0a0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A10u;
        goto label_2f0a10;
    }
    ctx->pc = 0x2F0A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0A10u);
        ctx->pc = 0x2F0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A08u;
        // 0x2f0a0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0A08u, 0x2F0A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0A10u;
label_2f0a10:
    // 0x2f0a10: 0x26040184  addiu       $a0, $s0, 0x184
    ctx->pc = 0x2f0a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
label_2f0a14:
    // 0x2f0a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f0a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a18:
    // 0x2f0a18: 0xc0dc738  jal         func_371CE0
label_2f0a1c:
    if (ctx->pc == 0x2F0A1Cu) {
        ctx->pc = 0x2F0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A18u;
        // 0x2f0a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A20u;
        goto label_2f0a20;
    }
    ctx->pc = 0x2F0A18u;
    SET_GPR_U32(ctx, 31, 0x2F0A20u);
    ctx->pc = 0x2F0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0A18u;
    // 0x2f0a1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371CE0u, 0x2F0A18u, 0x2F0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0A20u;
label_2f0a20:
    // 0x2f0a20: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x2f0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_2f0a24:
    // 0x2f0a24: 0x2608022c  addiu       $t0, $s0, 0x22C
    ctx->pc = 0x2f0a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
label_2f0a28:
    // 0x2f0a28: 0x2629005a  addiu       $t1, $s1, 0x5A
    ctx->pc = 0x2f0a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 90));
label_2f0a2c:
    // 0x2f0a2c: 0x26270059  addiu       $a3, $s1, 0x59
    ctx->pc = 0x2f0a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 89));
label_2f0a30:
    // 0x2f0a30: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2f0a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2f0a34:
    // 0x2f0a34: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x2f0a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
label_2f0a38:
    // 0x2f0a38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0a3c:
    // 0x2f0a3c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2f0a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
label_2f0a40:
    // 0x2f0a40: 0x260b00c4  addiu       $t3, $s0, 0xC4
    ctx->pc = 0x2f0a40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
label_2f0a44:
    // 0x2f0a44: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2f0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_2f0a48:
    // 0x2f0a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a4c:
    // 0x2f0a4c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2f0a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_2f0a50:
    // 0x2f0a50: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2f0a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2f0a54:
    // 0x2f0a54: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x2f0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
label_2f0a58:
    // 0x2f0a58: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2f0a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0a5c:
    // 0x2f0a5c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x2f0a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0a60:
    // 0x2f0a60: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2f0a60u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0a64:
    // 0x2f0a64: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x2f0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
label_2f0a68:
    // 0x2f0a68: 0xa1200000  sb          $zero, 0x0($t1)
    ctx->pc = 0x2f0a68u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 0));
label_2f0a6c:
    // 0x2f0a6c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x2f0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_2f0a70:
    // 0x2f0a70: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0a74:
    // 0x2f0a74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0a74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0a78:
    // 0x2f0a78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0a7c:
    // 0x2f0a7c: 0x60f809  jalr        $v1
label_2f0a80:
    if (ctx->pc == 0x2F0A80u) {
        ctx->pc = 0x2F0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A7Cu;
        // 0x2f0a80: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0A84u;
        goto label_2f0a84;
    }
    ctx->pc = 0x2F0A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0A84u);
        ctx->pc = 0x2F0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0A7Cu;
        // 0x2f0a80: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0A7Cu, 0x2F0A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0A84u;
label_2f0a84:
    // 0x2f0a84: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x2f0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_2f0a88:
    // 0x2f0a88: 0x260700ac  addiu       $a3, $s0, 0xAC
    ctx->pc = 0x2f0a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_2f0a8c:
    // 0x2f0a8c: 0x2625001e  addiu       $a1, $s1, 0x1E
    ctx->pc = 0x2f0a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 30));
label_2f0a90:
    // 0x2f0a90: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0a94:
    // 0x2f0a94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0a98:
    // 0x2f0a98: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0a98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0a9c:
    // 0x2f0a9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0aa0:
    // 0x2f0aa0: 0x60f809  jalr        $v1
label_2f0aa4:
    if (ctx->pc == 0x2F0AA4u) {
        ctx->pc = 0x2F0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AA0u;
        // 0x2f0aa4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AA8u;
        goto label_2f0aa8;
    }
    ctx->pc = 0x2F0AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0AA8u);
        ctx->pc = 0x2F0AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AA0u;
        // 0x2f0aa4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AA0u, 0x2F0AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0AA8u;
label_2f0aa8:
    // 0x2f0aa8: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2f0aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2f0aac:
    // 0x2f0aac: 0x260700d0  addiu       $a3, $s0, 0xD0
    ctx->pc = 0x2f0aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_2f0ab0:
    // 0x2f0ab0: 0x26250021  addiu       $a1, $s1, 0x21
    ctx->pc = 0x2f0ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 33));
label_2f0ab4:
    // 0x2f0ab4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0ab8:
    // 0x2f0ab8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0abc:
    // 0x2f0abc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0ac0:
    // 0x2f0ac0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0ac4:
    // 0x2f0ac4: 0x60f809  jalr        $v1
label_2f0ac8:
    if (ctx->pc == 0x2F0AC8u) {
        ctx->pc = 0x2F0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AC4u;
        // 0x2f0ac8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0ACCu;
        goto label_2f0acc;
    }
    ctx->pc = 0x2F0AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0ACCu);
        ctx->pc = 0x2F0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AC4u;
        // 0x2f0ac8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AC4u, 0x2F0ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0ACCu;
label_2f0acc:
    // 0x2f0acc: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2f0accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2f0ad0:
    // 0x2f0ad0: 0x260700b8  addiu       $a3, $s0, 0xB8
    ctx->pc = 0x2f0ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
label_2f0ad4:
    // 0x2f0ad4: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x2f0ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
label_2f0ad8:
    // 0x2f0ad8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0adc:
    // 0x2f0adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ae0:
    // 0x2f0ae0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0ae4:
    // 0x2f0ae4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0ae8:
    // 0x2f0ae8: 0x60f809  jalr        $v1
label_2f0aec:
    if (ctx->pc == 0x2F0AECu) {
        ctx->pc = 0x2F0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AE8u;
        // 0x2f0aec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0AF0u;
        goto label_2f0af0;
    }
    ctx->pc = 0x2F0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0AF0u);
        ctx->pc = 0x2F0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0AE8u;
        // 0x2f0aec: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0AE8u, 0x2F0AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0AF0u;
label_2f0af0:
    // 0x2f0af0: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x2f0af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_2f0af4:
    // 0x2f0af4: 0x260700dc  addiu       $a3, $s0, 0xDC
    ctx->pc = 0x2f0af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
label_2f0af8:
    // 0x2f0af8: 0x26250022  addiu       $a1, $s1, 0x22
    ctx->pc = 0x2f0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
label_2f0afc:
    // 0x2f0afc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0b00:
    // 0x2f0b00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f0b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f0b04:
    // 0x2f0b04: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0b08:
    // 0x2f0b08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0b0c:
    // 0x2f0b0c: 0x60f809  jalr        $v1
label_2f0b10:
    if (ctx->pc == 0x2F0B10u) {
        ctx->pc = 0x2F0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B0Cu;
        // 0x2f0b10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B14u;
        goto label_2f0b14;
    }
    ctx->pc = 0x2F0B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0B14u);
        ctx->pc = 0x2F0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B0Cu;
        // 0x2f0b10: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B0Cu, 0x2F0B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0B14u;
label_2f0b14:
    // 0x2f0b14: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2f0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2f0b18:
    // 0x2f0b18: 0x26070100  addiu       $a3, $s0, 0x100
    ctx->pc = 0x2f0b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2f0b1c:
    // 0x2f0b1c: 0x26250025  addiu       $a1, $s1, 0x25
    ctx->pc = 0x2f0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 37));
label_2f0b20:
    // 0x2f0b20: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0b24:
    // 0x2f0b24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f0b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0b28:
    // 0x2f0b28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0b2c:
    // 0x2f0b2c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0b30:
    // 0x2f0b30: 0x60f809  jalr        $v1
label_2f0b34:
    if (ctx->pc == 0x2F0B34u) {
        ctx->pc = 0x2F0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B30u;
        // 0x2f0b34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B38u;
        goto label_2f0b38;
    }
    ctx->pc = 0x2F0B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0B38u);
        ctx->pc = 0x2F0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B30u;
        // 0x2f0b34: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B30u, 0x2F0B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0B38u;
label_2f0b38:
    // 0x2f0b38: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2f0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2f0b3c:
    // 0x2f0b3c: 0x260700e8  addiu       $a3, $s0, 0xE8
    ctx->pc = 0x2f0b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
label_2f0b40:
    // 0x2f0b40: 0x26250023  addiu       $a1, $s1, 0x23
    ctx->pc = 0x2f0b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 35));
label_2f0b44:
    // 0x2f0b44: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0b48:
    // 0x2f0b48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f0b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f0b4c:
    // 0x2f0b4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0b50:
    // 0x2f0b50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0b54:
    // 0x2f0b54: 0x60f809  jalr        $v1
label_2f0b58:
    if (ctx->pc == 0x2F0B58u) {
        ctx->pc = 0x2F0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B54u;
        // 0x2f0b58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B5Cu;
        goto label_2f0b5c;
    }
    ctx->pc = 0x2F0B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0B5Cu);
        ctx->pc = 0x2F0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B54u;
        // 0x2f0b58: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B54u, 0x2F0B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0B5Cu;
label_2f0b5c:
    // 0x2f0b5c: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x2f0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_2f0b60:
    // 0x2f0b60: 0x260700f4  addiu       $a3, $s0, 0xF4
    ctx->pc = 0x2f0b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
label_2f0b64:
    // 0x2f0b64: 0x26250024  addiu       $a1, $s1, 0x24
    ctx->pc = 0x2f0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_2f0b68:
    // 0x2f0b68: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0b6c:
    // 0x2f0b6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2f0b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f0b70:
    // 0x2f0b70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0b74:
    // 0x2f0b74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0b78:
    // 0x2f0b78: 0x60f809  jalr        $v1
label_2f0b7c:
    if (ctx->pc == 0x2F0B7Cu) {
        ctx->pc = 0x2F0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B78u;
        // 0x2f0b7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0B80u;
        goto label_2f0b80;
    }
    ctx->pc = 0x2F0B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0B80u);
        ctx->pc = 0x2F0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B78u;
        // 0x2f0b7c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B78u, 0x2F0B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0B80u;
label_2f0b80:
    // 0x2f0b80: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x2f0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_2f0b84:
    // 0x2f0b84: 0x26070124  addiu       $a3, $s0, 0x124
    ctx->pc = 0x2f0b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2f0b88:
    // 0x2f0b88: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x2f0b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_2f0b8c:
    // 0x2f0b8c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0b90:
    // 0x2f0b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0b94:
    // 0x2f0b94: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0b98:
    // 0x2f0b98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0b9c:
    // 0x2f0b9c: 0x60f809  jalr        $v1
label_2f0ba0:
    if (ctx->pc == 0x2F0BA0u) {
        ctx->pc = 0x2F0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B9Cu;
        // 0x2f0ba0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BA4u;
        goto label_2f0ba4;
    }
    ctx->pc = 0x2F0B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0BA4u);
        ctx->pc = 0x2F0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0B9Cu;
        // 0x2f0ba0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0B9Cu, 0x2F0BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0BA4u;
label_2f0ba4:
    // 0x2f0ba4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2f0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_2f0ba8:
    // 0x2f0ba8: 0x2607010c  addiu       $a3, $s0, 0x10C
    ctx->pc = 0x2f0ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_2f0bac:
    // 0x2f0bac: 0x26250026  addiu       $a1, $s1, 0x26
    ctx->pc = 0x2f0bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
label_2f0bb0:
    // 0x2f0bb0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0bb4:
    // 0x2f0bb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0bb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bb8:
    // 0x2f0bb8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0bbc:
    // 0x2f0bbc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0bc0:
    // 0x2f0bc0: 0x60f809  jalr        $v1
label_2f0bc4:
    if (ctx->pc == 0x2F0BC4u) {
        ctx->pc = 0x2F0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BC0u;
        // 0x2f0bc4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BC8u;
        goto label_2f0bc8;
    }
    ctx->pc = 0x2F0BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0BC8u);
        ctx->pc = 0x2F0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BC0u;
        // 0x2f0bc4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0BC0u, 0x2F0BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0BC8u;
label_2f0bc8:
    // 0x2f0bc8: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2f0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_2f0bcc:
    // 0x2f0bcc: 0x26070130  addiu       $a3, $s0, 0x130
    ctx->pc = 0x2f0bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_2f0bd0:
    // 0x2f0bd0: 0x26250029  addiu       $a1, $s1, 0x29
    ctx->pc = 0x2f0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 41));
label_2f0bd4:
    // 0x2f0bd4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0bd8:
    // 0x2f0bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0bdc:
    // 0x2f0bdc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0be0:
    // 0x2f0be0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0be4:
    // 0x2f0be4: 0x60f809  jalr        $v1
label_2f0be8:
    if (ctx->pc == 0x2F0BE8u) {
        ctx->pc = 0x2F0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE4u;
        // 0x2f0be8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0BECu;
        goto label_2f0bec;
    }
    ctx->pc = 0x2F0BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0BECu);
        ctx->pc = 0x2F0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0BE4u;
        // 0x2f0be8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0BE4u, 0x2F0BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0BECu;
label_2f0bec:
    // 0x2f0bec: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f0becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_2f0bf0:
    // 0x2f0bf0: 0x26070118  addiu       $a3, $s0, 0x118
    ctx->pc = 0x2f0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
label_2f0bf4:
    // 0x2f0bf4: 0x26250027  addiu       $a1, $s1, 0x27
    ctx->pc = 0x2f0bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 39));
label_2f0bf8:
    // 0x2f0bf8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0bfc:
    // 0x2f0bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0c00:
    // 0x2f0c00: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0c04:
    // 0x2f0c04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0c08:
    // 0x2f0c08: 0x60f809  jalr        $v1
label_2f0c0c:
    if (ctx->pc == 0x2F0C0Cu) {
        ctx->pc = 0x2F0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C08u;
        // 0x2f0c0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C10u;
        goto label_2f0c10;
    }
    ctx->pc = 0x2F0C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0C10u);
        ctx->pc = 0x2F0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C08u;
        // 0x2f0c0c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C08u, 0x2F0C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0C10u;
label_2f0c10:
    // 0x2f0c10: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x2f0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
label_2f0c14:
    // 0x2f0c14: 0x2607013c  addiu       $a3, $s0, 0x13C
    ctx->pc = 0x2f0c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
label_2f0c18:
    // 0x2f0c18: 0x2625002a  addiu       $a1, $s1, 0x2A
    ctx->pc = 0x2f0c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
label_2f0c1c:
    // 0x2f0c1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0c20:
    // 0x2f0c20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f0c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f0c24:
    // 0x2f0c24: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0c24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0c28:
    // 0x2f0c28: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0c2c:
    // 0x2f0c2c: 0x60f809  jalr        $v1
label_2f0c30:
    if (ctx->pc == 0x2F0C30u) {
        ctx->pc = 0x2F0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C2Cu;
        // 0x2f0c30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C34u;
        goto label_2f0c34;
    }
    ctx->pc = 0x2F0C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0C34u);
        ctx->pc = 0x2F0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C2Cu;
        // 0x2f0c30: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C2Cu, 0x2F0C34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0C34u;
label_2f0c34:
    // 0x2f0c34: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x2f0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_2f0c38:
    // 0x2f0c38: 0x26070160  addiu       $a3, $s0, 0x160
    ctx->pc = 0x2f0c38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_2f0c3c:
    // 0x2f0c3c: 0x2625002d  addiu       $a1, $s1, 0x2D
    ctx->pc = 0x2f0c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 45));
label_2f0c40:
    // 0x2f0c40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0c44:
    // 0x2f0c44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f0c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0c48:
    // 0x2f0c48: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0c4c:
    // 0x2f0c4c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0c50:
    // 0x2f0c50: 0x60f809  jalr        $v1
label_2f0c54:
    if (ctx->pc == 0x2F0C54u) {
        ctx->pc = 0x2F0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C50u;
        // 0x2f0c54: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C58u;
        goto label_2f0c58;
    }
    ctx->pc = 0x2F0C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0C58u);
        ctx->pc = 0x2F0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C50u;
        // 0x2f0c54: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C50u, 0x2F0C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0C58u;
label_2f0c58:
    // 0x2f0c58: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x2f0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_2f0c5c:
    // 0x2f0c5c: 0x26070148  addiu       $a3, $s0, 0x148
    ctx->pc = 0x2f0c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_2f0c60:
    // 0x2f0c60: 0x2625002b  addiu       $a1, $s1, 0x2B
    ctx->pc = 0x2f0c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 43));
label_2f0c64:
    // 0x2f0c64: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0c68:
    // 0x2f0c68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f0c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f0c6c:
    // 0x2f0c6c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0c6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0c70:
    // 0x2f0c70: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0c74:
    // 0x2f0c74: 0x60f809  jalr        $v1
label_2f0c78:
    if (ctx->pc == 0x2F0C78u) {
        ctx->pc = 0x2F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C74u;
        // 0x2f0c78: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0C7Cu;
        goto label_2f0c7c;
    }
    ctx->pc = 0x2F0C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0C7Cu);
        ctx->pc = 0x2F0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C74u;
        // 0x2f0c78: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C74u, 0x2F0C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0C7Cu;
label_2f0c7c:
    // 0x2f0c7c: 0x8e02015c  lw          $v0, 0x15C($s0)
    ctx->pc = 0x2f0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
label_2f0c80:
    // 0x2f0c80: 0x26100154  addiu       $s0, $s0, 0x154
    ctx->pc = 0x2f0c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
label_2f0c84:
    // 0x2f0c84: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x2f0c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_2f0c88:
    // 0x2f0c88: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2f0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2f0c8c:
    // 0x2f0c8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2f0c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f0c90:
    // 0x2f0c90: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f0c94:
    // 0x2f0c94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0c98:
    // 0x2f0c98: 0x60f809  jalr        $v1
label_2f0c9c:
    if (ctx->pc == 0x2F0C9Cu) {
        ctx->pc = 0x2F0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C98u;
        // 0x2f0c9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CA0u;
        goto label_2f0ca0;
    }
    ctx->pc = 0x2F0C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0CA0u);
        ctx->pc = 0x2F0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C98u;
        // 0x2f0c9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0C98u, 0x2F0CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0CA0u;
label_2f0ca0:
    // 0x2f0ca0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f0ca4:
    // 0x2f0ca4: 0xc0da5fc  jal         func_3697F0
label_2f0ca8:
    if (ctx->pc == 0x2F0CA8u) {
        ctx->pc = 0x2F0CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CA4u;
        // 0x2f0ca8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CACu;
        goto label_2f0cac;
    }
    ctx->pc = 0x2F0CA4u;
    SET_GPR_U32(ctx, 31, 0x2F0CACu);
    ctx->pc = 0x2F0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CA4u;
    // 0x2f0ca8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3697F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3697F0u, 0x2F0CA4u, 0x2F0CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CACu;
label_2f0cac:
    // 0x2f0cac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f0cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f0cb0:
    // 0x2f0cb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f0cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f0cb4:
    // 0x2f0cb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f0cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f0cb8:
    // 0x2f0cb8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2f0cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f0cbc:
    // 0x2f0cbc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2f0cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f0cc0:
    // 0x2f0cc0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2f0cc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f0cc4:
    // 0x2f0cc4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2f0cc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f0cc8:
    // 0x2f0cc8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2f0cc8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2f0ccc:
    // 0x2f0ccc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2f0cccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f0cd0:
    // 0x2f0cd0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2f0cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2f0cd4:
    // 0x2f0cd4: 0x3e00008  jr          $ra
label_2f0cd8:
    if (ctx->pc == 0x2F0CD8u) {
        ctx->pc = 0x2F0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CD4u;
        // 0x2f0cd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0CDCu;
        goto label_2f0cdc;
    }
    ctx->pc = 0x2F0CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0CD4u;
        // 0x2f0cd8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0CDCu;
label_2f0cdc:
    // 0x2f0cdc: 0x0  nop
    ctx->pc = 0x2f0cdcu;
    // NOP
    ctx->pc = 0x2f0ce0u;
}
