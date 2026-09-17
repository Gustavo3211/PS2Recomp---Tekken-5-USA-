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

// Function: sub_002A4618
// Address: 0x2a4618 - 0x2a4688
void sub_002A4618_0x2a4618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4618_0x2a4618");
#endif

    switch (ctx->pc) {
        case 0x2a4648u: goto label_2a4648;
        case 0x2a465cu: goto label_2a465c;
        default: break;
    }

    ctx->pc = 0x2a4618u;

    // 0x2a4618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a461c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a461cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a4620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4624: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x2a4624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a4628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a462c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a4634: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2a4634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a4638: 0x45880b  movn        $s1, $v0, $a1
    ctx->pc = 0x2a4638u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2a463c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a463cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4640: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a4640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a4644: 0x0  nop
    ctx->pc = 0x2a4644u;
    // NOP
label_2a4648:
    // 0x2a4648: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x2a4648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a464c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A464Cu;
    {
        const bool branch_taken_0x2a464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a464c) {
            ctx->pc = 0x2A4650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A464Cu;
            // 0x2a4650: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A466Cu;
            goto label_2a466c;
        }
    }
    ctx->pc = 0x2A4654u;
    // 0x2a4654: 0xc07e660  jal         func_1F9980
    ctx->pc = 0x2A4654u;
    SET_GPR_U32(ctx, 31, 0x2A465Cu);
    ctx->pc = 0x2A4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4654u;
    // 0x2a4658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9980u, 0x2A4654u, 0x2A465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A465Cu;
label_2a465c:
    // 0x2a465c: 0x5451fffa  bnel        $v0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A465Cu;
    {
        const bool branch_taken_0x2a465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2a465c) {
            ctx->pc = 0x2A4660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A465Cu;
            // 0x2a4660: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4648;
        }
    }
    ctx->pc = 0x2A4664u;
    // 0x2a4664: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2a4664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4668: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a4668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a466c:
    // 0x2a466c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a466cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4674: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4678: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a4678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a467c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A467Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A467Cu;
        // 0x2a4680: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A467Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4684u;
    // 0x2a4684: 0x0  nop
    ctx->pc = 0x2a4684u;
    // NOP
    ctx->pc = 0x2a4688u;
}
