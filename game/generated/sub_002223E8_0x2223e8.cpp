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

// Function: sub_002223E8
// Address: 0x2223e8 - 0x222468
void sub_002223E8_0x2223e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002223E8_0x2223e8");
#endif

    switch (ctx->pc) {
        case 0x222428u: goto label_222428;
        case 0x222438u: goto label_222438;
        default: break;
    }

    ctx->pc = 0x2223e8u;

    // 0x2223e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2223e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2223ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2223ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2223f0: 0x24d00010  addiu       $s0, $a2, 0x10
    ctx->pc = 0x2223f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2223f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2223f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2223f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2223f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2223fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2223fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222400: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x222400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x222404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x222404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x222408: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x222408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22240c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22240cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x222410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x222414: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x222418: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22241c: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x22241Cu;
    {
        const bool branch_taken_0x22241c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x222420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22241Cu;
        // 0x222420: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22241c) {
            ctx->pc = 0x222448u;
            goto label_222448;
        }
    }
    ctx->pc = 0x222424u;
    // 0x222424: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x222424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222428:
    // 0x222428: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x222428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x22242c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22242cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222430: 0xc0888c2  jal         func_222308
    ctx->pc = 0x222430u;
    SET_GPR_U32(ctx, 31, 0x222438u);
    ctx->pc = 0x222434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222430u;
    // 0x222434: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222308u, 0x222430u, 0x222438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222438u;
label_222438:
    // 0x222438: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x222438u;
    {
        const bool branch_taken_0x222438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222438u;
        // 0x22243c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222438) {
            ctx->pc = 0x22244Cu;
            goto label_22244c;
        }
    }
    ctx->pc = 0x222440u;
    // 0x222440: 0x1611fff9  bne         $s0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x222440u;
    {
        const bool branch_taken_0x222440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x222444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222440u;
        // 0x222444: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222440) {
            ctx->pc = 0x222428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222428;
        }
    }
    ctx->pc = 0x222448u;
label_222448:
    // 0x222448: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x222448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22244c:
    // 0x22244c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22244cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222450: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x222454: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x222454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222458: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x222458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22245c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22245cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222460: 0x3e00008  jr          $ra
    ctx->pc = 0x222460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222460u;
        // 0x222464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222468u;
}
