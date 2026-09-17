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

// Function: sub_004962F8
// Address: 0x4962f8 - 0x496368
void sub_004962F8_0x4962f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004962F8_0x4962f8");
#endif

    switch (ctx->pc) {
        case 0x496308u: goto label_496308;
        case 0x496320u: goto label_496320;
        default: break;
    }

    ctx->pc = 0x4962f8u;

    // 0x4962f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4962f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4962fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4962fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x496300: 0xc124620  jal         func_491880
    ctx->pc = 0x496300u;
    SET_GPR_U32(ctx, 31, 0x496308u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x496300u, 0x496308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x496308u;
label_496308:
    // 0x496308: 0x34039958  ori         $v1, $zero, 0x9958
    ctx->pc = 0x496308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39256);
    // 0x49630c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x496310: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x496310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x496314: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x496314u;
    {
        const bool branch_taken_0x496314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x496318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496314u;
        // 0x496318: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496314) {
            ctx->pc = 0x496344u;
            goto label_496344;
        }
    }
    ctx->pc = 0x49631Cu;
    // 0x49631c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_496320:
    // 0x496320: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x496320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x496324: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x496324u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x496328: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x496328u;
    {
        const bool branch_taken_0x496328 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x49632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496328u;
        // 0x49632c: 0x246301e2  addiu       $v1, $v1, 0x1E2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496328) {
            ctx->pc = 0x496344u;
            goto label_496344;
        }
    }
    ctx->pc = 0x496330u;
    // 0x496330: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x496330u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x496334: 0x0  nop
    ctx->pc = 0x496334u;
    // NOP
    // 0x496338: 0x0  nop
    ctx->pc = 0x496338u;
    // NOP
    // 0x49633c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x49633Cu;
    {
        const bool branch_taken_0x49633c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x496340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49633Cu;
        // 0x496340: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49633c) {
            ctx->pc = 0x496320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_496320;
        }
    }
    ctx->pc = 0x496344u;
label_496344:
    // 0x496344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x496344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x496348: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x496348u;
    {
        const bool branch_taken_0x496348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x49634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x496348u;
        // 0x49634c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x496348) {
            ctx->pc = 0x496358u;
            goto label_496358;
        }
    }
    ctx->pc = 0x496350u;
    // 0x496350: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x496350u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x496354: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x496354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_496358:
    // 0x496358: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x496358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49635c: 0x3e00008  jr          $ra
    ctx->pc = 0x49635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x496360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49635Cu;
        // 0x496360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49635Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x496364u;
    // 0x496364: 0x0  nop
    ctx->pc = 0x496364u;
    // NOP
    ctx->pc = 0x496368u;
}
