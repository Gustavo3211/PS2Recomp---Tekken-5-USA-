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

// Function: sub_0026ED80
// Address: 0x26ed80 - 0x26edd8
void sub_0026ED80_0x26ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026ED80_0x26ed80");
#endif

    ctx->pc = 0x26ed80u;

    // 0x26ed80: 0x8f84aa7c  lw          $a0, -0x5584($gp)
    ctx->pc = 0x26ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26ed84: 0x84830086  lh          $v1, 0x86($a0)
    ctx->pc = 0x26ed84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x26ed88: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26ED88u;
    {
        const bool branch_taken_0x26ed88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED88u;
        // 0x26ed8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed88) {
            ctx->pc = 0x26EDD0u;
            goto label_26edd0;
        }
    }
    ctx->pc = 0x26ED90u;
    // 0x26ed90: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26ed94: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x26ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x26ed98: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x26ed98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ed9c: 0x3407c000  ori         $a3, $zero, 0xC000
    ctx->pc = 0x26ed9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x26eda0: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x26eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x26eda4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x26eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26eda8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26edac: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x26edacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x26edb0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26edb4: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x26edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x26edb8: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x26edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26edbc: 0xac660064  sw          $a2, 0x64($v1)
    ctx->pc = 0x26edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 6));
    // 0x26edc0: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x26edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26edc4: 0x8c830330  lw          $v1, 0x330($a0)
    ctx->pc = 0x26edc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x26edc8: 0x38630217  xori        $v1, $v1, 0x217
    ctx->pc = 0x26edc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)535);
    // 0x26edcc: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x26edccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
label_26edd0:
    // 0x26edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x26EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26EDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26EDD8u;
}
