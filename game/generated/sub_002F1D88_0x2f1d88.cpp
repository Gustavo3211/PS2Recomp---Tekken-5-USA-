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

// Function: sub_002F1D88
// Address: 0x2f1d88 - 0x2f20e8
void sub_002F1D88_0x2f1d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D88_0x2f1d88");
#endif

    switch (ctx->pc) {
        case 0x2f1d88u: goto label_2f1d88;
        case 0x2f1d8cu: goto label_2f1d8c;
        case 0x2f1d90u: goto label_2f1d90;
        case 0x2f1d94u: goto label_2f1d94;
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1d9cu: goto label_2f1d9c;
        case 0x2f1da0u: goto label_2f1da0;
        case 0x2f1da4u: goto label_2f1da4;
        case 0x2f1da8u: goto label_2f1da8;
        case 0x2f1dacu: goto label_2f1dac;
        case 0x2f1db0u: goto label_2f1db0;
        case 0x2f1db4u: goto label_2f1db4;
        case 0x2f1db8u: goto label_2f1db8;
        case 0x2f1dbcu: goto label_2f1dbc;
        case 0x2f1dc0u: goto label_2f1dc0;
        case 0x2f1dc4u: goto label_2f1dc4;
        case 0x2f1dc8u: goto label_2f1dc8;
        case 0x2f1dccu: goto label_2f1dcc;
        case 0x2f1dd0u: goto label_2f1dd0;
        case 0x2f1dd4u: goto label_2f1dd4;
        case 0x2f1dd8u: goto label_2f1dd8;
        case 0x2f1ddcu: goto label_2f1ddc;
        case 0x2f1de0u: goto label_2f1de0;
        case 0x2f1de4u: goto label_2f1de4;
        case 0x2f1de8u: goto label_2f1de8;
        case 0x2f1decu: goto label_2f1dec;
        case 0x2f1df0u: goto label_2f1df0;
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1df8u: goto label_2f1df8;
        case 0x2f1dfcu: goto label_2f1dfc;
        case 0x2f1e00u: goto label_2f1e00;
        case 0x2f1e04u: goto label_2f1e04;
        case 0x2f1e08u: goto label_2f1e08;
        case 0x2f1e0cu: goto label_2f1e0c;
        case 0x2f1e10u: goto label_2f1e10;
        case 0x2f1e14u: goto label_2f1e14;
        case 0x2f1e18u: goto label_2f1e18;
        case 0x2f1e1cu: goto label_2f1e1c;
        case 0x2f1e20u: goto label_2f1e20;
        case 0x2f1e24u: goto label_2f1e24;
        case 0x2f1e28u: goto label_2f1e28;
        case 0x2f1e2cu: goto label_2f1e2c;
        case 0x2f1e30u: goto label_2f1e30;
        case 0x2f1e34u: goto label_2f1e34;
        case 0x2f1e38u: goto label_2f1e38;
        case 0x2f1e3cu: goto label_2f1e3c;
        case 0x2f1e40u: goto label_2f1e40;
        case 0x2f1e44u: goto label_2f1e44;
        case 0x2f1e48u: goto label_2f1e48;
        case 0x2f1e4cu: goto label_2f1e4c;
        case 0x2f1e50u: goto label_2f1e50;
        case 0x2f1e54u: goto label_2f1e54;
        case 0x2f1e58u: goto label_2f1e58;
        case 0x2f1e5cu: goto label_2f1e5c;
        case 0x2f1e60u: goto label_2f1e60;
        case 0x2f1e64u: goto label_2f1e64;
        case 0x2f1e68u: goto label_2f1e68;
        case 0x2f1e6cu: goto label_2f1e6c;
        case 0x2f1e70u: goto label_2f1e70;
        case 0x2f1e74u: goto label_2f1e74;
        case 0x2f1e78u: goto label_2f1e78;
        case 0x2f1e7cu: goto label_2f1e7c;
        case 0x2f1e80u: goto label_2f1e80;
        case 0x2f1e84u: goto label_2f1e84;
        case 0x2f1e88u: goto label_2f1e88;
        case 0x2f1e8cu: goto label_2f1e8c;
        case 0x2f1e90u: goto label_2f1e90;
        case 0x2f1e94u: goto label_2f1e94;
        case 0x2f1e98u: goto label_2f1e98;
        case 0x2f1e9cu: goto label_2f1e9c;
        case 0x2f1ea0u: goto label_2f1ea0;
        case 0x2f1ea4u: goto label_2f1ea4;
        case 0x2f1ea8u: goto label_2f1ea8;
        case 0x2f1eacu: goto label_2f1eac;
        case 0x2f1eb0u: goto label_2f1eb0;
        case 0x2f1eb4u: goto label_2f1eb4;
        case 0x2f1eb8u: goto label_2f1eb8;
        case 0x2f1ebcu: goto label_2f1ebc;
        case 0x2f1ec0u: goto label_2f1ec0;
        case 0x2f1ec4u: goto label_2f1ec4;
        case 0x2f1ec8u: goto label_2f1ec8;
        case 0x2f1eccu: goto label_2f1ecc;
        case 0x2f1ed0u: goto label_2f1ed0;
        case 0x2f1ed4u: goto label_2f1ed4;
        case 0x2f1ed8u: goto label_2f1ed8;
        case 0x2f1edcu: goto label_2f1edc;
        case 0x2f1ee0u: goto label_2f1ee0;
        case 0x2f1ee4u: goto label_2f1ee4;
        case 0x2f1ee8u: goto label_2f1ee8;
        case 0x2f1eecu: goto label_2f1eec;
        case 0x2f1ef0u: goto label_2f1ef0;
        case 0x2f1ef4u: goto label_2f1ef4;
        case 0x2f1ef8u: goto label_2f1ef8;
        case 0x2f1efcu: goto label_2f1efc;
        case 0x2f1f00u: goto label_2f1f00;
        case 0x2f1f04u: goto label_2f1f04;
        case 0x2f1f08u: goto label_2f1f08;
        case 0x2f1f0cu: goto label_2f1f0c;
        case 0x2f1f10u: goto label_2f1f10;
        case 0x2f1f14u: goto label_2f1f14;
        case 0x2f1f18u: goto label_2f1f18;
        case 0x2f1f1cu: goto label_2f1f1c;
        case 0x2f1f20u: goto label_2f1f20;
        case 0x2f1f24u: goto label_2f1f24;
        case 0x2f1f28u: goto label_2f1f28;
        case 0x2f1f2cu: goto label_2f1f2c;
        case 0x2f1f30u: goto label_2f1f30;
        case 0x2f1f34u: goto label_2f1f34;
        case 0x2f1f38u: goto label_2f1f38;
        case 0x2f1f3cu: goto label_2f1f3c;
        case 0x2f1f40u: goto label_2f1f40;
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f48u: goto label_2f1f48;
        case 0x2f1f4cu: goto label_2f1f4c;
        case 0x2f1f50u: goto label_2f1f50;
        case 0x2f1f54u: goto label_2f1f54;
        case 0x2f1f58u: goto label_2f1f58;
        case 0x2f1f5cu: goto label_2f1f5c;
        case 0x2f1f60u: goto label_2f1f60;
        case 0x2f1f64u: goto label_2f1f64;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f6cu: goto label_2f1f6c;
        case 0x2f1f70u: goto label_2f1f70;
        case 0x2f1f74u: goto label_2f1f74;
        case 0x2f1f78u: goto label_2f1f78;
        case 0x2f1f7cu: goto label_2f1f7c;
        case 0x2f1f80u: goto label_2f1f80;
        case 0x2f1f84u: goto label_2f1f84;
        case 0x2f1f88u: goto label_2f1f88;
        case 0x2f1f8cu: goto label_2f1f8c;
        case 0x2f1f90u: goto label_2f1f90;
        case 0x2f1f94u: goto label_2f1f94;
        case 0x2f1f98u: goto label_2f1f98;
        case 0x2f1f9cu: goto label_2f1f9c;
        case 0x2f1fa0u: goto label_2f1fa0;
        case 0x2f1fa4u: goto label_2f1fa4;
        case 0x2f1fa8u: goto label_2f1fa8;
        case 0x2f1facu: goto label_2f1fac;
        case 0x2f1fb0u: goto label_2f1fb0;
        case 0x2f1fb4u: goto label_2f1fb4;
        case 0x2f1fb8u: goto label_2f1fb8;
        case 0x2f1fbcu: goto label_2f1fbc;
        case 0x2f1fc0u: goto label_2f1fc0;
        case 0x2f1fc4u: goto label_2f1fc4;
        case 0x2f1fc8u: goto label_2f1fc8;
        case 0x2f1fccu: goto label_2f1fcc;
        case 0x2f1fd0u: goto label_2f1fd0;
        case 0x2f1fd4u: goto label_2f1fd4;
        case 0x2f1fd8u: goto label_2f1fd8;
        case 0x2f1fdcu: goto label_2f1fdc;
        case 0x2f1fe0u: goto label_2f1fe0;
        case 0x2f1fe4u: goto label_2f1fe4;
        case 0x2f1fe8u: goto label_2f1fe8;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f1ff0u: goto label_2f1ff0;
        case 0x2f1ff4u: goto label_2f1ff4;
        case 0x2f1ff8u: goto label_2f1ff8;
        case 0x2f1ffcu: goto label_2f1ffc;
        case 0x2f2000u: goto label_2f2000;
        case 0x2f2004u: goto label_2f2004;
        case 0x2f2008u: goto label_2f2008;
        case 0x2f200cu: goto label_2f200c;
        case 0x2f2010u: goto label_2f2010;
        case 0x2f2014u: goto label_2f2014;
        case 0x2f2018u: goto label_2f2018;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f2020u: goto label_2f2020;
        case 0x2f2024u: goto label_2f2024;
        case 0x2f2028u: goto label_2f2028;
        case 0x2f202cu: goto label_2f202c;
        case 0x2f2030u: goto label_2f2030;
        case 0x2f2034u: goto label_2f2034;
        case 0x2f2038u: goto label_2f2038;
        case 0x2f203cu: goto label_2f203c;
        case 0x2f2040u: goto label_2f2040;
        case 0x2f2044u: goto label_2f2044;
        case 0x2f2048u: goto label_2f2048;
        case 0x2f204cu: goto label_2f204c;
        case 0x2f2050u: goto label_2f2050;
        case 0x2f2054u: goto label_2f2054;
        case 0x2f2058u: goto label_2f2058;
        case 0x2f205cu: goto label_2f205c;
        case 0x2f2060u: goto label_2f2060;
        case 0x2f2064u: goto label_2f2064;
        case 0x2f2068u: goto label_2f2068;
        case 0x2f206cu: goto label_2f206c;
        case 0x2f2070u: goto label_2f2070;
        case 0x2f2074u: goto label_2f2074;
        case 0x2f2078u: goto label_2f2078;
        case 0x2f207cu: goto label_2f207c;
        case 0x2f2080u: goto label_2f2080;
        case 0x2f2084u: goto label_2f2084;
        case 0x2f2088u: goto label_2f2088;
        case 0x2f208cu: goto label_2f208c;
        case 0x2f2090u: goto label_2f2090;
        case 0x2f2094u: goto label_2f2094;
        case 0x2f2098u: goto label_2f2098;
        case 0x2f209cu: goto label_2f209c;
        case 0x2f20a0u: goto label_2f20a0;
        case 0x2f20a4u: goto label_2f20a4;
        case 0x2f20a8u: goto label_2f20a8;
        case 0x2f20acu: goto label_2f20ac;
        case 0x2f20b0u: goto label_2f20b0;
        case 0x2f20b4u: goto label_2f20b4;
        case 0x2f20b8u: goto label_2f20b8;
        case 0x2f20bcu: goto label_2f20bc;
        case 0x2f20c0u: goto label_2f20c0;
        case 0x2f20c4u: goto label_2f20c4;
        case 0x2f20c8u: goto label_2f20c8;
        case 0x2f20ccu: goto label_2f20cc;
        case 0x2f20d0u: goto label_2f20d0;
        case 0x2f20d4u: goto label_2f20d4;
        case 0x2f20d8u: goto label_2f20d8;
        case 0x2f20dcu: goto label_2f20dc;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f20e4u: goto label_2f20e4;
        default: break;
    }

    ctx->pc = 0x2f1d88u;

label_2f1d88:
    // 0x2f1d88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f1d8c:
    // 0x2f1d8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2f1d90:
    // 0x2f1d90: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2f1d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d94:
    // 0x2f1d94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f1d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2f1d98:
    // 0x2f1d98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f1d98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d9c:
    // 0x2f1d9c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2f1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2f1da0:
    // 0x2f1da0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2f1da0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f1da4:
    // 0x2f1da4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2f1da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_2f1da8:
    // 0x2f1da8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2f1da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2f1dac:
    // 0x2f1dac: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f1dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2f1db0:
    // 0x2f1db0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f1db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f1db4:
    // 0x2f1db4: 0xc0bbd40  jal         func_2EF500
label_2f1db8:
    if (ctx->pc == 0x2F1DB8u) {
        ctx->pc = 0x2F1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DB4u;
        // 0x2f1db8: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1DBCu;
        goto label_2f1dbc;
    }
    ctx->pc = 0x2F1DB4u;
    SET_GPR_U32(ctx, 31, 0x2F1DBCu);
    ctx->pc = 0x2F1DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DB4u;
    // 0x2f1db8: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2F1DB4u, 0x2F1DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1DBCu;
label_2f1dbc:
    // 0x2f1dbc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_2f1dc0:
    // 0x2f1dc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2f1dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f1dc4:
    // 0x2f1dc4: 0x26540140  addiu       $s4, $s2, 0x140
    ctx->pc = 0x2f1dc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_2f1dc8:
    // 0x2f1dc8: 0x24630d28  addiu       $v1, $v1, 0xD28
    ctx->pc = 0x2f1dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3368));
label_2f1dcc:
    // 0x2f1dcc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2f1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_2f1dd0:
    // 0x2f1dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1dd4:
    // 0x2f1dd4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2f1dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_2f1dd8:
    // 0x2f1dd8: 0xc0bbd88  jal         func_2EF620
label_2f1ddc:
    if (ctx->pc == 0x2F1DDCu) {
        ctx->pc = 0x2F1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DD8u;
        // 0x2f1ddc: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1DE0u;
        goto label_2f1de0;
    }
    ctx->pc = 0x2F1DD8u;
    SET_GPR_U32(ctx, 31, 0x2F1DE0u);
    ctx->pc = 0x2F1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DD8u;
    // 0x2f1ddc: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2F1DD8u, 0x2F1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1DE0u;
label_2f1de0:
    // 0x2f1de0: 0x264300b8  addiu       $v1, $s2, 0xB8
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
label_2f1de4:
    // 0x2f1de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1de8:
    // 0x2f1de8: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f1de8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2f1dec:
    // 0x2f1dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1df0:
    // 0x2f1df0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f1df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1df4:
    // 0x2f1df4: 0xc0b7a62  jal         func_2DE988
label_2f1df8:
    if (ctx->pc == 0x2F1DF8u) {
        ctx->pc = 0x2F1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DF4u;
        // 0x2f1df8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1DFCu;
        goto label_2f1dfc;
    }
    ctx->pc = 0x2F1DF4u;
    SET_GPR_U32(ctx, 31, 0x2F1DFCu);
    ctx->pc = 0x2F1DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1DF4u;
    // 0x2f1df8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F1DF4u, 0x2F1DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1DFCu;
label_2f1dfc:
    // 0x2f1dfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e00:
    // 0x2f1e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e04:
    // 0x2f1e04: 0xc0bb93e  jal         func_2EE4F8
label_2f1e08:
    if (ctx->pc == 0x2F1E08u) {
        ctx->pc = 0x2F1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E04u;
        // 0x2f1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E0Cu;
        goto label_2f1e0c;
    }
    ctx->pc = 0x2F1E04u;
    SET_GPR_U32(ctx, 31, 0x2F1E0Cu);
    ctx->pc = 0x2F1E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E04u;
    // 0x2f1e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2F1E04u, 0x2F1E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E0Cu;
label_2f1e0c:
    // 0x2f1e0c: 0x26430058  addiu       $v1, $s2, 0x58
    ctx->pc = 0x2f1e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
label_2f1e10:
    // 0x2f1e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e14:
    // 0x2f1e14: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2f1e18:
    // 0x2f1e18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e1c:
    // 0x2f1e1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1e20:
    // 0x2f1e20: 0xc0b7a62  jal         func_2DE988
label_2f1e24:
    if (ctx->pc == 0x2F1E24u) {
        ctx->pc = 0x2F1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E20u;
        // 0x2f1e24: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E28u;
        goto label_2f1e28;
    }
    ctx->pc = 0x2F1E20u;
    SET_GPR_U32(ctx, 31, 0x2F1E28u);
    ctx->pc = 0x2F1E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E20u;
    // 0x2f1e24: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F1E20u, 0x2F1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E28u;
label_2f1e28:
    // 0x2f1e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e2c:
    // 0x2f1e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f1e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1e30:
    // 0x2f1e30: 0xc0bb93e  jal         func_2EE4F8
label_2f1e34:
    if (ctx->pc == 0x2F1E34u) {
        ctx->pc = 0x2F1E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E30u;
        // 0x2f1e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E38u;
        goto label_2f1e38;
    }
    ctx->pc = 0x2F1E30u;
    SET_GPR_U32(ctx, 31, 0x2F1E38u);
    ctx->pc = 0x2F1E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E30u;
    // 0x2f1e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2F1E30u, 0x2F1E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E38u;
label_2f1e38:
    // 0x2f1e38: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2f1e3c:
    // 0x2f1e3c: 0x26430060  addiu       $v1, $s2, 0x60
    ctx->pc = 0x2f1e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_2f1e40:
    // 0x2f1e40: 0x244205b8  addiu       $v0, $v0, 0x5B8
    ctx->pc = 0x2f1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1464));
label_2f1e44:
    // 0x2f1e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e48:
    // 0x2f1e48: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f1e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2f1e4c:
    // 0x2f1e4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e50:
    // 0x2f1e50: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f1e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2f1e54:
    // 0x2f1e54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f1e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1e58:
    // 0x2f1e58: 0xc0b7a62  jal         func_2DE988
label_2f1e5c:
    if (ctx->pc == 0x2F1E5Cu) {
        ctx->pc = 0x2F1E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E58u;
        // 0x2f1e5c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E60u;
        goto label_2f1e60;
    }
    ctx->pc = 0x2F1E58u;
    SET_GPR_U32(ctx, 31, 0x2F1E60u);
    ctx->pc = 0x2F1E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E58u;
    // 0x2f1e5c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F1E58u, 0x2F1E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E60u;
label_2f1e60:
    // 0x2f1e60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1e60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e64:
    // 0x2f1e64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f1e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1e68:
    // 0x2f1e68: 0xc0bb93e  jal         func_2EE4F8
label_2f1e6c:
    if (ctx->pc == 0x2F1E6Cu) {
        ctx->pc = 0x2F1E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E68u;
        // 0x2f1e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E70u;
        goto label_2f1e70;
    }
    ctx->pc = 0x2F1E68u;
    SET_GPR_U32(ctx, 31, 0x2F1E70u);
    ctx->pc = 0x2F1E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E68u;
    // 0x2f1e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2F1E68u, 0x2F1E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E70u;
label_2f1e70:
    // 0x2f1e70: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f1e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_2f1e74:
    // 0x2f1e74: 0x26460068  addiu       $a2, $s2, 0x68
    ctx->pc = 0x2f1e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
label_2f1e78:
    // 0x2f1e78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1e7c:
    // 0x2f1e7c: 0x24630428  addiu       $v1, $v1, 0x428
    ctx->pc = 0x2f1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1064));
label_2f1e80:
    // 0x2f1e80: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2f1e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_2f1e84:
    // 0x2f1e84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e88:
    // 0x2f1e88: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f1e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2f1e8c:
    // 0x2f1e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1e90:
    // 0x2f1e90: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2f1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
label_2f1e94:
    // 0x2f1e94: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2f1e94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
label_2f1e98:
    // 0x2f1e98: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1e9c:
    // 0x2f1e9c: 0xc0b7a62  jal         func_2DE988
label_2f1ea0:
    if (ctx->pc == 0x2F1EA0u) {
        ctx->pc = 0x2F1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E9Cu;
        // 0x2f1ea0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EA4u;
        goto label_2f1ea4;
    }
    ctx->pc = 0x2F1E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F1EA4u);
    ctx->pc = 0x2F1EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E9Cu;
    // 0x2f1ea0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F1E9Cu, 0x2F1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1EA4u;
label_2f1ea4:
    // 0x2f1ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ea8:
    // 0x2f1ea8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f1ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f1eac:
    // 0x2f1eac: 0xc0bb93e  jal         func_2EE4F8
label_2f1eb0:
    if (ctx->pc == 0x2F1EB0u) {
        ctx->pc = 0x2F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EACu;
        // 0x2f1eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EB4u;
        goto label_2f1eb4;
    }
    ctx->pc = 0x2F1EACu;
    SET_GPR_U32(ctx, 31, 0x2F1EB4u);
    ctx->pc = 0x2F1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EACu;
    // 0x2f1eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2F1EACu, 0x2F1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1EB4u;
label_2f1eb4:
    // 0x2f1eb4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f1eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2f1eb8:
    // 0x2f1eb8: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x2f1eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_2f1ebc:
    // 0x2f1ebc: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2f1ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
label_2f1ec0:
    // 0x2f1ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ec4:
    // 0x2f1ec4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f1ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2f1ec8:
    // 0x2f1ec8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ecc:
    // 0x2f1ecc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2f1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2f1ed0:
    // 0x2f1ed0: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2f1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2f1ed4:
    // 0x2f1ed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1ed8:
    // 0x2f1ed8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1edc:
    // 0x2f1edc: 0xc0bbd8a  jal         func_2EF628
label_2f1ee0:
    if (ctx->pc == 0x2F1EE0u) {
        ctx->pc = 0x2F1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EDCu;
        // 0x2f1ee0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EE4u;
        goto label_2f1ee4;
    }
    ctx->pc = 0x2F1EDCu;
    SET_GPR_U32(ctx, 31, 0x2F1EE4u);
    ctx->pc = 0x2F1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1EDCu;
    // 0x2f1ee0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2F1EDCu, 0x2F1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1EE4u;
label_2f1ee4:
    // 0x2f1ee4: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
label_2f1ee8:
    if (ctx->pc == 0x2F1EE8u) {
        ctx->pc = 0x2F1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EE4u;
        // 0x2f1ee8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EECu;
        goto label_2f1eec;
    }
    ctx->pc = 0x2F1EE4u;
    {
        const bool branch_taken_0x2f1ee4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1ee4) {
            ctx->pc = 0x2F1EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1EE4u;
            // 0x2f1ee8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1EF8u;
            goto label_2f1ef8;
        }
    }
    ctx->pc = 0x2F1EECu;
label_2f1eec:
    // 0x2f1eec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2f1ef0:
    // 0x2f1ef0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f1ef4:
    if (ctx->pc == 0x2F1EF4u) {
        ctx->pc = 0x2F1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EF0u;
        // 0x2f1ef4: 0x24421248  addiu       $v0, $v0, 0x1248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EF8u;
        goto label_2f1ef8;
    }
    ctx->pc = 0x2F1EF0u;
    {
        const bool branch_taken_0x2f1ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EF0u;
        // 0x2f1ef4: 0x24421248  addiu       $v0, $v0, 0x1248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ef0) {
            ctx->pc = 0x2F1EFCu;
            goto label_2f1efc;
        }
    }
    ctx->pc = 0x2F1EF8u;
label_2f1ef8:
    // 0x2f1ef8: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x2f1ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
label_2f1efc:
    // 0x2f1efc: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x2f1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
label_2f1f00:
    // 0x2f1f00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f04:
    // 0x2f1f04: 0xc0b7a62  jal         func_2DE988
label_2f1f08:
    if (ctx->pc == 0x2F1F08u) {
        ctx->pc = 0x2F1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F04u;
        // 0x2f1f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F0Cu;
        goto label_2f1f0c;
    }
    ctx->pc = 0x2F1F04u;
    SET_GPR_U32(ctx, 31, 0x2F1F0Cu);
    ctx->pc = 0x2F1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F04u;
    // 0x2f1f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F1F04u, 0x2F1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F0Cu;
label_2f1f0c:
    // 0x2f1f0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f1f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f10:
    // 0x2f1f10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f14:
    // 0x2f1f14: 0xc0bc704  jal         func_2F1C10
label_2f1f18:
    if (ctx->pc == 0x2F1F18u) {
        ctx->pc = 0x2F1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F14u;
        // 0x2f1f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F1Cu;
        goto label_2f1f1c;
    }
    ctx->pc = 0x2F1F14u;
    SET_GPR_U32(ctx, 31, 0x2F1F1Cu);
    ctx->pc = 0x2F1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F14u;
    // 0x2f1f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C10u, 0x2F1F14u, 0x2F1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F1Cu;
label_2f1f1c:
    // 0x2f1f1c: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x2f1f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_2f1f20:
    // 0x2f1f20: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f1f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1f24:
    // 0x2f1f24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f1f28:
    // 0x2f1f28: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2f1f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_2f1f2c:
    // 0x2f1f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f1f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f30:
    // 0x2f1f30: 0xc0b7a62  jal         func_2DE988
label_2f1f34:
    if (ctx->pc == 0x2F1F34u) {
        ctx->pc = 0x2F1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F30u;
        // 0x2f1f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F38u;
        goto label_2f1f38;
    }
    ctx->pc = 0x2F1F30u;
    SET_GPR_U32(ctx, 31, 0x2F1F38u);
    ctx->pc = 0x2F1F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F30u;
    // 0x2f1f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2F1F30u, 0x2F1F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F38u;
label_2f1f38:
    // 0x2f1f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f3c:
    // 0x2f1f3c: 0xc0bc704  jal         func_2F1C10
label_2f1f40:
    if (ctx->pc == 0x2F1F40u) {
        ctx->pc = 0x2F1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F3Cu;
        // 0x2f1f40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F44u;
        goto label_2f1f44;
    }
    ctx->pc = 0x2F1F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F44u);
    ctx->pc = 0x2F1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F3Cu;
    // 0x2f1f40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1C10u, 0x2F1F3Cu, 0x2F1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F44u;
label_2f1f44:
    // 0x2f1f44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f1f44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f1f48:
    // 0x2f1f48: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x2f1f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_2f1f4c:
    // 0x2f1f4c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2f1f50:
    if (ctx->pc == 0x2F1F50u) {
        ctx->pc = 0x2F1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F4Cu;
        // 0x2f1f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F54u;
        goto label_2f1f54;
    }
    ctx->pc = 0x2F1F4Cu;
    {
        const bool branch_taken_0x2f1f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F4Cu;
        // 0x2f1f50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f4c) {
            ctx->pc = 0x2F1F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1f30;
        }
    }
    ctx->pc = 0x2F1F54u;
label_2f1f54:
    // 0x2f1f54: 0xc0bcf2c  jal         func_2F3CB0
label_2f1f58:
    if (ctx->pc == 0x2F1F58u) {
        ctx->pc = 0x2F1F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F54u;
        // 0x2f1f58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F5Cu;
        goto label_2f1f5c;
    }
    ctx->pc = 0x2F1F54u;
    SET_GPR_U32(ctx, 31, 0x2F1F5Cu);
    ctx->pc = 0x2F1F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F54u;
    // 0x2f1f58: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3CB0u, 0x2F1F54u, 0x2F1F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F5Cu;
label_2f1f5c:
    // 0x2f1f5c: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x2f1f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f1f60:
    // 0x2f1f60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f64:
    // 0x2f1f64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f1f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f1f68:
    // 0x2f1f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f6c:
    // 0x2f1f6c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f1f70:
    // 0x2f1f70: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f1f74:
    // 0x2f1f74: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f1f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1f78:
    // 0x2f1f78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f1f7c:
    // 0x2f1f7c: 0x60f809  jalr        $v1
label_2f1f80:
    if (ctx->pc == 0x2F1F80u) {
        ctx->pc = 0x2F1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F7Cu;
        // 0x2f1f80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F84u;
        goto label_2f1f84;
    }
    ctx->pc = 0x2F1F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1F84u);
        ctx->pc = 0x2F1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F7Cu;
        // 0x2f1f80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1F7Cu, 0x2F1F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1F84u;
label_2f1f84:
    // 0x2f1f84: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x2f1f84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f1f88:
    // 0x2f1f88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f8c:
    // 0x2f1f8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f1f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f1f90:
    // 0x2f1f90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f94:
    // 0x2f1f94: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f1f98:
    // 0x2f1f98: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f1f9c:
    // 0x2f1f9c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f1f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1fa0:
    // 0x2f1fa0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f1fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f1fa4:
    // 0x2f1fa4: 0x60f809  jalr        $v1
label_2f1fa8:
    if (ctx->pc == 0x2F1FA8u) {
        ctx->pc = 0x2F1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FA4u;
        // 0x2f1fa8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FACu;
        goto label_2f1fac;
    }
    ctx->pc = 0x2F1FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1FACu);
        ctx->pc = 0x2F1FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FA4u;
        // 0x2f1fa8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FA4u, 0x2F1FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1FACu;
label_2f1fac:
    // 0x2f1fac: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x2f1facu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f1fb0:
    // 0x2f1fb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1fb4:
    // 0x2f1fb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2f1fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f1fb8:
    // 0x2f1fb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1fbc:
    // 0x2f1fbc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f1fc0:
    // 0x2f1fc0: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f1fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f1fc4:
    // 0x2f1fc4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f1fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1fc8:
    // 0x2f1fc8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f1fcc:
    // 0x2f1fcc: 0x60f809  jalr        $v1
label_2f1fd0:
    if (ctx->pc == 0x2F1FD0u) {
        ctx->pc = 0x2F1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FCCu;
        // 0x2f1fd0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FD4u;
        goto label_2f1fd4;
    }
    ctx->pc = 0x2F1FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1FD4u);
        ctx->pc = 0x2F1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FCCu;
        // 0x2f1fd0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FCCu, 0x2F1FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1FD4u;
label_2f1fd4:
    // 0x2f1fd4: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x2f1fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f1fd8:
    // 0x2f1fd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f1fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1fdc:
    // 0x2f1fdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2f1fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f1fe0:
    // 0x2f1fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f1fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f1fe4:
    // 0x2f1fe4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f1fe8:
    // 0x2f1fe8: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f1fec:
    // 0x2f1fec: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f1fecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f1ff0:
    // 0x2f1ff0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f1ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f1ff4:
    // 0x2f1ff4: 0x60f809  jalr        $v1
label_2f1ff8:
    if (ctx->pc == 0x2F1FF8u) {
        ctx->pc = 0x2F1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FF4u;
        // 0x2f1ff8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FFCu;
        goto label_2f1ffc;
    }
    ctx->pc = 0x2F1FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F1FFCu);
        ctx->pc = 0x2F1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FF4u;
        // 0x2f1ff8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FF4u, 0x2F1FFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F1FFCu;
label_2f1ffc:
    // 0x2f1ffc: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2f1ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f2000:
    // 0x2f2000: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2004:
    // 0x2f2004: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f2004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2f2008:
    // 0x2f2008: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2008u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f200c:
    // 0x2f200c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f2010:
    // 0x2f2010: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f2010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f2014:
    // 0x2f2014: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2018:
    // 0x2f2018: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f201c:
    // 0x2f201c: 0x60f809  jalr        $v1
label_2f2020:
    if (ctx->pc == 0x2F2020u) {
        ctx->pc = 0x2F2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F201Cu;
        // 0x2f2020: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2024u;
        goto label_2f2024;
    }
    ctx->pc = 0x2F201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2024u);
        ctx->pc = 0x2F2020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F201Cu;
        // 0x2f2020: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F201Cu, 0x2F2024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2024u;
label_2f2024:
    // 0x2f2024: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x2f2024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2f2028:
    // 0x2f2028: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f202c:
    // 0x2f202c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2f202cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2f2030:
    // 0x2f2030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2034:
    // 0x2f2034: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f2038:
    // 0x2f2038: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f203c:
    // 0x2f203c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f203cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2040:
    // 0x2f2040: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2044:
    // 0x2f2044: 0x60f809  jalr        $v1
label_2f2048:
    if (ctx->pc == 0x2F2048u) {
        ctx->pc = 0x2F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2044u;
        // 0x2f2048: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F204Cu;
        goto label_2f204c;
    }
    ctx->pc = 0x2F2044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F204Cu);
        ctx->pc = 0x2F2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2044u;
        // 0x2f2048: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2044u, 0x2F204Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F204Cu;
label_2f204c:
    // 0x2f204c: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x2f204cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2f2050:
    // 0x2f2050: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f2054:
    // 0x2f2054: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2f2054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2f2058:
    // 0x2f2058: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f205c:
    // 0x2f205c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f2060:
    // 0x2f2060: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f2060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f2064:
    // 0x2f2064: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f2064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2068:
    // 0x2f2068: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f206c:
    // 0x2f206c: 0x60f809  jalr        $v1
label_2f2070:
    if (ctx->pc == 0x2F2070u) {
        ctx->pc = 0x2F2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F206Cu;
        // 0x2f2070: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2074u;
        goto label_2f2074;
    }
    ctx->pc = 0x2F206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2074u);
        ctx->pc = 0x2F2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F206Cu;
        // 0x2f2070: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F206Cu, 0x2F2074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2074u;
label_2f2074:
    // 0x2f2074: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x2f2074u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2f2078:
    // 0x2f2078: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2f2078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f207c:
    // 0x2f207c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2f207cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2f2080:
    // 0x2f2080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f2080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2084:
    // 0x2f2084: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2f2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_2f2088:
    // 0x2f2088: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2f2088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_2f208c:
    // 0x2f208c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f208cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f2090:
    // 0x2f2090: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f2090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f2094:
    // 0x2f2094: 0x60f809  jalr        $v1
label_2f2098:
    if (ctx->pc == 0x2F2098u) {
        ctx->pc = 0x2F2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2094u;
        // 0x2f2098: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F209Cu;
        goto label_2f209c;
    }
    ctx->pc = 0x2F2094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F209Cu);
        ctx->pc = 0x2F2098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2094u;
        // 0x2f2098: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2094u, 0x2F209Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F209Cu;
label_2f209c:
    // 0x2f209c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f20a0:
    if (ctx->pc == 0x2F20A0u) {
        ctx->pc = 0x2F20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F209Cu;
        // 0x2f20a0: 0xae550148  sw          $s5, 0x148($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20A4u;
        goto label_2f20a4;
    }
    ctx->pc = 0x2F209Cu;
    {
        const bool branch_taken_0x2f209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F209Cu;
        // 0x2f20a0: 0xae550148  sw          $s5, 0x148($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f209c) {
            ctx->pc = 0x2F20C0u;
            goto label_2f20c0;
        }
    }
    ctx->pc = 0x2F20A4u;
label_2f20a4:
    // 0x2f20a4: 0x0  nop
    ctx->pc = 0x2f20a4u;
    // NOP
label_2f20a8:
    // 0x2f20a8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2f20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_2f20ac:
    // 0x2f20ac: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2f20acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_2f20b0:
    // 0x2f20b0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2f20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
label_2f20b4:
    // 0x2f20b4: 0x248406c4  addiu       $a0, $a0, 0x6C4
    ctx->pc = 0x2f20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1732));
label_2f20b8:
    // 0x2f20b8: 0xc048b90  jal         func_122E40
label_2f20bc:
    if (ctx->pc == 0x2F20BCu) {
        ctx->pc = 0x2F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20B8u;
        // 0x2f20bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20C0u;
        goto label_2f20c0;
    }
    ctx->pc = 0x2F20B8u;
    SET_GPR_U32(ctx, 31, 0x2F20C0u);
    ctx->pc = 0x2F20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20B8u;
    // 0x2f20bc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2F20B8u, 0x2F20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F20C0u;
label_2f20c0:
    // 0x2f20c0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f20c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f20c4:
    // 0x2f20c4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2f20c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f20c8:
    // 0x2f20c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f20c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f20cc:
    // 0x2f20cc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2f20ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f20d0:
    // 0x2f20d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f20d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f20d4:
    // 0x2f20d4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2f20d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2f20d8:
    // 0x2f20d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f20d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f20dc:
    // 0x2f20dc: 0x3e00008  jr          $ra
label_2f20e0:
    if (ctx->pc == 0x2F20E0u) {
        ctx->pc = 0x2F20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20DCu;
        // 0x2f20e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20E4u;
        goto label_2f20e4;
    }
    ctx->pc = 0x2F20DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20DCu;
        // 0x2f20e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F20DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F20E4u;
label_2f20e4:
    // 0x2f20e4: 0x0  nop
    ctx->pc = 0x2f20e4u;
    // NOP
    ctx->pc = 0x2f20e8u;
}
