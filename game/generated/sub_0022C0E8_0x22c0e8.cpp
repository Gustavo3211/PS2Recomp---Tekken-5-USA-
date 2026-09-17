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

// Function: sub_0022C0E8
// Address: 0x22c0e8 - 0x22c180
void sub_0022C0E8_0x22c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C0E8_0x22c0e8");
#endif

    switch (ctx->pc) {
        case 0x22c110u: goto label_22c110;
        case 0x22c128u: goto label_22c128;
        case 0x22c140u: goto label_22c140;
        case 0x22c158u: goto label_22c158;
        default: break;
    }

    ctx->pc = 0x22c0e8u;

    // 0x22c0e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c0ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22c0f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c0f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22c0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c0fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22c0fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c100: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22c104: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22c104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c108: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22c10c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22c10cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c110:
    // 0x22c110: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x22c110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22c114: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x22C114u;
    {
        const bool branch_taken_0x22c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c114) {
            ctx->pc = 0x22C118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C114u;
            // 0x22c118: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22C164u;
            goto label_22c164;
        }
    }
    ctx->pc = 0x22C11Cu;
    // 0x22c11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c120: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x22C120u;
    SET_GPR_U32(ctx, 31, 0x22C128u);
    ctx->pc = 0x22C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C120u;
    // 0x22c124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x22C120u, 0x22C128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C128u;
label_22c128:
    // 0x22c128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c12c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22c12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c130: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22C130u;
    {
        const bool branch_taken_0x22c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C130u;
        // 0x22c134: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c130) {
            ctx->pc = 0x22C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c110;
        }
    }
    ctx->pc = 0x22C138u;
    // 0x22c138: 0xc0b85da  jal         func_2E1768
    ctx->pc = 0x22C138u;
    SET_GPR_U32(ctx, 31, 0x22C140u);
    ctx->pc = 0x2E1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1768u, 0x22C138u, 0x22C140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C140u;
label_22c140:
    // 0x22c140: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x22c140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x22c144: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x22c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x22c148: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x22C148u;
    {
        const bool branch_taken_0x22c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C148u;
        // 0x22c14c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c148) {
            ctx->pc = 0x22C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c110;
        }
    }
    ctx->pc = 0x22C150u;
    // 0x22c150: 0xc0bf160  jal         func_2FC580
    ctx->pc = 0x22C150u;
    SET_GPR_U32(ctx, 31, 0x22C158u);
    ctx->pc = 0x2FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC580u, 0x22C150u, 0x22C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C158u;
label_22c158:
    // 0x22c158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22c158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c15c: 0x1240ffec  beqz        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22C15Cu;
    {
        const bool branch_taken_0x22c15c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C15Cu;
        // 0x22c160: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c15c) {
            ctx->pc = 0x22C110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c110;
        }
    }
    ctx->pc = 0x22C164u;
label_22c164:
    // 0x22c164: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c164u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c16c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22c16cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c170: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22c170u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22c174: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22c174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c178: 0x3e00008  jr          $ra
    ctx->pc = 0x22C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C178u;
        // 0x22c17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C180u;
}
