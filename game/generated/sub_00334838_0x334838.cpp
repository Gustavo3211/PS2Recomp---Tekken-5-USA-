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

// Function: sub_00334838
// Address: 0x334838 - 0x3348e8
void sub_00334838_0x334838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334838_0x334838");
#endif

    switch (ctx->pc) {
        case 0x334838u: goto label_334838;
        case 0x33483cu: goto label_33483c;
        case 0x334840u: goto label_334840;
        case 0x334844u: goto label_334844;
        case 0x334848u: goto label_334848;
        case 0x33484cu: goto label_33484c;
        case 0x334850u: goto label_334850;
        case 0x334854u: goto label_334854;
        case 0x334858u: goto label_334858;
        case 0x33485cu: goto label_33485c;
        case 0x334860u: goto label_334860;
        case 0x334864u: goto label_334864;
        case 0x334868u: goto label_334868;
        case 0x33486cu: goto label_33486c;
        case 0x334870u: goto label_334870;
        case 0x334874u: goto label_334874;
        case 0x334878u: goto label_334878;
        case 0x33487cu: goto label_33487c;
        case 0x334880u: goto label_334880;
        case 0x334884u: goto label_334884;
        case 0x334888u: goto label_334888;
        case 0x33488cu: goto label_33488c;
        case 0x334890u: goto label_334890;
        case 0x334894u: goto label_334894;
        case 0x334898u: goto label_334898;
        case 0x33489cu: goto label_33489c;
        case 0x3348a0u: goto label_3348a0;
        case 0x3348a4u: goto label_3348a4;
        case 0x3348a8u: goto label_3348a8;
        case 0x3348acu: goto label_3348ac;
        case 0x3348b0u: goto label_3348b0;
        case 0x3348b4u: goto label_3348b4;
        case 0x3348b8u: goto label_3348b8;
        case 0x3348bcu: goto label_3348bc;
        case 0x3348c0u: goto label_3348c0;
        case 0x3348c4u: goto label_3348c4;
        case 0x3348c8u: goto label_3348c8;
        case 0x3348ccu: goto label_3348cc;
        case 0x3348d0u: goto label_3348d0;
        case 0x3348d4u: goto label_3348d4;
        case 0x3348d8u: goto label_3348d8;
        case 0x3348dcu: goto label_3348dc;
        case 0x3348e0u: goto label_3348e0;
        case 0x3348e4u: goto label_3348e4;
        default: break;
    }

    ctx->pc = 0x334838u;

label_334838:
    // 0x334838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33483c:
    // 0x33483c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_334840:
    // 0x334840: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_334844:
    // 0x334844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x334844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_334848:
    // 0x334848: 0x8c820408  lw          $v0, 0x408($a0)
    ctx->pc = 0x334848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1032)));
label_33484c:
    // 0x33484c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_334850:
    if (ctx->pc == 0x334850u) {
        ctx->pc = 0x334850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33484Cu;
        // 0x334850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334854u;
        goto label_334854;
    }
    ctx->pc = 0x33484Cu;
    {
        const bool branch_taken_0x33484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33484Cu;
        // 0x334850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33484c) {
            ctx->pc = 0x3348D8u;
            goto label_3348d8;
        }
    }
    ctx->pc = 0x334854u;
label_334854:
    // 0x334854: 0x8c820408  lw          $v0, 0x408($a0)
    ctx->pc = 0x334854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1032)));
label_334858:
    // 0x334858: 0x24830200  addiu       $v1, $a0, 0x200
    ctx->pc = 0x334858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
label_33485c:
    // 0x33485c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x33485cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_334860:
    // 0x334860: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x334860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_334864:
    // 0x334864: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x334864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_334868:
    // 0x334868: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x334868u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_33486c:
    // 0x33486c: 0xac820408  sw          $v0, 0x408($a0)
    ctx->pc = 0x33486cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1032), GPR_U32(ctx, 2));
label_334870:
    // 0x334870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_334874:
    // 0x334874: 0x24830210  addiu       $v1, $a0, 0x210
    ctx->pc = 0x334874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 528));
label_334878:
    // 0x334878: 0x8c820408  lw          $v0, 0x408($a0)
    ctx->pc = 0x334878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1032)));
label_33487c:
    // 0x33487c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_334880:
    if (ctx->pc == 0x334880u) {
        ctx->pc = 0x334880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33487Cu;
        // 0x334880: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334884u;
        goto label_334884;
    }
    ctx->pc = 0x33487Cu;
    {
        const bool branch_taken_0x33487c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x334880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33487Cu;
        // 0x334880: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33487c) {
            ctx->pc = 0x3348ACu;
            goto label_3348ac;
        }
    }
    ctx->pc = 0x334884u;
label_334884:
    // 0x334884: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x334884u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_334888:
    // 0x334888: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x334888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33488c:
    // 0x33488c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x33488cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_334890:
    // 0x334890: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x334890u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_334894:
    // 0x334894: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x334894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_334898:
    // 0x334898: 0x8c820408  lw          $v0, 0x408($a0)
    ctx->pc = 0x334898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1032)));
label_33489c:
    // 0x33489c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x33489cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3348a0:
    // 0x3348a0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_3348a4:
    if (ctx->pc == 0x3348A4u) {
        ctx->pc = 0x3348A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348A0u;
        // 0x3348a4: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348A8u;
        goto label_3348a8;
    }
    ctx->pc = 0x3348A0u;
    {
        const bool branch_taken_0x3348a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3348a0) {
            ctx->pc = 0x3348A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3348A0u;
            // 0x3348a4: 0x78620000  lq          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x334888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334888;
        }
    }
    ctx->pc = 0x3348A8u;
label_3348a8:
    // 0x3348a8: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x3348a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3348ac:
    // 0x3348ac: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3348acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_3348b0:
    // 0x3348b0: 0x8c820408  lw          $v0, 0x408($a0)
    ctx->pc = 0x3348b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1032)));
label_3348b4:
    // 0x3348b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3348b8:
    if (ctx->pc == 0x3348B8u) {
        ctx->pc = 0x3348BCu;
        goto label_3348bc;
    }
    ctx->pc = 0x3348B4u;
    {
        const bool branch_taken_0x3348b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3348b4) {
            ctx->pc = 0x3348C4u;
            goto label_3348c4;
        }
    }
    ctx->pc = 0x3348BCu;
label_3348bc:
    // 0x3348bc: 0xc0cd278  jal         func_3349E0
label_3348c0:
    if (ctx->pc == 0x3348C0u) {
        ctx->pc = 0x3348C4u;
        goto label_3348c4;
    }
    ctx->pc = 0x3348BCu;
    SET_GPR_U32(ctx, 31, 0x3348C4u);
    ctx->pc = 0x3349E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3349E0u, 0x3348BCu, 0x3348C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3348C4u;
label_3348c4:
    // 0x3348c4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_3348c8:
    if (ctx->pc == 0x3348C8u) {
        ctx->pc = 0x3348C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348C4u;
        // 0x3348c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348CCu;
        goto label_3348cc;
    }
    ctx->pc = 0x3348C4u;
    {
        const bool branch_taken_0x3348c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3348c4) {
            ctx->pc = 0x3348C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3348C4u;
            // 0x3348c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3348D8u;
            goto label_3348d8;
        }
    }
    ctx->pc = 0x3348CCu;
label_3348cc:
    // 0x3348cc: 0x200f809  jalr        $s0
label_3348d0:
    if (ctx->pc == 0x3348D0u) {
        ctx->pc = 0x3348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348CCu;
        // 0x3348d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348D4u;
        goto label_3348d4;
    }
    ctx->pc = 0x3348CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x3348D4u);
        ctx->pc = 0x3348D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348CCu;
        // 0x3348d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3348CCu, 0x3348D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3348D4u;
label_3348d4:
    // 0x3348d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3348d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3348d8:
    // 0x3348d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3348d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3348dc:
    // 0x3348dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3348dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3348e0:
    // 0x3348e0: 0x3e00008  jr          $ra
label_3348e4:
    if (ctx->pc == 0x3348E4u) {
        ctx->pc = 0x3348E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348E0u;
        // 0x3348e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3348E8u;
        goto label_fallthrough_0x3348e0;
    }
    ctx->pc = 0x3348E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3348E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348E0u;
        // 0x3348e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3348E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3348e0:
    ctx->pc = 0x3348E8u;
}
