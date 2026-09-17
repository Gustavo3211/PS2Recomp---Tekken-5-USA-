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

// Function: sub_00328B40
// Address: 0x328b40 - 0x329148
void sub_00328B40_0x328b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328B40_0x328b40");
#endif

    switch (ctx->pc) {
        case 0x328b40u: goto label_328b40;
        case 0x328b44u: goto label_328b44;
        case 0x328b48u: goto label_328b48;
        case 0x328b4cu: goto label_328b4c;
        case 0x328b50u: goto label_328b50;
        case 0x328b54u: goto label_328b54;
        case 0x328b58u: goto label_328b58;
        case 0x328b5cu: goto label_328b5c;
        case 0x328b60u: goto label_328b60;
        case 0x328b64u: goto label_328b64;
        case 0x328b68u: goto label_328b68;
        case 0x328b6cu: goto label_328b6c;
        case 0x328b70u: goto label_328b70;
        case 0x328b74u: goto label_328b74;
        case 0x328b78u: goto label_328b78;
        case 0x328b7cu: goto label_328b7c;
        case 0x328b80u: goto label_328b80;
        case 0x328b84u: goto label_328b84;
        case 0x328b88u: goto label_328b88;
        case 0x328b8cu: goto label_328b8c;
        case 0x328b90u: goto label_328b90;
        case 0x328b94u: goto label_328b94;
        case 0x328b98u: goto label_328b98;
        case 0x328b9cu: goto label_328b9c;
        case 0x328ba0u: goto label_328ba0;
        case 0x328ba4u: goto label_328ba4;
        case 0x328ba8u: goto label_328ba8;
        case 0x328bacu: goto label_328bac;
        case 0x328bb0u: goto label_328bb0;
        case 0x328bb4u: goto label_328bb4;
        case 0x328bb8u: goto label_328bb8;
        case 0x328bbcu: goto label_328bbc;
        case 0x328bc0u: goto label_328bc0;
        case 0x328bc4u: goto label_328bc4;
        case 0x328bc8u: goto label_328bc8;
        case 0x328bccu: goto label_328bcc;
        case 0x328bd0u: goto label_328bd0;
        case 0x328bd4u: goto label_328bd4;
        case 0x328bd8u: goto label_328bd8;
        case 0x328bdcu: goto label_328bdc;
        case 0x328be0u: goto label_328be0;
        case 0x328be4u: goto label_328be4;
        case 0x328be8u: goto label_328be8;
        case 0x328becu: goto label_328bec;
        case 0x328bf0u: goto label_328bf0;
        case 0x328bf4u: goto label_328bf4;
        case 0x328bf8u: goto label_328bf8;
        case 0x328bfcu: goto label_328bfc;
        case 0x328c00u: goto label_328c00;
        case 0x328c04u: goto label_328c04;
        case 0x328c08u: goto label_328c08;
        case 0x328c0cu: goto label_328c0c;
        case 0x328c10u: goto label_328c10;
        case 0x328c14u: goto label_328c14;
        case 0x328c18u: goto label_328c18;
        case 0x328c1cu: goto label_328c1c;
        case 0x328c20u: goto label_328c20;
        case 0x328c24u: goto label_328c24;
        case 0x328c28u: goto label_328c28;
        case 0x328c2cu: goto label_328c2c;
        case 0x328c30u: goto label_328c30;
        case 0x328c34u: goto label_328c34;
        case 0x328c38u: goto label_328c38;
        case 0x328c3cu: goto label_328c3c;
        case 0x328c40u: goto label_328c40;
        case 0x328c44u: goto label_328c44;
        case 0x328c48u: goto label_328c48;
        case 0x328c4cu: goto label_328c4c;
        case 0x328c50u: goto label_328c50;
        case 0x328c54u: goto label_328c54;
        case 0x328c58u: goto label_328c58;
        case 0x328c5cu: goto label_328c5c;
        case 0x328c60u: goto label_328c60;
        case 0x328c64u: goto label_328c64;
        case 0x328c68u: goto label_328c68;
        case 0x328c6cu: goto label_328c6c;
        case 0x328c70u: goto label_328c70;
        case 0x328c74u: goto label_328c74;
        case 0x328c78u: goto label_328c78;
        case 0x328c7cu: goto label_328c7c;
        case 0x328c80u: goto label_328c80;
        case 0x328c84u: goto label_328c84;
        case 0x328c88u: goto label_328c88;
        case 0x328c8cu: goto label_328c8c;
        case 0x328c90u: goto label_328c90;
        case 0x328c94u: goto label_328c94;
        case 0x328c98u: goto label_328c98;
        case 0x328c9cu: goto label_328c9c;
        case 0x328ca0u: goto label_328ca0;
        case 0x328ca4u: goto label_328ca4;
        case 0x328ca8u: goto label_328ca8;
        case 0x328cacu: goto label_328cac;
        case 0x328cb0u: goto label_328cb0;
        case 0x328cb4u: goto label_328cb4;
        case 0x328cb8u: goto label_328cb8;
        case 0x328cbcu: goto label_328cbc;
        case 0x328cc0u: goto label_328cc0;
        case 0x328cc4u: goto label_328cc4;
        case 0x328cc8u: goto label_328cc8;
        case 0x328cccu: goto label_328ccc;
        case 0x328cd0u: goto label_328cd0;
        case 0x328cd4u: goto label_328cd4;
        case 0x328cd8u: goto label_328cd8;
        case 0x328cdcu: goto label_328cdc;
        case 0x328ce0u: goto label_328ce0;
        case 0x328ce4u: goto label_328ce4;
        case 0x328ce8u: goto label_328ce8;
        case 0x328cecu: goto label_328cec;
        case 0x328cf0u: goto label_328cf0;
        case 0x328cf4u: goto label_328cf4;
        case 0x328cf8u: goto label_328cf8;
        case 0x328cfcu: goto label_328cfc;
        case 0x328d00u: goto label_328d00;
        case 0x328d04u: goto label_328d04;
        case 0x328d08u: goto label_328d08;
        case 0x328d0cu: goto label_328d0c;
        case 0x328d10u: goto label_328d10;
        case 0x328d14u: goto label_328d14;
        case 0x328d18u: goto label_328d18;
        case 0x328d1cu: goto label_328d1c;
        case 0x328d20u: goto label_328d20;
        case 0x328d24u: goto label_328d24;
        case 0x328d28u: goto label_328d28;
        case 0x328d2cu: goto label_328d2c;
        case 0x328d30u: goto label_328d30;
        case 0x328d34u: goto label_328d34;
        case 0x328d38u: goto label_328d38;
        case 0x328d3cu: goto label_328d3c;
        case 0x328d40u: goto label_328d40;
        case 0x328d44u: goto label_328d44;
        case 0x328d48u: goto label_328d48;
        case 0x328d4cu: goto label_328d4c;
        case 0x328d50u: goto label_328d50;
        case 0x328d54u: goto label_328d54;
        case 0x328d58u: goto label_328d58;
        case 0x328d5cu: goto label_328d5c;
        case 0x328d60u: goto label_328d60;
        case 0x328d64u: goto label_328d64;
        case 0x328d68u: goto label_328d68;
        case 0x328d6cu: goto label_328d6c;
        case 0x328d70u: goto label_328d70;
        case 0x328d74u: goto label_328d74;
        case 0x328d78u: goto label_328d78;
        case 0x328d7cu: goto label_328d7c;
        case 0x328d80u: goto label_328d80;
        case 0x328d84u: goto label_328d84;
        case 0x328d88u: goto label_328d88;
        case 0x328d8cu: goto label_328d8c;
        case 0x328d90u: goto label_328d90;
        case 0x328d94u: goto label_328d94;
        case 0x328d98u: goto label_328d98;
        case 0x328d9cu: goto label_328d9c;
        case 0x328da0u: goto label_328da0;
        case 0x328da4u: goto label_328da4;
        case 0x328da8u: goto label_328da8;
        case 0x328dacu: goto label_328dac;
        case 0x328db0u: goto label_328db0;
        case 0x328db4u: goto label_328db4;
        case 0x328db8u: goto label_328db8;
        case 0x328dbcu: goto label_328dbc;
        case 0x328dc0u: goto label_328dc0;
        case 0x328dc4u: goto label_328dc4;
        case 0x328dc8u: goto label_328dc8;
        case 0x328dccu: goto label_328dcc;
        case 0x328dd0u: goto label_328dd0;
        case 0x328dd4u: goto label_328dd4;
        case 0x328dd8u: goto label_328dd8;
        case 0x328ddcu: goto label_328ddc;
        case 0x328de0u: goto label_328de0;
        case 0x328de4u: goto label_328de4;
        case 0x328de8u: goto label_328de8;
        case 0x328decu: goto label_328dec;
        case 0x328df0u: goto label_328df0;
        case 0x328df4u: goto label_328df4;
        case 0x328df8u: goto label_328df8;
        case 0x328dfcu: goto label_328dfc;
        case 0x328e00u: goto label_328e00;
        case 0x328e04u: goto label_328e04;
        case 0x328e08u: goto label_328e08;
        case 0x328e0cu: goto label_328e0c;
        case 0x328e10u: goto label_328e10;
        case 0x328e14u: goto label_328e14;
        case 0x328e18u: goto label_328e18;
        case 0x328e1cu: goto label_328e1c;
        case 0x328e20u: goto label_328e20;
        case 0x328e24u: goto label_328e24;
        case 0x328e28u: goto label_328e28;
        case 0x328e2cu: goto label_328e2c;
        case 0x328e30u: goto label_328e30;
        case 0x328e34u: goto label_328e34;
        case 0x328e38u: goto label_328e38;
        case 0x328e3cu: goto label_328e3c;
        case 0x328e40u: goto label_328e40;
        case 0x328e44u: goto label_328e44;
        case 0x328e48u: goto label_328e48;
        case 0x328e4cu: goto label_328e4c;
        case 0x328e50u: goto label_328e50;
        case 0x328e54u: goto label_328e54;
        case 0x328e58u: goto label_328e58;
        case 0x328e5cu: goto label_328e5c;
        case 0x328e60u: goto label_328e60;
        case 0x328e64u: goto label_328e64;
        case 0x328e68u: goto label_328e68;
        case 0x328e6cu: goto label_328e6c;
        case 0x328e70u: goto label_328e70;
        case 0x328e74u: goto label_328e74;
        case 0x328e78u: goto label_328e78;
        case 0x328e7cu: goto label_328e7c;
        case 0x328e80u: goto label_328e80;
        case 0x328e84u: goto label_328e84;
        case 0x328e88u: goto label_328e88;
        case 0x328e8cu: goto label_328e8c;
        case 0x328e90u: goto label_328e90;
        case 0x328e94u: goto label_328e94;
        case 0x328e98u: goto label_328e98;
        case 0x328e9cu: goto label_328e9c;
        case 0x328ea0u: goto label_328ea0;
        case 0x328ea4u: goto label_328ea4;
        case 0x328ea8u: goto label_328ea8;
        case 0x328eacu: goto label_328eac;
        case 0x328eb0u: goto label_328eb0;
        case 0x328eb4u: goto label_328eb4;
        case 0x328eb8u: goto label_328eb8;
        case 0x328ebcu: goto label_328ebc;
        case 0x328ec0u: goto label_328ec0;
        case 0x328ec4u: goto label_328ec4;
        case 0x328ec8u: goto label_328ec8;
        case 0x328eccu: goto label_328ecc;
        case 0x328ed0u: goto label_328ed0;
        case 0x328ed4u: goto label_328ed4;
        case 0x328ed8u: goto label_328ed8;
        case 0x328edcu: goto label_328edc;
        case 0x328ee0u: goto label_328ee0;
        case 0x328ee4u: goto label_328ee4;
        case 0x328ee8u: goto label_328ee8;
        case 0x328eecu: goto label_328eec;
        case 0x328ef0u: goto label_328ef0;
        case 0x328ef4u: goto label_328ef4;
        case 0x328ef8u: goto label_328ef8;
        case 0x328efcu: goto label_328efc;
        case 0x328f00u: goto label_328f00;
        case 0x328f04u: goto label_328f04;
        case 0x328f08u: goto label_328f08;
        case 0x328f0cu: goto label_328f0c;
        case 0x328f10u: goto label_328f10;
        case 0x328f14u: goto label_328f14;
        case 0x328f18u: goto label_328f18;
        case 0x328f1cu: goto label_328f1c;
        case 0x328f20u: goto label_328f20;
        case 0x328f24u: goto label_328f24;
        case 0x328f28u: goto label_328f28;
        case 0x328f2cu: goto label_328f2c;
        case 0x328f30u: goto label_328f30;
        case 0x328f34u: goto label_328f34;
        case 0x328f38u: goto label_328f38;
        case 0x328f3cu: goto label_328f3c;
        case 0x328f40u: goto label_328f40;
        case 0x328f44u: goto label_328f44;
        case 0x328f48u: goto label_328f48;
        case 0x328f4cu: goto label_328f4c;
        case 0x328f50u: goto label_328f50;
        case 0x328f54u: goto label_328f54;
        case 0x328f58u: goto label_328f58;
        case 0x328f5cu: goto label_328f5c;
        case 0x328f60u: goto label_328f60;
        case 0x328f64u: goto label_328f64;
        case 0x328f68u: goto label_328f68;
        case 0x328f6cu: goto label_328f6c;
        case 0x328f70u: goto label_328f70;
        case 0x328f74u: goto label_328f74;
        case 0x328f78u: goto label_328f78;
        case 0x328f7cu: goto label_328f7c;
        case 0x328f80u: goto label_328f80;
        case 0x328f84u: goto label_328f84;
        case 0x328f88u: goto label_328f88;
        case 0x328f8cu: goto label_328f8c;
        case 0x328f90u: goto label_328f90;
        case 0x328f94u: goto label_328f94;
        case 0x328f98u: goto label_328f98;
        case 0x328f9cu: goto label_328f9c;
        case 0x328fa0u: goto label_328fa0;
        case 0x328fa4u: goto label_328fa4;
        case 0x328fa8u: goto label_328fa8;
        case 0x328facu: goto label_328fac;
        case 0x328fb0u: goto label_328fb0;
        case 0x328fb4u: goto label_328fb4;
        case 0x328fb8u: goto label_328fb8;
        case 0x328fbcu: goto label_328fbc;
        case 0x328fc0u: goto label_328fc0;
        case 0x328fc4u: goto label_328fc4;
        case 0x328fc8u: goto label_328fc8;
        case 0x328fccu: goto label_328fcc;
        case 0x328fd0u: goto label_328fd0;
        case 0x328fd4u: goto label_328fd4;
        case 0x328fd8u: goto label_328fd8;
        case 0x328fdcu: goto label_328fdc;
        case 0x328fe0u: goto label_328fe0;
        case 0x328fe4u: goto label_328fe4;
        case 0x328fe8u: goto label_328fe8;
        case 0x328fecu: goto label_328fec;
        case 0x328ff0u: goto label_328ff0;
        case 0x328ff4u: goto label_328ff4;
        case 0x328ff8u: goto label_328ff8;
        case 0x328ffcu: goto label_328ffc;
        case 0x329000u: goto label_329000;
        case 0x329004u: goto label_329004;
        case 0x329008u: goto label_329008;
        case 0x32900cu: goto label_32900c;
        case 0x329010u: goto label_329010;
        case 0x329014u: goto label_329014;
        case 0x329018u: goto label_329018;
        case 0x32901cu: goto label_32901c;
        case 0x329020u: goto label_329020;
        case 0x329024u: goto label_329024;
        case 0x329028u: goto label_329028;
        case 0x32902cu: goto label_32902c;
        case 0x329030u: goto label_329030;
        case 0x329034u: goto label_329034;
        case 0x329038u: goto label_329038;
        case 0x32903cu: goto label_32903c;
        case 0x329040u: goto label_329040;
        case 0x329044u: goto label_329044;
        case 0x329048u: goto label_329048;
        case 0x32904cu: goto label_32904c;
        case 0x329050u: goto label_329050;
        case 0x329054u: goto label_329054;
        case 0x329058u: goto label_329058;
        case 0x32905cu: goto label_32905c;
        case 0x329060u: goto label_329060;
        case 0x329064u: goto label_329064;
        case 0x329068u: goto label_329068;
        case 0x32906cu: goto label_32906c;
        case 0x329070u: goto label_329070;
        case 0x329074u: goto label_329074;
        case 0x329078u: goto label_329078;
        case 0x32907cu: goto label_32907c;
        case 0x329080u: goto label_329080;
        case 0x329084u: goto label_329084;
        case 0x329088u: goto label_329088;
        case 0x32908cu: goto label_32908c;
        case 0x329090u: goto label_329090;
        case 0x329094u: goto label_329094;
        case 0x329098u: goto label_329098;
        case 0x32909cu: goto label_32909c;
        case 0x3290a0u: goto label_3290a0;
        case 0x3290a4u: goto label_3290a4;
        case 0x3290a8u: goto label_3290a8;
        case 0x3290acu: goto label_3290ac;
        case 0x3290b0u: goto label_3290b0;
        case 0x3290b4u: goto label_3290b4;
        case 0x3290b8u: goto label_3290b8;
        case 0x3290bcu: goto label_3290bc;
        case 0x3290c0u: goto label_3290c0;
        case 0x3290c4u: goto label_3290c4;
        case 0x3290c8u: goto label_3290c8;
        case 0x3290ccu: goto label_3290cc;
        case 0x3290d0u: goto label_3290d0;
        case 0x3290d4u: goto label_3290d4;
        case 0x3290d8u: goto label_3290d8;
        case 0x3290dcu: goto label_3290dc;
        case 0x3290e0u: goto label_3290e0;
        case 0x3290e4u: goto label_3290e4;
        case 0x3290e8u: goto label_3290e8;
        case 0x3290ecu: goto label_3290ec;
        case 0x3290f0u: goto label_3290f0;
        case 0x3290f4u: goto label_3290f4;
        case 0x3290f8u: goto label_3290f8;
        case 0x3290fcu: goto label_3290fc;
        case 0x329100u: goto label_329100;
        case 0x329104u: goto label_329104;
        case 0x329108u: goto label_329108;
        case 0x32910cu: goto label_32910c;
        case 0x329110u: goto label_329110;
        case 0x329114u: goto label_329114;
        case 0x329118u: goto label_329118;
        case 0x32911cu: goto label_32911c;
        case 0x329120u: goto label_329120;
        case 0x329124u: goto label_329124;
        case 0x329128u: goto label_329128;
        case 0x32912cu: goto label_32912c;
        case 0x329130u: goto label_329130;
        case 0x329134u: goto label_329134;
        case 0x329138u: goto label_329138;
        case 0x32913cu: goto label_32913c;
        case 0x329140u: goto label_329140;
        case 0x329144u: goto label_329144;
        default: break;
    }

    ctx->pc = 0x328b40u;

label_328b40:
    // 0x328b40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x328b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_328b44:
    // 0x328b44: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x328b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_328b48:
    // 0x328b48: 0x3c1e0040  lui         $fp, 0x40
    ctx->pc = 0x328b48u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)64 << 16));
label_328b4c:
    // 0x328b4c: 0x27c203c0  addiu       $v0, $fp, 0x3C0
    ctx->pc = 0x328b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_328b50:
    // 0x328b50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x328b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_328b54:
    // 0x328b54: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x328b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_328b58:
    // 0x328b58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x328b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_328b5c:
    // 0x328b5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x328b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_328b60:
    // 0x328b60: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x328b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_328b64:
    // 0x328b64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x328b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_328b68:
    // 0x328b68: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x328b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_328b6c:
    // 0x328b6c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x328b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_328b70:
    // 0x328b70: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x328b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_328b74:
    // 0x328b74: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x328b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328b78:
    // 0x328b78: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x328b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_328b7c:
    // 0x328b7c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x328b7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328b80:
    // 0x328b80: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x328b80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_328b84:
    // 0x328b84: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x328b84u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_328b88:
    // 0x328b88: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x328b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_328b8c:
    // 0x328b8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x328b8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_328b90:
    // 0x328b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x328b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328b94:
    // 0x328b94: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x328b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_328b98:
    // 0x328b98: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x328b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_328b9c:
    // 0x328b9c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x328b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_328ba0:
    // 0x328ba0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_328ba4:
    if (ctx->pc == 0x328BA4u) {
        ctx->pc = 0x328BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BA0u;
        // 0x328ba4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BA8u;
        goto label_328ba8;
    }
    ctx->pc = 0x328BA0u;
    {
        const bool branch_taken_0x328ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BA0u;
        // 0x328ba4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ba0) {
            ctx->pc = 0x328C68u;
            goto label_328c68;
        }
    }
    ctx->pc = 0x328BA8u;
label_328ba8:
    // 0x328ba8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x328ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_328bac:
    // 0x328bac: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x328bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_328bb0:
    // 0x328bb0: 0x0  nop
    ctx->pc = 0x328bb0u;
    // NOP
label_328bb4:
    // 0x328bb4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_328bb8:
    if (ctx->pc == 0x328BB8u) {
        ctx->pc = 0x328BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BB4u;
        // 0x328bb8: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328BBCu;
        goto label_328bbc;
    }
    ctx->pc = 0x328BB4u;
    {
        const bool branch_taken_0x328bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x328BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328BB4u;
        // 0x328bb8: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328bb4) {
            ctx->pc = 0x328B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328b98;
        }
    }
    ctx->pc = 0x328BBCu;
label_328bbc:
    // 0x328bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x328bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328bc0:
    // 0x328bc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x328bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_328bc4:
    // 0x328bc4: 0x27c703c0  addiu       $a3, $fp, 0x3C0
    ctx->pc = 0x328bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_328bc8:
    // 0x328bc8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x328bc8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_328bcc:
    // 0x328bcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328bd0:
    // 0x328bd0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x328bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_328bd4:
    // 0x328bd4: 0x26f00d00  addiu       $s0, $s7, 0xD00
    ctx->pc = 0x328bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 3328));
label_328bd8:
    // 0x328bd8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x328bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_328bdc:
    // 0x328bdc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x328bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_328be0:
    // 0x328be0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x328be0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_328be4:
    // 0x328be4: 0x4824e000  qmfc2.ni    $a0, $vf28
    ctx->pc = 0x328be4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[28]));
label_328be8:
    // 0x328be8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x328be8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_328bec:
    // 0x328bec: 0x708310a8  pceqw       $v0, $a0, $v1
    ctx->pc = 0x328becu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_328bf0:
    // 0x328bf0: 0x4824e800  qmfc2.ni    $a0, $vf29
    ctx->pc = 0x328bf0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[29]));
label_328bf4:
    // 0x328bf4: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x328bf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_328bf8:
    // 0x328bf8: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x328bf8u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_328bfc:
    // 0x328bfc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x328bfcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_328c00:
    // 0x328c00: 0x4824f000  qmfc2.ni    $a0, $vf30
    ctx->pc = 0x328c00u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[30]));
label_328c04:
    // 0x328c04: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x328c04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_328c08:
    // 0x328c08: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x328c08u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_328c0c:
    // 0x328c0c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x328c0cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_328c10:
    // 0x328c10: 0x4824f800  qmfc2.ni    $a0, $vf31
    ctx->pc = 0x328c10u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[31]));
label_328c14:
    // 0x328c14: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x328c14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_328c18:
    // 0x328c18: 0x708318a8  pceqw       $v1, $a0, $v1
    ctx->pc = 0x328c18u;
    SET_GPR_VEC(ctx, 3, PS2_PCEQW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_328c1c:
    // 0x328c1c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x328c1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_328c20:
    // 0x328c20: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x328c20u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_328c24:
    // 0x328c24: 0x70422ec8  ppacb       $a1, $v0, $v0
    ctx->pc = 0x328c24u;
    SET_GPR_VEC(ctx, 5, PS2_PPACB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_328c28:
    // 0x328c28: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x328c28u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_328c2c:
    // 0x328c2c: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_328c30:
    if (ctx->pc == 0x328C30u) {
        ctx->pc = 0x328C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C2Cu;
        // 0x328c30: 0x26120068  addiu       $s2, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C34u;
        goto label_328c34;
    }
    ctx->pc = 0x328C2Cu;
    {
        const bool branch_taken_0x328c2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C2Cu;
        // 0x328c30: 0x26120068  addiu       $s2, $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c2c) {
            ctx->pc = 0x328C88u;
            goto label_328c88;
        }
    }
    ctx->pc = 0x328C34u;
label_328c34:
    // 0x328c34: 0xfa1c0000  sqc2        $vf28, 0x0($s0)
    ctx->pc = 0x328c34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[28]));
label_328c38:
    // 0x328c38: 0xfa1d0010  sqc2        $vf29, 0x10($s0)
    ctx->pc = 0x328c38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[29]));
label_328c3c:
    // 0x328c3c: 0xfa1e0020  sqc2        $vf30, 0x20($s0)
    ctx->pc = 0x328c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_328c40:
    // 0x328c40: 0xfa1f0030  sqc2        $vf31, 0x30($s0)
    ctx->pc = 0x328c40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[31]));
label_328c44:
    // 0x328c44: 0x26120068  addiu       $s2, $s0, 0x68
    ctx->pc = 0x328c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_328c48:
    // 0x328c48: 0xc0c88a2  jal         func_322288
label_328c4c:
    if (ctx->pc == 0x328C4Cu) {
        ctx->pc = 0x328C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C48u;
        // 0x328c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C50u;
        goto label_328c50;
    }
    ctx->pc = 0x328C48u;
    SET_GPR_U32(ctx, 31, 0x328C50u);
    ctx->pc = 0x328C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C48u;
    // 0x328c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x328C48u, 0x328C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328C50u;
label_328c50:
    // 0x328c50: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x328c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_328c54:
    // 0x328c54: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x328c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_328c58:
    // 0x328c58: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x328c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_328c5c:
    // 0x328c5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_328c60:
    if (ctx->pc == 0x328C60u) {
        ctx->pc = 0x328C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C5Cu;
        // 0x328c60: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C64u;
        goto label_328c64;
    }
    ctx->pc = 0x328C5Cu;
    {
        const bool branch_taken_0x328c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C5Cu;
        // 0x328c60: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c5c) {
            ctx->pc = 0x328C88u;
            goto label_328c88;
        }
    }
    ctx->pc = 0x328C64u;
label_328c64:
    // 0x328c64: 0x0  nop
    ctx->pc = 0x328c64u;
    // NOP
label_328c68:
    // 0x328c68: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x328c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_328c6c:
    // 0x328c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x328c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_328c70:
    // 0x328c70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x328c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_328c74:
    // 0x328c74: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x328c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_328c78:
    // 0x328c78: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x328c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_328c7c:
    // 0x328c7c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x328c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_328c80:
    // 0x328c80: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
label_328c84:
    if (ctx->pc == 0x328C84u) {
        ctx->pc = 0x328C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C80u;
        // 0x328c84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C88u;
        goto label_328c88;
    }
    ctx->pc = 0x328C80u;
    {
        const bool branch_taken_0x328c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C80u;
        // 0x328c84: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c80) {
            ctx->pc = 0x328BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328bc0;
        }
    }
    ctx->pc = 0x328C88u;
label_328c88:
    // 0x328c88: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x328c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_328c8c:
    // 0x328c8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328c90:
    // 0x328c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_328c94:
    if (ctx->pc == 0x328C94u) {
        ctx->pc = 0x328C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C90u;
        // 0x328c94: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328C98u;
        goto label_328c98;
    }
    ctx->pc = 0x328C90u;
    {
        const bool branch_taken_0x328c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C90u;
        // 0x328c94: 0x27b30004  addiu       $s3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328c90) {
            ctx->pc = 0x328CA4u;
            goto label_328ca4;
        }
    }
    ctx->pc = 0x328C98u;
label_328c98:
    // 0x328c98: 0xc0c8b1c  jal         func_322C70
label_328c9c:
    if (ctx->pc == 0x328C9Cu) {
        ctx->pc = 0x328C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328C98u;
        // 0x328c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CA0u;
        goto label_328ca0;
    }
    ctx->pc = 0x328C98u;
    SET_GPR_U32(ctx, 31, 0x328CA0u);
    ctx->pc = 0x328C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328C98u;
    // 0x328c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322C70u, 0x328C98u, 0x328CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328CA0u;
label_328ca0:
    // 0x328ca0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x328ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_328ca4:
    // 0x328ca4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x328ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_328ca8:
    // 0x328ca8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x328ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_328cac:
    // 0x328cac: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x328cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_328cb0:
    // 0x328cb0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_328cb4:
    if (ctx->pc == 0x328CB4u) {
        ctx->pc = 0x328CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CB0u;
        // 0x328cb4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CB8u;
        goto label_328cb8;
    }
    ctx->pc = 0x328CB0u;
    {
        const bool branch_taken_0x328cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x328cb0) {
            ctx->pc = 0x328CB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328CB0u;
            // 0x328cb4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328CD0u;
            goto label_328cd0;
        }
    }
    ctx->pc = 0x328CB8u;
label_328cb8:
    // 0x328cb8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x328cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_328cbc:
    // 0x328cbc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x328cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_328cc0:
    // 0x328cc0: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x328cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_328cc4:
    // 0x328cc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_328cc8:
    if (ctx->pc == 0x328CC8u) {
        ctx->pc = 0x328CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CC4u;
        // 0x328cc8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328CCCu;
        goto label_328ccc;
    }
    ctx->pc = 0x328CC4u;
    {
        const bool branch_taken_0x328cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328CC4u;
        // 0x328cc8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328cc4) {
            ctx->pc = 0x328CE0u;
            goto label_328ce0;
        }
    }
    ctx->pc = 0x328CCCu;
label_328ccc:
    // 0x328ccc: 0x0  nop
    ctx->pc = 0x328cccu;
    // NOP
label_328cd0:
    // 0x328cd0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x328cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_328cd4:
    // 0x328cd4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x328cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_328cd8:
    // 0x328cd8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x328cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_328cdc:
    // 0x328cdc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x328cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_328ce0:
    // 0x328ce0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x328ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_328ce4:
    // 0x328ce4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x328ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_328ce8:
    // 0x328ce8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x328ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328cec:
    // 0x328cec: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x328cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_328cf0:
    // 0x328cf0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x328cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_328cf4:
    // 0x328cf4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_328cf8:
    // 0x328cf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x328cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_328cfc:
    // 0x328cfc: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x328cfcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_328d00:
    // 0x328d00: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x328d00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_328d04:
    // 0x328d04: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x328d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328d08:
    // 0x328d08: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x328d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_328d0c:
    // 0x328d0c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x328d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_328d10:
    // 0x328d10: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x328d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_328d14:
    // 0x328d14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x328d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_328d18:
    // 0x328d18: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_328d1c:
    if (ctx->pc == 0x328D1Cu) {
        ctx->pc = 0x328D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D18u;
        // 0x328d1c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D20u;
        goto label_328d20;
    }
    ctx->pc = 0x328D18u;
    {
        const bool branch_taken_0x328d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D18u;
        // 0x328d1c: 0x26340010  addiu       $s4, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328d18) {
            ctx->pc = 0x328DB4u;
            goto label_328db4;
        }
    }
    ctx->pc = 0x328D20u;
label_328d20:
    // 0x328d20: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x328d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_328d24:
    // 0x328d24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x328d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_328d28:
    // 0x328d28: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x328d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_328d2c:
    // 0x328d2c: 0x8c850414  lw          $a1, 0x414($a0)
    ctx->pc = 0x328d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
label_328d30:
    // 0x328d30: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x328d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_328d34:
    // 0x328d34: 0x2442cc90  addiu       $v0, $v0, -0x3370
    ctx->pc = 0x328d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954128));
label_328d38:
    // 0x328d38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x328d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_328d3c:
    // 0x328d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x328d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_328d40:
    // 0x328d40: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x328d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_328d44:
    // 0x328d44: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x328d44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_328d48:
    // 0x328d48: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x328d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_328d4c:
    // 0x328d4c: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x328d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_328d50:
    // 0x328d50: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x328d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_328d54:
    // 0x328d54: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x328d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_328d58:
    // 0x328d58: 0xc0ce5b2  jal         func_3396C8
label_328d5c:
    if (ctx->pc == 0x328D5Cu) {
        ctx->pc = 0x328D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D58u;
        // 0x328d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D60u;
        goto label_328d60;
    }
    ctx->pc = 0x328D58u;
    SET_GPR_U32(ctx, 31, 0x328D60u);
    ctx->pc = 0x328D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D58u;
    // 0x328d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396C8u, 0x328D58u, 0x328D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D60u;
label_328d60:
    // 0x328d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_328d64:
    // 0x328d64: 0xc0ce5a2  jal         func_339688
label_328d68:
    if (ctx->pc == 0x328D68u) {
        ctx->pc = 0x328D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D64u;
        // 0x328d68: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328D6Cu;
        goto label_328d6c;
    }
    ctx->pc = 0x328D64u;
    SET_GPR_U32(ctx, 31, 0x328D6Cu);
    ctx->pc = 0x328D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D64u;
    // 0x328d68: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339688u, 0x328D64u, 0x328D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D6Cu;
label_328d6c:
    // 0x328d6c: 0x4a006838  vcallms     0xD00
    ctx->pc = 0x328d6cu;
    {     ctx->vu0_tpc = 0xD00;     runtime->executeVU0Microprogram(rdram, ctx, 0xD00); }
label_328d70:
    // 0x328d70: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x328d70u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_328d74:
    // 0x328d74: 0xda180100  lqc2        $vf24, 0x100($s0)
    ctx->pc = 0x328d74u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 256)));
label_328d78:
    // 0x328d78: 0xda190110  lqc2        $vf25, 0x110($s0)
    ctx->pc = 0x328d78u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
label_328d7c:
    // 0x328d7c: 0xda1a0120  lqc2        $vf26, 0x120($s0)
    ctx->pc = 0x328d7cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
label_328d80:
    // 0x328d80: 0xda1b0130  lqc2        $vf27, 0x130($s0)
    ctx->pc = 0x328d80u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
label_328d84:
    // 0x328d84: 0x4a006438  vcallms     0xC80
    ctx->pc = 0x328d84u;
    {     ctx->vu0_tpc = 0xC80;     runtime->executeVU0Microprogram(rdram, ctx, 0xC80); }
label_328d88:
    // 0x328d88: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x328d88u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_328d8c:
    // 0x328d8c: 0xfa3c0010  sqc2        $vf28, 0x10($s1)
    ctx->pc = 0x328d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[28]));
label_328d90:
    // 0x328d90: 0xfa3d0020  sqc2        $vf29, 0x20($s1)
    ctx->pc = 0x328d90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[29]));
label_328d94:
    // 0x328d94: 0xfa3e0030  sqc2        $vf30, 0x30($s1)
    ctx->pc = 0x328d94u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[30]));
label_328d98:
    // 0x328d98: 0xfa3f0040  sqc2        $vf31, 0x40($s1)
    ctx->pc = 0x328d98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[31]));
label_328d9c:
    // 0x328d9c: 0x4a006a38  vcallms     0xD40
    ctx->pc = 0x328d9cu;
    {     ctx->vu0_tpc = 0xD40;     runtime->executeVU0Microprogram(rdram, ctx, 0xD40); }
label_328da0:
    // 0x328da0: 0x4be0033c  vmove.xyzw  $vf0, $vf0
    ctx->pc = 0x328da0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_328da4:
    // 0x328da4: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x328da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_328da8:
    // 0x328da8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x328da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_328dac:
    // 0x328dac: 0xac510414  sw          $s1, 0x414($v0)
    ctx->pc = 0x328dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 17));
label_328db0:
    // 0x328db0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x328db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_328db4:
    // 0x328db4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x328db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_328db8:
    // 0x328db8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x328db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_328dbc:
    // 0x328dbc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x328dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_328dc0:
    // 0x328dc0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_328dc4:
    if (ctx->pc == 0x328DC4u) {
        ctx->pc = 0x328DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DC0u;
        // 0x328dc4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DC8u;
        goto label_328dc8;
    }
    ctx->pc = 0x328DC0u;
    {
        const bool branch_taken_0x328dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x328dc0) {
            ctx->pc = 0x328DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328DC0u;
            // 0x328dc4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328DE0u;
            goto label_328de0;
        }
    }
    ctx->pc = 0x328DC8u;
label_328dc8:
    // 0x328dc8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x328dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_328dcc:
    // 0x328dcc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x328dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_328dd0:
    // 0x328dd0: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x328dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_328dd4:
    // 0x328dd4: 0x10000006  b           . + 4 + (0x6 << 2)
label_328dd8:
    if (ctx->pc == 0x328DD8u) {
        ctx->pc = 0x328DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DD4u;
        // 0x328dd8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328DDCu;
        goto label_328ddc;
    }
    ctx->pc = 0x328DD4u;
    {
        const bool branch_taken_0x328dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328DD4u;
        // 0x328dd8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328dd4) {
            ctx->pc = 0x328DF0u;
            goto label_328df0;
        }
    }
    ctx->pc = 0x328DDCu;
label_328ddc:
    // 0x328ddc: 0x0  nop
    ctx->pc = 0x328ddcu;
    // NOP
label_328de0:
    // 0x328de0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x328de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_328de4:
    // 0x328de4: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x328de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_328de8:
    // 0x328de8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x328de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_328dec:
    // 0x328dec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x328decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_328df0:
    // 0x328df0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x328df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_328df4:
    // 0x328df4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x328df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_328df8:
    // 0x328df8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x328df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328dfc:
    // 0x328dfc: 0x3c026c05  lui         $v0, 0x6C05
    ctx->pc = 0x328dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27653 << 16));
label_328e00:
    // 0x328e00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x328e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_328e04:
    // 0x328e04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_328e08:
    // 0x328e08: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x328e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_328e0c:
    // 0x328e0c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x328e0cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_328e10:
    // 0x328e10: 0x7e840000  sq          $a0, 0x0($s4)
    ctx->pc = 0x328e10u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 4));
label_328e14:
    // 0x328e14: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x328e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328e18:
    // 0x328e18: 0x26e40d00  addiu       $a0, $s7, 0xD00
    ctx->pc = 0x328e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3328));
label_328e1c:
    // 0x328e1c: 0x249000c8  addiu       $s0, $a0, 0xC8
    ctx->pc = 0x328e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 200));
label_328e20:
    // 0x328e20: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x328e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
label_328e24:
    // 0x328e24: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x328e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_328e28:
    // 0x328e28: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x328e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_328e2c:
    // 0x328e2c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x328e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_328e30:
    // 0x328e30: 0xc0c88e6  jal         func_322398
label_328e34:
    if (ctx->pc == 0x328E34u) {
        ctx->pc = 0x328E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E30u;
        // 0x328e34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E38u;
        goto label_328e38;
    }
    ctx->pc = 0x328E30u;
    SET_GPR_U32(ctx, 31, 0x328E38u);
    ctx->pc = 0x328E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E30u;
    // 0x328e34: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322398u, 0x328E30u, 0x328E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E38u;
label_328e38:
    // 0x328e38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x328e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328e3c:
    // 0x328e3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_328e40:
    // 0x328e40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_328e44:
    if (ctx->pc == 0x328E44u) {
        ctx->pc = 0x328E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E40u;
        // 0x328e44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E48u;
        goto label_328e48;
    }
    ctx->pc = 0x328E40u;
    {
        const bool branch_taken_0x328e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328e40) {
            ctx->pc = 0x328E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E40u;
            // 0x328e44: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328E58u;
            goto label_328e58;
        }
    }
    ctx->pc = 0x328E48u;
label_328e48:
    // 0x328e48: 0xc0cfd96  jal         func_33F658
label_328e4c:
    if (ctx->pc == 0x328E4Cu) {
        ctx->pc = 0x328E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E48u;
        // 0x328e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E50u;
        goto label_328e50;
    }
    ctx->pc = 0x328E48u;
    SET_GPR_U32(ctx, 31, 0x328E50u);
    ctx->pc = 0x328E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328E48u;
    // 0x328e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F658u, 0x328E48u, 0x328E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328E50u;
label_328e50:
    // 0x328e50: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x328e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_328e54:
    // 0x328e54: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x328e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_328e58:
    // 0x328e58: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x328e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_328e5c:
    // 0x328e5c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x328e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_328e60:
    // 0x328e60: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_328e64:
    if (ctx->pc == 0x328E64u) {
        ctx->pc = 0x328E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E60u;
        // 0x328e64: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E68u;
        goto label_328e68;
    }
    ctx->pc = 0x328E60u;
    {
        const bool branch_taken_0x328e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x328e60) {
            ctx->pc = 0x328E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328E60u;
            // 0x328e64: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328E80u;
            goto label_328e80;
        }
    }
    ctx->pc = 0x328E68u;
label_328e68:
    // 0x328e68: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x328e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_328e6c:
    // 0x328e6c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x328e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_328e70:
    // 0x328e70: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x328e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_328e74:
    // 0x328e74: 0x10000006  b           . + 4 + (0x6 << 2)
label_328e78:
    if (ctx->pc == 0x328E78u) {
        ctx->pc = 0x328E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E74u;
        // 0x328e78: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328E7Cu;
        goto label_328e7c;
    }
    ctx->pc = 0x328E74u;
    {
        const bool branch_taken_0x328e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328E74u;
        // 0x328e78: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328e74) {
            ctx->pc = 0x328E90u;
            goto label_328e90;
        }
    }
    ctx->pc = 0x328E7Cu;
label_328e7c:
    // 0x328e7c: 0x0  nop
    ctx->pc = 0x328e7cu;
    // NOP
label_328e80:
    // 0x328e80: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x328e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_328e84:
    // 0x328e84: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x328e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_328e88:
    // 0x328e88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x328e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_328e8c:
    // 0x328e8c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x328e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_328e90:
    // 0x328e90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x328e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_328e94:
    // 0x328e94: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x328e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_328e98:
    // 0x328e98: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x328e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328e9c:
    // 0x328e9c: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x328e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
label_328ea0:
    // 0x328ea0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x328ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_328ea4:
    // 0x328ea4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_328ea8:
    // 0x328ea8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x328ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_328eac:
    // 0x328eac: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x328eacu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_328eb0:
    // 0x328eb0: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x328eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_328eb4:
    // 0x328eb4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x328eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328eb8:
    // 0x328eb8: 0x3c048100  lui         $a0, 0x8100
    ctx->pc = 0x328eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33024 << 16));
label_328ebc:
    // 0x328ebc: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x328ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_328ec0:
    // 0x328ec0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x328ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_328ec4:
    // 0x328ec4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x328ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_328ec8:
    // 0x328ec8: 0xc0c952e  jal         func_3254B8
label_328ecc:
    if (ctx->pc == 0x328ECCu) {
        ctx->pc = 0x328ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328EC8u;
        // 0x328ecc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328ED0u;
        goto label_328ed0;
    }
    ctx->pc = 0x328EC8u;
    SET_GPR_U32(ctx, 31, 0x328ED0u);
    ctx->pc = 0x328ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328EC8u;
    // 0x328ecc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x328EC8u, 0x328ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328ED0u;
label_328ed0:
    // 0x328ed0: 0x26e40d00  addiu       $a0, $s7, 0xD00
    ctx->pc = 0x328ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3328));
label_328ed4:
    // 0x328ed4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x328ed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328ed8:
    // 0x328ed8: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x328ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
label_328edc:
    // 0x328edc: 0xaec8000c  sw          $t0, 0xC($s6)
    ctx->pc = 0x328edcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 8));
label_328ee0:
    // 0x328ee0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x328ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_328ee4:
    // 0x328ee4: 0x3c056c02  lui         $a1, 0x6C02
    ctx->pc = 0x328ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27650 << 16));
label_328ee8:
    // 0x328ee8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x328ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_328eec:
    // 0x328eec: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x328eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
label_328ef0:
    // 0x328ef0: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x328ef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_328ef4:
    // 0x328ef4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x328ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_328ef8:
    // 0x328ef8: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x328ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_328efc:
    // 0x328efc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x328efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_328f00:
    // 0x328f00: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x328f00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_328f04:
    // 0x328f04: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x328f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_328f08:
    // 0x328f08: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x328f08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
label_328f0c:
    // 0x328f0c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x328f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_328f10:
    // 0x328f10: 0xae260014  sw          $a2, 0x14($s1)
    ctx->pc = 0x328f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 6));
label_328f14:
    // 0x328f14: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x328f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_328f18:
    // 0x328f18: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x328f18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_328f1c:
    // 0x328f1c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x328f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_328f20:
    // 0x328f20: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x328f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_328f24:
    // 0x328f24: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x328f24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_328f28:
    // 0x328f28: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x328f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_328f2c:
    // 0x328f2c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x328f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328f30:
    // 0x328f30: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x328f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_328f34:
    // 0x328f34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x328f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_328f38:
    // 0x328f38: 0x70473b89  pcpyld      $a3, $v0, $a3
    ctx->pc = 0x328f38u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_328f3c:
    // 0x328f3c: 0x7e270000  sq          $a3, 0x0($s1)
    ctx->pc = 0x328f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 7));
label_328f40:
    // 0x328f40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x328f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_328f44:
    // 0x328f44: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x328f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_328f48:
    // 0x328f48: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x328f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_328f4c:
    // 0x328f4c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x328f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_328f50:
    // 0x328f50: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_328f54:
    if (ctx->pc == 0x328F54u) {
        ctx->pc = 0x328F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F50u;
        // 0x328f54: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F58u;
        goto label_328f58;
    }
    ctx->pc = 0x328F50u;
    {
        const bool branch_taken_0x328f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x328F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F50u;
        // 0x328f54: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328f50) {
            ctx->pc = 0x328F6Cu;
            goto label_328f6c;
        }
    }
    ctx->pc = 0x328F58u;
label_328f58:
    // 0x328f58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x328f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328f5c:
    // 0x328f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x328f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328f60:
    // 0x328f60: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x328f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_328f64:
    // 0x328f64: 0x60f809  jalr        $v1
label_328f68:
    if (ctx->pc == 0x328F68u) {
        ctx->pc = 0x328F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F64u;
        // 0x328f68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328F6Cu;
        goto label_328f6c;
    }
    ctx->pc = 0x328F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x328F6Cu);
        ctx->pc = 0x328F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328F64u;
        // 0x328f68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328F64u, 0x328F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x328F6Cu;
label_328f6c:
    // 0x328f6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x328f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328f70:
    // 0x328f70: 0x151103  sra         $v0, $s5, 4
    ctx->pc = 0x328f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
label_328f74:
    // 0x328f74: 0x32a30020  andi        $v1, $s5, 0x20
    ctx->pc = 0x328f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_328f78:
    // 0x328f78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x328f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_328f7c:
    // 0x328f7c: 0x32a41000  andi        $a0, $s5, 0x1000
    ctx->pc = 0x328f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4096);
label_328f80:
    // 0x328f80: 0x34470002  ori         $a3, $v0, 0x2
    ctx->pc = 0x328f80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_328f84:
    // 0x328f84: 0x32a60800  andi        $a2, $s5, 0x800
    ctx->pc = 0x328f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2048);
label_328f88:
    // 0x328f88: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x328f88u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_328f8c:
    // 0x328f8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x328f8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_328f90:
    // 0x328f90: 0x34e20004  ori         $v0, $a3, 0x4
    ctx->pc = 0x328f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4);
label_328f94:
    // 0x328f94: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x328f94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_328f98:
    // 0x328f98: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x328f98u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_328f9c:
    // 0x328f9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x328f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_328fa0:
    // 0x328fa0: 0x34e20008  ori         $v0, $a3, 0x8
    ctx->pc = 0x328fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_328fa4:
    // 0x328fa4: 0x46380b  movn        $a3, $v0, $a2
    ctx->pc = 0x328fa4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_328fa8:
    // 0x328fa8: 0xc0ca2b0  jal         func_328AC0
label_328fac:
    if (ctx->pc == 0x328FACu) {
        ctx->pc = 0x328FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FA8u;
        // 0x328fac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FB0u;
        goto label_328fb0;
    }
    ctx->pc = 0x328FA8u;
    SET_GPR_U32(ctx, 31, 0x328FB0u);
    ctx->pc = 0x328FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FA8u;
    // 0x328fac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328AC0u, 0x328FA8u, 0x328FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FB0u;
label_328fb0:
    // 0x328fb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x328fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_328fb4:
    // 0x328fb4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x328fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_328fb8:
    // 0x328fb8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x328fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_328fbc:
    // 0x328fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x328fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328fc0:
    // 0x328fc0: 0xc0d0ba8  jal         func_342EA0
label_328fc4:
    if (ctx->pc == 0x328FC4u) {
        ctx->pc = 0x328FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FC0u;
        // 0x328fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FC8u;
        goto label_328fc8;
    }
    ctx->pc = 0x328FC0u;
    SET_GPR_U32(ctx, 31, 0x328FC8u);
    ctx->pc = 0x328FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FC0u;
    // 0x328fc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342EA0u, 0x328FC0u, 0x328FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FC8u;
label_328fc8:
    // 0x328fc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x328fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_328fcc:
    // 0x328fcc: 0xc0ca452  jal         func_329148
label_328fd0:
    if (ctx->pc == 0x328FD0u) {
        ctx->pc = 0x328FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FCCu;
        // 0x328fd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FD4u;
        goto label_328fd4;
    }
    ctx->pc = 0x328FCCu;
    SET_GPR_U32(ctx, 31, 0x328FD4u);
    ctx->pc = 0x328FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FCCu;
    // 0x328fd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329148u, 0x328FCCu, 0x328FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FD4u;
label_328fd4:
    // 0x328fd4: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x328fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_328fd8:
    // 0x328fd8: 0x539023  subu        $s2, $v0, $s3
    ctx->pc = 0x328fd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_328fdc:
    // 0x328fdc: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
label_328fe0:
    if (ctx->pc == 0x328FE0u) {
        ctx->pc = 0x328FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FDCu;
        // 0x328fe0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328FE4u;
        goto label_328fe4;
    }
    ctx->pc = 0x328FDCu;
    {
        const bool branch_taken_0x328fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x328FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FDCu;
        // 0x328fe0: 0x260a82d  daddu       $s5, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328fdc) {
            ctx->pc = 0x329080u;
            goto label_329080;
        }
    }
    ctx->pc = 0x328FE4u;
label_328fe4:
    // 0x328fe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x328fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_328fe8:
    // 0x328fe8: 0x27d103c0  addiu       $s1, $fp, 0x3C0
    ctx->pc = 0x328fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_328fec:
    // 0x328fec: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x328fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_328ff0:
    // 0x328ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_328ff4:
    // 0x328ff4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x328ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_328ff8:
    // 0x328ff8: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x328ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_328ffc:
    // 0x328ffc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x328ffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_329000:
    // 0x329000: 0xc0ce218  jal         func_338860
label_329004:
    if (ctx->pc == 0x329004u) {
        ctx->pc = 0x329004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329000u;
        // 0x329004: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329008u;
        goto label_329008;
    }
    ctx->pc = 0x329000u;
    SET_GPR_U32(ctx, 31, 0x329008u);
    ctx->pc = 0x329004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329000u;
    // 0x329004: 0xac430014  sw          $v1, 0x14($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x329000u, 0x329008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329008u;
label_329008:
    // 0x329008: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x329008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_32900c:
    // 0x32900c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x32900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
label_329010:
    // 0x329010: 0x122902  srl         $a1, $s2, 4
    ctx->pc = 0x329010u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 4));
label_329014:
    // 0x329014: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x329014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_329018:
    // 0x329018: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x329018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_32901c:
    // 0x32901c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x32901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_329020:
    // 0x329020: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x329020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_329024:
    // 0x329024: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x329024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
label_329028:
    // 0x329028: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x329028u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_32902c:
    // 0x32902c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x32902cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_329030:
    // 0x329030: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x329030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_329034:
    // 0x329034: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x329034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_329038:
    // 0x329038: 0x34a5d080  ori         $a1, $a1, 0xD080
    ctx->pc = 0x329038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53376);
label_32903c:
    // 0x32903c: 0x32623fff  andi        $v0, $s3, 0x3FFF
    ctx->pc = 0x32903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16383);
label_329040:
    // 0x329040: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x329040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_329044:
    // 0x329044: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x329044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_329048:
    // 0x329048: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x329048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_32904c:
    // 0x32904c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x32904cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2)); // MMIO: 0x1000d080
label_329050:
    // 0x329050: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x329050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_329054:
    // 0x329054: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x329054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
label_329058:
    // 0x329058: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x329058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
label_32905c:
    // 0x32905c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x32905cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x1000d080
label_329060:
    // 0x329060: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x329060u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000e010
label_329064:
    // 0x329064: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x329064u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000e010
label_329068:
    // 0x329068: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x329068u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x1000d000
label_32906c:
    // 0x32906c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32906cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x1000d000
label_329070:
    // 0x329070: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x329070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_329074:
    // 0x329074: 0x10000003  b           . + 4 + (0x3 << 2)
label_329078:
    if (ctx->pc == 0x329078u) {
        ctx->pc = 0x329078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329074u;
        // 0x329078: 0x8fb30000  lw          $s3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32907Cu;
        goto label_32907c;
    }
    ctx->pc = 0x329074u;
    {
        const bool branch_taken_0x329074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329074u;
        // 0x329078: 0x8fb30000  lw          $s3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329074) {
            ctx->pc = 0x329084u;
            goto label_329084;
        }
    }
    ctx->pc = 0x32907Cu;
label_32907c:
    // 0x32907c: 0x0  nop
    ctx->pc = 0x32907cu;
    // NOP
label_329080:
    // 0x329080: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x329080u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_329084:
    // 0x329084: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x329084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_329088:
    // 0x329088: 0x27c403c0  addiu       $a0, $fp, 0x3C0
    ctx->pc = 0x329088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_32908c:
    // 0x32908c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x32908cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_329090:
    // 0x329090: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x329090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_329094:
    // 0x329094: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x329094u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
label_329098:
    // 0x329098: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x329098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_32909c:
    // 0x32909c: 0x56630004  bnel        $s3, $v1, . + 4 + (0x4 << 2)
label_3290a0:
    if (ctx->pc == 0x3290A0u) {
        ctx->pc = 0x3290A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32909Cu;
        // 0x3290a0: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290A4u;
        goto label_3290a4;
    }
    ctx->pc = 0x32909Cu;
    {
        const bool branch_taken_0x32909c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x32909c) {
            ctx->pc = 0x3290A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32909Cu;
            // 0x3290a0: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3290B0u;
            goto label_3290b0;
        }
    }
    ctx->pc = 0x3290A4u;
label_3290a4:
    // 0x3290a4: 0xac930004  sw          $s3, 0x4($a0)
    ctx->pc = 0x3290a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 19));
label_3290a8:
    // 0x3290a8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3290ac:
    if (ctx->pc == 0x3290ACu) {
        ctx->pc = 0x3290ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290A8u;
        // 0x3290ac: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290B0u;
        goto label_3290b0;
    }
    ctx->pc = 0x3290A8u;
    {
        const bool branch_taken_0x3290a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290A8u;
        // 0x3290ac: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290a8) {
            ctx->pc = 0x3290F0u;
            goto label_3290f0;
        }
    }
    ctx->pc = 0x3290B0u;
label_3290b0:
    // 0x3290b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3290b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3290b4:
    // 0x3290b4: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x3290b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_3290b8:
    // 0x3290b8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3290b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3290bc:
    // 0x3290bc: 0x0  nop
    ctx->pc = 0x3290bcu;
    // NOP
label_3290c0:
    // 0x3290c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3290c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3290c4:
    // 0x3290c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3290c8:
    if (ctx->pc == 0x3290C8u) {
        ctx->pc = 0x3290C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C4u;
        // 0x3290c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290CCu;
        goto label_3290cc;
    }
    ctx->pc = 0x3290C4u;
    {
        const bool branch_taken_0x3290c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3290C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290C4u;
        // 0x3290c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290c4) {
            ctx->pc = 0x3290D4u;
            goto label_3290d4;
        }
    }
    ctx->pc = 0x3290CCu;
label_3290cc:
    // 0x3290cc: 0x50b30007  beql        $a1, $s3, . + 4 + (0x7 << 2)
label_3290d0:
    if (ctx->pc == 0x3290D0u) {
        ctx->pc = 0x3290D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290CCu;
        // 0x3290d0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290D4u;
        goto label_3290d4;
    }
    ctx->pc = 0x3290CCu;
    {
        const bool branch_taken_0x3290cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x3290cc) {
            ctx->pc = 0x3290D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3290CCu;
            // 0x3290d0: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3290ECu;
            goto label_3290ec;
        }
    }
    ctx->pc = 0x3290D4u;
label_3290d4:
    // 0x3290d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3290d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3290d8:
    // 0x3290d8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3290d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3290dc:
    // 0x3290dc: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x3290dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3290e0:
    // 0x3290e0: 0x0  nop
    ctx->pc = 0x3290e0u;
    // NOP
label_3290e4:
    // 0x3290e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3290e8:
    if (ctx->pc == 0x3290E8u) {
        ctx->pc = 0x3290E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290E4u;
        // 0x3290e8: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3290ECu;
        goto label_3290ec;
    }
    ctx->pc = 0x3290E4u;
    {
        const bool branch_taken_0x3290e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3290E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290E4u;
        // 0x3290e8: 0x24a50c00  addiu       $a1, $a1, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290e4) {
            ctx->pc = 0x3290C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3290c0;
        }
    }
    ctx->pc = 0x3290ECu;
label_3290ec:
    // 0x3290ec: 0x27c403c0  addiu       $a0, $fp, 0x3C0
    ctx->pc = 0x3290ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 960));
label_3290f0:
    // 0x3290f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3290f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3290f4:
    // 0x3290f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3290f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3290f8:
    // 0x3290f8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_3290fc:
    if (ctx->pc == 0x3290FCu) {
        ctx->pc = 0x3290FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290F8u;
        // 0x3290fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329100u;
        goto label_329100;
    }
    ctx->pc = 0x3290F8u;
    {
        const bool branch_taken_0x3290f8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3290FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3290F8u;
        // 0x3290fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3290f8) {
            ctx->pc = 0x329108u;
            goto label_329108;
        }
    }
    ctx->pc = 0x329100u;
label_329100:
    // 0x329100: 0xc0ce218  jal         func_338860
label_329104:
    if (ctx->pc == 0x329104u) {
        ctx->pc = 0x329108u;
        goto label_329108;
    }
    ctx->pc = 0x329100u;
    SET_GPR_U32(ctx, 31, 0x329108u);
    ctx->pc = 0x338860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338860u, 0x329100u, 0x329108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329108u;
label_329108:
    // 0x329108: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x329108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32910c:
    // 0x32910c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32910cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_329110:
    // 0x329110: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x329110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_329114:
    // 0x329114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x329114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_329118:
    // 0x329118: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x329118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_32911c:
    // 0x32911c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x32911cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_329120:
    // 0x329120: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x329120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_329124:
    // 0x329124: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x329124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_329128:
    // 0x329128: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x329128u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_32912c:
    // 0x32912c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x32912cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_329130:
    // 0x329130: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x329130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_329134:
    // 0x329134: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x329134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_329138:
    // 0x329138: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x329138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_32913c:
    // 0x32913c: 0x3e00008  jr          $ra
label_329140:
    if (ctx->pc == 0x329140u) {
        ctx->pc = 0x329140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32913Cu;
        // 0x329140: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329144u;
        goto label_329144;
    }
    ctx->pc = 0x32913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32913Cu;
        // 0x329140: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329144u;
label_329144:
    // 0x329144: 0x0  nop
    ctx->pc = 0x329144u;
    // NOP
    ctx->pc = 0x329148u;
}
