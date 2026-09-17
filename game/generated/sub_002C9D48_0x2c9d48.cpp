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

// Function: sub_002C9D48
// Address: 0x2c9d48 - 0x2c9e08
void sub_002C9D48_0x2c9d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9D48_0x2c9d48");
#endif

    switch (ctx->pc) {
        case 0x2c9d60u: goto label_2c9d60;
        case 0x2c9d80u: goto label_2c9d80;
        case 0x2c9d98u: goto label_2c9d98;
        case 0x2c9dc0u: goto label_2c9dc0;
        default: break;
    }

    ctx->pc = 0x2c9d48u;

    // 0x2c9d48: 0x240202fd  addiu       $v0, $zero, 0x2FD
    ctx->pc = 0x2c9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 765));
    // 0x2c9d4c: 0x240308a4  addiu       $v1, $zero, 0x8A4
    ctx->pc = 0x2c9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2212));
    // 0x2c9d50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c9d54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c9d54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d58: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2c9d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2c9d5c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x2c9d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c9d60:
    // 0x2c9d60: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x2c9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2c9d64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c9d64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d68: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2c9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c9d6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9d70: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c9d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c9d74: 0x244903a4  addiu       $t1, $v0, 0x3A4
    ctx->pc = 0x2c9d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 932));
    // 0x2c9d78: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x2c9d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2c9d7c: 0x0  nop
    ctx->pc = 0x2c9d7cu;
    // NOP
label_2c9d80:
    // 0x2c9d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d84: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2c9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c9d88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c9d8c: 0x1223021  addu        $a2, $t1, $v0
    ctx->pc = 0x2c9d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2c9d90: 0x24c70008  addiu       $a3, $a2, 0x8
    ctx->pc = 0x2c9d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2c9d94: 0x0  nop
    ctx->pc = 0x2c9d94u;
    // NOP
label_2c9d98:
    // 0x2c9d98: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x2c9d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2c9d9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c9da0: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2c9da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c9da4: 0x0  nop
    ctx->pc = 0x2c9da4u;
    // NOP
    // 0x2c9da8: 0x0  nop
    ctx->pc = 0x2c9da8u;
    // NOP
    // 0x2c9dac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C9DACu;
    {
        const bool branch_taken_0x2c9dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DACu;
        // 0x2c9db0: 0xa06b0000  sb          $t3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dac) {
            ctx->pc = 0x2C9D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9d98;
        }
    }
    ctx->pc = 0x2C9DB4u;
    // 0x2c9db4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x2c9db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2c9db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dbc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2c9dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c9dc0:
    // 0x2c9dc0: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2c9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2c9dc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c9dc8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2c9dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c9dcc: 0x0  nop
    ctx->pc = 0x2c9dccu;
    // NOP
    // 0x2c9dd0: 0x0  nop
    ctx->pc = 0x2c9dd0u;
    // NOP
    // 0x2c9dd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C9DD4u;
    {
        const bool branch_taken_0x2c9dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DD4u;
        // 0x2c9dd8: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dd4) {
            ctx->pc = 0x2C9DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9dc0;
        }
    }
    ctx->pc = 0x2C9DDCu;
    // 0x2c9ddc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2c9ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2c9de0: 0x29020002  slti        $v0, $t0, 0x2
    ctx->pc = 0x2c9de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c9de4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2C9DE4u;
    {
        const bool branch_taken_0x2c9de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DE4u;
        // 0x2c9de8: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9de4) {
            ctx->pc = 0x2C9D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9d80;
        }
    }
    ctx->pc = 0x2C9DECu;
    // 0x2c9dec: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2c9decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2c9df0: 0x29420020  slti        $v0, $t2, 0x20
    ctx->pc = 0x2c9df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2c9df4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2C9DF4u;
    {
        const bool branch_taken_0x2c9df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DF4u;
        // 0x2c9df8: 0xad200024  sw          $zero, 0x24($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9df4) {
            ctx->pc = 0x2C9D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9d60;
        }
    }
    ctx->pc = 0x2C9DFCu;
    // 0x2c9dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E04u;
    // 0x2c9e04: 0x0  nop
    ctx->pc = 0x2c9e04u;
    // NOP
    ctx->pc = 0x2c9e08u;
}
