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

// Function: sub_002ED858
// Address: 0x2ed858 - 0x2ed8c8
void sub_002ED858_0x2ed858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED858_0x2ed858");
#endif

    ctx->pc = 0x2ed858u;

    // 0x2ed858: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2ed858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2ed85c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed860: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED860u;
    {
        const bool branch_taken_0x2ed860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED860u;
        // 0x2ed864: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed860) {
            ctx->pc = 0x2ED878u;
            goto label_2ed878;
        }
    }
    ctx->pc = 0x2ED868u;
    // 0x2ed868: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed86c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ed86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ed870: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED870u;
    {
        const bool branch_taken_0x2ed870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed870) {
            ctx->pc = 0x2ED884u;
            goto label_2ed884;
        }
    }
    ctx->pc = 0x2ED878u;
label_2ed878:
    // 0x2ed878: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ed878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ed87c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed880: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ed880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2ed884:
    // 0x2ed884: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2ED884u;
    {
        const bool branch_taken_0x2ed884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed884) {
            ctx->pc = 0x2ED8C0u;
            goto label_2ed8c0;
        }
    }
    ctx->pc = 0x2ED88Cu;
    // 0x2ed88c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ed88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED890u;
    {
        const bool branch_taken_0x2ed890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED890u;
        // 0x2ed894: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed890) {
            ctx->pc = 0x2ED8A8u;
            goto label_2ed8a8;
        }
    }
    ctx->pc = 0x2ED898u;
    // 0x2ed898: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ed898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ed89c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ed89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ed8a0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED8A0u;
    {
        const bool branch_taken_0x2ed8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed8a0) {
            ctx->pc = 0x2ED8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED8A0u;
            // 0x2ed8a4: 0x8ca20040  lw          $v0, 0x40($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED8B8u;
            goto label_2ed8b8;
        }
    }
    ctx->pc = 0x2ED8A8u;
label_2ed8a8:
    // 0x2ed8a8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ed8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ed8ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed8b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ed8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ed8b4: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2ed8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40u));
label_2ed8b8:
    // 0x2ed8b8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2ed8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ed8bc: 0xaca20040  sw          $v0, 0x40($a1)
    ctx->pc = 0x2ed8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
label_2ed8c0:
    // 0x2ed8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED8C8u;
}
