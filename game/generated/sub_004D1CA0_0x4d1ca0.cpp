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

// Function: sub_004D1CA0
// Address: 0x4d1ca0 - 0x4d21f8
void sub_004D1CA0_0x4d1ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1CA0_0x4d1ca0");
#endif

    switch (ctx->pc) {
        case 0x4d1ca0u: goto label_4d1ca0;
        case 0x4d1ca4u: goto label_4d1ca4;
        case 0x4d1ca8u: goto label_4d1ca8;
        case 0x4d1cacu: goto label_4d1cac;
        case 0x4d1cb0u: goto label_4d1cb0;
        case 0x4d1cb4u: goto label_4d1cb4;
        case 0x4d1cb8u: goto label_4d1cb8;
        case 0x4d1cbcu: goto label_4d1cbc;
        case 0x4d1cc0u: goto label_4d1cc0;
        case 0x4d1cc4u: goto label_4d1cc4;
        case 0x4d1cc8u: goto label_4d1cc8;
        case 0x4d1cccu: goto label_4d1ccc;
        case 0x4d1cd0u: goto label_4d1cd0;
        case 0x4d1cd4u: goto label_4d1cd4;
        case 0x4d1cd8u: goto label_4d1cd8;
        case 0x4d1cdcu: goto label_4d1cdc;
        case 0x4d1ce0u: goto label_4d1ce0;
        case 0x4d1ce4u: goto label_4d1ce4;
        case 0x4d1ce8u: goto label_4d1ce8;
        case 0x4d1cecu: goto label_4d1cec;
        case 0x4d1cf0u: goto label_4d1cf0;
        case 0x4d1cf4u: goto label_4d1cf4;
        case 0x4d1cf8u: goto label_4d1cf8;
        case 0x4d1cfcu: goto label_4d1cfc;
        case 0x4d1d00u: goto label_4d1d00;
        case 0x4d1d04u: goto label_4d1d04;
        case 0x4d1d08u: goto label_4d1d08;
        case 0x4d1d0cu: goto label_4d1d0c;
        case 0x4d1d10u: goto label_4d1d10;
        case 0x4d1d14u: goto label_4d1d14;
        case 0x4d1d18u: goto label_4d1d18;
        case 0x4d1d1cu: goto label_4d1d1c;
        case 0x4d1d20u: goto label_4d1d20;
        case 0x4d1d24u: goto label_4d1d24;
        case 0x4d1d28u: goto label_4d1d28;
        case 0x4d1d2cu: goto label_4d1d2c;
        case 0x4d1d30u: goto label_4d1d30;
        case 0x4d1d34u: goto label_4d1d34;
        case 0x4d1d38u: goto label_4d1d38;
        case 0x4d1d3cu: goto label_4d1d3c;
        case 0x4d1d40u: goto label_4d1d40;
        case 0x4d1d44u: goto label_4d1d44;
        case 0x4d1d48u: goto label_4d1d48;
        case 0x4d1d4cu: goto label_4d1d4c;
        case 0x4d1d50u: goto label_4d1d50;
        case 0x4d1d54u: goto label_4d1d54;
        case 0x4d1d58u: goto label_4d1d58;
        case 0x4d1d5cu: goto label_4d1d5c;
        case 0x4d1d60u: goto label_4d1d60;
        case 0x4d1d64u: goto label_4d1d64;
        case 0x4d1d68u: goto label_4d1d68;
        case 0x4d1d6cu: goto label_4d1d6c;
        case 0x4d1d70u: goto label_4d1d70;
        case 0x4d1d74u: goto label_4d1d74;
        case 0x4d1d78u: goto label_4d1d78;
        case 0x4d1d7cu: goto label_4d1d7c;
        case 0x4d1d80u: goto label_4d1d80;
        case 0x4d1d84u: goto label_4d1d84;
        case 0x4d1d88u: goto label_4d1d88;
        case 0x4d1d8cu: goto label_4d1d8c;
        case 0x4d1d90u: goto label_4d1d90;
        case 0x4d1d94u: goto label_4d1d94;
        case 0x4d1d98u: goto label_4d1d98;
        case 0x4d1d9cu: goto label_4d1d9c;
        case 0x4d1da0u: goto label_4d1da0;
        case 0x4d1da4u: goto label_4d1da4;
        case 0x4d1da8u: goto label_4d1da8;
        case 0x4d1dacu: goto label_4d1dac;
        case 0x4d1db0u: goto label_4d1db0;
        case 0x4d1db4u: goto label_4d1db4;
        case 0x4d1db8u: goto label_4d1db8;
        case 0x4d1dbcu: goto label_4d1dbc;
        case 0x4d1dc0u: goto label_4d1dc0;
        case 0x4d1dc4u: goto label_4d1dc4;
        case 0x4d1dc8u: goto label_4d1dc8;
        case 0x4d1dccu: goto label_4d1dcc;
        case 0x4d1dd0u: goto label_4d1dd0;
        case 0x4d1dd4u: goto label_4d1dd4;
        case 0x4d1dd8u: goto label_4d1dd8;
        case 0x4d1ddcu: goto label_4d1ddc;
        case 0x4d1de0u: goto label_4d1de0;
        case 0x4d1de4u: goto label_4d1de4;
        case 0x4d1de8u: goto label_4d1de8;
        case 0x4d1decu: goto label_4d1dec;
        case 0x4d1df0u: goto label_4d1df0;
        case 0x4d1df4u: goto label_4d1df4;
        case 0x4d1df8u: goto label_4d1df8;
        case 0x4d1dfcu: goto label_4d1dfc;
        case 0x4d1e00u: goto label_4d1e00;
        case 0x4d1e04u: goto label_4d1e04;
        case 0x4d1e08u: goto label_4d1e08;
        case 0x4d1e0cu: goto label_4d1e0c;
        case 0x4d1e10u: goto label_4d1e10;
        case 0x4d1e14u: goto label_4d1e14;
        case 0x4d1e18u: goto label_4d1e18;
        case 0x4d1e1cu: goto label_4d1e1c;
        case 0x4d1e20u: goto label_4d1e20;
        case 0x4d1e24u: goto label_4d1e24;
        case 0x4d1e28u: goto label_4d1e28;
        case 0x4d1e2cu: goto label_4d1e2c;
        case 0x4d1e30u: goto label_4d1e30;
        case 0x4d1e34u: goto label_4d1e34;
        case 0x4d1e38u: goto label_4d1e38;
        case 0x4d1e3cu: goto label_4d1e3c;
        case 0x4d1e40u: goto label_4d1e40;
        case 0x4d1e44u: goto label_4d1e44;
        case 0x4d1e48u: goto label_4d1e48;
        case 0x4d1e4cu: goto label_4d1e4c;
        case 0x4d1e50u: goto label_4d1e50;
        case 0x4d1e54u: goto label_4d1e54;
        case 0x4d1e58u: goto label_4d1e58;
        case 0x4d1e5cu: goto label_4d1e5c;
        case 0x4d1e60u: goto label_4d1e60;
        case 0x4d1e64u: goto label_4d1e64;
        case 0x4d1e68u: goto label_4d1e68;
        case 0x4d1e6cu: goto label_4d1e6c;
        case 0x4d1e70u: goto label_4d1e70;
        case 0x4d1e74u: goto label_4d1e74;
        case 0x4d1e78u: goto label_4d1e78;
        case 0x4d1e7cu: goto label_4d1e7c;
        case 0x4d1e80u: goto label_4d1e80;
        case 0x4d1e84u: goto label_4d1e84;
        case 0x4d1e88u: goto label_4d1e88;
        case 0x4d1e8cu: goto label_4d1e8c;
        case 0x4d1e90u: goto label_4d1e90;
        case 0x4d1e94u: goto label_4d1e94;
        case 0x4d1e98u: goto label_4d1e98;
        case 0x4d1e9cu: goto label_4d1e9c;
        case 0x4d1ea0u: goto label_4d1ea0;
        case 0x4d1ea4u: goto label_4d1ea4;
        case 0x4d1ea8u: goto label_4d1ea8;
        case 0x4d1eacu: goto label_4d1eac;
        case 0x4d1eb0u: goto label_4d1eb0;
        case 0x4d1eb4u: goto label_4d1eb4;
        case 0x4d1eb8u: goto label_4d1eb8;
        case 0x4d1ebcu: goto label_4d1ebc;
        case 0x4d1ec0u: goto label_4d1ec0;
        case 0x4d1ec4u: goto label_4d1ec4;
        case 0x4d1ec8u: goto label_4d1ec8;
        case 0x4d1eccu: goto label_4d1ecc;
        case 0x4d1ed0u: goto label_4d1ed0;
        case 0x4d1ed4u: goto label_4d1ed4;
        case 0x4d1ed8u: goto label_4d1ed8;
        case 0x4d1edcu: goto label_4d1edc;
        case 0x4d1ee0u: goto label_4d1ee0;
        case 0x4d1ee4u: goto label_4d1ee4;
        case 0x4d1ee8u: goto label_4d1ee8;
        case 0x4d1eecu: goto label_4d1eec;
        case 0x4d1ef0u: goto label_4d1ef0;
        case 0x4d1ef4u: goto label_4d1ef4;
        case 0x4d1ef8u: goto label_4d1ef8;
        case 0x4d1efcu: goto label_4d1efc;
        case 0x4d1f00u: goto label_4d1f00;
        case 0x4d1f04u: goto label_4d1f04;
        case 0x4d1f08u: goto label_4d1f08;
        case 0x4d1f0cu: goto label_4d1f0c;
        case 0x4d1f10u: goto label_4d1f10;
        case 0x4d1f14u: goto label_4d1f14;
        case 0x4d1f18u: goto label_4d1f18;
        case 0x4d1f1cu: goto label_4d1f1c;
        case 0x4d1f20u: goto label_4d1f20;
        case 0x4d1f24u: goto label_4d1f24;
        case 0x4d1f28u: goto label_4d1f28;
        case 0x4d1f2cu: goto label_4d1f2c;
        case 0x4d1f30u: goto label_4d1f30;
        case 0x4d1f34u: goto label_4d1f34;
        case 0x4d1f38u: goto label_4d1f38;
        case 0x4d1f3cu: goto label_4d1f3c;
        case 0x4d1f40u: goto label_4d1f40;
        case 0x4d1f44u: goto label_4d1f44;
        case 0x4d1f48u: goto label_4d1f48;
        case 0x4d1f4cu: goto label_4d1f4c;
        case 0x4d1f50u: goto label_4d1f50;
        case 0x4d1f54u: goto label_4d1f54;
        case 0x4d1f58u: goto label_4d1f58;
        case 0x4d1f5cu: goto label_4d1f5c;
        case 0x4d1f60u: goto label_4d1f60;
        case 0x4d1f64u: goto label_4d1f64;
        case 0x4d1f68u: goto label_4d1f68;
        case 0x4d1f6cu: goto label_4d1f6c;
        case 0x4d1f70u: goto label_4d1f70;
        case 0x4d1f74u: goto label_4d1f74;
        case 0x4d1f78u: goto label_4d1f78;
        case 0x4d1f7cu: goto label_4d1f7c;
        case 0x4d1f80u: goto label_4d1f80;
        case 0x4d1f84u: goto label_4d1f84;
        case 0x4d1f88u: goto label_4d1f88;
        case 0x4d1f8cu: goto label_4d1f8c;
        case 0x4d1f90u: goto label_4d1f90;
        case 0x4d1f94u: goto label_4d1f94;
        case 0x4d1f98u: goto label_4d1f98;
        case 0x4d1f9cu: goto label_4d1f9c;
        case 0x4d1fa0u: goto label_4d1fa0;
        case 0x4d1fa4u: goto label_4d1fa4;
        case 0x4d1fa8u: goto label_4d1fa8;
        case 0x4d1facu: goto label_4d1fac;
        case 0x4d1fb0u: goto label_4d1fb0;
        case 0x4d1fb4u: goto label_4d1fb4;
        case 0x4d1fb8u: goto label_4d1fb8;
        case 0x4d1fbcu: goto label_4d1fbc;
        case 0x4d1fc0u: goto label_4d1fc0;
        case 0x4d1fc4u: goto label_4d1fc4;
        case 0x4d1fc8u: goto label_4d1fc8;
        case 0x4d1fccu: goto label_4d1fcc;
        case 0x4d1fd0u: goto label_4d1fd0;
        case 0x4d1fd4u: goto label_4d1fd4;
        case 0x4d1fd8u: goto label_4d1fd8;
        case 0x4d1fdcu: goto label_4d1fdc;
        case 0x4d1fe0u: goto label_4d1fe0;
        case 0x4d1fe4u: goto label_4d1fe4;
        case 0x4d1fe8u: goto label_4d1fe8;
        case 0x4d1fecu: goto label_4d1fec;
        case 0x4d1ff0u: goto label_4d1ff0;
        case 0x4d1ff4u: goto label_4d1ff4;
        case 0x4d1ff8u: goto label_4d1ff8;
        case 0x4d1ffcu: goto label_4d1ffc;
        case 0x4d2000u: goto label_4d2000;
        case 0x4d2004u: goto label_4d2004;
        case 0x4d2008u: goto label_4d2008;
        case 0x4d200cu: goto label_4d200c;
        case 0x4d2010u: goto label_4d2010;
        case 0x4d2014u: goto label_4d2014;
        case 0x4d2018u: goto label_4d2018;
        case 0x4d201cu: goto label_4d201c;
        case 0x4d2020u: goto label_4d2020;
        case 0x4d2024u: goto label_4d2024;
        case 0x4d2028u: goto label_4d2028;
        case 0x4d202cu: goto label_4d202c;
        case 0x4d2030u: goto label_4d2030;
        case 0x4d2034u: goto label_4d2034;
        case 0x4d2038u: goto label_4d2038;
        case 0x4d203cu: goto label_4d203c;
        case 0x4d2040u: goto label_4d2040;
        case 0x4d2044u: goto label_4d2044;
        case 0x4d2048u: goto label_4d2048;
        case 0x4d204cu: goto label_4d204c;
        case 0x4d2050u: goto label_4d2050;
        case 0x4d2054u: goto label_4d2054;
        case 0x4d2058u: goto label_4d2058;
        case 0x4d205cu: goto label_4d205c;
        case 0x4d2060u: goto label_4d2060;
        case 0x4d2064u: goto label_4d2064;
        case 0x4d2068u: goto label_4d2068;
        case 0x4d206cu: goto label_4d206c;
        case 0x4d2070u: goto label_4d2070;
        case 0x4d2074u: goto label_4d2074;
        case 0x4d2078u: goto label_4d2078;
        case 0x4d207cu: goto label_4d207c;
        case 0x4d2080u: goto label_4d2080;
        case 0x4d2084u: goto label_4d2084;
        case 0x4d2088u: goto label_4d2088;
        case 0x4d208cu: goto label_4d208c;
        case 0x4d2090u: goto label_4d2090;
        case 0x4d2094u: goto label_4d2094;
        case 0x4d2098u: goto label_4d2098;
        case 0x4d209cu: goto label_4d209c;
        case 0x4d20a0u: goto label_4d20a0;
        case 0x4d20a4u: goto label_4d20a4;
        case 0x4d20a8u: goto label_4d20a8;
        case 0x4d20acu: goto label_4d20ac;
        case 0x4d20b0u: goto label_4d20b0;
        case 0x4d20b4u: goto label_4d20b4;
        case 0x4d20b8u: goto label_4d20b8;
        case 0x4d20bcu: goto label_4d20bc;
        case 0x4d20c0u: goto label_4d20c0;
        case 0x4d20c4u: goto label_4d20c4;
        case 0x4d20c8u: goto label_4d20c8;
        case 0x4d20ccu: goto label_4d20cc;
        case 0x4d20d0u: goto label_4d20d0;
        case 0x4d20d4u: goto label_4d20d4;
        case 0x4d20d8u: goto label_4d20d8;
        case 0x4d20dcu: goto label_4d20dc;
        case 0x4d20e0u: goto label_4d20e0;
        case 0x4d20e4u: goto label_4d20e4;
        case 0x4d20e8u: goto label_4d20e8;
        case 0x4d20ecu: goto label_4d20ec;
        case 0x4d20f0u: goto label_4d20f0;
        case 0x4d20f4u: goto label_4d20f4;
        case 0x4d20f8u: goto label_4d20f8;
        case 0x4d20fcu: goto label_4d20fc;
        case 0x4d2100u: goto label_4d2100;
        case 0x4d2104u: goto label_4d2104;
        case 0x4d2108u: goto label_4d2108;
        case 0x4d210cu: goto label_4d210c;
        case 0x4d2110u: goto label_4d2110;
        case 0x4d2114u: goto label_4d2114;
        case 0x4d2118u: goto label_4d2118;
        case 0x4d211cu: goto label_4d211c;
        case 0x4d2120u: goto label_4d2120;
        case 0x4d2124u: goto label_4d2124;
        case 0x4d2128u: goto label_4d2128;
        case 0x4d212cu: goto label_4d212c;
        case 0x4d2130u: goto label_4d2130;
        case 0x4d2134u: goto label_4d2134;
        case 0x4d2138u: goto label_4d2138;
        case 0x4d213cu: goto label_4d213c;
        case 0x4d2140u: goto label_4d2140;
        case 0x4d2144u: goto label_4d2144;
        case 0x4d2148u: goto label_4d2148;
        case 0x4d214cu: goto label_4d214c;
        case 0x4d2150u: goto label_4d2150;
        case 0x4d2154u: goto label_4d2154;
        case 0x4d2158u: goto label_4d2158;
        case 0x4d215cu: goto label_4d215c;
        case 0x4d2160u: goto label_4d2160;
        case 0x4d2164u: goto label_4d2164;
        case 0x4d2168u: goto label_4d2168;
        case 0x4d216cu: goto label_4d216c;
        case 0x4d2170u: goto label_4d2170;
        case 0x4d2174u: goto label_4d2174;
        case 0x4d2178u: goto label_4d2178;
        case 0x4d217cu: goto label_4d217c;
        case 0x4d2180u: goto label_4d2180;
        case 0x4d2184u: goto label_4d2184;
        case 0x4d2188u: goto label_4d2188;
        case 0x4d218cu: goto label_4d218c;
        case 0x4d2190u: goto label_4d2190;
        case 0x4d2194u: goto label_4d2194;
        case 0x4d2198u: goto label_4d2198;
        case 0x4d219cu: goto label_4d219c;
        case 0x4d21a0u: goto label_4d21a0;
        case 0x4d21a4u: goto label_4d21a4;
        case 0x4d21a8u: goto label_4d21a8;
        case 0x4d21acu: goto label_4d21ac;
        case 0x4d21b0u: goto label_4d21b0;
        case 0x4d21b4u: goto label_4d21b4;
        case 0x4d21b8u: goto label_4d21b8;
        case 0x4d21bcu: goto label_4d21bc;
        case 0x4d21c0u: goto label_4d21c0;
        case 0x4d21c4u: goto label_4d21c4;
        case 0x4d21c8u: goto label_4d21c8;
        case 0x4d21ccu: goto label_4d21cc;
        case 0x4d21d0u: goto label_4d21d0;
        case 0x4d21d4u: goto label_4d21d4;
        case 0x4d21d8u: goto label_4d21d8;
        case 0x4d21dcu: goto label_4d21dc;
        case 0x4d21e0u: goto label_4d21e0;
        case 0x4d21e4u: goto label_4d21e4;
        case 0x4d21e8u: goto label_4d21e8;
        case 0x4d21ecu: goto label_4d21ec;
        case 0x4d21f0u: goto label_4d21f0;
        case 0x4d21f4u: goto label_4d21f4;
        default: break;
    }

    ctx->pc = 0x4d1ca0u;

label_4d1ca0:
    // 0x4d1ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d1ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d1ca4:
    // 0x4d1ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d1ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d1ca8:
    // 0x4d1ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d1ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d1cac:
    // 0x4d1cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d1cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d1cb0:
    // 0x4d1cb0: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4d1cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4d1cb4:
    // 0x4d1cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d1cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d1cb8:
    // 0x4d1cb8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4d1cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d1cbc:
    // 0x4d1cbc: 0x442002f  bltzl       $v0, . + 4 + (0x2F << 2)
label_4d1cc0:
    if (ctx->pc == 0x4D1CC0u) {
        ctx->pc = 0x4D1CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1CBCu;
        // 0x4d1cc0: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1CC4u;
        goto label_4d1cc4;
    }
    ctx->pc = 0x4D1CBCu;
    {
        const bool branch_taken_0x4d1cbc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4d1cbc) {
            ctx->pc = 0x4D1CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1CBCu;
            // 0x4d1cc0: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1D7Cu;
            goto label_4d1d7c;
        }
    }
    ctx->pc = 0x4D1CC4u;
label_4d1cc4:
    // 0x4d1cc4: 0xc12b642  jal         func_4AD908
label_4d1cc8:
    if (ctx->pc == 0x4D1CC8u) {
        ctx->pc = 0x4D1CCCu;
        goto label_4d1ccc;
    }
    ctx->pc = 0x4D1CC4u;
    SET_GPR_U32(ctx, 31, 0x4D1CCCu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4D1CC4u, 0x4D1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1CCCu;
label_4d1ccc:
    // 0x4d1ccc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d1cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d1cd0:
    // 0x4d1cd0: 0x24a51010  addiu       $a1, $a1, 0x1010
    ctx->pc = 0x4d1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
label_4d1cd4:
    // 0x4d1cd4: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d1cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4d1cd8:
    // 0x4d1cd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4d1cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d1cdc:
    // 0x4d1cdc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4d1cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4d1ce0:
    // 0x4d1ce0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d1ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d1ce4:
    // 0x4d1ce4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4d1ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4d1ce8:
    // 0x4d1ce8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d1cec:
    // 0x4d1cec: 0x24070078  addiu       $a3, $zero, 0x78
    ctx->pc = 0x4d1cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_4d1cf0:
    // 0x4d1cf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d1cf4:
    // 0x4d1cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d1cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d1cf8:
    // 0x4d1cf8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d1cfc:
    // 0x4d1cfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d1d00:
    // 0x4d1d00: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d1d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d1d04:
    // 0x4d1d04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4d1d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4d1d08:
    // 0x4d1d08: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d1d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d1d0c:
    // 0x4d1d0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d1d10:
    // 0x4d1d10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d1d14:
    // 0x4d1d14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d1d18:
    // 0x4d1d18: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4d1d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d1d1c:
    // 0x4d1d1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d1d20:
    // 0x4d1d20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4d1d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_4d1d24:
    // 0x4d1d24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d1d28:
    // 0x4d1d28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4d1d28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4d1d2c:
    // 0x4d1d2c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4d1d2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4d1d30:
    // 0x4d1d30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d1d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d1d34:
    // 0x4d1d34: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d1d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d1d38:
    // 0x4d1d38: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d1d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d1d3c:
    // 0x4d1d3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4d1d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4d1d40:
    // 0x4d1d40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4d1d44:
    // 0x4d1d44: 0x946374c0  lhu         $v1, 0x74C0($v1)
    ctx->pc = 0x4d1d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 29888)));
label_4d1d48:
    // 0x4d1d48: 0xa607015e  sh          $a3, 0x15E($s0)
    ctx->pc = 0x4d1d48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 7));
label_4d1d4c:
    // 0x4d1d4c: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4d1d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
label_4d1d50:
    // 0x4d1d50: 0xa608000e  sh          $t0, 0xE($s0)
    ctx->pc = 0x4d1d50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 8));
label_4d1d54:
    // 0x4d1d54: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4d1d54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
label_4d1d58:
    // 0x4d1d58: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4d1d58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
label_4d1d5c:
    // 0x4d1d5c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d1d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d1d60:
    // 0x4d1d60: 0xc127e84  jal         func_49FA10
label_4d1d64:
    if (ctx->pc == 0x4D1D64u) {
        ctx->pc = 0x4D1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D60u;
        // 0x4d1d64: 0xa6000162  sh          $zero, 0x162($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1D68u;
        goto label_4d1d68;
    }
    ctx->pc = 0x4D1D60u;
    SET_GPR_U32(ctx, 31, 0x4D1D68u);
    ctx->pc = 0x4D1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1D60u;
    // 0x4d1d64: 0xa6000162  sh          $zero, 0x162($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4D1D60u, 0x4D1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1D68u;
label_4d1d68:
    // 0x4d1d68: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4d1d68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4d1d6c:
    // 0x4d1d6c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4d1d6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4d1d70:
    // 0x4d1d70: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4d1d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4d1d74:
    // 0x4d1d74: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4d1d74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1d78:
    // 0x4d1d78: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4d1d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4d1d7c:
    // 0x4d1d7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d1d80:
    // 0x4d1d80: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_4d1d84:
    if (ctx->pc == 0x4D1D84u) {
        ctx->pc = 0x4D1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D80u;
        // 0x4d1d84: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1D88u;
        goto label_4d1d88;
    }
    ctx->pc = 0x4D1D80u;
    {
        const bool branch_taken_0x4d1d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D80u;
        // 0x4d1d84: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1d80) {
            ctx->pc = 0x4D1DC8u;
            goto label_4d1dc8;
        }
    }
    ctx->pc = 0x4D1D88u;
label_4d1d88:
    // 0x4d1d88: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4d1d8c:
    if (ctx->pc == 0x4D1D8Cu) {
        ctx->pc = 0x4D1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D88u;
        // 0x4d1d8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1D90u;
        goto label_4d1d90;
    }
    ctx->pc = 0x4D1D88u;
    {
        const bool branch_taken_0x4d1d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1d88) {
            ctx->pc = 0x4D1D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1D88u;
            // 0x4d1d8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1DA0u;
            goto label_4d1da0;
        }
    }
    ctx->pc = 0x4D1D90u;
label_4d1d90:
    // 0x4d1d90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4d1d94:
    if (ctx->pc == 0x4D1D94u) {
        ctx->pc = 0x4D1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D90u;
        // 0x4d1d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1D98u;
        goto label_4d1d98;
    }
    ctx->pc = 0x4D1D90u;
    {
        const bool branch_taken_0x4d1d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D90u;
        // 0x4d1d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1d90) {
            ctx->pc = 0x4D1DB0u;
            goto label_4d1db0;
        }
    }
    ctx->pc = 0x4D1D98u;
label_4d1d98:
    // 0x4d1d98: 0x10000017  b           . + 4 + (0x17 << 2)
label_4d1d9c:
    if (ctx->pc == 0x4D1D9Cu) {
        ctx->pc = 0x4D1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D98u;
        // 0x4d1d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1DA0u;
        goto label_4d1da0;
    }
    ctx->pc = 0x4D1D98u;
    {
        const bool branch_taken_0x4d1d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1D98u;
        // 0x4d1d9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1d98) {
            ctx->pc = 0x4D1DF8u;
            goto label_4d1df8;
        }
    }
    ctx->pc = 0x4D1DA0u;
label_4d1da0:
    // 0x4d1da0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_4d1da4:
    if (ctx->pc == 0x4D1DA4u) {
        ctx->pc = 0x4D1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DA0u;
        // 0x4d1da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1DA8u;
        goto label_4d1da8;
    }
    ctx->pc = 0x4D1DA0u;
    {
        const bool branch_taken_0x4d1da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DA0u;
        // 0x4d1da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1da0) {
            ctx->pc = 0x4D1DE0u;
            goto label_4d1de0;
        }
    }
    ctx->pc = 0x4D1DA8u;
label_4d1da8:
    // 0x4d1da8: 0x10000013  b           . + 4 + (0x13 << 2)
label_4d1dac:
    if (ctx->pc == 0x4D1DACu) {
        ctx->pc = 0x4D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DA8u;
        // 0x4d1dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1DB0u;
        goto label_4d1db0;
    }
    ctx->pc = 0x4D1DA8u;
    {
        const bool branch_taken_0x4d1da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DA8u;
        // 0x4d1dac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1da8) {
            ctx->pc = 0x4D1DF8u;
            goto label_4d1df8;
        }
    }
    ctx->pc = 0x4D1DB0u;
label_4d1db0:
    // 0x4d1db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1db4:
    // 0x4d1db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d1db8:
    // 0x4d1db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1dbc:
    // 0x4d1dbc: 0x8134782  j           func_4D1E08
label_4d1dc0:
    if (ctx->pc == 0x4D1DC0u) {
        ctx->pc = 0x4D1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DBCu;
        // 0x4d1dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1DC4u;
        goto label_4d1dc4;
    }
    ctx->pc = 0x4D1DBCu;
    ctx->pc = 0x4D1DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1DBCu;
    // 0x4d1dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D1E08u;
    goto label_4d1e08;
    ctx->pc = 0x4D1DC4u;
label_4d1dc4:
    // 0x4d1dc4: 0x0  nop
    ctx->pc = 0x4d1dc4u;
    // NOP
label_4d1dc8:
    // 0x4d1dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d1dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d1dcc:
    // 0x4d1dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1dd0:
    // 0x4d1dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d1dd4:
    // 0x4d1dd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1dd8:
    // 0x4d1dd8: 0x813480e  j           func_4D2038
label_4d1ddc:
    if (ctx->pc == 0x4D1DDCu) {
        ctx->pc = 0x4D1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DD8u;
        // 0x4d1ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1DE0u;
        goto label_4d1de0;
    }
    ctx->pc = 0x4D1DD8u;
    ctx->pc = 0x4D1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1DD8u;
    // 0x4d1ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2038u;
    goto label_4d2038;
    ctx->pc = 0x4D1DE0u;
label_4d1de0:
    // 0x4d1de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1de4:
    // 0x4d1de4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d1de8:
    // 0x4d1de8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1dec:
    // 0x4d1dec: 0x8134828  j           func_4D20A0
label_4d1df0:
    if (ctx->pc == 0x4D1DF0u) {
        ctx->pc = 0x4D1DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DECu;
        // 0x4d1df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1DF4u;
        goto label_4d1df4;
    }
    ctx->pc = 0x4D1DECu;
    ctx->pc = 0x4D1DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1DECu;
    // 0x4d1df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D20A0u;
    goto label_4d20a0;
    ctx->pc = 0x4D1DF4u;
label_4d1df4:
    // 0x4d1df4: 0x0  nop
    ctx->pc = 0x4d1df4u;
    // NOP
label_4d1df8:
    // 0x4d1df8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1df8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d1dfc:
    // 0x4d1dfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d1dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1e00:
    // 0x4d1e00: 0x3e00008  jr          $ra
label_4d1e04:
    if (ctx->pc == 0x4D1E04u) {
        ctx->pc = 0x4D1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E00u;
        // 0x4d1e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1E08u;
        goto label_4d1e08;
    }
    ctx->pc = 0x4D1E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E00u;
        // 0x4d1e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D1E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D1E08u;
label_4d1e08:
    // 0x4d1e08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d1e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d1e0c:
    // 0x4d1e0c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d1e10:
    // 0x4d1e10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4d1e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4d1e14:
    // 0x4d1e14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4d1e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_4d1e18:
    // 0x4d1e18: 0x24491024  addiu       $t1, $v0, 0x1024
    ctx->pc = 0x4d1e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4132));
label_4d1e1c:
    // 0x4d1e1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4d1e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_4d1e20:
    // 0x4d1e20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4d1e24:
    // 0x4d1e24: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4d1e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_4d1e28:
    // 0x4d1e28: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x4d1e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_4d1e2c:
    // 0x4d1e2c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4d1e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_4d1e30:
    // 0x4d1e30: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4d1e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_4d1e34:
    // 0x4d1e34: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4d1e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_4d1e38:
    // 0x4d1e38: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4d1e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_4d1e3c:
    // 0x4d1e3c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4d1e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_4d1e40:
    // 0x4d1e40: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x4d1e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_4d1e44:
    // 0x4d1e44: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4d1e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4d1e48:
    // 0x4d1e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d1e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4d1e4c:
    // 0x4d1e4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d1e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4d1e50:
    // 0x4d1e50: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4d1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4d1e54:
    // 0x4d1e54: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4d1e54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_4d1e58:
    // 0x4d1e58: 0x4600065  bltz        $v1, . + 4 + (0x65 << 2)
label_4d1e5c:
    if (ctx->pc == 0x4D1E5Cu) {
        ctx->pc = 0x4D1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E58u;
        // 0x4d1e5c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1E60u;
        goto label_4d1e60;
    }
    ctx->pc = 0x4D1E58u;
    {
        const bool branch_taken_0x4d1e58 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1E58u;
        // 0x4d1e5c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1e58) {
            ctx->pc = 0x4D1FF0u;
            goto label_4d1ff0;
        }
    }
    ctx->pc = 0x4D1E60u;
label_4d1e60:
    // 0x4d1e60: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4d1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4d1e64:
    // 0x4d1e64: 0x26430028  addiu       $v1, $s2, 0x28
    ctx->pc = 0x4d1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_4d1e68:
    // 0x4d1e68: 0x24531010  addiu       $s3, $v0, 0x1010
    ctx->pc = 0x4d1e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4112));
label_4d1e6c:
    // 0x4d1e6c: 0x26420026  addiu       $v0, $s2, 0x26
    ctx->pc = 0x4d1e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 38));
label_4d1e70:
    // 0x4d1e70: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d1e70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4d1e74:
    // 0x4d1e74: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d1e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d1e78:
    // 0x4d1e78: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d1e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d1e7c:
    // 0x4d1e7c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4d1e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4d1e80:
    // 0x4d1e80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4d1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4d1e84:
    // 0x4d1e84: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x4d1e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4d1e88:
    // 0x4d1e88: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4d1e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4d1e8c:
    // 0x4d1e8c: 0x24961018  addiu       $s6, $a0, 0x1018
    ctx->pc = 0x4d1e8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4120));
label_4d1e90:
    // 0x4d1e90: 0x24b7101c  addiu       $s7, $a1, 0x101C
    ctx->pc = 0x4d1e90u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 4124));
label_4d1e94:
    // 0x4d1e94: 0x24d51020  addiu       $s5, $a2, 0x1020
    ctx->pc = 0x4d1e94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 4128));
label_4d1e98:
    // 0x4d1e98: 0x24fe1014  addiu       $fp, $a3, 0x1014
    ctx->pc = 0x4d1e98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4116));
label_4d1e9c:
    // 0x4d1e9c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4d1e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4d1ea0:
    // 0x4d1ea0: 0xc12b5dc  jal         func_4AD770
label_4d1ea4:
    if (ctx->pc == 0x4D1EA4u) {
        ctx->pc = 0x4D1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1EA0u;
        // 0x4d1ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1EA8u;
        goto label_4d1ea8;
    }
    ctx->pc = 0x4D1EA0u;
    SET_GPR_U32(ctx, 31, 0x4D1EA8u);
    ctx->pc = 0x4D1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1EA0u;
    // 0x4d1ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4D1EA0u, 0x4D1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1EA8u;
label_4d1ea8:
    // 0x4d1ea8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4d1ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4d1eac:
    // 0x4d1eac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4d1eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d1eb0:
    // 0x4d1eb0: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x4d1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_4d1eb4:
    // 0x4d1eb4: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x4d1eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_4d1eb8:
    // 0x4d1eb8: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x4d1eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_4d1ebc:
    // 0x4d1ebc: 0x24e774c8  addiu       $a3, $a3, 0x74C8
    ctx->pc = 0x4d1ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29896));
label_4d1ec0:
    // 0x4d1ec0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4d1ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4d1ec4:
    // 0x4d1ec4: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d1ec4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d1ec8:
    // 0x4d1ec8: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4d1ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4d1ecc:
    // 0x4d1ecc: 0xa60201be  sh          $v0, 0x1BE($s0)
    ctx->pc = 0x4d1eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 446), (uint16_t)GPR_U32(ctx, 2));
label_4d1ed0:
    // 0x4d1ed0: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4d1ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4d1ed4:
    // 0x4d1ed4: 0xae120140  sw          $s2, 0x140($s0)
    ctx->pc = 0x4d1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 18));
label_4d1ed8:
    // 0x4d1ed8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d1ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d1edc:
    // 0x4d1edc: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4d1edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d1ee0:
    // 0x4d1ee0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4d1ee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
label_4d1ee4:
    // 0x4d1ee4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d1ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d1ee8:
    // 0x4d1ee8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d1eec:
    // 0x4d1eec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d1ef0:
    // 0x4d1ef0: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4d1ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d1ef4:
    // 0x4d1ef4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4d1ef8:
    // 0x4d1ef8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d1efc:
    // 0x4d1efc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d1f00:
    // 0x4d1f00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4d1f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4d1f04:
    // 0x4d1f04: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4d1f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4d1f08:
    // 0x4d1f08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4d1f0c:
    // 0x4d1f0c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4d1f0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4d1f10:
    // 0x4d1f10: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4d1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4d1f14:
    // 0x4d1f14: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4d1f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4d1f18:
    // 0x4d1f18: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4d1f18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d1f1c:
    // 0x4d1f1c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d1f20:
    // 0x4d1f20: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4d1f20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
label_4d1f24:
    // 0x4d1f24: 0x84490000  lh          $t1, 0x0($v0)
    ctx->pc = 0x4d1f24u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d1f28:
    // 0x4d1f28: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d1f2c:
    // 0x4d1f2c: 0x844a0002  lh          $t2, 0x2($v0)
    ctx->pc = 0x4d1f2cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_4d1f30:
    // 0x4d1f30: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d1f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d1f34:
    // 0x4d1f34: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4d1f34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
label_4d1f38:
    // 0x4d1f38: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4d1f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_4d1f3c:
    // 0x4d1f3c: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4d1f3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
label_4d1f40:
    // 0x4d1f40: 0x8ee70000  lw          $a3, 0x0($s7)
    ctx->pc = 0x4d1f40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4d1f44:
    // 0x4d1f44: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d1f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d1f48:
    // 0x4d1f48: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x4d1f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4d1f4c:
    // 0x4d1f4c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4d1f4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
label_4d1f50:
    // 0x4d1f50: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d1f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4d1f54:
    // 0x4d1f54: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4d1f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_4d1f58:
    // 0x4d1f58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d1f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d1f5c:
    // 0x4d1f5c: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4d1f5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_4d1f60:
    // 0x4d1f60: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4d1f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
label_4d1f64:
    // 0x4d1f64: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4d1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
label_4d1f68:
    // 0x4d1f68: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x4d1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
label_4d1f6c:
    // 0x4d1f6c: 0xaea60000  sw          $a2, 0x0($s5)
    ctx->pc = 0x4d1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 6));
label_4d1f70:
    // 0x4d1f70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1f74:
    // 0x4d1f74: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x4d1f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d1f78:
    // 0x4d1f78: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4d1f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d1f7c:
    // 0x4d1f7c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d1f7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4d1f80:
    // 0x4d1f80: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4d1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_4d1f84:
    // 0x4d1f84: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d1f88:
    // 0x4d1f88: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d1f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4d1f8c:
    // 0x4d1f8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d1f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d1f90:
    // 0x4d1f90: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4d1f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_4d1f94:
    // 0x4d1f94: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4d1f94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4d1f98:
    // 0x4d1f98: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4d1f98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4d1f9c:
    // 0x4d1f9c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4d1f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_4d1fa0:
    // 0x4d1fa0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d1fa4:
    // 0x4d1fa4: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4d1fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_4d1fa8:
    // 0x4d1fa8: 0xc12b87a  jal         func_4AE1E8
label_4d1fac:
    if (ctx->pc == 0x4D1FACu) {
        ctx->pc = 0x4D1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1FA8u;
        // 0x4d1fac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1FB0u;
        goto label_4d1fb0;
    }
    ctx->pc = 0x4D1FA8u;
    SET_GPR_U32(ctx, 31, 0x4D1FB0u);
    ctx->pc = 0x4D1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1FA8u;
    // 0x4d1fac: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D1FA8u, 0x4D1FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1FB0u;
label_4d1fb0:
    // 0x4d1fb0: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4d1fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d1fb4:
    // 0x4d1fb4: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x4d1fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
label_4d1fb8:
    // 0x4d1fb8: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4d1fb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d1fbc:
    // 0x4d1fbc: 0xa6030166  sh          $v1, 0x166($s0)
    ctx->pc = 0x4d1fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
label_4d1fc0:
    // 0x4d1fc0: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4d1fc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_4d1fc4:
    // 0x4d1fc4: 0xa6020168  sh          $v0, 0x168($s0)
    ctx->pc = 0x4d1fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 2));
label_4d1fc8:
    // 0x4d1fc8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4d1fc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d1fcc:
    // 0x4d1fcc: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4d1fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4d1fd0:
    // 0x4d1fd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4d1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4d1fd4:
    // 0x4d1fd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4d1fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4d1fd8:
    // 0x4d1fd8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4d1fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_4d1fdc:
    // 0x4d1fdc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4d1fdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4d1fe0:
    // 0x4d1fe0: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4d1fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_4d1fe4:
    // 0x4d1fe4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4d1fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4d1fe8:
    // 0x4d1fe8: 0x441ffad  bgez        $v0, . + 4 + (-0x53 << 2)
label_4d1fec:
    if (ctx->pc == 0x4D1FECu) {
        ctx->pc = 0x4D1FF0u;
        goto label_4d1ff0;
    }
    ctx->pc = 0x4D1FE8u;
    {
        const bool branch_taken_0x4d1fe8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4d1fe8) {
            ctx->pc = 0x4D1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1ea0;
        }
    }
    ctx->pc = 0x4D1FF0u;
label_4d1ff0:
    // 0x4d1ff0: 0x264301bc  addiu       $v1, $s2, 0x1BC
    ctx->pc = 0x4d1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 444));
label_4d1ff4:
    // 0x4d1ff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d1ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d1ff8:
    // 0x4d1ff8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d1ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d1ffc:
    // 0x4d1ffc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4d1ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d2000:
    // 0x4d2000: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4d2000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d2004:
    // 0x4d2004: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4d2008:
    // 0x4d2008: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4d2008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d200c:
    // 0x4d200c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4d200cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d2010:
    // 0x4d2010: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4d2010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d2014:
    // 0x4d2014: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4d2014u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d2018:
    // 0x4d2018: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4d2018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d201c:
    // 0x4d201c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4d201cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d2020:
    // 0x4d2020: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4d2020u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d2024:
    // 0x4d2024: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4d2024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_4d2028:
    // 0x4d2028: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d2028u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d202c:
    // 0x4d202c: 0x813480e  j           func_4D2038
label_4d2030:
    if (ctx->pc == 0x4D2030u) {
        ctx->pc = 0x4D2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D202Cu;
        // 0x4d2030: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2034u;
        goto label_4d2034;
    }
    ctx->pc = 0x4D202Cu;
    ctx->pc = 0x4D2030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D202Cu;
    // 0x4d2030: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D2038u;
    goto label_4d2038;
    ctx->pc = 0x4D2034u;
label_4d2034:
    // 0x4d2034: 0x0  nop
    ctx->pc = 0x4d2034u;
    // NOP
label_4d2038:
    // 0x4d2038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d2038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d203c:
    // 0x4d203c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d2040:
    // 0x4d2040: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d2040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d2044:
    // 0x4d2044: 0xc122db4  jal         func_48B6D0
label_4d2048:
    if (ctx->pc == 0x4D2048u) {
        ctx->pc = 0x4D2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2044u;
        // 0x4d2048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D204Cu;
        goto label_4d204c;
    }
    ctx->pc = 0x4D2044u;
    SET_GPR_U32(ctx, 31, 0x4D204Cu);
    ctx->pc = 0x4D2048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2044u;
    // 0x4d2048: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4D2044u, 0x4D204Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D204Cu;
label_4d204c:
    // 0x4d204c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4d2050:
    if (ctx->pc == 0x4D2050u) {
        ctx->pc = 0x4D2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D204Cu;
        // 0x4d2050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2054u;
        goto label_4d2054;
    }
    ctx->pc = 0x4D204Cu;
    {
        const bool branch_taken_0x4d204c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d204c) {
            ctx->pc = 0x4D2050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D204Cu;
            // 0x4d2050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D2094u;
            goto label_4d2094;
        }
    }
    ctx->pc = 0x4D2054u;
label_4d2054:
    // 0x4d2054: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x4d2054u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
label_4d2058:
    // 0x4d2058: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_4d205c:
    if (ctx->pc == 0x4D205Cu) {
        ctx->pc = 0x4D205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2058u;
        // 0x4d205c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2060u;
        goto label_4d2060;
    }
    ctx->pc = 0x4D2058u;
    {
        const bool branch_taken_0x4d2058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d2058) {
            ctx->pc = 0x4D205Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D2058u;
            // 0x4d205c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D2094u;
            goto label_4d2094;
        }
    }
    ctx->pc = 0x4D2060u;
label_4d2060:
    // 0x4d2060: 0xc126d66  jal         func_49B598
label_4d2064:
    if (ctx->pc == 0x4D2064u) {
        ctx->pc = 0x4D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2060u;
        // 0x4d2064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2068u;
        goto label_4d2068;
    }
    ctx->pc = 0x4D2060u;
    SET_GPR_U32(ctx, 31, 0x4D2068u);
    ctx->pc = 0x4D2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2060u;
    // 0x4d2064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4D2060u, 0x4D2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2068u;
label_4d2068:
    // 0x4d2068: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d2068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4d206c:
    // 0x4d206c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_4d2070:
    // 0x4d2070: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4d2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4d2074:
    // 0x4d2074: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d2074u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
label_4d2078:
    // 0x4d2078: 0xc1297fa  jal         func_4A5FE8
label_4d207c:
    if (ctx->pc == 0x4D207Cu) {
        ctx->pc = 0x4D207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2078u;
        // 0x4d207c: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2080u;
        goto label_4d2080;
    }
    ctx->pc = 0x4D2078u;
    SET_GPR_U32(ctx, 31, 0x4D2080u);
    ctx->pc = 0x4D207Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D2078u;
    // 0x4d207c: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D2078u, 0x4D2080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D2080u;
label_4d2080:
    // 0x4d2080: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d2080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d2084:
    // 0x4d2084: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d2084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d2088:
    // 0x4d2088: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d2088u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d208c:
    // 0x4d208c: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d208cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d2090:
    // 0x4d2090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d2094:
    // 0x4d2094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d2094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d2098:
    // 0x4d2098: 0x3e00008  jr          $ra
label_4d209c:
    if (ctx->pc == 0x4D209Cu) {
        ctx->pc = 0x4D209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2098u;
        // 0x4d209c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D20A0u;
        goto label_4d20a0;
    }
    ctx->pc = 0x4D2098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2098u;
        // 0x4d209c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D2098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D20A0u;
label_4d20a0:
    // 0x4d20a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d20a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d20a4:
    // 0x4d20a4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d20a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d20a8:
    // 0x4d20a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d20a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d20ac:
    // 0x4d20ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d20acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d20b0:
    // 0x4d20b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d20b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d20b4:
    // 0x4d20b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d20b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d20b8:
    // 0x4d20b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d20b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d20bc:
    // 0x4d20bc: 0x24b21010  addiu       $s2, $a1, 0x1010
    ctx->pc = 0x4d20bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
label_4d20c0:
    // 0x4d20c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d20c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d20c4:
    // 0x4d20c4: 0x24d31028  addiu       $s3, $a2, 0x1028
    ctx->pc = 0x4d20c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4136));
label_4d20c8:
    // 0x4d20c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d20c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d20cc:
    // 0x4d20cc: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d20ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d20d0:
    // 0x4d20d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d20d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d20d4:
    // 0x4d20d4: 0x26230166  addiu       $v1, $s1, 0x166
    ctx->pc = 0x4d20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 358));
label_4d20d8:
    // 0x4d20d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d20dc:
    // 0x4d20dc: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x4d20dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_4d20e0:
    // 0x4d20e0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d20e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d20e4:
    // 0x4d20e4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d20e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d20e8:
    // 0x4d20e8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d20ec:
    // 0x4d20ec: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d20ecu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d20f0:
    // 0x4d20f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d20f4:
    // 0x4d20f4: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d20f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d20f8:
    // 0x4d20f8: 0x24957528  addiu       $s5, $a0, 0x7528
    ctx->pc = 0x4d20f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 29992));
label_4d20fc:
    // 0x4d20fc: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d20fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d2100:
    // 0x4d2100: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d2100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d2104:
    // 0x4d2104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d2104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d2108:
    // 0x4d2108: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d2108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d210c:
    // 0x4d210c: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d210cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d2110:
    // 0x4d2110: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d2110u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d2114:
    // 0x4d2114: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d2114u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d2118:
    // 0x4d2118: 0x1812  mflo        $v1
    ctx->pc = 0x4d2118u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d211c:
    // 0x4d211c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d211cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d2120:
    // 0x4d2120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d2124:
    // 0x4d2124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d2124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d2128:
    // 0x4d2128: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d212c:
    // 0x4d212c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d212cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d2130:
    // 0x4d2130: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d2130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d2134:
    // 0x4d2134: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d2138:
    if (ctx->pc == 0x4D2138u) {
        ctx->pc = 0x4D2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2134u;
        // 0x4d2138: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D213Cu;
        goto label_4d213c;
    }
    ctx->pc = 0x4D2134u;
    {
        const bool branch_taken_0x4d2134 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2134u;
        // 0x4d2138: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2134) {
            ctx->pc = 0x4D2190u;
            goto label_4d2190;
        }
    }
    ctx->pc = 0x4D213Cu;
label_4d213c:
    // 0x4d213c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d213cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d2140:
    // 0x4d2140: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d2140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d2144:
    // 0x4d2144: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d2144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d2148:
    // 0x4d2148: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d2148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d214c:
    // 0x4d214c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d2150:
    // 0x4d2150: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d2150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d2154:
    // 0x4d2154: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d2154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d2158:
    // 0x4d2158: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d2158u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d215c:
    // 0x4d215c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d215cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d2160:
    // 0x4d2160: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_4d2164:
    if (ctx->pc == 0x4D2164u) {
        ctx->pc = 0x4D2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2160u;
        // 0x4d2164: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2168u;
        goto label_4d2168;
    }
    ctx->pc = 0x4D2160u;
    {
        const bool branch_taken_0x4d2160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d2160) {
            ctx->pc = 0x4D2164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D2160u;
            // 0x4d2164: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D21C8u;
            goto label_4d21c8;
        }
    }
    ctx->pc = 0x4D2168u;
label_4d2168:
    // 0x4d2168: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d2168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d216c:
    // 0x4d216c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d216cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d2170:
    // 0x4d2170: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d2170u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d2174:
    // 0x4d2174: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d2174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d2178:
    // 0x4d2178: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d2178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d217c:
    // 0x4d217c: 0x40f809  jalr        $v0
label_4d2180:
    if (ctx->pc == 0x4D2180u) {
        ctx->pc = 0x4D2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D217Cu;
        // 0x4d2180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D2184u;
        goto label_4d2184;
    }
    ctx->pc = 0x4D217Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D2184u);
        ctx->pc = 0x4D2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D217Cu;
        // 0x4d2180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D217Cu, 0x4D2184u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D2184u;
label_4d2184:
    // 0x4d2184: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d2188:
    if (ctx->pc == 0x4D2188u) {
        ctx->pc = 0x4D2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2184u;
        // 0x4d2188: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D218Cu;
        goto label_4d218c;
    }
    ctx->pc = 0x4D2184u;
    {
        const bool branch_taken_0x4d2184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D2184u;
        // 0x4d2188: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d2184) {
            ctx->pc = 0x4D2110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d2110;
        }
    }
    ctx->pc = 0x4D218Cu;
label_4d218c:
    // 0x4d218c: 0x0  nop
    ctx->pc = 0x4d218cu;
    // NOP
label_4d2190:
    // 0x4d2190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d2190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d2194:
    // 0x4d2194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d2194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d2198:
    // 0x4d2198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d2198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d219c:
    // 0x4d219c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d219cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d21a0:
    // 0x4d21a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d21a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d21a4:
    // 0x4d21a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d21a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d21a8:
    // 0x4d21a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d21a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d21ac:
    // 0x4d21ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d21acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d21b0:
    // 0x4d21b0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d21b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d21b4:
    // 0x4d21b4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d21b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d21b8:
    // 0x4d21b8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d21b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d21bc:
    // 0x4d21bc: 0x812b62c  j           func_4AD8B0
label_4d21c0:
    if (ctx->pc == 0x4D21C0u) {
        ctx->pc = 0x4D21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21BCu;
        // 0x4d21c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D21C4u;
        goto label_4d21c4;
    }
    ctx->pc = 0x4D21BCu;
    ctx->pc = 0x4D21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D21BCu;
    // 0x4d21c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D21C4u;
label_4d21c4:
    // 0x4d21c4: 0x0  nop
    ctx->pc = 0x4d21c4u;
    // NOP
label_4d21c8:
    // 0x4d21c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d21c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d21cc:
    // 0x4d21cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d21ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d21d0:
    // 0x4d21d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d21d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d21d4:
    // 0x4d21d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d21d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d21d8:
    // 0x4d21d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d21d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d21dc:
    // 0x4d21dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d21dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d21e0:
    // 0x4d21e0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d21e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d21e4:
    // 0x4d21e4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d21e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d21e8:
    // 0x4d21e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d21e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d21ec:
    // 0x4d21ec: 0x3e00008  jr          $ra
label_4d21f0:
    if (ctx->pc == 0x4D21F0u) {
        ctx->pc = 0x4D21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21ECu;
        // 0x4d21f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D21F4u;
        goto label_4d21f4;
    }
    ctx->pc = 0x4D21ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D21ECu;
        // 0x4d21f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D21ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D21F4u;
label_4d21f4:
    // 0x4d21f4: 0x0  nop
    ctx->pc = 0x4d21f4u;
    // NOP
    ctx->pc = 0x4d21f8u;
}
