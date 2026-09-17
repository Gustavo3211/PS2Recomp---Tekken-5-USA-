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

// Function: sub_002DE828
// Address: 0x2de828 - 0x2de868
void sub_002DE828_0x2de828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE828_0x2de828");
#endif

    switch (ctx->pc) {
        case 0x2de828u: goto label_2de828;
        case 0x2de82cu: goto label_2de82c;
        case 0x2de830u: goto label_2de830;
        case 0x2de834u: goto label_2de834;
        case 0x2de838u: goto label_2de838;
        case 0x2de83cu: goto label_2de83c;
        case 0x2de840u: goto label_2de840;
        case 0x2de844u: goto label_2de844;
        case 0x2de848u: goto label_2de848;
        case 0x2de84cu: goto label_2de84c;
        case 0x2de850u: goto label_2de850;
        case 0x2de854u: goto label_2de854;
        case 0x2de858u: goto label_2de858;
        case 0x2de85cu: goto label_2de85c;
        case 0x2de860u: goto label_2de860;
        case 0x2de864u: goto label_2de864;
        default: break;
    }

    ctx->pc = 0x2de828u;

label_2de828:
    // 0x2de828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2de82c:
    // 0x2de82c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2de82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2de830:
    // 0x2de830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2de834:
    // 0x2de834: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2de834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2de838:
    // 0x2de838: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2de838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2de83c:
    // 0x2de83c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_2de840:
    if (ctx->pc == 0x2DE840u) {
        ctx->pc = 0x2DE840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE83Cu;
        // 0x2de840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE844u;
        goto label_2de844;
    }
    ctx->pc = 0x2DE83Cu;
    {
        const bool branch_taken_0x2de83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de83c) {
            ctx->pc = 0x2DE840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE83Cu;
            // 0x2de840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE860u;
            goto label_2de860;
        }
    }
    ctx->pc = 0x2DE844u;
label_2de844:
    // 0x2de844: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2de844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2de848:
    // 0x2de848: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2de848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2de84c:
    // 0x2de84c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2de84cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2de850:
    // 0x2de850: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2de850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2de854:
    // 0x2de854: 0x60f809  jalr        $v1
label_2de858:
    if (ctx->pc == 0x2DE858u) {
        ctx->pc = 0x2DE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE854u;
        // 0x2de858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE85Cu;
        goto label_2de85c;
    }
    ctx->pc = 0x2DE854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DE85Cu);
        ctx->pc = 0x2DE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE854u;
        // 0x2de858: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE854u, 0x2DE85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DE85Cu;
label_2de85c:
    // 0x2de85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2de860:
    // 0x2de860: 0x3e00008  jr          $ra
label_2de864:
    if (ctx->pc == 0x2DE864u) {
        ctx->pc = 0x2DE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE860u;
        // 0x2de864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DE868u;
        goto label_fallthrough_0x2de860;
    }
    ctx->pc = 0x2DE860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE860u;
        // 0x2de864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2de860:
    ctx->pc = 0x2DE868u;
}
