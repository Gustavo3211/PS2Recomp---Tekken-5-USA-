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

// Function: sub_00504738
// Address: 0x504738 - 0x5048f8
void sub_00504738_0x504738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00504738_0x504738");
#endif

    switch (ctx->pc) {
        case 0x5047bcu: goto label_5047bc;
        case 0x5047c4u: goto label_5047c4;
        case 0x504820u: goto label_504820;
        case 0x504838u: goto label_504838;
        case 0x50484cu: goto label_50484c;
        case 0x5048a0u: goto label_5048a0;
        case 0x5048b8u: goto label_5048b8;
        case 0x5048ccu: goto label_5048cc;
        default: break;
    }

    ctx->pc = 0x504738u;

label_504738:
    // 0x504738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x504738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x50473c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x50473cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504740: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x504740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x504744: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x504744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x504748: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x504748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x50474c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x50474cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504750: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x504750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x504754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x504754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504758: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x504758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x50475c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x50475cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504760: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x504760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x504764: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x504764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504768: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x504768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x50476c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x50476cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x504770: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x504770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x504774: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x504774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x504778: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x504778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x50477c: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x50477cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x504780: 0x85020026  lh          $v0, 0x26($t0)
    ctx->pc = 0x504780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 38)));
    // 0x504784: 0x85070024  lh          $a3, 0x24($t0)
    ctx->pc = 0x504784u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x504788: 0x86060000  lh          $a2, 0x0($s0)
    ctx->pc = 0x504788u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50478c: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x50478cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x504790: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x504790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x504794: 0x70621018  mult1       $v0, $v1, $v0
    ctx->pc = 0x504794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x504798: 0x70c73018  mult1       $a2, $a2, $a3
    ctx->pc = 0x504798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x50479c: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x50479cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x5047a0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x5047a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x5047a4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x5047a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x5047a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5047a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5047ac: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x5047acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x5047b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x5047b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x5047b4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x5047B4u;
    SET_GPR_U32(ctx, 31, 0x5047BCu);
    ctx->pc = 0x5047B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5047B4u;
    // 0x5047b8: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x5047B4u, 0x5047BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5047BCu;
label_5047bc:
    // 0x5047bc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x5047BCu;
    SET_GPR_U32(ctx, 31, 0x5047C4u);
    ctx->pc = 0x5047C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5047BCu;
    // 0x5047c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x5047BCu, 0x5047C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5047C4u;
label_5047c4:
    // 0x5047c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x5047c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5047c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x5047c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5047cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x5047ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5047d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5047d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x5047d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x5047d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x5047d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x5047d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x5047dc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x5047dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5047e0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x5047e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x5047e4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x5047e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5047e8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x5047e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5047ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x5047ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5047f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5047F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5047F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5047F0u;
        // 0x5047f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5047F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5047F8u;
    // 0x5047f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5047f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5047fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5047fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504808: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50480c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x50480cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504810: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504818: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504818u;
    SET_GPR_U32(ctx, 31, 0x504820u);
    ctx->pc = 0x50481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504818u;
    // 0x50481c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504818u, 0x504820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504820u;
label_504820:
    // 0x504820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x504820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50482c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x50482cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504830: 0xc14116c  jal         func_5045B0
    ctx->pc = 0x504830u;
    SET_GPR_U32(ctx, 31, 0x504838u);
    ctx->pc = 0x504834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504830u;
    // 0x504834: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5045B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5045B0u, 0x504830u, 0x504838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x504838u;
label_504838:
    // 0x504838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x504838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50483c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504840: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504844: 0xc14119e  jal         func_504678
    ctx->pc = 0x504844u;
    SET_GPR_U32(ctx, 31, 0x50484Cu);
    ctx->pc = 0x504848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504844u;
    // 0x504848: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504678u, 0x504844u, 0x50484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50484Cu;
label_50484c:
    // 0x50484c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x50484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504850: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x504850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504854: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x504854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x504858: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x504858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50485c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50485cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x504860: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x504860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504864: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x504864u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x504868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x504868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50486c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x50486cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x504870: 0x81411ce  j           func_504738
    ctx->pc = 0x504870u;
    ctx->pc = 0x504874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504870u;
    // 0x504874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504738u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_504738;
    ctx->pc = 0x504878u;
    // 0x504878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x504878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50487c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x504880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x504880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x504884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x504884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x504888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50488c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x50488cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x504890: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x504890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x504894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x504894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x504898: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x504898u;
    SET_GPR_U32(ctx, 31, 0x5048A0u);
    ctx->pc = 0x50489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x504898u;
    // 0x50489c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x504898u, 0x5048A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5048A0u;
label_5048a0:
    // 0x5048a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x5048a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5048a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5048a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5048acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048b0: 0xc14116c  jal         func_5045B0
    ctx->pc = 0x5048B0u;
    SET_GPR_U32(ctx, 31, 0x5048B8u);
    ctx->pc = 0x5048B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5048B0u;
    // 0x5048b4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5045B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5045B0u, 0x5048B0u, 0x5048B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5048B8u;
label_5048b8:
    // 0x5048b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5048b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5048bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5048c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048c4: 0xc1411ce  jal         func_504738
    ctx->pc = 0x5048C4u;
    SET_GPR_U32(ctx, 31, 0x5048CCu);
    ctx->pc = 0x5048C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5048C4u;
    // 0x5048c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504738u;
    goto label_504738;
    ctx->pc = 0x5048CCu;
label_5048cc:
    // 0x5048cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5048ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x5048d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5048d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5048d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5048d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5048dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5048e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x5048e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5048e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5048e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5048e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5048e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5048ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5048ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5048f0: 0x814119e  j           func_504678
    ctx->pc = 0x5048F0u;
    ctx->pc = 0x5048F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5048F0u;
    // 0x5048f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504678u;
    sub_00504678_0x504678(rdram, ctx, runtime); return;
    ctx->pc = 0x5048F8u;
}
