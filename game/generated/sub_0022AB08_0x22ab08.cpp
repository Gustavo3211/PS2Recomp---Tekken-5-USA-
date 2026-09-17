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

// Function: sub_0022AB08
// Address: 0x22ab08 - 0x22ab70
void sub_0022AB08_0x22ab08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AB08_0x22ab08");
#endif

    switch (ctx->pc) {
        case 0x22ab28u: goto label_22ab28;
        case 0x22ab5cu: goto label_22ab5c;
        default: break;
    }

    ctx->pc = 0x22ab08u;

    // 0x22ab08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ab08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ab0c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x22ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x22ab10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ab14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22ab14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab18: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x22ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x22ab1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ab20: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x22AB20u;
    SET_GPR_U32(ctx, 31, 0x22AB28u);
    ctx->pc = 0x22AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB20u;
    // 0x22ab24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x22AB20u, 0x22AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB28u;
label_22ab28:
    // 0x22ab28: 0x24460068  addiu       $a2, $v0, 0x68
    ctx->pc = 0x22ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x22ab2c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x22ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22ab30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AB30u;
    {
        const bool branch_taken_0x22ab30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB30u;
        // 0x22ab34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab30) {
            ctx->pc = 0x22AB48u;
            goto label_22ab48;
        }
    }
    ctx->pc = 0x22AB38u;
    // 0x22ab38: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x22ab3c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22ab40: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AB40u;
    {
        const bool branch_taken_0x22ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ab40) {
            ctx->pc = 0x22AB54u;
            goto label_22ab54;
        }
    }
    ctx->pc = 0x22AB48u;
label_22ab48:
    // 0x22ab48: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22ab4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22ab4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab50: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x22ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_22ab54:
    // 0x22ab54: 0xc0b82e2  jal         func_2E0B88
    ctx->pc = 0x22AB54u;
    SET_GPR_U32(ctx, 31, 0x22AB5Cu);
    ctx->pc = 0x2E0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0B88u, 0x22AB54u, 0x22AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB5Cu;
label_22ab5c:
    // 0x22ab5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ab5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ab60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22ab60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ab64: 0x3e00008  jr          $ra
    ctx->pc = 0x22AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB64u;
        // 0x22ab68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AB6Cu;
    // 0x22ab6c: 0x0  nop
    ctx->pc = 0x22ab6cu;
    // NOP
    ctx->pc = 0x22ab70u;
}
