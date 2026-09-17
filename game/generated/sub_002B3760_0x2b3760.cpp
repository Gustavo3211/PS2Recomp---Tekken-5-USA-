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

// Function: sub_002B3760
// Address: 0x2b3760 - 0x2b37b0
void sub_002B3760_0x2b3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3760_0x2b3760");
#endif

    switch (ctx->pc) {
        case 0x2b3770u: goto label_2b3770;
        case 0x2b37a0u: goto label_2b37a0;
        default: break;
    }

    ctx->pc = 0x2b3760u;

    // 0x2b3760: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x2b3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
    // 0x2b3764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b3764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3768: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3768u;
    {
        const bool branch_taken_0x2b3768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3768u;
        // 0x2b376c: 0xffbf0400  sd          $ra, 0x400($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3768) {
            ctx->pc = 0x2B377Cu;
            goto label_2b377c;
        }
    }
    ctx->pc = 0x2B3770u;
label_2b3770:
    // 0x2b3770: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2b3770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2b3774: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b3774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b3778: 0xa043ffff  sb          $v1, -0x1($v0)
    ctx->pc = 0x2b3778u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 3));
label_2b377c:
    // 0x2b377c: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2b377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b3780: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2b3780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3784: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B3784u;
    {
        const bool branch_taken_0x2b3784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3784) {
            ctx->pc = 0x2B3788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3784u;
            // 0x2b3788: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3770;
        }
    }
    ctx->pc = 0x2B378Cu;
    // 0x2b378c: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2b378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2b3790: 0x8f84cae0  lw          $a0, -0x3520($gp)
    ctx->pc = 0x2b3790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953696)));
    // 0x2b3794: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x2b3794u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3798: 0xc0adede  jal         func_2B7B78
    ctx->pc = 0x2B3798u;
    SET_GPR_U32(ctx, 31, 0x2B37A0u);
    ctx->pc = 0x2B379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3798u;
    // 0x2b379c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7B78u, 0x2B3798u, 0x2B37A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B37A0u;
label_2b37a0:
    // 0x2b37a0: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x2b37a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2b37a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B37A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B37A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37A4u;
        // 0x2b37a8: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B37A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B37ACu;
    // 0x2b37ac: 0x0  nop
    ctx->pc = 0x2b37acu;
    // NOP
    ctx->pc = 0x2b37b0u;
}
