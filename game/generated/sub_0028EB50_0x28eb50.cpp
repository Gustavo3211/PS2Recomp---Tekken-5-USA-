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

// Function: sub_0028EB50
// Address: 0x28eb50 - 0x28eba8
void sub_0028EB50_0x28eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EB50_0x28eb50");
#endif

    switch (ctx->pc) {
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eb94u: goto label_28eb94;
        default: break;
    }

    ctx->pc = 0x28eb50u;

    // 0x28eb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28eb54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28eb58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28eb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28eb60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28eb64: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EB64u;
    SET_GPR_U32(ctx, 31, 0x28EB6Cu);
    ctx->pc = 0x28EB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB64u;
    // 0x28eb68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EB64u, 0x28EB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB6Cu;
label_28eb6c:
    // 0x28eb6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb70: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28EB70u;
    {
        const bool branch_taken_0x28eb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB70u;
        // 0x28eb74: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb70) {
            ctx->pc = 0x28EB94u;
            goto label_28eb94;
        }
    }
    ctx->pc = 0x28EB78u;
    // 0x28eb78: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x28eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x28eb7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28eb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28eb80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EB80u;
    {
        const bool branch_taken_0x28eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb80) {
            ctx->pc = 0x28EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EB80u;
            // 0x28eb84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EB98u;
            goto label_28eb98;
        }
    }
    ctx->pc = 0x28EB88u;
    // 0x28eb88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28eb88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb8c: 0xc0a2d68  jal         func_28B5A0
    ctx->pc = 0x28EB8Cu;
    SET_GPR_U32(ctx, 31, 0x28EB94u);
    ctx->pc = 0x28EB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EB8Cu;
    // 0x28eb90: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B5A0u, 0x28EB8Cu, 0x28EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB94u;
label_28eb94:
    // 0x28eb94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28eb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eb98:
    // 0x28eb98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28eb98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28eb9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28eba0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBA0u;
        // 0x28eba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EBA8u;
}
