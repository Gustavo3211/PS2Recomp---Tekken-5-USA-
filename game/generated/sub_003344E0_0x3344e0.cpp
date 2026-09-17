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

// Function: sub_003344E0
// Address: 0x3344e0 - 0x334570
void sub_003344E0_0x3344e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003344E0_0x3344e0");
#endif

    switch (ctx->pc) {
        case 0x33450cu: goto label_33450c;
        case 0x334518u: goto label_334518;
        case 0x334550u: goto label_334550;
        default: break;
    }

    ctx->pc = 0x3344e0u;

    // 0x3344e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3344e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3344e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3344e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3344e8: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3344e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3344ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3344ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3344f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3344f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3344f4: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x3344f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x3344f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3344f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3344fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3344fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x334500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334504: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x334504u;
    SET_GPR_U32(ctx, 31, 0x33450Cu);
    ctx->pc = 0x334508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334504u;
    // 0x334508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x334504u, 0x33450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33450Cu;
label_33450c:
    // 0x33450c: 0x8e030408  lw          $v1, 0x408($s0)
    ctx->pc = 0x33450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x334510: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x334510u;
    {
        const bool branch_taken_0x334510 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x334514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334510u;
        // 0x334514: 0x26100200  addiu       $s0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334510) {
            ctx->pc = 0x33453Cu;
            goto label_33453c;
        }
    }
    ctx->pc = 0x334518u;
label_334518:
    // 0x334518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x334518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33451c: 0x50520008  beql        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x33451Cu;
    {
        const bool branch_taken_0x33451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x33451c) {
            ctx->pc = 0x334520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33451Cu;
            // 0x334520: 0x2231826  xor         $v1, $s1, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334540u;
            goto label_334540;
        }
    }
    ctx->pc = 0x334524u;
    // 0x334524: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x334524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x334528: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x334528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x33452c: 0x0  nop
    ctx->pc = 0x33452cu;
    // NOP
    // 0x334530: 0x0  nop
    ctx->pc = 0x334530u;
    // NOP
    // 0x334534: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x334534u;
    {
        const bool branch_taken_0x334534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x334538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334534u;
        // 0x334538: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334534) {
            ctx->pc = 0x334518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334518;
        }
    }
    ctx->pc = 0x33453Cu;
label_33453c:
    // 0x33453c: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x33453cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
label_334540:
    // 0x334540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x334540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x334544: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x334544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x334548: 0xc043fee  jal         func_10FFB8
    ctx->pc = 0x334548u;
    SET_GPR_U32(ctx, 31, 0x334550u);
    ctx->pc = 0x33454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334548u;
    // 0x33454c: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x334548u, 0x334550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334550u;
label_334550:
    // 0x334550: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x334550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x334554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x334558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33455c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33455cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334560: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x334560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334564: 0x3e00008  jr          $ra
    ctx->pc = 0x334564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334564u;
        // 0x334568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33456Cu;
    // 0x33456c: 0x0  nop
    ctx->pc = 0x33456cu;
    // NOP
    ctx->pc = 0x334570u;
}
