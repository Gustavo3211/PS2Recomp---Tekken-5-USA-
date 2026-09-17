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

// Function: sub_00327C30
// Address: 0x327c30 - 0x328238
void sub_00327C30_0x327c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327C30_0x327c30");
#endif

    switch (ctx->pc) {
        case 0x327c30u: goto label_327c30;
        case 0x327c34u: goto label_327c34;
        case 0x327c38u: goto label_327c38;
        case 0x327c3cu: goto label_327c3c;
        case 0x327c40u: goto label_327c40;
        case 0x327c44u: goto label_327c44;
        case 0x327c48u: goto label_327c48;
        case 0x327c4cu: goto label_327c4c;
        case 0x327c50u: goto label_327c50;
        case 0x327c54u: goto label_327c54;
        case 0x327c58u: goto label_327c58;
        case 0x327c5cu: goto label_327c5c;
        case 0x327c60u: goto label_327c60;
        case 0x327c64u: goto label_327c64;
        case 0x327c68u: goto label_327c68;
        case 0x327c6cu: goto label_327c6c;
        case 0x327c70u: goto label_327c70;
        case 0x327c74u: goto label_327c74;
        case 0x327c78u: goto label_327c78;
        case 0x327c7cu: goto label_327c7c;
        case 0x327c80u: goto label_327c80;
        case 0x327c84u: goto label_327c84;
        case 0x327c88u: goto label_327c88;
        case 0x327c8cu: goto label_327c8c;
        case 0x327c90u: goto label_327c90;
        case 0x327c94u: goto label_327c94;
        case 0x327c98u: goto label_327c98;
        case 0x327c9cu: goto label_327c9c;
        case 0x327ca0u: goto label_327ca0;
        case 0x327ca4u: goto label_327ca4;
        case 0x327ca8u: goto label_327ca8;
        case 0x327cacu: goto label_327cac;
        case 0x327cb0u: goto label_327cb0;
        case 0x327cb4u: goto label_327cb4;
        case 0x327cb8u: goto label_327cb8;
        case 0x327cbcu: goto label_327cbc;
        case 0x327cc0u: goto label_327cc0;
        case 0x327cc4u: goto label_327cc4;
        case 0x327cc8u: goto label_327cc8;
        case 0x327cccu: goto label_327ccc;
        case 0x327cd0u: goto label_327cd0;
        case 0x327cd4u: goto label_327cd4;
        case 0x327cd8u: goto label_327cd8;
        case 0x327cdcu: goto label_327cdc;
        case 0x327ce0u: goto label_327ce0;
        case 0x327ce4u: goto label_327ce4;
        case 0x327ce8u: goto label_327ce8;
        case 0x327cecu: goto label_327cec;
        case 0x327cf0u: goto label_327cf0;
        case 0x327cf4u: goto label_327cf4;
        case 0x327cf8u: goto label_327cf8;
        case 0x327cfcu: goto label_327cfc;
        case 0x327d00u: goto label_327d00;
        case 0x327d04u: goto label_327d04;
        case 0x327d08u: goto label_327d08;
        case 0x327d0cu: goto label_327d0c;
        case 0x327d10u: goto label_327d10;
        case 0x327d14u: goto label_327d14;
        case 0x327d18u: goto label_327d18;
        case 0x327d1cu: goto label_327d1c;
        case 0x327d20u: goto label_327d20;
        case 0x327d24u: goto label_327d24;
        case 0x327d28u: goto label_327d28;
        case 0x327d2cu: goto label_327d2c;
        case 0x327d30u: goto label_327d30;
        case 0x327d34u: goto label_327d34;
        case 0x327d38u: goto label_327d38;
        case 0x327d3cu: goto label_327d3c;
        case 0x327d40u: goto label_327d40;
        case 0x327d44u: goto label_327d44;
        case 0x327d48u: goto label_327d48;
        case 0x327d4cu: goto label_327d4c;
        case 0x327d50u: goto label_327d50;
        case 0x327d54u: goto label_327d54;
        case 0x327d58u: goto label_327d58;
        case 0x327d5cu: goto label_327d5c;
        case 0x327d60u: goto label_327d60;
        case 0x327d64u: goto label_327d64;
        case 0x327d68u: goto label_327d68;
        case 0x327d6cu: goto label_327d6c;
        case 0x327d70u: goto label_327d70;
        case 0x327d74u: goto label_327d74;
        case 0x327d78u: goto label_327d78;
        case 0x327d7cu: goto label_327d7c;
        case 0x327d80u: goto label_327d80;
        case 0x327d84u: goto label_327d84;
        case 0x327d88u: goto label_327d88;
        case 0x327d8cu: goto label_327d8c;
        case 0x327d90u: goto label_327d90;
        case 0x327d94u: goto label_327d94;
        case 0x327d98u: goto label_327d98;
        case 0x327d9cu: goto label_327d9c;
        case 0x327da0u: goto label_327da0;
        case 0x327da4u: goto label_327da4;
        case 0x327da8u: goto label_327da8;
        case 0x327dacu: goto label_327dac;
        case 0x327db0u: goto label_327db0;
        case 0x327db4u: goto label_327db4;
        case 0x327db8u: goto label_327db8;
        case 0x327dbcu: goto label_327dbc;
        case 0x327dc0u: goto label_327dc0;
        case 0x327dc4u: goto label_327dc4;
        case 0x327dc8u: goto label_327dc8;
        case 0x327dccu: goto label_327dcc;
        case 0x327dd0u: goto label_327dd0;
        case 0x327dd4u: goto label_327dd4;
        case 0x327dd8u: goto label_327dd8;
        case 0x327ddcu: goto label_327ddc;
        case 0x327de0u: goto label_327de0;
        case 0x327de4u: goto label_327de4;
        case 0x327de8u: goto label_327de8;
        case 0x327decu: goto label_327dec;
        case 0x327df0u: goto label_327df0;
        case 0x327df4u: goto label_327df4;
        case 0x327df8u: goto label_327df8;
        case 0x327dfcu: goto label_327dfc;
        case 0x327e00u: goto label_327e00;
        case 0x327e04u: goto label_327e04;
        case 0x327e08u: goto label_327e08;
        case 0x327e0cu: goto label_327e0c;
        case 0x327e10u: goto label_327e10;
        case 0x327e14u: goto label_327e14;
        case 0x327e18u: goto label_327e18;
        case 0x327e1cu: goto label_327e1c;
        case 0x327e20u: goto label_327e20;
        case 0x327e24u: goto label_327e24;
        case 0x327e28u: goto label_327e28;
        case 0x327e2cu: goto label_327e2c;
        case 0x327e30u: goto label_327e30;
        case 0x327e34u: goto label_327e34;
        case 0x327e38u: goto label_327e38;
        case 0x327e3cu: goto label_327e3c;
        case 0x327e40u: goto label_327e40;
        case 0x327e44u: goto label_327e44;
        case 0x327e48u: goto label_327e48;
        case 0x327e4cu: goto label_327e4c;
        case 0x327e50u: goto label_327e50;
        case 0x327e54u: goto label_327e54;
        case 0x327e58u: goto label_327e58;
        case 0x327e5cu: goto label_327e5c;
        case 0x327e60u: goto label_327e60;
        case 0x327e64u: goto label_327e64;
        case 0x327e68u: goto label_327e68;
        case 0x327e6cu: goto label_327e6c;
        case 0x327e70u: goto label_327e70;
        case 0x327e74u: goto label_327e74;
        case 0x327e78u: goto label_327e78;
        case 0x327e7cu: goto label_327e7c;
        case 0x327e80u: goto label_327e80;
        case 0x327e84u: goto label_327e84;
        case 0x327e88u: goto label_327e88;
        case 0x327e8cu: goto label_327e8c;
        case 0x327e90u: goto label_327e90;
        case 0x327e94u: goto label_327e94;
        case 0x327e98u: goto label_327e98;
        case 0x327e9cu: goto label_327e9c;
        case 0x327ea0u: goto label_327ea0;
        case 0x327ea4u: goto label_327ea4;
        case 0x327ea8u: goto label_327ea8;
        case 0x327eacu: goto label_327eac;
        case 0x327eb0u: goto label_327eb0;
        case 0x327eb4u: goto label_327eb4;
        case 0x327eb8u: goto label_327eb8;
        case 0x327ebcu: goto label_327ebc;
        case 0x327ec0u: goto label_327ec0;
        case 0x327ec4u: goto label_327ec4;
        case 0x327ec8u: goto label_327ec8;
        case 0x327eccu: goto label_327ecc;
        case 0x327ed0u: goto label_327ed0;
        case 0x327ed4u: goto label_327ed4;
        case 0x327ed8u: goto label_327ed8;
        case 0x327edcu: goto label_327edc;
        case 0x327ee0u: goto label_327ee0;
        case 0x327ee4u: goto label_327ee4;
        case 0x327ee8u: goto label_327ee8;
        case 0x327eecu: goto label_327eec;
        case 0x327ef0u: goto label_327ef0;
        case 0x327ef4u: goto label_327ef4;
        case 0x327ef8u: goto label_327ef8;
        case 0x327efcu: goto label_327efc;
        case 0x327f00u: goto label_327f00;
        case 0x327f04u: goto label_327f04;
        case 0x327f08u: goto label_327f08;
        case 0x327f0cu: goto label_327f0c;
        case 0x327f10u: goto label_327f10;
        case 0x327f14u: goto label_327f14;
        case 0x327f18u: goto label_327f18;
        case 0x327f1cu: goto label_327f1c;
        case 0x327f20u: goto label_327f20;
        case 0x327f24u: goto label_327f24;
        case 0x327f28u: goto label_327f28;
        case 0x327f2cu: goto label_327f2c;
        case 0x327f30u: goto label_327f30;
        case 0x327f34u: goto label_327f34;
        case 0x327f38u: goto label_327f38;
        case 0x327f3cu: goto label_327f3c;
        case 0x327f40u: goto label_327f40;
        case 0x327f44u: goto label_327f44;
        case 0x327f48u: goto label_327f48;
        case 0x327f4cu: goto label_327f4c;
        case 0x327f50u: goto label_327f50;
        case 0x327f54u: goto label_327f54;
        case 0x327f58u: goto label_327f58;
        case 0x327f5cu: goto label_327f5c;
        case 0x327f60u: goto label_327f60;
        case 0x327f64u: goto label_327f64;
        case 0x327f68u: goto label_327f68;
        case 0x327f6cu: goto label_327f6c;
        case 0x327f70u: goto label_327f70;
        case 0x327f74u: goto label_327f74;
        case 0x327f78u: goto label_327f78;
        case 0x327f7cu: goto label_327f7c;
        case 0x327f80u: goto label_327f80;
        case 0x327f84u: goto label_327f84;
        case 0x327f88u: goto label_327f88;
        case 0x327f8cu: goto label_327f8c;
        case 0x327f90u: goto label_327f90;
        case 0x327f94u: goto label_327f94;
        case 0x327f98u: goto label_327f98;
        case 0x327f9cu: goto label_327f9c;
        case 0x327fa0u: goto label_327fa0;
        case 0x327fa4u: goto label_327fa4;
        case 0x327fa8u: goto label_327fa8;
        case 0x327facu: goto label_327fac;
        case 0x327fb0u: goto label_327fb0;
        case 0x327fb4u: goto label_327fb4;
        case 0x327fb8u: goto label_327fb8;
        case 0x327fbcu: goto label_327fbc;
        case 0x327fc0u: goto label_327fc0;
        case 0x327fc4u: goto label_327fc4;
        case 0x327fc8u: goto label_327fc8;
        case 0x327fccu: goto label_327fcc;
        case 0x327fd0u: goto label_327fd0;
        case 0x327fd4u: goto label_327fd4;
        case 0x327fd8u: goto label_327fd8;
        case 0x327fdcu: goto label_327fdc;
        case 0x327fe0u: goto label_327fe0;
        case 0x327fe4u: goto label_327fe4;
        case 0x327fe8u: goto label_327fe8;
        case 0x327fecu: goto label_327fec;
        case 0x327ff0u: goto label_327ff0;
        case 0x327ff4u: goto label_327ff4;
        case 0x327ff8u: goto label_327ff8;
        case 0x327ffcu: goto label_327ffc;
        case 0x328000u: goto label_328000;
        case 0x328004u: goto label_328004;
        case 0x328008u: goto label_328008;
        case 0x32800cu: goto label_32800c;
        case 0x328010u: goto label_328010;
        case 0x328014u: goto label_328014;
        case 0x328018u: goto label_328018;
        case 0x32801cu: goto label_32801c;
        case 0x328020u: goto label_328020;
        case 0x328024u: goto label_328024;
        case 0x328028u: goto label_328028;
        case 0x32802cu: goto label_32802c;
        case 0x328030u: goto label_328030;
        case 0x328034u: goto label_328034;
        case 0x328038u: goto label_328038;
        case 0x32803cu: goto label_32803c;
        case 0x328040u: goto label_328040;
        case 0x328044u: goto label_328044;
        case 0x328048u: goto label_328048;
        case 0x32804cu: goto label_32804c;
        case 0x328050u: goto label_328050;
        case 0x328054u: goto label_328054;
        case 0x328058u: goto label_328058;
        case 0x32805cu: goto label_32805c;
        case 0x328060u: goto label_328060;
        case 0x328064u: goto label_328064;
        case 0x328068u: goto label_328068;
        case 0x32806cu: goto label_32806c;
        case 0x328070u: goto label_328070;
        case 0x328074u: goto label_328074;
        case 0x328078u: goto label_328078;
        case 0x32807cu: goto label_32807c;
        case 0x328080u: goto label_328080;
        case 0x328084u: goto label_328084;
        case 0x328088u: goto label_328088;
        case 0x32808cu: goto label_32808c;
        case 0x328090u: goto label_328090;
        case 0x328094u: goto label_328094;
        case 0x328098u: goto label_328098;
        case 0x32809cu: goto label_32809c;
        case 0x3280a0u: goto label_3280a0;
        case 0x3280a4u: goto label_3280a4;
        case 0x3280a8u: goto label_3280a8;
        case 0x3280acu: goto label_3280ac;
        case 0x3280b0u: goto label_3280b0;
        case 0x3280b4u: goto label_3280b4;
        case 0x3280b8u: goto label_3280b8;
        case 0x3280bcu: goto label_3280bc;
        case 0x3280c0u: goto label_3280c0;
        case 0x3280c4u: goto label_3280c4;
        case 0x3280c8u: goto label_3280c8;
        case 0x3280ccu: goto label_3280cc;
        case 0x3280d0u: goto label_3280d0;
        case 0x3280d4u: goto label_3280d4;
        case 0x3280d8u: goto label_3280d8;
        case 0x3280dcu: goto label_3280dc;
        case 0x3280e0u: goto label_3280e0;
        case 0x3280e4u: goto label_3280e4;
        case 0x3280e8u: goto label_3280e8;
        case 0x3280ecu: goto label_3280ec;
        case 0x3280f0u: goto label_3280f0;
        case 0x3280f4u: goto label_3280f4;
        case 0x3280f8u: goto label_3280f8;
        case 0x3280fcu: goto label_3280fc;
        case 0x328100u: goto label_328100;
        case 0x328104u: goto label_328104;
        case 0x328108u: goto label_328108;
        case 0x32810cu: goto label_32810c;
        case 0x328110u: goto label_328110;
        case 0x328114u: goto label_328114;
        case 0x328118u: goto label_328118;
        case 0x32811cu: goto label_32811c;
        case 0x328120u: goto label_328120;
        case 0x328124u: goto label_328124;
        case 0x328128u: goto label_328128;
        case 0x32812cu: goto label_32812c;
        case 0x328130u: goto label_328130;
        case 0x328134u: goto label_328134;
        case 0x328138u: goto label_328138;
        case 0x32813cu: goto label_32813c;
        case 0x328140u: goto label_328140;
        case 0x328144u: goto label_328144;
        case 0x328148u: goto label_328148;
        case 0x32814cu: goto label_32814c;
        case 0x328150u: goto label_328150;
        case 0x328154u: goto label_328154;
        case 0x328158u: goto label_328158;
        case 0x32815cu: goto label_32815c;
        case 0x328160u: goto label_328160;
        case 0x328164u: goto label_328164;
        case 0x328168u: goto label_328168;
        case 0x32816cu: goto label_32816c;
        case 0x328170u: goto label_328170;
        case 0x328174u: goto label_328174;
        case 0x328178u: goto label_328178;
        case 0x32817cu: goto label_32817c;
        case 0x328180u: goto label_328180;
        case 0x328184u: goto label_328184;
        case 0x328188u: goto label_328188;
        case 0x32818cu: goto label_32818c;
        case 0x328190u: goto label_328190;
        case 0x328194u: goto label_328194;
        case 0x328198u: goto label_328198;
        case 0x32819cu: goto label_32819c;
        case 0x3281a0u: goto label_3281a0;
        case 0x3281a4u: goto label_3281a4;
        case 0x3281a8u: goto label_3281a8;
        case 0x3281acu: goto label_3281ac;
        case 0x3281b0u: goto label_3281b0;
        case 0x3281b4u: goto label_3281b4;
        case 0x3281b8u: goto label_3281b8;
        case 0x3281bcu: goto label_3281bc;
        case 0x3281c0u: goto label_3281c0;
        case 0x3281c4u: goto label_3281c4;
        case 0x3281c8u: goto label_3281c8;
        case 0x3281ccu: goto label_3281cc;
        case 0x3281d0u: goto label_3281d0;
        case 0x3281d4u: goto label_3281d4;
        case 0x3281d8u: goto label_3281d8;
        case 0x3281dcu: goto label_3281dc;
        case 0x3281e0u: goto label_3281e0;
        case 0x3281e4u: goto label_3281e4;
        case 0x3281e8u: goto label_3281e8;
        case 0x3281ecu: goto label_3281ec;
        case 0x3281f0u: goto label_3281f0;
        case 0x3281f4u: goto label_3281f4;
        case 0x3281f8u: goto label_3281f8;
        case 0x3281fcu: goto label_3281fc;
        case 0x328200u: goto label_328200;
        case 0x328204u: goto label_328204;
        case 0x328208u: goto label_328208;
        case 0x32820cu: goto label_32820c;
        case 0x328210u: goto label_328210;
        case 0x328214u: goto label_328214;
        case 0x328218u: goto label_328218;
        case 0x32821cu: goto label_32821c;
        case 0x328220u: goto label_328220;
        case 0x328224u: goto label_328224;
        case 0x328228u: goto label_328228;
        case 0x32822cu: goto label_32822c;
        case 0x328230u: goto label_328230;
        case 0x328234u: goto label_328234;
        default: break;
    }

    ctx->pc = 0x327c30u;

label_327c30:
    // 0x327c30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x327c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_327c34:
    // 0x327c34: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x327c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_327c38:
    // 0x327c38: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x327c38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
label_327c3c:
    // 0x327c3c: 0x27c203c0  addiu       $v0, $fp, 0x3C0
    ctx->pc = 0x327c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_327c40:
    // 0x327c40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x327c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_327c44:
    // 0x327c44: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x327c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_327c48:
    // 0x327c48: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x327c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_327c4c:
    // 0x327c4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_327c50:
    // 0x327c50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x327c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_327c54:
    // 0x327c54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x327c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_327c58:
    // 0x327c58: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x327c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_327c5c:
    // 0x327c5c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x327c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_327c60:
    // 0x327c60: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x327c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_327c64:
    // 0x327c64: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x327c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_327c68:
    // 0x327c68: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x327c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_327c6c:
    // 0x327c6c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x327c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327c70:
    // 0x327c70: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x327c70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_327c74:
    // 0x327c74: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x327c74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_327c78:
    // 0x327c78: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x327c78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_327c7c:
    // 0x327c7c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x327c7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_327c80:
    // 0x327c80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x327c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327c84:
    // 0x327c84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x327c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_327c88:
    // 0x327c88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x327c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_327c8c:
    // 0x327c8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x327c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_327c90:
    // 0x327c90: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_327c94:
    if (ctx->pc == 0x327C94u) {
        ctx->pc = 0x327C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C90u;
        // 0x327c94: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327C98u;
        goto label_327c98;
    }
    ctx->pc = 0x327C90u;
    {
        const bool branch_taken_0x327c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C90u;
        // 0x327c94: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c90) {
            ctx->pc = 0x327D58u;
            goto label_327d58;
        }
    }
    ctx->pc = 0x327C98u;
label_327c98:
    // 0x327c98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x327c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_327c9c:
    // 0x327c9c: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x327c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_327ca0:
    // 0x327ca0: 0x0  nop
    ctx->pc = 0x327ca0u;
    // NOP
label_327ca4:
    // 0x327ca4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_327ca8:
    if (ctx->pc == 0x327CA8u) {
        ctx->pc = 0x327CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CA4u;
        // 0x327ca8: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327CACu;
        goto label_327cac;
    }
    ctx->pc = 0x327CA4u;
    {
        const bool branch_taken_0x327ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CA4u;
        // 0x327ca8: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ca4) {
            ctx->pc = 0x327C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327c88;
        }
    }
    ctx->pc = 0x327CACu;
label_327cac:
    // 0x327cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x327cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327cb0:
    // 0x327cb0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x327cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_327cb4:
    // 0x327cb4: 0x27c703c0  addiu       $a3, $fp, 0x3C0
    ctx->pc = 0x327cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_327cb8:
    // 0x327cb8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x327cb8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_327cbc:
    // 0x327cbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327cc0:
    // 0x327cc0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x327cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_327cc4:
    // 0x327cc4: 0x26f00d00  addiu       $s0, $s7, 0xD00
    ctx->pc = 0x327cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3328));
label_327cc8:
    // 0x327cc8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x327cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_327ccc:
    // 0x327ccc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x327cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_327cd0:
    // 0x327cd0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x327cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_327cd4:
    // 0x327cd4: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x327cd4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
label_327cd8:
    // 0x327cd8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x327cd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_327cdc:
    // 0x327cdc: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x327cdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_327ce0:
    // 0x327ce0: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x327ce0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
label_327ce4:
    // 0x327ce4: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x327ce4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_327ce8:
    // 0x327ce8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x327ce8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_327cec:
    // 0x327cec: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x327cecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_327cf0:
    // 0x327cf0: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x327cf0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
label_327cf4:
    // 0x327cf4: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x327cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_327cf8:
    // 0x327cf8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x327cf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_327cfc:
    // 0x327cfc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x327cfcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_327d00:
    // 0x327d00: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x327d00u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
label_327d04:
    // 0x327d04: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x327d04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_327d08:
    // 0x327d08: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x327d08u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_327d0c:
    // 0x327d0c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x327d0cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_327d10:
    // 0x327d10: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x327d10u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_327d14:
    // 0x327d14: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x327d14u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_327d18:
    // 0x327d18: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x327d18u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_327d1c:
    // 0x327d1c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_327d20:
    if (ctx->pc == 0x327D20u) {
        ctx->pc = 0x327D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D1Cu;
        // 0x327d20: 0x26120068  addiu       $s2, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D24u;
        goto label_327d24;
    }
    ctx->pc = 0x327D1Cu;
    {
        const bool branch_taken_0x327d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D1Cu;
        // 0x327d20: 0x26120068  addiu       $s2, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d1c) {
            ctx->pc = 0x327D78u;
            goto label_327d78;
        }
    }
    ctx->pc = 0x327D24u;
label_327d24:
    // 0x327d24: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x327d24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_327d28:
    // 0x327d28: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x327d28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_327d2c:
    // 0x327d2c: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x327d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_327d30:
    // 0x327d30: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x327d30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
label_327d34:
    // 0x327d34: 0x26120068  addiu       $s2, $s0, 0x68
    ctx->pc = 0x327d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_327d38:
    // 0x327d38: 0xc0c88a2  jal         func_322288
label_327d3c:
    if (ctx->pc == 0x327D3Cu) {
        ctx->pc = 0x327D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D38u;
        // 0x327d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D40u;
        goto label_327d40;
    }
    ctx->pc = 0x327D38u;
    SET_GPR_U32(ctx, 31, 0x327D40u);
    ctx->pc = 0x327D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D38u;
    // 0x327d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x327D38u, 0x327D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D40u;
label_327d40:
    // 0x327d40: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x327d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_327d44:
    // 0x327d44: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x327d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_327d48:
    // 0x327d48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x327d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_327d4c:
    // 0x327d4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_327d50:
    if (ctx->pc == 0x327D50u) {
        ctx->pc = 0x327D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D4Cu;
        // 0x327d50: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D54u;
        goto label_327d54;
    }
    ctx->pc = 0x327D4Cu;
    {
        const bool branch_taken_0x327d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D4Cu;
        // 0x327d50: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d4c) {
            ctx->pc = 0x327D78u;
            goto label_327d78;
        }
    }
    ctx->pc = 0x327D54u;
label_327d54:
    // 0x327d54: 0x0  nop
    ctx->pc = 0x327d54u;
    // NOP
label_327d58:
    // 0x327d58: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x327d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_327d5c:
    // 0x327d5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327d60:
    // 0x327d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x327d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_327d64:
    // 0x327d64: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x327d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_327d68:
    // 0x327d68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x327d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_327d6c:
    // 0x327d6c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x327d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_327d70:
    // 0x327d70: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_327d74:
    if (ctx->pc == 0x327D74u) {
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D78u;
        goto label_327d78;
    }
    ctx->pc = 0x327D70u;
    {
        const bool branch_taken_0x327d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D70u;
        // 0x327d74: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d70) {
            ctx->pc = 0x327CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327cb0;
        }
    }
    ctx->pc = 0x327D78u;
label_327d78:
    // 0x327d78: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x327d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_327d7c:
    // 0x327d7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327d80:
    // 0x327d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_327d84:
    if (ctx->pc == 0x327D84u) {
        ctx->pc = 0x327D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D80u;
        // 0x327d84: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D88u;
        goto label_327d88;
    }
    ctx->pc = 0x327D80u;
    {
        const bool branch_taken_0x327d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D80u;
        // 0x327d84: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d80) {
            ctx->pc = 0x327D94u;
            goto label_327d94;
        }
    }
    ctx->pc = 0x327D88u;
label_327d88:
    // 0x327d88: 0xc0c8b1c  jal         func_322C70
label_327d8c:
    if (ctx->pc == 0x327D8Cu) {
        ctx->pc = 0x327D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D88u;
        // 0x327d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327D90u;
        goto label_327d90;
    }
    ctx->pc = 0x327D88u;
    SET_GPR_U32(ctx, 31, 0x327D90u);
    ctx->pc = 0x327D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327D88u;
    // 0x327d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x327D88u, 0x327D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D90u;
label_327d90:
    // 0x327d90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x327d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327d94:
    // 0x327d94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_327d98:
    // 0x327d98: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_327d9c:
    // 0x327d9c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x327d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_327da0:
    // 0x327da0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_327da4:
    if (ctx->pc == 0x327DA4u) {
        ctx->pc = 0x327DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DA0u;
        // 0x327da4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DA8u;
        goto label_327da8;
    }
    ctx->pc = 0x327DA0u;
    {
        const bool branch_taken_0x327da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x327da0) {
            ctx->pc = 0x327DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327DA0u;
            // 0x327da4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327DC0u;
            goto label_327dc0;
        }
    }
    ctx->pc = 0x327DA8u;
label_327da8:
    // 0x327da8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_327dac:
    // 0x327dac: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327db0:
    // 0x327db0: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x327db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_327db4:
    // 0x327db4: 0x10000006  b           . + 4 + (0x6 << 2)
label_327db8:
    if (ctx->pc == 0x327DB8u) {
        ctx->pc = 0x327DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB4u;
        // 0x327db8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DBCu;
        goto label_327dbc;
    }
    ctx->pc = 0x327DB4u;
    {
        const bool branch_taken_0x327db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB4u;
        // 0x327db8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327db4) {
            ctx->pc = 0x327DD0u;
            goto label_327dd0;
        }
    }
    ctx->pc = 0x327DBCu;
label_327dbc:
    // 0x327dbc: 0x0  nop
    ctx->pc = 0x327dbcu;
    // NOP
label_327dc0:
    // 0x327dc0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327dc4:
    // 0x327dc4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x327dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_327dc8:
    // 0x327dc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x327dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_327dcc:
    // 0x327dcc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x327dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_327dd0:
    // 0x327dd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x327dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_327dd4:
    // 0x327dd4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x327dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_327dd8:
    // 0x327dd8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x327dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_327ddc:
    // 0x327ddc: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x327ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_327de0:
    // 0x327de0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x327de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_327de4:
    // 0x327de4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_327de8:
    // 0x327de8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x327de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_327dec:
    // 0x327dec: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x327decu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_327df0:
    // 0x327df0: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x327df0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_327df4:
    // 0x327df4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x327df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_327df8:
    // 0x327df8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x327df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_327dfc:
    // 0x327dfc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x327dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_327e00:
    // 0x327e00: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x327e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_327e04:
    // 0x327e04: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_327e08:
    // 0x327e08: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_327e0c:
    if (ctx->pc == 0x327E0Cu) {
        ctx->pc = 0x327E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E08u;
        // 0x327e0c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E10u;
        goto label_327e10;
    }
    ctx->pc = 0x327E08u;
    {
        const bool branch_taken_0x327e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E08u;
        // 0x327e0c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e08) {
            ctx->pc = 0x327EA4u;
            goto label_327ea4;
        }
    }
    ctx->pc = 0x327E10u;
label_327e10:
    // 0x327e10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x327e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_327e14:
    // 0x327e14: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x327e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_327e18:
    // 0x327e18: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x327e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_327e1c:
    // 0x327e1c: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x327e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
label_327e20:
    // 0x327e20: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x327e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_327e24:
    // 0x327e24: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x327e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
label_327e28:
    // 0x327e28: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x327e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_327e2c:
    // 0x327e2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_327e30:
    // 0x327e30: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x327e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_327e34:
    // 0x327e34: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x327e34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_327e38:
    // 0x327e38: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x327e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_327e3c:
    // 0x327e3c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x327e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_327e40:
    // 0x327e40: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x327e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_327e44:
    // 0x327e44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x327e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_327e48:
    // 0x327e48: 0xc0ce5b2  jal         func_3396C8
label_327e4c:
    if (ctx->pc == 0x327E4Cu) {
        ctx->pc = 0x327E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E48u;
        // 0x327e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E50u;
        goto label_327e50;
    }
    ctx->pc = 0x327E48u;
    SET_GPR_U32(ctx, 31, 0x327E50u);
    ctx->pc = 0x327E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E48u;
    // 0x327e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x327E48u, 0x327E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E50u;
label_327e50:
    // 0x327e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327e54:
    // 0x327e54: 0xc0ce5a2  jal         func_339688
label_327e58:
    if (ctx->pc == 0x327E58u) {
        ctx->pc = 0x327E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E54u;
        // 0x327e58: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E5Cu;
        goto label_327e5c;
    }
    ctx->pc = 0x327E54u;
    SET_GPR_U32(ctx, 31, 0x327E5Cu);
    ctx->pc = 0x327E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E54u;
    // 0x327e58: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x327E54u, 0x327E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E5Cu;
label_327e5c:
    // 0x327e5c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x327e5cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
label_327e60:
    // 0x327e60: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x327e60u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_327e64:
    // 0x327e64: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x327e64u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
label_327e68:
    // 0x327e68: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x327e68u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
label_327e6c:
    // 0x327e6c: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x327e6cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
label_327e70:
    // 0x327e70: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x327e70u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
label_327e74:
    // 0x327e74: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x327e74u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
label_327e78:
    // 0x327e78: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x327e78u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_327e7c:
    // 0x327e7c: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x327e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
label_327e80:
    // 0x327e80: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x327e80u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
label_327e84:
    // 0x327e84: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x327e84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
label_327e88:
    // 0x327e88: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x327e88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
label_327e8c:
    // 0x327e8c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x327e8cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
label_327e90:
    // 0x327e90: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x327e90u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_327e94:
    // 0x327e94: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x327e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_327e98:
    // 0x327e98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x327e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_327e9c:
    // 0x327e9c: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x327e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 17));
label_327ea0:
    // 0x327ea0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x327ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_327ea4:
    // 0x327ea4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x327ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_327ea8:
    // 0x327ea8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_327eac:
    // 0x327eac: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x327eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_327eb0:
    // 0x327eb0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_327eb4:
    if (ctx->pc == 0x327EB4u) {
        ctx->pc = 0x327EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB0u;
        // 0x327eb4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EB8u;
        goto label_327eb8;
    }
    ctx->pc = 0x327EB0u;
    {
        const bool branch_taken_0x327eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x327eb0) {
            ctx->pc = 0x327EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327EB0u;
            // 0x327eb4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327ED0u;
            goto label_327ed0;
        }
    }
    ctx->pc = 0x327EB8u;
label_327eb8:
    // 0x327eb8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_327ebc:
    // 0x327ebc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327ec0:
    // 0x327ec0: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x327ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_327ec4:
    // 0x327ec4: 0x10000006  b           . + 4 + (0x6 << 2)
label_327ec8:
    if (ctx->pc == 0x327EC8u) {
        ctx->pc = 0x327EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EC4u;
        // 0x327ec8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327ECCu;
        goto label_327ecc;
    }
    ctx->pc = 0x327EC4u;
    {
        const bool branch_taken_0x327ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EC4u;
        // 0x327ec8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ec4) {
            ctx->pc = 0x327EE0u;
            goto label_327ee0;
        }
    }
    ctx->pc = 0x327ECCu;
label_327ecc:
    // 0x327ecc: 0x0  nop
    ctx->pc = 0x327eccu;
    // NOP
label_327ed0:
    // 0x327ed0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327ed4:
    // 0x327ed4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x327ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_327ed8:
    // 0x327ed8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x327ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_327edc:
    // 0x327edc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x327edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_327ee0:
    // 0x327ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x327ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_327ee4:
    // 0x327ee4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x327ee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_327ee8:
    // 0x327ee8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x327ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_327eec:
    // 0x327eec: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x327eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_327ef0:
    // 0x327ef0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x327ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_327ef4:
    // 0x327ef4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_327ef8:
    // 0x327ef8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x327ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_327efc:
    // 0x327efc: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x327efcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_327f00:
    // 0x327f00: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x327f00u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
label_327f04:
    // 0x327f04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x327f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_327f08:
    // 0x327f08: 0x26e40d00  addiu       $a0, $s7, 0xD00
    ctx->pc = 0x327f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3328));
label_327f0c:
    // 0x327f0c: 0x249000c8  addiu       $s0, $a0, 0xC8
    ctx->pc = 0x327f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_327f10:
    // 0x327f10: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x327f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
label_327f14:
    // 0x327f14: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x327f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_327f18:
    // 0x327f18: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x327f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_327f1c:
    // 0x327f1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x327f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_327f20:
    // 0x327f20: 0xc0c88e6  jal         func_322398
label_327f24:
    if (ctx->pc == 0x327F24u) {
        ctx->pc = 0x327F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F20u;
        // 0x327f24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F28u;
        goto label_327f28;
    }
    ctx->pc = 0x327F20u;
    SET_GPR_U32(ctx, 31, 0x327F28u);
    ctx->pc = 0x327F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F20u;
    // 0x327f24: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322398u, 0x327F20u, 0x327F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F28u;
label_327f28:
    // 0x327f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x327f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327f2c:
    // 0x327f2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x327f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_327f30:
    // 0x327f30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_327f34:
    if (ctx->pc == 0x327F34u) {
        ctx->pc = 0x327F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F30u;
        // 0x327f34: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F38u;
        goto label_327f38;
    }
    ctx->pc = 0x327F30u;
    {
        const bool branch_taken_0x327f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327f30) {
            ctx->pc = 0x327F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F30u;
            // 0x327f34: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F48u;
            goto label_327f48;
        }
    }
    ctx->pc = 0x327F38u;
label_327f38:
    // 0x327f38: 0xc0cfd96  jal         func_33F658
label_327f3c:
    if (ctx->pc == 0x327F3Cu) {
        ctx->pc = 0x327F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F38u;
        // 0x327f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F40u;
        goto label_327f40;
    }
    ctx->pc = 0x327F38u;
    SET_GPR_U32(ctx, 31, 0x327F40u);
    ctx->pc = 0x327F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327F38u;
    // 0x327f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F658u, 0x327F38u, 0x327F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327F40u;
label_327f40:
    // 0x327f40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x327f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_327f44:
    // 0x327f44: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x327f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_327f48:
    // 0x327f48: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x327f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_327f4c:
    // 0x327f4c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x327f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_327f50:
    // 0x327f50: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_327f54:
    if (ctx->pc == 0x327F54u) {
        ctx->pc = 0x327F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F50u;
        // 0x327f54: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F58u;
        goto label_327f58;
    }
    ctx->pc = 0x327F50u;
    {
        const bool branch_taken_0x327f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x327f50) {
            ctx->pc = 0x327F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F50u;
            // 0x327f54: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F70u;
            goto label_327f70;
        }
    }
    ctx->pc = 0x327F58u;
label_327f58:
    // 0x327f58: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x327f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_327f5c:
    // 0x327f5c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327f60:
    // 0x327f60: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x327f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_327f64:
    // 0x327f64: 0x10000006  b           . + 4 + (0x6 << 2)
label_327f68:
    if (ctx->pc == 0x327F68u) {
        ctx->pc = 0x327F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F64u;
        // 0x327f68: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F6Cu;
        goto label_327f6c;
    }
    ctx->pc = 0x327F64u;
    {
        const bool branch_taken_0x327f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F64u;
        // 0x327f68: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f64) {
            ctx->pc = 0x327F80u;
            goto label_327f80;
        }
    }
    ctx->pc = 0x327F6Cu;
label_327f6c:
    // 0x327f6c: 0x0  nop
    ctx->pc = 0x327f6cu;
    // NOP
label_327f70:
    // 0x327f70: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x327f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_327f74:
    // 0x327f74: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x327f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_327f78:
    // 0x327f78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x327f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_327f7c:
    // 0x327f7c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x327f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_327f80:
    // 0x327f80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x327f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_327f84:
    // 0x327f84: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x327f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_327f88:
    // 0x327f88: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x327f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_327f8c:
    // 0x327f8c: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x327f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
label_327f90:
    // 0x327f90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x327f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_327f94:
    // 0x327f94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_327f98:
    // 0x327f98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x327f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_327f9c:
    // 0x327f9c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x327f9cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_327fa0:
    // 0x327fa0: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x327fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_327fa4:
    // 0x327fa4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x327fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_327fa8:
    // 0x327fa8: 0x3c048100  lui         $a0, 0x8100
    ctx->pc = 0x327fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33024 << 16));
label_327fac:
    // 0x327fac: 0x34840007  ori         $a0, $a0, 0x7
    ctx->pc = 0x327facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7);
label_327fb0:
    // 0x327fb0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x327fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_327fb4:
    // 0x327fb4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x327fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_327fb8:
    // 0x327fb8: 0xc0c952e  jal         func_3254B8
label_327fbc:
    if (ctx->pc == 0x327FBCu) {
        ctx->pc = 0x327FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FB8u;
        // 0x327fbc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FC0u;
        goto label_327fc0;
    }
    ctx->pc = 0x327FB8u;
    SET_GPR_U32(ctx, 31, 0x327FC0u);
    ctx->pc = 0x327FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FB8u;
    // 0x327fbc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x327FB8u, 0x327FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FC0u;
label_327fc0:
    // 0x327fc0: 0x26e40d00  addiu       $a0, $s7, 0xD00
    ctx->pc = 0x327fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3328));
label_327fc4:
    // 0x327fc4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x327fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327fc8:
    // 0x327fc8: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x327fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_327fcc:
    // 0x327fcc: 0xaec8000c  sw          $t0, 0xC($s6)
    ctx->pc = 0x327fccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 8));
label_327fd0:
    // 0x327fd0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x327fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_327fd4:
    // 0x327fd4: 0x3c056c02  lui         $a1, 0x6C02
    ctx->pc = 0x327fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27650 << 16));
label_327fd8:
    // 0x327fd8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x327fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_327fdc:
    // 0x327fdc: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x327fdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
label_327fe0:
    // 0x327fe0: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x327fe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_327fe4:
    // 0x327fe4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x327fe4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_327fe8:
    // 0x327fe8: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x327fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_327fec:
    // 0x327fec: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x327fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_327ff0:
    // 0x327ff0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x327ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_327ff4:
    // 0x327ff4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x327ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_327ff8:
    // 0x327ff8: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x327ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_327ffc:
    // 0x327ffc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x327ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_328000:
    // 0x328000: 0xae260014  sw          $a2, 0x14($s1)
    ctx->pc = 0x328000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 6));
label_328004:
    // 0x328004: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x328004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_328008:
    // 0x328008: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x328008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_32800c:
    // 0x32800c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x32800cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_328010:
    // 0x328010: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x328010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_328014:
    // 0x328014: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x328014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_328018:
    // 0x328018: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x328018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_32801c:
    // 0x32801c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328020:
    // 0x328020: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x328020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_328024:
    // 0x328024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x328024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_328028:
    // 0x328028: 0x70473b89  pcpyld      $a3, $v0, $a3
    ctx->pc = 0x328028u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_32802c:
    // 0x32802c: 0x7e270000  sq          $a3, 0x0($s1)
    ctx->pc = 0x32802cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 7));
label_328030:
    // 0x328030: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x328030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328034:
    // 0x328034: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x328034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_328038:
    // 0x328038: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x328038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_32803c:
    // 0x32803c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x32803cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_328040:
    // 0x328040: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_328044:
    if (ctx->pc == 0x328044u) {
        ctx->pc = 0x328044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328040u;
        // 0x328044: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328048u;
        goto label_328048;
    }
    ctx->pc = 0x328040u;
    {
        const bool branch_taken_0x328040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328040u;
        // 0x328044: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328040) {
            ctx->pc = 0x32805Cu;
            goto label_32805c;
        }
    }
    ctx->pc = 0x328048u;
label_328048:
    // 0x328048: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x328048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32804c:
    // 0x32804c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328050:
    // 0x328050: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x328050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_328054:
    // 0x328054: 0x60f809  jalr        $v1
label_328058:
    if (ctx->pc == 0x328058u) {
        ctx->pc = 0x328058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328054u;
        // 0x328058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32805Cu;
        goto label_32805c;
    }
    ctx->pc = 0x328054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32805Cu);
        ctx->pc = 0x328058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328054u;
        // 0x328058: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328054u, 0x32805Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32805Cu;
label_32805c:
    // 0x32805c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32805cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328060:
    // 0x328060: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x328060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
label_328064:
    // 0x328064: 0x32a30020  andi        $v1, $s5, 0x20
    ctx->pc = 0x328064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_328068:
    // 0x328068: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_32806c:
    // 0x32806c: 0x32a41000  andi        $a0, $s5, 0x1000
    ctx->pc = 0x32806cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_328070:
    // 0x328070: 0x34470002  ori         $a3, $v0, 0x2
    ctx->pc = 0x328070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_328074:
    // 0x328074: 0x32a60800  andi        $a2, $s5, 0x800
    ctx->pc = 0x328074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2048);
label_328078:
    // 0x328078: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x328078u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_32807c:
    // 0x32807c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x32807cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_328080:
    // 0x328080: 0x34e20004  ori         $v0, $a3, 0x4
    ctx->pc = 0x328080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_328084:
    // 0x328084: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x328084u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_328088:
    // 0x328088: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x328088u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_32808c:
    // 0x32808c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x32808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_328090:
    // 0x328090: 0x34e20008  ori         $v0, $a3, 0x8
    ctx->pc = 0x328090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_328094:
    // 0x328094: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x328094u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_328098:
    // 0x328098: 0xc0c9eec  jal         func_327BB0
label_32809c:
    if (ctx->pc == 0x32809Cu) {
        ctx->pc = 0x32809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328098u;
        // 0x32809c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280A0u;
        goto label_3280a0;
    }
    ctx->pc = 0x328098u;
    SET_GPR_U32(ctx, 31, 0x3280A0u);
    ctx->pc = 0x32809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328098u;
    // 0x32809c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327BB0u, 0x328098u, 0x3280A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280A0u;
label_3280a0:
    // 0x3280a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3280a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3280a4:
    // 0x3280a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3280a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3280a8:
    // 0x3280a8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3280a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3280ac:
    // 0x3280ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3280acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3280b0:
    // 0x3280b0: 0xc0d0ba8  jal         func_342EA0
label_3280b4:
    if (ctx->pc == 0x3280B4u) {
        ctx->pc = 0x3280B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B0u;
        // 0x3280b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280B8u;
        goto label_3280b8;
    }
    ctx->pc = 0x3280B0u;
    SET_GPR_U32(ctx, 31, 0x3280B8u);
    ctx->pc = 0x3280B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280B0u;
    // 0x3280b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EA0u, 0x3280B0u, 0x3280B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280B8u;
label_3280b8:
    // 0x3280b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3280b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3280bc:
    // 0x3280bc: 0xc0ca08e  jal         func_328238
label_3280c0:
    if (ctx->pc == 0x3280C0u) {
        ctx->pc = 0x3280C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280BCu;
        // 0x3280c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280C4u;
        goto label_3280c4;
    }
    ctx->pc = 0x3280BCu;
    SET_GPR_U32(ctx, 31, 0x3280C4u);
    ctx->pc = 0x3280C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280BCu;
    // 0x3280c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328238u, 0x3280BCu, 0x3280C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280C4u;
label_3280c4:
    // 0x3280c4: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x3280c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3280c8:
    // 0x3280c8: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x3280c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3280cc:
    // 0x3280cc: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_3280d0:
    if (ctx->pc == 0x3280D0u) {
        ctx->pc = 0x3280D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280CCu;
        // 0x3280d0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280D4u;
        goto label_3280d4;
    }
    ctx->pc = 0x3280CCu;
    {
        const bool branch_taken_0x3280cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280CCu;
        // 0x3280d0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280cc) {
            ctx->pc = 0x328170u;
            goto label_328170;
        }
    }
    ctx->pc = 0x3280D4u;
label_3280d4:
    // 0x3280d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3280d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3280d8:
    // 0x3280d8: 0x27d103c0  addiu       $s1, $fp, 0x3C0
    ctx->pc = 0x3280d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_3280dc:
    // 0x3280dc: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x3280dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_3280e0:
    // 0x3280e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3280e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3280e4:
    // 0x3280e4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x3280e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3280e8:
    // 0x3280e8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x3280e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_3280ec:
    // 0x3280ec: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3280ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3280f0:
    // 0x3280f0: 0xc0ce218  jal         func_338860
label_3280f4:
    if (ctx->pc == 0x3280F4u) {
        ctx->pc = 0x3280F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280F0u;
        // 0x3280f4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280F8u;
        goto label_3280f8;
    }
    ctx->pc = 0x3280F0u;
    SET_GPR_U32(ctx, 31, 0x3280F8u);
    ctx->pc = 0x3280F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280F0u;
    // 0x3280f4: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x3280F0u, 0x3280F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280F8u;
label_3280f8:
    // 0x3280f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3280f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3280fc:
    // 0x3280fc: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x3280fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_328100:
    // 0x328100: 0x122902  srl         $a1, $s2, 4
    ctx->pc = 0x328100u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
label_328104:
    // 0x328104: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x328104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_328108:
    // 0x328108: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x328108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_32810c:
    // 0x32810c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32810cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_328110:
    // 0x328110: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x328110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_328114:
    // 0x328114: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x328114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
label_328118:
    // 0x328118: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x328118u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_32811c:
    // 0x32811c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32811cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_328120:
    // 0x328120: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x328120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_328124:
    // 0x328124: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x328124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_328128:
    // 0x328128: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x328128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
label_32812c:
    // 0x32812c: 0x32623fff  andi        $v0, $s3, 0x3FFF
    ctx->pc = 0x32812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
label_328130:
    // 0x328130: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x328130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_328134:
    // 0x328134: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x328134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_328138:
    // 0x328138: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x328138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_32813c:
    // 0x32813c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32813cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2)); // MMIO: 0x1000d080
label_328140:
    // 0x328140: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x328140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_328144:
    // 0x328144: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x328144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
label_328148:
    // 0x328148: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x328148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_32814c:
    // 0x32814c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x32814cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x1000d080
label_328150:
    // 0x328150: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x328150u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
label_328154:
    // 0x328154: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x328154u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e010
label_328158:
    // 0x328158: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x328158u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000d000
label_32815c:
    // 0x32815c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32815cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_328160:
    // 0x328160: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x328160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_328164:
    // 0x328164: 0x10000003  b           . + 4 + (0x3 << 2)
label_328168:
    if (ctx->pc == 0x328168u) {
        ctx->pc = 0x328168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328164u;
        // 0x328168: 0x8fb30000  lw          $s3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32816Cu;
        goto label_32816c;
    }
    ctx->pc = 0x328164u;
    {
        const bool branch_taken_0x328164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328164u;
        // 0x328168: 0x8fb30000  lw          $s3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328164) {
            ctx->pc = 0x328174u;
            goto label_328174;
        }
    }
    ctx->pc = 0x32816Cu;
label_32816c:
    // 0x32816c: 0x0  nop
    ctx->pc = 0x32816cu;
    // NOP
label_328170:
    // 0x328170: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x328170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328174:
    // 0x328174: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x328174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_328178:
    // 0x328178: 0x27c403c0  addiu       $a0, $fp, 0x3C0
    ctx->pc = 0x328178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_32817c:
    // 0x32817c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x32817cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_328180:
    // 0x328180: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x328180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_328184:
    // 0x328184: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x328184u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
label_328188:
    // 0x328188: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x328188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32818c:
    // 0x32818c: 0x56630004  bnel        $s3, $v1, . + 4 + (0x4 << 2)
label_328190:
    if (ctx->pc == 0x328190u) {
        ctx->pc = 0x328190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32818Cu;
        // 0x328190: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328194u;
        goto label_328194;
    }
    ctx->pc = 0x32818Cu;
    {
        const bool branch_taken_0x32818c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x32818c) {
            ctx->pc = 0x328190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32818Cu;
            // 0x328190: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3281A0u;
            goto label_3281a0;
        }
    }
    ctx->pc = 0x328194u;
label_328194:
    // 0x328194: 0xac930004  sw          $s3, 0x4($a0)
    ctx->pc = 0x328194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 19));
label_328198:
    // 0x328198: 0x10000011  b           . + 4 + (0x11 << 2)
label_32819c:
    if (ctx->pc == 0x32819Cu) {
        ctx->pc = 0x32819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328198u;
        // 0x32819c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281A0u;
        goto label_3281a0;
    }
    ctx->pc = 0x328198u;
    {
        const bool branch_taken_0x328198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328198u;
        // 0x32819c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328198) {
            ctx->pc = 0x3281E0u;
            goto label_3281e0;
        }
    }
    ctx->pc = 0x3281A0u;
label_3281a0:
    // 0x3281a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3281a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3281a4:
    // 0x3281a4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3281a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_3281a8:
    // 0x3281a8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3281a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3281ac:
    // 0x3281ac: 0x0  nop
    ctx->pc = 0x3281acu;
    // NOP
label_3281b0:
    // 0x3281b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3281b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3281b4:
    // 0x3281b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3281b8:
    if (ctx->pc == 0x3281B8u) {
        ctx->pc = 0x3281B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281B4u;
        // 0x3281b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281BCu;
        goto label_3281bc;
    }
    ctx->pc = 0x3281B4u;
    {
        const bool branch_taken_0x3281b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3281B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281B4u;
        // 0x3281b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281b4) {
            ctx->pc = 0x3281C4u;
            goto label_3281c4;
        }
    }
    ctx->pc = 0x3281BCu;
label_3281bc:
    // 0x3281bc: 0x50b30007  beql        $a1, $s3, . + 4 + (0x7 << 2)
label_3281c0:
    if (ctx->pc == 0x3281C0u) {
        ctx->pc = 0x3281C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281BCu;
        // 0x3281c0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281C4u;
        goto label_3281c4;
    }
    ctx->pc = 0x3281BCu;
    {
        const bool branch_taken_0x3281bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x3281bc) {
            ctx->pc = 0x3281C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3281BCu;
            // 0x3281c0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3281DCu;
            goto label_3281dc;
        }
    }
    ctx->pc = 0x3281C4u;
label_3281c4:
    // 0x3281c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3281c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3281c8:
    // 0x3281c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3281c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3281cc:
    // 0x3281cc: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3281ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3281d0:
    // 0x3281d0: 0x0  nop
    ctx->pc = 0x3281d0u;
    // NOP
label_3281d4:
    // 0x3281d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3281d8:
    if (ctx->pc == 0x3281D8u) {
        ctx->pc = 0x3281D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281D4u;
        // 0x3281d8: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281DCu;
        goto label_3281dc;
    }
    ctx->pc = 0x3281D4u;
    {
        const bool branch_taken_0x3281d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3281D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281D4u;
        // 0x3281d8: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281d4) {
            ctx->pc = 0x3281B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3281b0;
        }
    }
    ctx->pc = 0x3281DCu;
label_3281dc:
    // 0x3281dc: 0x27c403c0  addiu       $a0, $fp, 0x3C0
    ctx->pc = 0x3281dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_3281e0:
    // 0x3281e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3281e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3281e4:
    // 0x3281e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3281e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3281e8:
    // 0x3281e8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_3281ec:
    if (ctx->pc == 0x3281ECu) {
        ctx->pc = 0x3281ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281E8u;
        // 0x3281ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281F0u;
        goto label_3281f0;
    }
    ctx->pc = 0x3281E8u;
    {
        const bool branch_taken_0x3281e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3281ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281E8u;
        // 0x3281ec: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281e8) {
            ctx->pc = 0x3281F8u;
            goto label_3281f8;
        }
    }
    ctx->pc = 0x3281F0u;
label_3281f0:
    // 0x3281f0: 0xc0ce218  jal         func_338860
label_3281f4:
    if (ctx->pc == 0x3281F4u) {
        ctx->pc = 0x3281F8u;
        goto label_3281f8;
    }
    ctx->pc = 0x3281F0u;
    SET_GPR_U32(ctx, 31, 0x3281F8u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x3281F0u, 0x3281F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281F8u;
label_3281f8:
    // 0x3281f8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3281f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3281fc:
    // 0x3281fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3281fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_328200:
    // 0x328200: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x328200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_328204:
    // 0x328204: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x328204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_328208:
    // 0x328208: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x328208u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32820c:
    // 0x32820c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32820cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_328210:
    // 0x328210: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x328210u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_328214:
    // 0x328214: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x328214u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_328218:
    // 0x328218: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x328218u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32821c:
    // 0x32821c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x32821cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_328220:
    // 0x328220: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x328220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_328224:
    // 0x328224: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x328224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_328228:
    // 0x328228: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x328228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32822c:
    // 0x32822c: 0x3e00008  jr          $ra
label_328230:
    if (ctx->pc == 0x328230u) {
        ctx->pc = 0x328230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32822Cu;
        // 0x328230: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328234u;
        goto label_328234;
    }
    ctx->pc = 0x32822Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32822Cu;
        // 0x328230: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32822Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328234u;
label_328234:
    // 0x328234: 0x0  nop
    ctx->pc = 0x328234u;
    // NOP
    ctx->pc = 0x328238u;
}
