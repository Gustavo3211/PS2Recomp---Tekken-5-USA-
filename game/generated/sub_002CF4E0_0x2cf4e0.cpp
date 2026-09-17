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

// Function: sub_002CF4E0
// Address: 0x2cf4e0 - 0x2cf590
void sub_002CF4E0_0x2cf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF4E0_0x2cf4e0");
#endif

    switch (ctx->pc) {
        case 0x2cf508u: goto label_2cf508;
        case 0x2cf510u: goto label_2cf510;
        case 0x2cf518u: goto label_2cf518;
        case 0x2cf530u: goto label_2cf530;
        case 0x2cf538u: goto label_2cf538;
        case 0x2cf564u: goto label_2cf564;
        default: break;
    }

    ctx->pc = 0x2cf4e0u;

    // 0x2cf4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf4e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cf4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf4ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf4f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf4f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf4f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cf4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cf4fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cf4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cf500: 0xc09d486  jal         func_275218
    ctx->pc = 0x2CF500u;
    SET_GPR_U32(ctx, 31, 0x2CF508u);
    ctx->pc = 0x2CF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF500u;
    // 0x2cf504: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x2CF500u, 0x2CF508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF508u;
label_2cf508:
    // 0x2cf508: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x2CF508u;
    SET_GPR_U32(ctx, 31, 0x2CF510u);
    ctx->pc = 0x2CF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF508u;
    // 0x2cf50c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x2CF508u, 0x2CF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF510u;
label_2cf510:
    // 0x2cf510: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x2CF510u;
    SET_GPR_U32(ctx, 31, 0x2CF518u);
    ctx->pc = 0x2CF514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF510u;
    // 0x2cf514: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x2CF510u, 0x2CF518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF518u;
label_2cf518:
    // 0x2cf518: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cf518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf51c: 0x5a400015  blezl       $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CF51Cu;
    {
        const bool branch_taken_0x2cf51c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x2cf51c) {
            ctx->pc = 0x2CF520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF51Cu;
            // 0x2cf520: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF574u;
            goto label_2cf574;
        }
    }
    ctx->pc = 0x2CF524u;
    // 0x2cf524: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x2cf524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cf528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf52c: 0x0  nop
    ctx->pc = 0x2cf52cu;
    // NOP
label_2cf530:
    // 0x2cf530: 0xc09d48e  jal         func_275238
    ctx->pc = 0x2CF530u;
    SET_GPR_U32(ctx, 31, 0x2CF538u);
    ctx->pc = 0x2CF534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF530u;
    // 0x2cf534: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275238u, 0x2CF530u, 0x2CF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF538u;
label_2cf538:
    // 0x2cf538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cf538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf53c: 0x9443003c  lhu         $v1, 0x3C($v0)
    ctx->pc = 0x2cf53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cf540: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf544: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x2cf544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2cf548: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2cf548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf54c: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x2cf54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x2cf550: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cf550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cf554: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CF554u;
    {
        const bool branch_taken_0x2cf554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF554u;
        // 0x2cf558: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf554) {
            ctx->pc = 0x2CF564u;
            goto label_2cf564;
        }
    }
    ctx->pc = 0x2CF55Cu;
    // 0x2cf55c: 0xc0b3d64  jal         func_2CF590
    ctx->pc = 0x2CF55Cu;
    SET_GPR_U32(ctx, 31, 0x2CF564u);
    ctx->pc = 0x2CF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF590u, 0x2CF55Cu, 0x2CF564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF564u;
label_2cf564:
    // 0x2cf564: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2cf564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2cf568: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CF568u;
    {
        const bool branch_taken_0x2cf568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF568u;
        // 0x2cf56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf568) {
            ctx->pc = 0x2CF530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf530;
        }
    }
    ctx->pc = 0x2CF570u;
    // 0x2cf570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf574:
    // 0x2cf574: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf578: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cf578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf57c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cf57cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cf580: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cf580u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf584: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cf584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cf588: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF588u;
        // 0x2cf58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF590u;
}
