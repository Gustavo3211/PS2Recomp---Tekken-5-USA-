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

// Function: sub_00340800
// Address: 0x340800 - 0x340860
void sub_00340800_0x340800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340800_0x340800");
#endif

    switch (ctx->pc) {
        case 0x340838u: goto label_340838;
        case 0x340844u: goto label_340844;
        default: break;
    }

    ctx->pc = 0x340800u;

    // 0x340800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x340808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34080c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x340814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x340818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x340818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34081c: 0x2451ffff  addiu       $s1, $v0, -0x1
    ctx->pc = 0x34081cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x340820: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x340820u;
    {
        const bool branch_taken_0x340820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x340824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340820u;
        // 0x340824: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340820) {
            ctx->pc = 0x340844u;
            goto label_340844;
        }
    }
    ctx->pc = 0x340828u;
    // 0x340828: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x340828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x34082c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34082cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340830: 0xc0dd946  jal         func_376518
    ctx->pc = 0x340830u;
    SET_GPR_U32(ctx, 31, 0x340838u);
    ctx->pc = 0x340834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340830u;
    // 0x340834: 0x24840880  addiu       $a0, $a0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376518u, 0x340830u, 0x340838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340838u;
label_340838:
    // 0x340838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x340838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34083c: 0xc0d0230  jal         func_3408C0
    ctx->pc = 0x34083Cu;
    SET_GPR_U32(ctx, 31, 0x340844u);
    ctx->pc = 0x340840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34083Cu;
    // 0x340840: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408C0u, 0x34083Cu, 0x340844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340844u;
label_340844:
    // 0x340844: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x340844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34084c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34084cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340854: 0x3e00008  jr          $ra
    ctx->pc = 0x340854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340854u;
        // 0x340858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34085Cu;
    // 0x34085c: 0x0  nop
    ctx->pc = 0x34085cu;
    // NOP
    ctx->pc = 0x340860u;
}
