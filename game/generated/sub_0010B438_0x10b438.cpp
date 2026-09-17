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

// Function: sub_0010B438
// Address: 0x10b438 - 0x10b490
void sub_0010B438_0x10b438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B438_0x10b438");
#endif

    switch (ctx->pc) {
        case 0x10b448u: goto label_10b448;
        default: break;
    }

    ctx->pc = 0x10b438u;

    // 0x10b438: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x10b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10b43c: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x10b43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x10b440: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B440u;
    {
        const bool branch_taken_0x10b440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B440u;
        // 0x10b444: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b440) {
            ctx->pc = 0x10B464u;
            goto label_10b464;
        }
    }
    ctx->pc = 0x10B448u;
label_10b448:
    // 0x10b448: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x10b448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x10b44c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x10b44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x10b450: 0x30a2000c  andi        $v0, $a1, 0xC
    ctx->pc = 0x10b450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x10b454: 0x0  nop
    ctx->pc = 0x10b454u;
    // NOP
    // 0x10b458: 0x0  nop
    ctx->pc = 0x10b458u;
    // NOP
    // 0x10b45c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10B45Cu;
    {
        const bool branch_taken_0x10b45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b45c) {
            ctx->pc = 0x10B448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b448;
        }
    }
    ctx->pc = 0x10B464u;
label_10b464:
    // 0x10b464: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B464u;
    {
        const bool branch_taken_0x10b464 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B464u;
        // 0x10b468: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b464) {
            ctx->pc = 0x10B480u;
            goto label_10b480;
        }
    }
    ctx->pc = 0x10B46Cu;
    // 0x10b46c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x10b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10b470: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10b470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10b474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10b478: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10b478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10b47c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x10b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_10b480:
    // 0x10b480: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x10b480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x10b484: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x10b484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b488: 0x3e00008  jr          $ra
    ctx->pc = 0x10B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B488u;
        // 0x10b48c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B490u;
}
