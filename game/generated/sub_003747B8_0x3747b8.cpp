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

// Function: sub_003747B8
// Address: 0x3747b8 - 0x3748c0
void sub_003747B8_0x3747b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003747B8_0x3747b8");
#endif

    switch (ctx->pc) {
        case 0x3747b8u: goto label_3747b8;
        case 0x3747bcu: goto label_3747bc;
        case 0x3747c0u: goto label_3747c0;
        case 0x3747c4u: goto label_3747c4;
        case 0x3747c8u: goto label_3747c8;
        case 0x3747ccu: goto label_3747cc;
        case 0x3747d0u: goto label_3747d0;
        case 0x3747d4u: goto label_3747d4;
        case 0x3747d8u: goto label_3747d8;
        case 0x3747dcu: goto label_3747dc;
        case 0x3747e0u: goto label_3747e0;
        case 0x3747e4u: goto label_3747e4;
        case 0x3747e8u: goto label_3747e8;
        case 0x3747ecu: goto label_3747ec;
        case 0x3747f0u: goto label_3747f0;
        case 0x3747f4u: goto label_3747f4;
        case 0x3747f8u: goto label_3747f8;
        case 0x3747fcu: goto label_3747fc;
        case 0x374800u: goto label_374800;
        case 0x374804u: goto label_374804;
        case 0x374808u: goto label_374808;
        case 0x37480cu: goto label_37480c;
        case 0x374810u: goto label_374810;
        case 0x374814u: goto label_374814;
        case 0x374818u: goto label_374818;
        case 0x37481cu: goto label_37481c;
        case 0x374820u: goto label_374820;
        case 0x374824u: goto label_374824;
        case 0x374828u: goto label_374828;
        case 0x37482cu: goto label_37482c;
        case 0x374830u: goto label_374830;
        case 0x374834u: goto label_374834;
        case 0x374838u: goto label_374838;
        case 0x37483cu: goto label_37483c;
        case 0x374840u: goto label_374840;
        case 0x374844u: goto label_374844;
        case 0x374848u: goto label_374848;
        case 0x37484cu: goto label_37484c;
        case 0x374850u: goto label_374850;
        case 0x374854u: goto label_374854;
        case 0x374858u: goto label_374858;
        case 0x37485cu: goto label_37485c;
        case 0x374860u: goto label_374860;
        case 0x374864u: goto label_374864;
        case 0x374868u: goto label_374868;
        case 0x37486cu: goto label_37486c;
        case 0x374870u: goto label_374870;
        case 0x374874u: goto label_374874;
        case 0x374878u: goto label_374878;
        case 0x37487cu: goto label_37487c;
        case 0x374880u: goto label_374880;
        case 0x374884u: goto label_374884;
        case 0x374888u: goto label_374888;
        case 0x37488cu: goto label_37488c;
        case 0x374890u: goto label_374890;
        case 0x374894u: goto label_374894;
        case 0x374898u: goto label_374898;
        case 0x37489cu: goto label_37489c;
        case 0x3748a0u: goto label_3748a0;
        case 0x3748a4u: goto label_3748a4;
        case 0x3748a8u: goto label_3748a8;
        case 0x3748acu: goto label_3748ac;
        case 0x3748b0u: goto label_3748b0;
        case 0x3748b4u: goto label_3748b4;
        case 0x3748b8u: goto label_3748b8;
        case 0x3748bcu: goto label_3748bc;
        default: break;
    }

    ctx->pc = 0x3747b8u;

label_3747b8:
    // 0x3747b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3747b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3747bc:
    // 0x3747bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3747bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3747c0:
    // 0x3747c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3747c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3747c4:
    // 0x3747c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3747c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3747c8:
    // 0x3747c8: 0x24421be0  addiu       $v0, $v0, 0x1BE0
    ctx->pc = 0x3747c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7136));
label_3747cc:
    // 0x3747cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3747ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3747d0:
    // 0x3747d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3747d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3747d4:
    // 0x3747d4: 0x26040098  addiu       $a0, $s0, 0x98
    ctx->pc = 0x3747d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_3747d8:
    // 0x3747d8: 0xae0200ec  sw          $v0, 0xEC($s0)
    ctx->pc = 0x3747d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
label_3747dc:
    // 0x3747dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3747dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3747e0:
    // 0x3747e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3747e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3747e4:
    // 0x3747e4: 0xc0cec5c  jal         func_33B170
label_3747e8:
    if (ctx->pc == 0x3747E8u) {
        ctx->pc = 0x3747E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747E4u;
        // 0x3747e8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3747ECu;
        goto label_3747ec;
    }
    ctx->pc = 0x3747E4u;
    SET_GPR_U32(ctx, 31, 0x3747ECu);
    ctx->pc = 0x3747E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747E4u;
    // 0x3747e8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x3747E4u, 0x3747ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747ECu;
label_3747ec:
    // 0x3747ec: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x3747ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
label_3747f0:
    // 0x3747f0: 0xc0cec5c  jal         func_33B170
label_3747f4:
    if (ctx->pc == 0x3747F4u) {
        ctx->pc = 0x3747F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747F0u;
        // 0x3747f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3747F8u;
        goto label_3747f8;
    }
    ctx->pc = 0x3747F0u;
    SET_GPR_U32(ctx, 31, 0x3747F8u);
    ctx->pc = 0x3747F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747F0u;
    // 0x3747f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x3747F0u, 0x3747F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3747F8u;
label_3747f8:
    // 0x3747f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3747f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3747fc:
    // 0x3747fc: 0xc0cec5c  jal         func_33B170
label_374800:
    if (ctx->pc == 0x374800u) {
        ctx->pc = 0x374800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747FCu;
        // 0x374800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374804u;
        goto label_374804;
    }
    ctx->pc = 0x3747FCu;
    SET_GPR_U32(ctx, 31, 0x374804u);
    ctx->pc = 0x374800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3747FCu;
    // 0x374800: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x3747FCu, 0x374804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374804u;
label_374804:
    // 0x374804: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_374808:
    if (ctx->pc == 0x374808u) {
        ctx->pc = 0x374808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374804u;
        // 0x374808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37480Cu;
        goto label_37480c;
    }
    ctx->pc = 0x374804u;
    {
        const bool branch_taken_0x374804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x374808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374804u;
        // 0x374808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374804) {
            ctx->pc = 0x374820u;
            goto label_374820;
        }
    }
    ctx->pc = 0x37480Cu;
label_37480c:
    // 0x37480c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37480cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374810:
    // 0x374810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_374814:
    // 0x374814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_374818:
    // 0x374818: 0x8049a7a  j           func_1269E8
label_37481c:
    if (ctx->pc == 0x37481Cu) {
        ctx->pc = 0x37481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374818u;
        // 0x37481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374820u;
        goto label_374820;
    }
    ctx->pc = 0x374818u;
    ctx->pc = 0x37481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374818u;
    // 0x37481c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x374820u;
label_374820:
    // 0x374820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374824:
    // 0x374824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_374828:
    // 0x374828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37482c:
    // 0x37482c: 0x3e00008  jr          $ra
label_374830:
    if (ctx->pc == 0x374830u) {
        ctx->pc = 0x374830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37482Cu;
        // 0x374830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374834u;
        goto label_374834;
    }
    ctx->pc = 0x37482Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37482Cu;
        // 0x374830: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37482Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374834u;
label_374834:
    // 0x374834: 0x0  nop
    ctx->pc = 0x374834u;
    // NOP
label_374838:
    // 0x374838: 0x3e00008  jr          $ra
label_37483c:
    if (ctx->pc == 0x37483Cu) {
        ctx->pc = 0x374840u;
        goto label_374840;
    }
    ctx->pc = 0x374838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374840u;
label_374840:
    // 0x374840: 0x3e00008  jr          $ra
label_374844:
    if (ctx->pc == 0x374844u) {
        ctx->pc = 0x374848u;
        goto label_374848;
    }
    ctx->pc = 0x374840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374848u;
label_374848:
    // 0x374848: 0x3e00008  jr          $ra
label_37484c:
    if (ctx->pc == 0x37484Cu) {
        ctx->pc = 0x374850u;
        goto label_374850;
    }
    ctx->pc = 0x374848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374850u;
label_374850:
    // 0x374850: 0x3e00008  jr          $ra
label_374854:
    if (ctx->pc == 0x374854u) {
        ctx->pc = 0x374854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374850u;
        // 0x374854: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374858u;
        goto label_374858;
    }
    ctx->pc = 0x374850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374850u;
        // 0x374854: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374858u;
label_374858:
    // 0x374858: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x374858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_37485c:
    // 0x37485c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37485cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_374860:
    // 0x374860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_374864:
    // 0x374864: 0xc0c8388  jal         func_320E20
label_374868:
    if (ctx->pc == 0x374868u) {
        ctx->pc = 0x374868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374864u;
        // 0x374868: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37486Cu;
        goto label_37486c;
    }
    ctx->pc = 0x374864u;
    SET_GPR_U32(ctx, 31, 0x37486Cu);
    ctx->pc = 0x374868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374864u;
    // 0x374868: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E20u, 0x374864u, 0x37486Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37486Cu;
label_37486c:
    // 0x37486c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37486cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374870:
    // 0x374870: 0x3e00008  jr          $ra
label_374874:
    if (ctx->pc == 0x374874u) {
        ctx->pc = 0x374874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374870u;
        // 0x374874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x374878u;
        goto label_374878;
    }
    ctx->pc = 0x374870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374870u;
        // 0x374874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374878u;
label_374878:
    // 0x374878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37487c:
    // 0x37487c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x37487cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_374880:
    // 0x374880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_374884:
    // 0x374884: 0x2484d6c0  addiu       $a0, $a0, -0x2940
    ctx->pc = 0x374884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
label_374888:
    // 0x374888: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37488c:
    // 0x37488c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x37488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_374890:
    // 0x374890: 0x24420098  addiu       $v0, $v0, 0x98
    ctx->pc = 0x374890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
label_374894:
    // 0x374894: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x374894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_374898:
    // 0x374898: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x374898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_37489c:
    // 0x37489c: 0xc0f809  jalr        $a2
label_3748a0:
    if (ctx->pc == 0x3748A0u) {
        ctx->pc = 0x3748A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37489Cu;
        // 0x3748a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3748A4u;
        goto label_3748a4;
    }
    ctx->pc = 0x37489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3748A4u);
        ctx->pc = 0x3748A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37489Cu;
        // 0x3748a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37489Cu, 0x3748A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3748A4u;
label_3748a4:
    // 0x3748a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3748a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3748a8:
    // 0x3748a8: 0x3e00008  jr          $ra
label_3748ac:
    if (ctx->pc == 0x3748ACu) {
        ctx->pc = 0x3748ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748A8u;
        // 0x3748ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3748B0u;
        goto label_3748b0;
    }
    ctx->pc = 0x3748A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748A8u;
        // 0x3748ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748B0u;
label_3748b0:
    // 0x3748b0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3748b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_3748b4:
    // 0x3748b4: 0x3e00008  jr          $ra
label_3748b8:
    if (ctx->pc == 0x3748B8u) {
        ctx->pc = 0x3748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748B4u;
        // 0x3748b8: 0x2442d6c0  addiu       $v0, $v0, -0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3748BCu;
        goto label_3748bc;
    }
    ctx->pc = 0x3748B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748B4u;
        // 0x3748b8: 0x2442d6c0  addiu       $v0, $v0, -0x2940 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748BCu;
label_3748bc:
    // 0x3748bc: 0x0  nop
    ctx->pc = 0x3748bcu;
    // NOP
    ctx->pc = 0x3748c0u;
}
