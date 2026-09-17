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

// Function: sub_002FCB58
// Address: 0x2fcb58 - 0x2fcba0
void sub_002FCB58_0x2fcb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCB58_0x2fcb58");
#endif

    switch (ctx->pc) {
        case 0x2fcb70u: goto label_2fcb70;
        default: break;
    }

    ctx->pc = 0x2fcb58u;

    // 0x2fcb58: 0x9488000e  lhu         $t0, 0xE($a0)
    ctx->pc = 0x2fcb58u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2fcb5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2fcb5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fcb60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcb64: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FCB64u;
    {
        const bool branch_taken_0x2fcb64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB64u;
        // 0x2fcb68: 0x8c860010  lw          $a2, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb64) {
            ctx->pc = 0x2FCB94u;
            goto label_2fcb94;
        }
    }
    ctx->pc = 0x2FCB6Cu;
    // 0x2fcb6c: 0x0  nop
    ctx->pc = 0x2fcb6cu;
    // NOP
label_2fcb70:
    // 0x2fcb70: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x2fcb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2fcb74: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2fcb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2fcb78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2fcb78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2fcb7c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2fcb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fcb80: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2fcb84: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x2fcb84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2fcb88: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2fcb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2fcb8c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2FCB8Cu;
    {
        const bool branch_taken_0x2fcb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB8Cu;
        // 0x2fcb90: 0xa2380b  movn        $a3, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcb8c) {
            ctx->pc = 0x2FCB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcb70;
        }
    }
    ctx->pc = 0x2FCB94u;
label_2fcb94:
    // 0x2fcb94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCB94u;
        // 0x2fcb98: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCB9Cu;
    // 0x2fcb9c: 0x0  nop
    ctx->pc = 0x2fcb9cu;
    // NOP
    ctx->pc = 0x2fcba0u;
}
