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

// Function: sub_00241378
// Address: 0x241378 - 0x2413d0
void sub_00241378_0x241378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241378_0x241378");
#endif

    switch (ctx->pc) {
        case 0x2413a8u: goto label_2413a8;
        default: break;
    }

    ctx->pc = 0x241378u;

    // 0x241378: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x241378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24137c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24137Cu;
    {
        const bool branch_taken_0x24137c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24137c) {
            ctx->pc = 0x2413C4u;
            goto label_2413c4;
        }
    }
    ctx->pc = 0x241384u;
    // 0x241384: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x241388: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x241388u;
    {
        const bool branch_taken_0x241388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x241388) {
            ctx->pc = 0x2413C4u;
            goto label_2413c4;
        }
    }
    ctx->pc = 0x241390u;
    // 0x241390: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x241390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x241394: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x241394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x241398: 0x244237a0  addiu       $v0, $v0, 0x37A0
    ctx->pc = 0x241398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14240));
    // 0x24139c: 0x2463d828  addiu       $v1, $v1, -0x27D8
    ctx->pc = 0x24139cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957096));
    // 0x2413a0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x2413a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2413a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2413a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2413a8:
    // 0x2413a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2413ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2413acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2413b0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2413b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2413b4: 0x0  nop
    ctx->pc = 0x2413b4u;
    // NOP
    // 0x2413b8: 0x0  nop
    ctx->pc = 0x2413b8u;
    // NOP
    // 0x2413bc: 0x1485fffa  bne         $a0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2413BCu;
    {
        const bool branch_taken_0x2413bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2413C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2413BCu;
        // 0x2413c0: 0x2442001c  addiu       $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413bc) {
            ctx->pc = 0x2413A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2413a8;
        }
    }
    ctx->pc = 0x2413C4u;
label_2413c4:
    // 0x2413c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2413C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2413C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2413CCu;
    // 0x2413cc: 0x0  nop
    ctx->pc = 0x2413ccu;
    // NOP
    ctx->pc = 0x2413d0u;
}
