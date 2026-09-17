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

// Function: sub_00226608
// Address: 0x226608 - 0x226668
void sub_00226608_0x226608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226608_0x226608");
#endif

    switch (ctx->pc) {
        case 0x226630u: goto label_226630;
        case 0x226640u: goto label_226640;
        default: break;
    }

    ctx->pc = 0x226608u;

    // 0x226608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22660c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x226610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x226614: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x226614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x226618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22661c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22661cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x226624: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x226628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22662c: 0x0  nop
    ctx->pc = 0x22662cu;
    // NOP
label_226630:
    // 0x226630: 0x26100006  addiu       $s0, $s0, 0x6
    ctx->pc = 0x226630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x226634: 0x26447368  addiu       $a0, $s2, 0x7368
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 29544));
    // 0x226638: 0xc08976c  jal         func_225DB0
    ctx->pc = 0x226638u;
    SET_GPR_U32(ctx, 31, 0x226640u);
    ctx->pc = 0x22663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226638u;
    // 0x22663c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225DB0u, 0x226638u, 0x226640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226640u;
label_226640:
    // 0x226640: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x226640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x226644: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226644u;
    {
        const bool branch_taken_0x226644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226644u;
        // 0x226648: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226644) {
            ctx->pc = 0x226630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226630;
        }
    }
    ctx->pc = 0x22664Cu;
    // 0x22664c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22664cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x226650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x226654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226658: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x226658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22665c: 0x3e00008  jr          $ra
    ctx->pc = 0x22665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22665Cu;
        // 0x226660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22665Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226664u;
    // 0x226664: 0x0  nop
    ctx->pc = 0x226664u;
    // NOP
    ctx->pc = 0x226668u;
}
