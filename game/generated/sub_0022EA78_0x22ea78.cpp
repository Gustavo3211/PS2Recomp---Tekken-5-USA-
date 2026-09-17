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

// Function: sub_0022EA78
// Address: 0x22ea78 - 0x22eac0
void sub_0022EA78_0x22ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EA78_0x22ea78");
#endif

    switch (ctx->pc) {
        case 0x22eaa8u: goto label_22eaa8;
        default: break;
    }

    ctx->pc = 0x22ea78u;

    // 0x22ea78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ea7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ea7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ea80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22ea80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ea84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ea88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22ea8c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EA8Cu;
    {
        const bool branch_taken_0x22ea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea8c) {
            ctx->pc = 0x22EA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EA8Cu;
            // 0x22ea90: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22EA94u;
    // 0x22ea94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22ea94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22ea98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EA98u;
    {
        const bool branch_taken_0x22ea98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ea98) {
            ctx->pc = 0x22EA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22EA98u;
            // 0x22ea9c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EAACu;
            goto label_22eaac;
        }
    }
    ctx->pc = 0x22EAA0u;
    // 0x22eaa0: 0xc0c82d8  jal         func_320B60
    ctx->pc = 0x22EAA0u;
    SET_GPR_U32(ctx, 31, 0x22EAA8u);
    ctx->pc = 0x22EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EAA0u;
    // 0x22eaa4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B60u, 0x22EAA0u, 0x22EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EAA8u;
label_22eaa8:
    // 0x22eaa8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x22eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_22eaac:
    // 0x22eaac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x22eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x22eab0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22eab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22eab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22eab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eab8: 0x3e00008  jr          $ra
    ctx->pc = 0x22EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EAB8u;
        // 0x22eabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EAC0u;
}
