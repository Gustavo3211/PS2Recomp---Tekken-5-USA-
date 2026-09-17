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

// Function: sub_002FD188
// Address: 0x2fd188 - 0x2fd1c8
void sub_002FD188_0x2fd188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD188_0x2fd188");
#endif

    switch (ctx->pc) {
        case 0x2fd1a0u: goto label_2fd1a0;
        default: break;
    }

    ctx->pc = 0x2fd188u;

    // 0x2fd188: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x2fd188u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fd18c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2fd18cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fd190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd194: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x2FD194u;
    {
        const bool branch_taken_0x2fd194 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2FD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD194u;
        // 0x2fd198: 0x8c850014  lw          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd194) {
            ctx->pc = 0x2FD1C0u;
            goto label_2fd1c0;
        }
    }
    ctx->pc = 0x2FD19Cu;
    // 0x2fd19c: 0x0  nop
    ctx->pc = 0x2fd19cu;
    // NOP
label_2fd1a0:
    // 0x2fd1a0: 0x8ca20050  lw          $v0, 0x50($a1)
    ctx->pc = 0x2fd1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2fd1a4: 0x24a500c0  addiu       $a1, $a1, 0xC0
    ctx->pc = 0x2fd1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x2fd1a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2fd1a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2fd1ac: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2fd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2fd1b0: 0x30420700  andi        $v0, $v0, 0x700
    ctx->pc = 0x2fd1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1792);
    // 0x2fd1b4: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x2fd1b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2fd1b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2FD1B8u;
    {
        const bool branch_taken_0x2fd1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1B8u;
        // 0x2fd1bc: 0x82300b  movn        $a2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1b8) {
            ctx->pc = 0x2FD1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd1a0;
        }
    }
    ctx->pc = 0x2FD1C0u;
label_2fd1c0:
    // 0x2fd1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1C0u;
        // 0x2fd1c4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD1C8u;
}
