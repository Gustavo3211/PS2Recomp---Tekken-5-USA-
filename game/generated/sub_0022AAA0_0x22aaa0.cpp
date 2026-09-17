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

// Function: sub_0022AAA0
// Address: 0x22aaa0 - 0x22ab08
void sub_0022AAA0_0x22aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AAA0_0x22aaa0");
#endif

    switch (ctx->pc) {
        case 0x22aac0u: goto label_22aac0;
        case 0x22aaf4u: goto label_22aaf4;
        default: break;
    }

    ctx->pc = 0x22aaa0u;

    // 0x22aaa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22aaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22aaa4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22aaa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22aaac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22aaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aab0: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22aab4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22aab8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AAB8u;
    SET_GPR_U32(ctx, 31, 0x22AAC0u);
    ctx->pc = 0x22AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAB8u;
    // 0x22aabc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AAB8u, 0x22AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAC0u;
label_22aac0:
    // 0x22aac0: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22aac4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22aac8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AAC8u;
    {
        const bool branch_taken_0x22aac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAC8u;
        // 0x22aacc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aac8) {
            ctx->pc = 0x22AAE0u;
            goto label_22aae0;
        }
    }
    ctx->pc = 0x22AAD0u;
    // 0x22aad0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22aad4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22aad8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AAD8u;
    {
        const bool branch_taken_0x22aad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22aad8) {
            ctx->pc = 0x22AAECu;
            goto label_22aaec;
        }
    }
    ctx->pc = 0x22AAE0u;
label_22aae0:
    // 0x22aae0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22aae4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22aae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aae8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22aaec:
    // 0x22aaec: 0xc0b82c6  jal         func_2E0B18
    ctx->pc = 0x22AAECu;
    SET_GPR_U32(ctx, 31, 0x22AAF4u);
    ctx->pc = 0x2E0B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B18u, 0x22AAECu, 0x22AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAF4u;
label_22aaf4:
    // 0x22aaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22aaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22aaf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22aaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22aafc: 0x3e00008  jr          $ra
    ctx->pc = 0x22AAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAFCu;
        // 0x22ab00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AB04u;
    // 0x22ab04: 0x0  nop
    ctx->pc = 0x22ab04u;
    // NOP
    ctx->pc = 0x22ab08u;
}
