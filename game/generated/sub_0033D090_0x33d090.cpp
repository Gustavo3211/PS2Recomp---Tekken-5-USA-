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

// Function: sub_0033D090
// Address: 0x33d090 - 0x33d0e0
void sub_0033D090_0x33d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D090_0x33d090");
#endif

    switch (ctx->pc) {
        case 0x33d0acu: goto label_33d0ac;
        case 0x33d0c8u: goto label_33d0c8;
        default: break;
    }

    ctx->pc = 0x33d090u;

    // 0x33d090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d098: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d09c: 0x8f84ccd8  lw          $a0, -0x3328($gp)
    ctx->pc = 0x33d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294954200)));
    // 0x33d0a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d0a4: 0xc0cead0  jal         func_33AB40
    ctx->pc = 0x33D0A4u;
    SET_GPR_U32(ctx, 31, 0x33D0ACu);
    ctx->pc = 0x33D0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0A4u;
    // 0x33d0a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AB40u, 0x33D0A4u, 0x33D0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0ACu;
label_33d0ac:
    // 0x33d0ac: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33D0ACu;
    {
        const bool branch_taken_0x33d0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d0ac) {
            ctx->pc = 0x33D0B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D0ACu;
            // 0x33d0b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D0D0u;
            goto label_33d0d0;
        }
    }
    ctx->pc = 0x33D0B4u;
    // 0x33d0b4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x33d0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33d0b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x33d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33d0bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x33d0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33d0c0: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33D0C0u;
    SET_GPR_U32(ctx, 31, 0x33D0C8u);
    ctx->pc = 0x33D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D0C0u;
    // 0x33d0c4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33D0C0u, 0x33D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D0C8u;
label_33d0c8:
    // 0x33d0c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d0cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d0d0:
    // 0x33d0d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x33D0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D0D4u;
        // 0x33d0d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D0DCu;
    // 0x33d0dc: 0x0  nop
    ctx->pc = 0x33d0dcu;
    // NOP
    ctx->pc = 0x33d0e0u;
}
