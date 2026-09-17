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

// Function: sub_002F5C78
// Address: 0x2f5c78 - 0x2f6058
void sub_002F5C78_0x2f5c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5C78_0x2f5c78");
#endif

    switch (ctx->pc) {
        case 0x2f5c78u: goto label_2f5c78;
        case 0x2f5c7cu: goto label_2f5c7c;
        case 0x2f5c80u: goto label_2f5c80;
        case 0x2f5c84u: goto label_2f5c84;
        case 0x2f5c88u: goto label_2f5c88;
        case 0x2f5c8cu: goto label_2f5c8c;
        case 0x2f5c90u: goto label_2f5c90;
        case 0x2f5c94u: goto label_2f5c94;
        case 0x2f5c98u: goto label_2f5c98;
        case 0x2f5c9cu: goto label_2f5c9c;
        case 0x2f5ca0u: goto label_2f5ca0;
        case 0x2f5ca4u: goto label_2f5ca4;
        case 0x2f5ca8u: goto label_2f5ca8;
        case 0x2f5cacu: goto label_2f5cac;
        case 0x2f5cb0u: goto label_2f5cb0;
        case 0x2f5cb4u: goto label_2f5cb4;
        case 0x2f5cb8u: goto label_2f5cb8;
        case 0x2f5cbcu: goto label_2f5cbc;
        case 0x2f5cc0u: goto label_2f5cc0;
        case 0x2f5cc4u: goto label_2f5cc4;
        case 0x2f5cc8u: goto label_2f5cc8;
        case 0x2f5cccu: goto label_2f5ccc;
        case 0x2f5cd0u: goto label_2f5cd0;
        case 0x2f5cd4u: goto label_2f5cd4;
        case 0x2f5cd8u: goto label_2f5cd8;
        case 0x2f5cdcu: goto label_2f5cdc;
        case 0x2f5ce0u: goto label_2f5ce0;
        case 0x2f5ce4u: goto label_2f5ce4;
        case 0x2f5ce8u: goto label_2f5ce8;
        case 0x2f5cecu: goto label_2f5cec;
        case 0x2f5cf0u: goto label_2f5cf0;
        case 0x2f5cf4u: goto label_2f5cf4;
        case 0x2f5cf8u: goto label_2f5cf8;
        case 0x2f5cfcu: goto label_2f5cfc;
        case 0x2f5d00u: goto label_2f5d00;
        case 0x2f5d04u: goto label_2f5d04;
        case 0x2f5d08u: goto label_2f5d08;
        case 0x2f5d0cu: goto label_2f5d0c;
        case 0x2f5d10u: goto label_2f5d10;
        case 0x2f5d14u: goto label_2f5d14;
        case 0x2f5d18u: goto label_2f5d18;
        case 0x2f5d1cu: goto label_2f5d1c;
        case 0x2f5d20u: goto label_2f5d20;
        case 0x2f5d24u: goto label_2f5d24;
        case 0x2f5d28u: goto label_2f5d28;
        case 0x2f5d2cu: goto label_2f5d2c;
        case 0x2f5d30u: goto label_2f5d30;
        case 0x2f5d34u: goto label_2f5d34;
        case 0x2f5d38u: goto label_2f5d38;
        case 0x2f5d3cu: goto label_2f5d3c;
        case 0x2f5d40u: goto label_2f5d40;
        case 0x2f5d44u: goto label_2f5d44;
        case 0x2f5d48u: goto label_2f5d48;
        case 0x2f5d4cu: goto label_2f5d4c;
        case 0x2f5d50u: goto label_2f5d50;
        case 0x2f5d54u: goto label_2f5d54;
        case 0x2f5d58u: goto label_2f5d58;
        case 0x2f5d5cu: goto label_2f5d5c;
        case 0x2f5d60u: goto label_2f5d60;
        case 0x2f5d64u: goto label_2f5d64;
        case 0x2f5d68u: goto label_2f5d68;
        case 0x2f5d6cu: goto label_2f5d6c;
        case 0x2f5d70u: goto label_2f5d70;
        case 0x2f5d74u: goto label_2f5d74;
        case 0x2f5d78u: goto label_2f5d78;
        case 0x2f5d7cu: goto label_2f5d7c;
        case 0x2f5d80u: goto label_2f5d80;
        case 0x2f5d84u: goto label_2f5d84;
        case 0x2f5d88u: goto label_2f5d88;
        case 0x2f5d8cu: goto label_2f5d8c;
        case 0x2f5d90u: goto label_2f5d90;
        case 0x2f5d94u: goto label_2f5d94;
        case 0x2f5d98u: goto label_2f5d98;
        case 0x2f5d9cu: goto label_2f5d9c;
        case 0x2f5da0u: goto label_2f5da0;
        case 0x2f5da4u: goto label_2f5da4;
        case 0x2f5da8u: goto label_2f5da8;
        case 0x2f5dacu: goto label_2f5dac;
        case 0x2f5db0u: goto label_2f5db0;
        case 0x2f5db4u: goto label_2f5db4;
        case 0x2f5db8u: goto label_2f5db8;
        case 0x2f5dbcu: goto label_2f5dbc;
        case 0x2f5dc0u: goto label_2f5dc0;
        case 0x2f5dc4u: goto label_2f5dc4;
        case 0x2f5dc8u: goto label_2f5dc8;
        case 0x2f5dccu: goto label_2f5dcc;
        case 0x2f5dd0u: goto label_2f5dd0;
        case 0x2f5dd4u: goto label_2f5dd4;
        case 0x2f5dd8u: goto label_2f5dd8;
        case 0x2f5ddcu: goto label_2f5ddc;
        case 0x2f5de0u: goto label_2f5de0;
        case 0x2f5de4u: goto label_2f5de4;
        case 0x2f5de8u: goto label_2f5de8;
        case 0x2f5decu: goto label_2f5dec;
        case 0x2f5df0u: goto label_2f5df0;
        case 0x2f5df4u: goto label_2f5df4;
        case 0x2f5df8u: goto label_2f5df8;
        case 0x2f5dfcu: goto label_2f5dfc;
        case 0x2f5e00u: goto label_2f5e00;
        case 0x2f5e04u: goto label_2f5e04;
        case 0x2f5e08u: goto label_2f5e08;
        case 0x2f5e0cu: goto label_2f5e0c;
        case 0x2f5e10u: goto label_2f5e10;
        case 0x2f5e14u: goto label_2f5e14;
        case 0x2f5e18u: goto label_2f5e18;
        case 0x2f5e1cu: goto label_2f5e1c;
        case 0x2f5e20u: goto label_2f5e20;
        case 0x2f5e24u: goto label_2f5e24;
        case 0x2f5e28u: goto label_2f5e28;
        case 0x2f5e2cu: goto label_2f5e2c;
        case 0x2f5e30u: goto label_2f5e30;
        case 0x2f5e34u: goto label_2f5e34;
        case 0x2f5e38u: goto label_2f5e38;
        case 0x2f5e3cu: goto label_2f5e3c;
        case 0x2f5e40u: goto label_2f5e40;
        case 0x2f5e44u: goto label_2f5e44;
        case 0x2f5e48u: goto label_2f5e48;
        case 0x2f5e4cu: goto label_2f5e4c;
        case 0x2f5e50u: goto label_2f5e50;
        case 0x2f5e54u: goto label_2f5e54;
        case 0x2f5e58u: goto label_2f5e58;
        case 0x2f5e5cu: goto label_2f5e5c;
        case 0x2f5e60u: goto label_2f5e60;
        case 0x2f5e64u: goto label_2f5e64;
        case 0x2f5e68u: goto label_2f5e68;
        case 0x2f5e6cu: goto label_2f5e6c;
        case 0x2f5e70u: goto label_2f5e70;
        case 0x2f5e74u: goto label_2f5e74;
        case 0x2f5e78u: goto label_2f5e78;
        case 0x2f5e7cu: goto label_2f5e7c;
        case 0x2f5e80u: goto label_2f5e80;
        case 0x2f5e84u: goto label_2f5e84;
        case 0x2f5e88u: goto label_2f5e88;
        case 0x2f5e8cu: goto label_2f5e8c;
        case 0x2f5e90u: goto label_2f5e90;
        case 0x2f5e94u: goto label_2f5e94;
        case 0x2f5e98u: goto label_2f5e98;
        case 0x2f5e9cu: goto label_2f5e9c;
        case 0x2f5ea0u: goto label_2f5ea0;
        case 0x2f5ea4u: goto label_2f5ea4;
        case 0x2f5ea8u: goto label_2f5ea8;
        case 0x2f5eacu: goto label_2f5eac;
        case 0x2f5eb0u: goto label_2f5eb0;
        case 0x2f5eb4u: goto label_2f5eb4;
        case 0x2f5eb8u: goto label_2f5eb8;
        case 0x2f5ebcu: goto label_2f5ebc;
        case 0x2f5ec0u: goto label_2f5ec0;
        case 0x2f5ec4u: goto label_2f5ec4;
        case 0x2f5ec8u: goto label_2f5ec8;
        case 0x2f5eccu: goto label_2f5ecc;
        case 0x2f5ed0u: goto label_2f5ed0;
        case 0x2f5ed4u: goto label_2f5ed4;
        case 0x2f5ed8u: goto label_2f5ed8;
        case 0x2f5edcu: goto label_2f5edc;
        case 0x2f5ee0u: goto label_2f5ee0;
        case 0x2f5ee4u: goto label_2f5ee4;
        case 0x2f5ee8u: goto label_2f5ee8;
        case 0x2f5eecu: goto label_2f5eec;
        case 0x2f5ef0u: goto label_2f5ef0;
        case 0x2f5ef4u: goto label_2f5ef4;
        case 0x2f5ef8u: goto label_2f5ef8;
        case 0x2f5efcu: goto label_2f5efc;
        case 0x2f5f00u: goto label_2f5f00;
        case 0x2f5f04u: goto label_2f5f04;
        case 0x2f5f08u: goto label_2f5f08;
        case 0x2f5f0cu: goto label_2f5f0c;
        case 0x2f5f10u: goto label_2f5f10;
        case 0x2f5f14u: goto label_2f5f14;
        case 0x2f5f18u: goto label_2f5f18;
        case 0x2f5f1cu: goto label_2f5f1c;
        case 0x2f5f20u: goto label_2f5f20;
        case 0x2f5f24u: goto label_2f5f24;
        case 0x2f5f28u: goto label_2f5f28;
        case 0x2f5f2cu: goto label_2f5f2c;
        case 0x2f5f30u: goto label_2f5f30;
        case 0x2f5f34u: goto label_2f5f34;
        case 0x2f5f38u: goto label_2f5f38;
        case 0x2f5f3cu: goto label_2f5f3c;
        case 0x2f5f40u: goto label_2f5f40;
        case 0x2f5f44u: goto label_2f5f44;
        case 0x2f5f48u: goto label_2f5f48;
        case 0x2f5f4cu: goto label_2f5f4c;
        case 0x2f5f50u: goto label_2f5f50;
        case 0x2f5f54u: goto label_2f5f54;
        case 0x2f5f58u: goto label_2f5f58;
        case 0x2f5f5cu: goto label_2f5f5c;
        case 0x2f5f60u: goto label_2f5f60;
        case 0x2f5f64u: goto label_2f5f64;
        case 0x2f5f68u: goto label_2f5f68;
        case 0x2f5f6cu: goto label_2f5f6c;
        case 0x2f5f70u: goto label_2f5f70;
        case 0x2f5f74u: goto label_2f5f74;
        case 0x2f5f78u: goto label_2f5f78;
        case 0x2f5f7cu: goto label_2f5f7c;
        case 0x2f5f80u: goto label_2f5f80;
        case 0x2f5f84u: goto label_2f5f84;
        case 0x2f5f88u: goto label_2f5f88;
        case 0x2f5f8cu: goto label_2f5f8c;
        case 0x2f5f90u: goto label_2f5f90;
        case 0x2f5f94u: goto label_2f5f94;
        case 0x2f5f98u: goto label_2f5f98;
        case 0x2f5f9cu: goto label_2f5f9c;
        case 0x2f5fa0u: goto label_2f5fa0;
        case 0x2f5fa4u: goto label_2f5fa4;
        case 0x2f5fa8u: goto label_2f5fa8;
        case 0x2f5facu: goto label_2f5fac;
        case 0x2f5fb0u: goto label_2f5fb0;
        case 0x2f5fb4u: goto label_2f5fb4;
        case 0x2f5fb8u: goto label_2f5fb8;
        case 0x2f5fbcu: goto label_2f5fbc;
        case 0x2f5fc0u: goto label_2f5fc0;
        case 0x2f5fc4u: goto label_2f5fc4;
        case 0x2f5fc8u: goto label_2f5fc8;
        case 0x2f5fccu: goto label_2f5fcc;
        case 0x2f5fd0u: goto label_2f5fd0;
        case 0x2f5fd4u: goto label_2f5fd4;
        case 0x2f5fd8u: goto label_2f5fd8;
        case 0x2f5fdcu: goto label_2f5fdc;
        case 0x2f5fe0u: goto label_2f5fe0;
        case 0x2f5fe4u: goto label_2f5fe4;
        case 0x2f5fe8u: goto label_2f5fe8;
        case 0x2f5fecu: goto label_2f5fec;
        case 0x2f5ff0u: goto label_2f5ff0;
        case 0x2f5ff4u: goto label_2f5ff4;
        case 0x2f5ff8u: goto label_2f5ff8;
        case 0x2f5ffcu: goto label_2f5ffc;
        case 0x2f6000u: goto label_2f6000;
        case 0x2f6004u: goto label_2f6004;
        case 0x2f6008u: goto label_2f6008;
        case 0x2f600cu: goto label_2f600c;
        case 0x2f6010u: goto label_2f6010;
        case 0x2f6014u: goto label_2f6014;
        case 0x2f6018u: goto label_2f6018;
        case 0x2f601cu: goto label_2f601c;
        case 0x2f6020u: goto label_2f6020;
        case 0x2f6024u: goto label_2f6024;
        case 0x2f6028u: goto label_2f6028;
        case 0x2f602cu: goto label_2f602c;
        case 0x2f6030u: goto label_2f6030;
        case 0x2f6034u: goto label_2f6034;
        case 0x2f6038u: goto label_2f6038;
        case 0x2f603cu: goto label_2f603c;
        case 0x2f6040u: goto label_2f6040;
        case 0x2f6044u: goto label_2f6044;
        case 0x2f6048u: goto label_2f6048;
        case 0x2f604cu: goto label_2f604c;
        case 0x2f6050u: goto label_2f6050;
        case 0x2f6054u: goto label_2f6054;
        default: break;
    }

    ctx->pc = 0x2f5c78u;

label_2f5c78:
    // 0x2f5c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f5c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2f5c7c:
    // 0x2f5c7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2f5c80:
    // 0x2f5c80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f5c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c84:
    // 0x2f5c84: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f5c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2f5c88:
    // 0x2f5c88: 0x26750110  addiu       $s5, $s3, 0x110
    ctx->pc = 0x2f5c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
label_2f5c8c:
    // 0x2f5c8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f5c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c90:
    // 0x2f5c90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f5c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f5c94:
    // 0x2f5c94: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2f5c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2f5c98:
    // 0x2f5c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f5c9c:
    // 0x2f5c9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f5c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f5ca0:
    // 0x2f5ca0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f5ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2f5ca4:
    // 0x2f5ca4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2f5ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_2f5ca8:
    // 0x2f5ca8: 0xc0bb8b0  jal         func_2EE2C0
label_2f5cac:
    if (ctx->pc == 0x2F5CACu) {
        ctx->pc = 0x2F5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CA8u;
        // 0x2f5cac: 0x26720148  addiu       $s2, $s3, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CB0u;
        goto label_2f5cb0;
    }
    ctx->pc = 0x2F5CA8u;
    SET_GPR_U32(ctx, 31, 0x2F5CB0u);
    ctx->pc = 0x2F5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CA8u;
    // 0x2f5cac: 0x26720148  addiu       $s2, $s3, 0x148 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE2C0u, 0x2F5CA8u, 0x2F5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CB0u;
label_2f5cb0:
    // 0x2f5cb0: 0x21bc3  sra         $v1, $v0, 15
    ctx->pc = 0x2f5cb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 15));
label_2f5cb4:
    // 0x2f5cb4: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2f5cb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2f5cb8:
    // 0x2f5cb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5cbc:
    // 0x2f5cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f5cc0:
    // 0x2f5cc0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f5cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2f5cc4:
    // 0x2f5cc4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2f5cc8:
    if (ctx->pc == 0x2F5CC8u) {
        ctx->pc = 0x2F5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CC4u;
        // 0x2f5cc8: 0x43b023  subu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CCCu;
        goto label_2f5ccc;
    }
    ctx->pc = 0x2F5CC4u;
    {
        const bool branch_taken_0x2f5cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CC4u;
        // 0x2f5cc8: 0x43b023  subu        $s6, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cc4) {
            ctx->pc = 0x2F5CDCu;
            goto label_2f5cdc;
        }
    }
    ctx->pc = 0x2F5CCCu;
label_2f5ccc:
    // 0x2f5ccc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f5cd0:
    // 0x2f5cd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5cd4:
    // 0x2f5cd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5cd8:
    if (ctx->pc == 0x2F5CD8u) {
        ctx->pc = 0x2F5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CD4u;
        // 0x2f5cd8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CDCu;
        goto label_2f5cdc;
    }
    ctx->pc = 0x2F5CD4u;
    {
        const bool branch_taken_0x2f5cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CD4u;
        // 0x2f5cd8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cd4) {
            ctx->pc = 0x2F5CE8u;
            goto label_2f5ce8;
        }
    }
    ctx->pc = 0x2F5CDCu;
label_2f5cdc:
    // 0x2f5cdc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f5cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f5ce0:
    // 0x2f5ce0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f5ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ce4:
    // 0x2f5ce4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f5ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f5ce8:
    // 0x2f5ce8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5cec:
    // 0x2f5cec: 0xc0bd6f4  jal         func_2F5BD0
label_2f5cf0:
    if (ctx->pc == 0x2F5CF0u) {
        ctx->pc = 0x2F5CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CECu;
        // 0x2f5cf0: 0x8e710104  lw          $s1, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5CF4u;
        goto label_2f5cf4;
    }
    ctx->pc = 0x2F5CECu;
    SET_GPR_U32(ctx, 31, 0x2F5CF4u);
    ctx->pc = 0x2F5CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CECu;
    // 0x2f5cf0: 0x8e710104  lw          $s1, 0x104($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5BD0u, 0x2F5CECu, 0x2F5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CF4u;
label_2f5cf4:
    // 0x2f5cf4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5cf8:
    // 0x2f5cf8: 0xc0bd708  jal         func_2F5C20
label_2f5cfc:
    if (ctx->pc == 0x2F5CFCu) {
        ctx->pc = 0x2F5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CF8u;
        // 0x2f5cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D00u;
        goto label_2f5d00;
    }
    ctx->pc = 0x2F5CF8u;
    SET_GPR_U32(ctx, 31, 0x2F5D00u);
    ctx->pc = 0x2F5CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CF8u;
    // 0x2f5cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5C20u, 0x2F5CF8u, 0x2F5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D00u;
label_2f5d00:
    // 0x2f5d00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d04:
    // 0x2f5d04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f5d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d08:
    // 0x2f5d08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f5d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d0c:
    // 0x2f5d0c: 0xc0bd602  jal         func_2F5808
label_2f5d10:
    if (ctx->pc == 0x2F5D10u) {
        ctx->pc = 0x2F5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D0Cu;
        // 0x2f5d10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D14u;
        goto label_2f5d14;
    }
    ctx->pc = 0x2F5D0Cu;
    SET_GPR_U32(ctx, 31, 0x2F5D14u);
    ctx->pc = 0x2F5D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D0Cu;
    // 0x2f5d10: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5808u, 0x2F5D0Cu, 0x2F5D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D14u;
label_2f5d14:
    // 0x2f5d14: 0x1ac00018  blez        $s6, . + 4 + (0x18 << 2)
label_2f5d18:
    if (ctx->pc == 0x2F5D18u) {
        ctx->pc = 0x2F5D1Cu;
        goto label_2f5d1c;
    }
    ctx->pc = 0x2F5D14u;
    {
        const bool branch_taken_0x2f5d14 = (GPR_S32(ctx, 22) <= 0);
        if (branch_taken_0x2f5d14) {
            ctx->pc = 0x2F5D78u;
            goto label_2f5d78;
        }
    }
    ctx->pc = 0x2F5D1Cu;
label_2f5d1c:
    // 0x2f5d1c: 0x8e700104  lw          $s0, 0x104($s3)
    ctx->pc = 0x2f5d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f5d20:
    // 0x2f5d20: 0xc0bd6f4  jal         func_2F5BD0
label_2f5d24:
    if (ctx->pc == 0x2F5D24u) {
        ctx->pc = 0x2F5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D20u;
        // 0x2f5d24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D28u;
        goto label_2f5d28;
    }
    ctx->pc = 0x2F5D20u;
    SET_GPR_U32(ctx, 31, 0x2F5D28u);
    ctx->pc = 0x2F5D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D20u;
    // 0x2f5d24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5BD0u, 0x2F5D20u, 0x2F5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D28u;
label_2f5d28:
    // 0x2f5d28: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_2f5d2c:
    if (ctx->pc == 0x2F5D2Cu) {
        ctx->pc = 0x2F5D30u;
        goto label_2f5d30;
    }
    ctx->pc = 0x2F5D28u;
    {
        const bool branch_taken_0x2f5d28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5d28) {
            ctx->pc = 0x2F5D78u;
            goto label_2f5d78;
        }
    }
    ctx->pc = 0x2F5D30u;
label_2f5d30:
    // 0x2f5d30: 0xc092940  jal         func_24A500
label_2f5d34:
    if (ctx->pc == 0x2F5D34u) {
        ctx->pc = 0x2F5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D30u;
        // 0x2f5d34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D38u;
        goto label_2f5d38;
    }
    ctx->pc = 0x2F5D30u;
    SET_GPR_U32(ctx, 31, 0x2F5D38u);
    ctx->pc = 0x2F5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D30u;
    // 0x2f5d34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F5D30u, 0x2F5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D38u;
label_2f5d38:
    // 0x2f5d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5d3c:
    // 0x2f5d3c: 0xae620150  sw          $v0, 0x150($s3)
    ctx->pc = 0x2f5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
label_2f5d40:
    // 0x2f5d40: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5d44:
    // 0x2f5d44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f5d48:
    if (ctx->pc == 0x2F5D48u) {
        ctx->pc = 0x2F5D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D44u;
        // 0x2f5d48: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D4Cu;
        goto label_2f5d4c;
    }
    ctx->pc = 0x2F5D44u;
    {
        const bool branch_taken_0x2f5d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d44) {
            ctx->pc = 0x2F5D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5D44u;
            // 0x2f5d48: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D60u;
            goto label_2f5d60;
        }
    }
    ctx->pc = 0x2F5D4Cu;
label_2f5d4c:
    // 0x2f5d4c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f5d50:
    // 0x2f5d50: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5d54:
    // 0x2f5d54: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5d58:
    if (ctx->pc == 0x2F5D58u) {
        ctx->pc = 0x2F5D5Cu;
        goto label_2f5d5c;
    }
    ctx->pc = 0x2F5D54u;
    {
        const bool branch_taken_0x2f5d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5d54) {
            ctx->pc = 0x2F5D68u;
            goto label_2f5d68;
        }
    }
    ctx->pc = 0x2F5D5Cu;
label_2f5d5c:
    // 0x2f5d5c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f5d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f5d60:
    // 0x2f5d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5d64:
    // 0x2f5d64: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f5d64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f5d68:
    // 0x2f5d68: 0xc0bd5ee  jal         func_2F57B8
label_2f5d6c:
    if (ctx->pc == 0x2F5D6Cu) {
        ctx->pc = 0x2F5D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D68u;
        // 0x2f5d6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D70u;
        goto label_2f5d70;
    }
    ctx->pc = 0x2F5D68u;
    SET_GPR_U32(ctx, 31, 0x2F5D70u);
    ctx->pc = 0x2F5D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D68u;
    // 0x2f5d6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F5D68u, 0x2F5D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D70u;
label_2f5d70:
    // 0x2f5d70: 0x1000004a  b           . + 4 + (0x4A << 2)
label_2f5d74:
    if (ctx->pc == 0x2F5D74u) {
        ctx->pc = 0x2F5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D70u;
        // 0x2f5d74: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D78u;
        goto label_2f5d78;
    }
    ctx->pc = 0x2F5D70u;
    {
        const bool branch_taken_0x2f5d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D70u;
        // 0x2f5d74: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d70) {
            ctx->pc = 0x2F5E9Cu;
            goto label_2f5e9c;
        }
    }
    ctx->pc = 0x2F5D78u;
label_2f5d78:
    // 0x2f5d78: 0x6c10017  bgez        $s6, . + 4 + (0x17 << 2)
label_2f5d7c:
    if (ctx->pc == 0x2F5D7Cu) {
        ctx->pc = 0x2F5D80u;
        goto label_2f5d80;
    }
    ctx->pc = 0x2F5D78u;
    {
        const bool branch_taken_0x2f5d78 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x2f5d78) {
            ctx->pc = 0x2F5DD8u;
            goto label_2f5dd8;
        }
    }
    ctx->pc = 0x2F5D80u;
label_2f5d80:
    // 0x2f5d80: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2f5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2f5d84:
    // 0x2f5d84: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2f5d88:
    if (ctx->pc == 0x2F5D88u) {
        ctx->pc = 0x2F5D8Cu;
        goto label_2f5d8c;
    }
    ctx->pc = 0x2F5D84u;
    {
        const bool branch_taken_0x2f5d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d84) {
            ctx->pc = 0x2F5DD8u;
            goto label_2f5dd8;
        }
    }
    ctx->pc = 0x2F5D8Cu;
label_2f5d8c:
    // 0x2f5d8c: 0xc092940  jal         func_24A500
label_2f5d90:
    if (ctx->pc == 0x2F5D90u) {
        ctx->pc = 0x2F5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D8Cu;
        // 0x2f5d90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5D94u;
        goto label_2f5d94;
    }
    ctx->pc = 0x2F5D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F5D94u);
    ctx->pc = 0x2F5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5D8Cu;
    // 0x2f5d90: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F5D8Cu, 0x2F5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D94u;
label_2f5d94:
    // 0x2f5d94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f5d98:
    // 0x2f5d98: 0xae620150  sw          $v0, 0x150($s3)
    ctx->pc = 0x2f5d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
label_2f5d9c:
    // 0x2f5d9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5da0:
    // 0x2f5da0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f5da4:
    if (ctx->pc == 0x2F5DA4u) {
        ctx->pc = 0x2F5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DA0u;
        // 0x2f5da4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DA8u;
        goto label_2f5da8;
    }
    ctx->pc = 0x2F5DA0u;
    {
        const bool branch_taken_0x2f5da0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5da0) {
            ctx->pc = 0x2F5DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5DA0u;
            // 0x2f5da4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5DBCu;
            goto label_2f5dbc;
        }
    }
    ctx->pc = 0x2F5DA8u;
label_2f5da8:
    // 0x2f5da8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f5dac:
    // 0x2f5dac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5db0:
    // 0x2f5db0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5db4:
    if (ctx->pc == 0x2F5DB4u) {
        ctx->pc = 0x2F5DB8u;
        goto label_2f5db8;
    }
    ctx->pc = 0x2F5DB0u;
    {
        const bool branch_taken_0x2f5db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5db0) {
            ctx->pc = 0x2F5DC4u;
            goto label_2f5dc4;
        }
    }
    ctx->pc = 0x2F5DB8u;
label_2f5db8:
    // 0x2f5db8: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f5dbc:
    // 0x2f5dbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5dc0:
    // 0x2f5dc0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f5dc4:
    // 0x2f5dc4: 0xc0bd5ee  jal         func_2F57B8
label_2f5dc8:
    if (ctx->pc == 0x2F5DC8u) {
        ctx->pc = 0x2F5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DC4u;
        // 0x2f5dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DCCu;
        goto label_2f5dcc;
    }
    ctx->pc = 0x2F5DC4u;
    SET_GPR_U32(ctx, 31, 0x2F5DCCu);
    ctx->pc = 0x2F5DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DC4u;
    // 0x2f5dc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F5DC4u, 0x2F5DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DCCu;
label_2f5dcc:
    // 0x2f5dcc: 0x10000033  b           . + 4 + (0x33 << 2)
label_2f5dd0:
    if (ctx->pc == 0x2F5DD0u) {
        ctx->pc = 0x2F5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DCCu;
        // 0x2f5dd0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DD4u;
        goto label_2f5dd4;
    }
    ctx->pc = 0x2F5DCCu;
    {
        const bool branch_taken_0x2f5dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DCCu;
        // 0x2f5dd0: 0xae60004c  sw          $zero, 0x4C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5dcc) {
            ctx->pc = 0x2F5E9Cu;
            goto label_2f5e9c;
        }
    }
    ctx->pc = 0x2F5DD4u;
label_2f5dd4:
    // 0x2f5dd4: 0x0  nop
    ctx->pc = 0x2f5dd4u;
    // NOP
label_2f5dd8:
    // 0x2f5dd8: 0xc0bb914  jal         func_2EE450
label_2f5ddc:
    if (ctx->pc == 0x2F5DDCu) {
        ctx->pc = 0x2F5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DD8u;
        // 0x2f5ddc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DE0u;
        goto label_2f5de0;
    }
    ctx->pc = 0x2F5DD8u;
    SET_GPR_U32(ctx, 31, 0x2F5DE0u);
    ctx->pc = 0x2F5DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DD8u;
    // 0x2f5ddc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE450u, 0x2F5DD8u, 0x2F5DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DE0u;
label_2f5de0:
    // 0x2f5de0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f5de4:
    if (ctx->pc == 0x2F5DE4u) {
        ctx->pc = 0x2F5DE8u;
        goto label_2f5de8;
    }
    ctx->pc = 0x2F5DE0u;
    {
        const bool branch_taken_0x2f5de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5de0) {
            ctx->pc = 0x2F5E18u;
            goto label_2f5e18;
        }
    }
    ctx->pc = 0x2F5DE8u;
label_2f5de8:
    // 0x2f5de8: 0xc092940  jal         func_24A500
label_2f5dec:
    if (ctx->pc == 0x2F5DECu) {
        ctx->pc = 0x2F5DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5DE8u;
        // 0x2f5dec: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5DF0u;
        goto label_2f5df0;
    }
    ctx->pc = 0x2F5DE8u;
    SET_GPR_U32(ctx, 31, 0x2F5DF0u);
    ctx->pc = 0x2F5DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5DE8u;
    // 0x2f5dec: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F5DE8u, 0x2F5DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5DF0u;
label_2f5df0:
    // 0x2f5df0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2f5df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2f5df4:
    // 0x2f5df4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5df8:
    // 0x2f5df8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2f5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2f5dfc:
    // 0x2f5dfc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f5dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f5e00:
    // 0x2f5e00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f5e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f5e04:
    // 0x2f5e04: 0x60f809  jalr        $v1
label_2f5e08:
    if (ctx->pc == 0x2F5E08u) {
        ctx->pc = 0x2F5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E04u;
        // 0x2f5e08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E0Cu;
        goto label_2f5e0c;
    }
    ctx->pc = 0x2F5E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F5E0Cu);
        ctx->pc = 0x2F5E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E04u;
        // 0x2f5e08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5E04u, 0x2F5E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F5E0Cu;
label_2f5e0c:
    // 0x2f5e0c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2f5e10:
    if (ctx->pc == 0x2F5E10u) {
        ctx->pc = 0x2F5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E0Cu;
        // 0x2f5e10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E14u;
        goto label_2f5e14;
    }
    ctx->pc = 0x2F5E0Cu;
    {
        const bool branch_taken_0x2f5e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E0Cu;
        // 0x2f5e10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e0c) {
            ctx->pc = 0x2F5EA0u;
            goto label_2f5ea0;
        }
    }
    ctx->pc = 0x2F5E14u;
label_2f5e14:
    // 0x2f5e14: 0x0  nop
    ctx->pc = 0x2f5e14u;
    // NOP
label_2f5e18:
    // 0x2f5e18: 0xc0bb8e4  jal         func_2EE390
label_2f5e1c:
    if (ctx->pc == 0x2F5E1Cu) {
        ctx->pc = 0x2F5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E18u;
        // 0x2f5e1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E20u;
        goto label_2f5e20;
    }
    ctx->pc = 0x2F5E18u;
    SET_GPR_U32(ctx, 31, 0x2F5E20u);
    ctx->pc = 0x2F5E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E18u;
    // 0x2f5e1c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE390u, 0x2F5E18u, 0x2F5E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E20u;
label_2f5e20:
    // 0x2f5e20: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2f5e24:
    if (ctx->pc == 0x2F5E24u) {
        ctx->pc = 0x2F5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E20u;
        // 0x2f5e24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E28u;
        goto label_2f5e28;
    }
    ctx->pc = 0x2F5E20u;
    {
        const bool branch_taken_0x2f5e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E20u;
        // 0x2f5e24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5e20) {
            ctx->pc = 0x2F5EA0u;
            goto label_2f5ea0;
        }
    }
    ctx->pc = 0x2F5E28u;
label_2f5e28:
    // 0x2f5e28: 0xc092940  jal         func_24A500
label_2f5e2c:
    if (ctx->pc == 0x2F5E2Cu) {
        ctx->pc = 0x2F5E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E28u;
        // 0x2f5e2c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E30u;
        goto label_2f5e30;
    }
    ctx->pc = 0x2F5E28u;
    SET_GPR_U32(ctx, 31, 0x2F5E30u);
    ctx->pc = 0x2F5E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E28u;
    // 0x2f5e2c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2F5E28u, 0x2F5E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E30u;
label_2f5e30:
    // 0x2f5e30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2f5e34:
    // 0x2f5e34: 0xae620150  sw          $v0, 0x150($s3)
    ctx->pc = 0x2f5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 336), GPR_U32(ctx, 2));
label_2f5e38:
    // 0x2f5e38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5e3c:
    // 0x2f5e3c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f5e40:
    if (ctx->pc == 0x2F5E40u) {
        ctx->pc = 0x2F5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E3Cu;
        // 0x2f5e40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E44u;
        goto label_2f5e44;
    }
    ctx->pc = 0x2F5E3Cu;
    {
        const bool branch_taken_0x2f5e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e3c) {
            ctx->pc = 0x2F5E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E3Cu;
            // 0x2f5e40: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5E58u;
            goto label_2f5e58;
        }
    }
    ctx->pc = 0x2F5E44u;
label_2f5e44:
    // 0x2f5e44: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f5e48:
    // 0x2f5e48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5e4c:
    // 0x2f5e4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5e50:
    if (ctx->pc == 0x2F5E50u) {
        ctx->pc = 0x2F5E54u;
        goto label_2f5e54;
    }
    ctx->pc = 0x2F5E4Cu;
    {
        const bool branch_taken_0x2f5e4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5e4c) {
            ctx->pc = 0x2F5E60u;
            goto label_2f5e60;
        }
    }
    ctx->pc = 0x2F5E54u;
label_2f5e54:
    // 0x2f5e54: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f5e58:
    // 0x2f5e58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e5c:
    // 0x2f5e5c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f5e60:
    // 0x2f5e60: 0xc0bd5ee  jal         func_2F57B8
label_2f5e64:
    if (ctx->pc == 0x2F5E64u) {
        ctx->pc = 0x2F5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E60u;
        // 0x2f5e64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E68u;
        goto label_2f5e68;
    }
    ctx->pc = 0x2F5E60u;
    SET_GPR_U32(ctx, 31, 0x2F5E68u);
    ctx->pc = 0x2F5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5E60u;
    // 0x2f5e64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F5E60u, 0x2F5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E68u;
label_2f5e68:
    // 0x2f5e68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f5e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f5e6c:
    // 0x2f5e6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f5e70:
    if (ctx->pc == 0x2F5E70u) {
        ctx->pc = 0x2F5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5E6Cu;
        // 0x2f5e70: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5E74u;
        goto label_2f5e74;
    }
    ctx->pc = 0x2F5E6Cu;
    {
        const bool branch_taken_0x2f5e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5e6c) {
            ctx->pc = 0x2F5E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5E6Cu;
            // 0x2f5e70: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5E88u;
            goto label_2f5e88;
        }
    }
    ctx->pc = 0x2F5E74u;
label_2f5e74:
    // 0x2f5e74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f5e78:
    // 0x2f5e78: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f5e7c:
    // 0x2f5e7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5e80:
    if (ctx->pc == 0x2F5E80u) {
        ctx->pc = 0x2F5E84u;
        goto label_2f5e84;
    }
    ctx->pc = 0x2F5E7Cu;
    {
        const bool branch_taken_0x2f5e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5e7c) {
            ctx->pc = 0x2F5E90u;
            goto label_2f5e90;
        }
    }
    ctx->pc = 0x2F5E84u;
label_2f5e84:
    // 0x2f5e84: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2f5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2f5e88:
    // 0x2f5e88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5e8c:
    // 0x2f5e8c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2f5e90:
    // 0x2f5e90: 0xc0bd620  jal         func_2F5880
label_2f5e94:
    if (ctx->pc == 0x2F5E94u) {
        ctx->pc = 0x2F5E98u;
        goto label_2f5e98;
    }
    ctx->pc = 0x2F5E90u;
    SET_GPR_U32(ctx, 31, 0x2F5E98u);
    ctx->pc = 0x2F5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5880u, 0x2F5E90u, 0x2F5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5E98u;
label_2f5e98:
    // 0x2f5e98: 0xae60004c  sw          $zero, 0x4C($s3)
    ctx->pc = 0x2f5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 0));
label_2f5e9c:
    // 0x2f5e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5ea0:
    // 0x2f5ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f5ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f5ea4:
    // 0x2f5ea4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f5ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5ea8:
    // 0x2f5ea8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f5ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f5eac:
    // 0x2f5eac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f5eacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f5eb0:
    // 0x2f5eb0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f5eb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2f5eb4:
    // 0x2f5eb4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f5eb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f5eb8:
    // 0x2f5eb8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f5eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2f5ebc:
    // 0x2f5ebc: 0x3e00008  jr          $ra
label_2f5ec0:
    if (ctx->pc == 0x2F5EC0u) {
        ctx->pc = 0x2F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EBCu;
        // 0x2f5ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EC4u;
        goto label_2f5ec4;
    }
    ctx->pc = 0x2F5EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EBCu;
        // 0x2f5ec0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5EC4u;
label_2f5ec4:
    // 0x2f5ec4: 0x0  nop
    ctx->pc = 0x2f5ec4u;
    // NOP
label_2f5ec8:
    // 0x2f5ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f5ecc:
    // 0x2f5ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f5eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f5ed0:
    // 0x2f5ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f5ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f5ed4:
    // 0x2f5ed4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f5ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5ed8:
    // 0x2f5ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f5edc:
    // 0x2f5edc: 0x26510148  addiu       $s1, $s2, 0x148
    ctx->pc = 0x2f5edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
label_2f5ee0:
    // 0x2f5ee0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f5ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2f5ee4:
    // 0x2f5ee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f5ee8:
    // 0x2f5ee8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f5ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5eec:
    // 0x2f5eec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f5ef0:
    if (ctx->pc == 0x2F5EF0u) {
        ctx->pc = 0x2F5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EECu;
        // 0x2f5ef0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5EF4u;
        goto label_2f5ef4;
    }
    ctx->pc = 0x2F5EECu;
    {
        const bool branch_taken_0x2f5eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5EECu;
        // 0x2f5ef0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5eec) {
            ctx->pc = 0x2F5F04u;
            goto label_2f5f04;
        }
    }
    ctx->pc = 0x2F5EF4u;
label_2f5ef4:
    // 0x2f5ef4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f5ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f5ef8:
    // 0x2f5ef8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f5efc:
    // 0x2f5efc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5f00:
    if (ctx->pc == 0x2F5F00u) {
        ctx->pc = 0x2F5F04u;
        goto label_2f5f04;
    }
    ctx->pc = 0x2F5EFCu;
    {
        const bool branch_taken_0x2f5efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5efc) {
            ctx->pc = 0x2F5F10u;
            goto label_2f5f10;
        }
    }
    ctx->pc = 0x2F5F04u;
label_2f5f04:
    // 0x2f5f04: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f5f08:
    // 0x2f5f08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f5f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f0c:
    // 0x2f5f0c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f5f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f5f10:
    // 0x2f5f10: 0xc0bd6f4  jal         func_2F5BD0
label_2f5f14:
    if (ctx->pc == 0x2F5F14u) {
        ctx->pc = 0x2F5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F10u;
        // 0x2f5f14: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F18u;
        goto label_2f5f18;
    }
    ctx->pc = 0x2F5F10u;
    SET_GPR_U32(ctx, 31, 0x2F5F18u);
    ctx->pc = 0x2F5F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F10u;
    // 0x2f5f14: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5BD0u, 0x2F5F10u, 0x2F5F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F18u;
label_2f5f18:
    // 0x2f5f18: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x2f5f18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2f5f1c:
    // 0x2f5f1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f20:
    // 0x2f5f20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f24:
    // 0x2f5f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f28:
    // 0x2f5f28: 0xc0bd430  jal         func_2F50C0
label_2f5f2c:
    if (ctx->pc == 0x2F5F2Cu) {
        ctx->pc = 0x2F5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F28u;
        // 0x2f5f2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F30u;
        goto label_2f5f30;
    }
    ctx->pc = 0x2F5F28u;
    SET_GPR_U32(ctx, 31, 0x2F5F30u);
    ctx->pc = 0x2F5F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F28u;
    // 0x2f5f2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F50C0u, 0x2F5F28u, 0x2F5F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F30u;
label_2f5f30:
    // 0x2f5f30: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2f5f34:
    if (ctx->pc == 0x2F5F34u) {
        ctx->pc = 0x2F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F30u;
        // 0x2f5f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F38u;
        goto label_2f5f38;
    }
    ctx->pc = 0x2F5F30u;
    {
        const bool branch_taken_0x2f5f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F30u;
        // 0x2f5f34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5f30) {
            ctx->pc = 0x2F5F74u;
            goto label_2f5f74;
        }
    }
    ctx->pc = 0x2F5F38u;
label_2f5f38:
    // 0x2f5f38: 0xc0bd6f4  jal         func_2F5BD0
label_2f5f3c:
    if (ctx->pc == 0x2F5F3Cu) {
        ctx->pc = 0x2F5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F38u;
        // 0x2f5f3c: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F40u;
        goto label_2f5f40;
    }
    ctx->pc = 0x2F5F38u;
    SET_GPR_U32(ctx, 31, 0x2F5F40u);
    ctx->pc = 0x2F5F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F38u;
    // 0x2f5f3c: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5BD0u, 0x2F5F38u, 0x2F5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F40u;
label_2f5f40:
    // 0x2f5f40: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x2f5f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
label_2f5f44:
    // 0x2f5f44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f5f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5f48:
    // 0x2f5f48: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f5f4c:
    if (ctx->pc == 0x2F5F4Cu) {
        ctx->pc = 0x2F5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F48u;
        // 0x2f5f4c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F50u;
        goto label_2f5f50;
    }
    ctx->pc = 0x2F5F48u;
    {
        const bool branch_taken_0x2f5f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5f48) {
            ctx->pc = 0x2F5F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F5F48u;
            // 0x2f5f4c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5F64u;
            goto label_2f5f64;
        }
    }
    ctx->pc = 0x2F5F50u;
label_2f5f50:
    // 0x2f5f50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f5f54:
    // 0x2f5f54: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f5f58:
    // 0x2f5f58: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5f5c:
    if (ctx->pc == 0x2F5F5Cu) {
        ctx->pc = 0x2F5F60u;
        goto label_2f5f60;
    }
    ctx->pc = 0x2F5F58u;
    {
        const bool branch_taken_0x2f5f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5f58) {
            ctx->pc = 0x2F5F6Cu;
            goto label_2f5f6c;
        }
    }
    ctx->pc = 0x2F5F60u;
label_2f5f60:
    // 0x2f5f60: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f5f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f5f64:
    // 0x2f5f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f5f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5f68:
    // 0x2f5f68: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f5f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f5f6c:
    // 0x2f5f6c: 0xc0bd5ee  jal         func_2F57B8
label_2f5f70:
    if (ctx->pc == 0x2F5F70u) {
        ctx->pc = 0x2F5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F6Cu;
        // 0x2f5f70: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F74u;
        goto label_2f5f74;
    }
    ctx->pc = 0x2F5F6Cu;
    SET_GPR_U32(ctx, 31, 0x2F5F74u);
    ctx->pc = 0x2F5F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5F6Cu;
    // 0x2f5f70: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F5F6Cu, 0x2F5F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5F74u;
label_2f5f74:
    // 0x2f5f74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f5f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f5f78:
    // 0x2f5f78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f5f78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f5f7c:
    // 0x2f5f7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f5f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f5f80:
    // 0x2f5f80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f5f80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f5f84:
    // 0x2f5f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f5f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f5f88:
    // 0x2f5f88: 0x3e00008  jr          $ra
label_2f5f8c:
    if (ctx->pc == 0x2F5F8Cu) {
        ctx->pc = 0x2F5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F88u;
        // 0x2f5f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5F90u;
        goto label_2f5f90;
    }
    ctx->pc = 0x2F5F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5F88u;
        // 0x2f5f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5F90u;
label_2f5f90:
    // 0x2f5f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f5f94:
    // 0x2f5f94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f5f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2f5f98:
    // 0x2f5f98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f5f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2f5f9c:
    // 0x2f5f9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f5f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fa0:
    // 0x2f5fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f5fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2f5fa4:
    // 0x2f5fa4: 0x26510148  addiu       $s1, $s2, 0x148
    ctx->pc = 0x2f5fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
label_2f5fa8:
    // 0x2f5fa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f5fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2f5fac:
    // 0x2f5fac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f5fb0:
    // 0x2f5fb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f5fb4:
    // 0x2f5fb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f5fb8:
    if (ctx->pc == 0x2F5FB8u) {
        ctx->pc = 0x2F5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FB4u;
        // 0x2f5fb8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FBCu;
        goto label_2f5fbc;
    }
    ctx->pc = 0x2F5FB4u;
    {
        const bool branch_taken_0x2f5fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FB4u;
        // 0x2f5fb8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5fb4) {
            ctx->pc = 0x2F5FCCu;
            goto label_2f5fcc;
        }
    }
    ctx->pc = 0x2F5FBCu;
label_2f5fbc:
    // 0x2f5fbc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2f5fc0:
    // 0x2f5fc0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f5fc4:
    // 0x2f5fc4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f5fc8:
    if (ctx->pc == 0x2F5FC8u) {
        ctx->pc = 0x2F5FCCu;
        goto label_2f5fcc;
    }
    ctx->pc = 0x2F5FC4u;
    {
        const bool branch_taken_0x2f5fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5fc4) {
            ctx->pc = 0x2F5FD8u;
            goto label_2f5fd8;
        }
    }
    ctx->pc = 0x2F5FCCu;
label_2f5fcc:
    // 0x2f5fcc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f5fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f5fd0:
    // 0x2f5fd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f5fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fd4:
    // 0x2f5fd4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f5fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f5fd8:
    // 0x2f5fd8: 0xc0bd708  jal         func_2F5C20
label_2f5fdc:
    if (ctx->pc == 0x2F5FDCu) {
        ctx->pc = 0x2F5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FD8u;
        // 0x2f5fdc: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FE0u;
        goto label_2f5fe0;
    }
    ctx->pc = 0x2F5FD8u;
    SET_GPR_U32(ctx, 31, 0x2F5FE0u);
    ctx->pc = 0x2F5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FD8u;
    // 0x2f5fdc: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5C20u, 0x2F5FD8u, 0x2F5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FE0u;
label_2f5fe0:
    // 0x2f5fe0: 0x8e48004c  lw          $t0, 0x4C($s2)
    ctx->pc = 0x2f5fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2f5fe4:
    // 0x2f5fe4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fe8:
    // 0x2f5fe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f5fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f5fec:
    // 0x2f5fec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f5fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f5ff0:
    // 0x2f5ff0: 0xc0bd430  jal         func_2F50C0
label_2f5ff4:
    if (ctx->pc == 0x2F5FF4u) {
        ctx->pc = 0x2F5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF0u;
        // 0x2f5ff4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F5FF8u;
        goto label_2f5ff8;
    }
    ctx->pc = 0x2F5FF0u;
    SET_GPR_U32(ctx, 31, 0x2F5FF8u);
    ctx->pc = 0x2F5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5FF0u;
    // 0x2f5ff4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F50C0u, 0x2F5FF0u, 0x2F5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5FF8u;
label_2f5ff8:
    // 0x2f5ff8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2f5ffc:
    if (ctx->pc == 0x2F5FFCu) {
        ctx->pc = 0x2F5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF8u;
        // 0x2f5ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6000u;
        goto label_2f6000;
    }
    ctx->pc = 0x2F5FF8u;
    {
        const bool branch_taken_0x2f5ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5FF8u;
        // 0x2f5ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5ff8) {
            ctx->pc = 0x2F603Cu;
            goto label_2f603c;
        }
    }
    ctx->pc = 0x2F6000u;
label_2f6000:
    // 0x2f6000: 0xc0bd708  jal         func_2F5C20
label_2f6004:
    if (ctx->pc == 0x2F6004u) {
        ctx->pc = 0x2F6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6000u;
        // 0x2f6004: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6008u;
        goto label_2f6008;
    }
    ctx->pc = 0x2F6000u;
    SET_GPR_U32(ctx, 31, 0x2F6008u);
    ctx->pc = 0x2F6004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6000u;
    // 0x2f6004: 0xae400150  sw          $zero, 0x150($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5C20u, 0x2F6000u, 0x2F6008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6008u;
label_2f6008:
    // 0x2f6008: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x2f6008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
label_2f600c:
    // 0x2f600c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f6010:
    // 0x2f6010: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f6014:
    if (ctx->pc == 0x2F6014u) {
        ctx->pc = 0x2F6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6010u;
        // 0x2f6014: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6018u;
        goto label_2f6018;
    }
    ctx->pc = 0x2F6010u;
    {
        const bool branch_taken_0x2f6010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6010) {
            ctx->pc = 0x2F6014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6010u;
            // 0x2f6014: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F602Cu;
            goto label_2f602c;
        }
    }
    ctx->pc = 0x2F6018u;
label_2f6018:
    // 0x2f6018: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2f601c:
    // 0x2f601c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2f601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f6020:
    // 0x2f6020: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2f6024:
    if (ctx->pc == 0x2F6024u) {
        ctx->pc = 0x2F6028u;
        goto label_2f6028;
    }
    ctx->pc = 0x2F6020u;
    {
        const bool branch_taken_0x2f6020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6020) {
            ctx->pc = 0x2F6034u;
            goto label_2f6034;
        }
    }
    ctx->pc = 0x2F6028u;
label_2f6028:
    // 0x2f6028: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2f6028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2f602c:
    // 0x2f602c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f602cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6030:
    // 0x2f6030: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2f6030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2f6034:
    // 0x2f6034: 0xc0bd5ee  jal         func_2F57B8
label_2f6038:
    if (ctx->pc == 0x2F6038u) {
        ctx->pc = 0x2F6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6034u;
        // 0x2f6038: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F603Cu;
        goto label_2f603c;
    }
    ctx->pc = 0x2F6034u;
    SET_GPR_U32(ctx, 31, 0x2F603Cu);
    ctx->pc = 0x2F6038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6034u;
    // 0x2f6038: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F6034u, 0x2F603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F603Cu;
label_2f603c:
    // 0x2f603c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f603cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f6040:
    // 0x2f6040: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f6040u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2f6044:
    // 0x2f6044: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f6044u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f6048:
    // 0x2f6048: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f6048u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f604c:
    // 0x2f604c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f6050:
    // 0x2f6050: 0x3e00008  jr          $ra
label_2f6054:
    if (ctx->pc == 0x2F6054u) {
        ctx->pc = 0x2F6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6050u;
        // 0x2f6054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6058u;
        goto label_fallthrough_0x2f6050;
    }
    ctx->pc = 0x2F6050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6050u;
        // 0x2f6054: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f6050:
    ctx->pc = 0x2F6058u;
}
