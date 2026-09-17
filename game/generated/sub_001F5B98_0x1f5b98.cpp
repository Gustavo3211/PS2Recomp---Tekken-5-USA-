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

// Function: sub_001F5B98
// Address: 0x1f5b98 - 0x1f5c10
void sub_001F5B98_0x1f5b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5B98_0x1f5b98");
#endif

    switch (ctx->pc) {
        case 0x1f5bc4u: goto label_1f5bc4;
        case 0x1f5bf4u: goto label_1f5bf4;
        case 0x1f5c00u: goto label_1f5c00;
        default: break;
    }

    ctx->pc = 0x1f5b98u;

    // 0x1f5b98: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x1f5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x1f5b9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f5ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f5ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5ba4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f5ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f5ba8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F5BA8u;
    {
        const bool branch_taken_0x1f5ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BA8u;
        // 0x1f5bac: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ba8) {
            ctx->pc = 0x1F5BE0u;
            goto label_1f5be0;
        }
    }
    ctx->pc = 0x1F5BB0u;
    // 0x1f5bb0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f5bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f5bb4: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1f5bb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f5bbc: 0xc09ed84  jal         func_27B610
    ctx->pc = 0x1F5BBCu;
    SET_GPR_U32(ctx, 31, 0x1F5BC4u);
    ctx->pc = 0x1F5BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BBCu;
    // 0x1f5bc0: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B610u, 0x1F5BBCu, 0x1F5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5BC4u;
label_1f5bc4:
    // 0x1f5bc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f5bc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5bcc: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x1f5bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5bd4: 0x809ed84  j           func_27B610
    ctx->pc = 0x1F5BD4u;
    ctx->pc = 0x1F5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BD4u;
    // 0x1f5bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B610u;
    sub_0027B610_0x27b610(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5BDCu;
    // 0x1f5bdc: 0x0  nop
    ctx->pc = 0x1f5bdcu;
    // NOP
label_1f5be0:
    // 0x1f5be0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1f5be0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1f5be4: 0x261088d0  addiu       $s0, $s0, -0x7730
    ctx->pc = 0x1f5be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    // 0x1f5be8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f5be8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1f5bec: 0xc09ed84  jal         func_27B610
    ctx->pc = 0x1F5BECu;
    SET_GPR_U32(ctx, 31, 0x1F5BF4u);
    ctx->pc = 0x1F5BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BECu;
    // 0x1f5bf0: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B610u, 0x1F5BECu, 0x1F5BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5BF4u;
label_1f5bf4:
    // 0x1f5bf4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f5bf8: 0xc09ed84  jal         func_27B610
    ctx->pc = 0x1F5BF8u;
    SET_GPR_U32(ctx, 31, 0x1F5C00u);
    ctx->pc = 0x1F5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BF8u;
    // 0x1f5bfc: 0x8c85005c  lw          $a1, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B610u, 0x1F5BF8u, 0x1F5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C00u;
label_1f5c00:
    // 0x1f5c00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5c04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f5c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C08u;
        // 0x1f5c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C10u;
}
