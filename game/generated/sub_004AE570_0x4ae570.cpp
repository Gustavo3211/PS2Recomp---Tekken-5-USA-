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

// Function: sub_004AE570
// Address: 0x4ae570 - 0x4ae740
void sub_004AE570_0x4ae570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE570_0x4ae570");
#endif

    switch (ctx->pc) {
        case 0x4ae5c0u: goto label_4ae5c0;
        case 0x4ae5e0u: goto label_4ae5e0;
        case 0x4ae680u: goto label_4ae680;
        case 0x4ae690u: goto label_4ae690;
        case 0x4ae6b0u: goto label_4ae6b0;
        default: break;
    }

    ctx->pc = 0x4ae570u;

    // 0x4ae570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ae570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ae574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ae574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ae578: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ae578u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ae57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ae57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ae580: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ae580u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ae584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ae584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ae588: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ae588u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ae58c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ae58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ae590: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4ae590u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4ae594: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ae594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ae598: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ae598u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ae59c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ae59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ae5a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4ae5a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae5a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ae5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ae5a8: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ae5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ae5ac: 0x26520cf4  addiu       $s2, $s2, 0xCF4
    ctx->pc = 0x4ae5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3316));
    // 0x4ae5b0: 0x26310cf0  addiu       $s1, $s1, 0xCF0
    ctx->pc = 0x4ae5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3312));
    // 0x4ae5b4: 0x860424a0  lh          $a0, 0x24A0($s0)
    ctx->pc = 0x4ae5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72FB20u));
    // 0x4ae5b8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4AE5B8u;
    SET_GPR_U32(ctx, 31, 0x4AE5C0u);
    ctx->pc = 0x4AE5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE5B8u;
    // 0x4ae5bc: 0x26940cfc  addiu       $s4, $s4, 0xCFC (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4AE5B8u, 0x4AE5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE5C0u;
label_4ae5c0:
    // 0x4ae5c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ae5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae5c4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4ae5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ae5c8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ae5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ae5cc: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4ae5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4ae5d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ae5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae5d4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ae5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ae5d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE5D8u;
    SET_GPR_U32(ctx, 31, 0x4AE5E0u);
    ctx->pc = 0x4AE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE5D8u;
    // 0x4ae5dc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE5D8u, 0x4AE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE5E0u;
label_4ae5e0:
    // 0x4ae5e0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ae5e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae5e4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4ae5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ae5e8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ae5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ae5ec: 0x24c60cec  addiu       $a2, $a2, 0xCEC
    ctx->pc = 0x4ae5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3308));
    // 0x4ae5f0: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4ae5f0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae5f4: 0xb32824  and         $a1, $a1, $s3
    ctx->pc = 0x4ae5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x4ae5f8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ae5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ae5fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4ae5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4ae600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ae600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae604: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4ae604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4ae608: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae60c: 0x86a2015a  lh          $v0, 0x15A($s5)
    ctx->pc = 0x4ae60cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 346)));
    // 0x4ae610: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4ae610u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ae614: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4ae614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4ae618: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ae618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ae61c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ae61cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ae620: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae624: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ae624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ae628: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ae628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ae62c: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4ae62cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4ae630: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4ae630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4ae634: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ae634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ae638: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ae638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ae63c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ae63cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ae640: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ae640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ae644: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4ae644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4ae648: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4ae648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4ae64c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ae64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ae650: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ae650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ae654: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4ae654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ae658: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4ae658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ae65c: 0x70e23818  mult1       $a3, $a3, $v0
    ctx->pc = 0x4ae65cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4ae660: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x4ae660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4ae664: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x4ae664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ae668: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4ae668u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4ae66c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x4ae66cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x4ae670: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4ae670u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4ae674: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4ae674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4ae678: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE678u;
    SET_GPR_U32(ctx, 31, 0x4AE680u);
    ctx->pc = 0x4AE67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE678u;
    // 0x4ae67c: 0xae850000  sw          $a1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE678u, 0x4AE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE680u;
label_4ae680:
    // 0x4ae680: 0x860424a2  lh          $a0, 0x24A2($s0)
    ctx->pc = 0x4ae680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 9378)));
    // 0x4ae684: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ae684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ae688: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4AE688u;
    SET_GPR_U32(ctx, 31, 0x4AE690u);
    ctx->pc = 0x4AE68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE688u;
    // 0x4ae68c: 0x26100d00  addiu       $s0, $s0, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4AE688u, 0x4AE690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE690u;
label_4ae690:
    // 0x4ae690: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ae690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae694: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4ae694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ae698: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ae698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ae69c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ae69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae6a0: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4ae6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4ae6a4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ae6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ae6a8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AE6A8u;
    SET_GPR_U32(ctx, 31, 0x4AE6B0u);
    ctx->pc = 0x4AE6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE6A8u;
    // 0x4ae6ac: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AE6A8u, 0x4AE6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE6B0u;
label_4ae6b0:
    // 0x4ae6b0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ae6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ae6b4: 0x24a50cf8  addiu       $a1, $a1, 0xCF8
    ctx->pc = 0x4ae6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3320));
    // 0x4ae6b8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ae6b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ae6bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ae6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CF8u));
    // 0x4ae6c0: 0x86470000  lh          $a3, 0x0($s2)
    ctx->pc = 0x4ae6c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ae6c4: 0x932024  and         $a0, $a0, $s3
    ctx->pc = 0x4ae6c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 19));
    // 0x4ae6c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ae6c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ae6cc: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ae6ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae6d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4ae6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4ae6d4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ae6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ae6d8: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x4ae6d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ae6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ae6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ae6e0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ae6e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ae6e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ae6e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ae6e8: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4ae6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4ae6ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ae6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae6f0: 0x24660007  addiu       $a2, $v1, 0x7
    ctx->pc = 0x4ae6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x4ae6f4: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ae6f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ae6f8: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x4ae6f8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4ae6fc: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x4ae6fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x4ae700: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ae700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ae704: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4ae704u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ae708: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x4ae708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x4ae70c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4ae70cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4ae710: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4ae710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4ae714: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ae714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ae718: 0xaea20124  sw          $v0, 0x124($s5)
    ctx->pc = 0x4ae718u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 292), GPR_U32(ctx, 2));
    // 0x4ae71c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4ae71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ae720: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ae720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae724: 0xaea30128  sw          $v1, 0x128($s5)
    ctx->pc = 0x4ae724u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 296), GPR_U32(ctx, 3));
    // 0x4ae728: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ae728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ae72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae730: 0xaea2012c  sw          $v0, 0x12C($s5)
    ctx->pc = 0x4ae730u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 300), GPR_U32(ctx, 2));
    // 0x4ae734: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ae734u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ae738: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE738u;
        // 0x4ae73c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE740u;
}
