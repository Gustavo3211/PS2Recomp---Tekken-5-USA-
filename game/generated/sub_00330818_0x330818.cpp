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

// Function: sub_00330818
// Address: 0x330818 - 0x330880
void sub_00330818_0x330818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330818_0x330818");
#endif

    switch (ctx->pc) {
        case 0x330844u: goto label_330844;
        default: break;
    }

    ctx->pc = 0x330818u;

    // 0x330818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33081c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33081cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x330820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330824: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x330824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330828: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x330828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x33082c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330830: 0x24a54e70  addiu       $a1, $a1, 0x4E70
    ctx->pc = 0x330830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20080));
    // 0x330834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33083c: 0xc04a100  jal         func_128400
    ctx->pc = 0x33083Cu;
    SET_GPR_U32(ctx, 31, 0x330844u);
    ctx->pc = 0x330840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33083Cu;
    // 0x330840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128400u, 0x33083Cu, 0x330844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330844u;
label_330844:
    // 0x330844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330844u;
    {
        const bool branch_taken_0x330844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330844u;
        // 0x330848: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330844) {
            ctx->pc = 0x330858u;
            goto label_330858;
        }
    }
    ctx->pc = 0x33084Cu;
    // 0x33084c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33084Cu;
    {
        const bool branch_taken_0x33084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33084Cu;
        // 0x330850: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33084c) {
            ctx->pc = 0x330860u;
            goto label_330860;
        }
    }
    ctx->pc = 0x330854u;
    // 0x330854: 0x0  nop
    ctx->pc = 0x330854u;
    // NOP
label_330858:
    // 0x330858: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x330858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x33085c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33085cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_330860:
    // 0x330860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330864: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33086c: 0x3e00008  jr          $ra
    ctx->pc = 0x33086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33086Cu;
        // 0x330870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330874u;
    // 0x330874: 0x0  nop
    ctx->pc = 0x330874u;
    // NOP
    // 0x330878: 0x3e00008  jr          $ra
    ctx->pc = 0x330878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330878u;
        // 0x33087c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330880u;
}
