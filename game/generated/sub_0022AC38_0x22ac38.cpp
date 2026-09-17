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

// Function: sub_0022AC38
// Address: 0x22ac38 - 0x22aca0
void sub_0022AC38_0x22ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AC38_0x22ac38");
#endif

    switch (ctx->pc) {
        case 0x22ac58u: goto label_22ac58;
        case 0x22ac8cu: goto label_22ac8c;
        default: break;
    }

    ctx->pc = 0x22ac38u;

    // 0x22ac38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ac3c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22ac40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ac44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ac44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac48: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22ac4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ac50: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AC50u;
    SET_GPR_U32(ctx, 31, 0x22AC58u);
    ctx->pc = 0x22AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC50u;
    // 0x22ac54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AC50u, 0x22AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC58u;
label_22ac58:
    // 0x22ac58: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22ac58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22ac5c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22ac60: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AC60u;
    {
        const bool branch_taken_0x22ac60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC60u;
        // 0x22ac64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac60) {
            ctx->pc = 0x22AC78u;
            goto label_22ac78;
        }
    }
    ctx->pc = 0x22AC68u;
    // 0x22ac68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22ac68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ac6c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22ac70: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AC70u;
    {
        const bool branch_taken_0x22ac70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ac70) {
            ctx->pc = 0x22AC84u;
            goto label_22ac84;
        }
    }
    ctx->pc = 0x22AC78u;
label_22ac78:
    // 0x22ac78: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22ac7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ac7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac80: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22ac84:
    // 0x22ac84: 0xc0b8350  jal         func_2E0D40
    ctx->pc = 0x22AC84u;
    SET_GPR_U32(ctx, 31, 0x22AC8Cu);
    ctx->pc = 0x2E0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D40u, 0x22AC84u, 0x22AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC8Cu;
label_22ac8c:
    // 0x22ac8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ac8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ac90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22ac90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ac94: 0x3e00008  jr          $ra
    ctx->pc = 0x22AC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC94u;
        // 0x22ac98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AC9Cu;
    // 0x22ac9c: 0x0  nop
    ctx->pc = 0x22ac9cu;
    // NOP
    ctx->pc = 0x22aca0u;
}
