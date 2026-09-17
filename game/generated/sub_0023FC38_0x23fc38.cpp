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

// Function: sub_0023FC38
// Address: 0x23fc38 - 0x23fc80
void sub_0023FC38_0x23fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FC38_0x23fc38");
#endif

    switch (ctx->pc) {
        case 0x23fc5cu: goto label_23fc5c;
        default: break;
    }

    ctx->pc = 0x23fc38u;

    // 0x23fc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fc3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fc40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23fc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23fc48: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x23fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23fc4c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x23FC4Cu;
    {
        const bool branch_taken_0x23fc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fc4c) {
            ctx->pc = 0x23FC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC4Cu;
            // 0x23fc50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC70u;
            goto label_23fc70;
        }
    }
    ctx->pc = 0x23FC54u;
    // 0x23fc54: 0xc08fc96  jal         func_23F258
    ctx->pc = 0x23FC54u;
    SET_GPR_U32(ctx, 31, 0x23FC5Cu);
    ctx->pc = 0x23F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F258u, 0x23FC54u, 0x23FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC5Cu;
label_23fc5c:
    // 0x23fc5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23fc5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23fc64: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23FC64u;
    {
        const bool branch_taken_0x23fc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23fc64) {
            ctx->pc = 0x23FC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FC64u;
            // 0x23fc68: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FC6Cu;
            goto label_23fc6c;
        }
    }
    ctx->pc = 0x23FC6Cu;
label_23fc6c:
    // 0x23fc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23fc70:
    // 0x23fc70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23fc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fc74: 0x3e00008  jr          $ra
    ctx->pc = 0x23FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FC74u;
        // 0x23fc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FC7Cu;
    // 0x23fc7c: 0x0  nop
    ctx->pc = 0x23fc7cu;
    // NOP
    ctx->pc = 0x23fc80u;
}
