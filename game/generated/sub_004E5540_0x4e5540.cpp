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

// Function: sub_004E5540
// Address: 0x4e5540 - 0x4e5710
void sub_004E5540_0x4e5540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5540_0x4e5540");
#endif

    switch (ctx->pc) {
        case 0x4e55e4u: goto label_4e55e4;
        case 0x4e5600u: goto label_4e5600;
        case 0x4e5628u: goto label_4e5628;
        case 0x4e5630u: goto label_4e5630;
        case 0x4e5650u: goto label_4e5650;
        case 0x4e5660u: goto label_4e5660;
        case 0x4e5674u: goto label_4e5674;
        case 0x4e567cu: goto label_4e567c;
        case 0x4e5684u: goto label_4e5684;
        case 0x4e568cu: goto label_4e568c;
        default: break;
    }

    ctx->pc = 0x4e5540u;

    // 0x4e5540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e5540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4e5544: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e5544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e5548: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4e5548u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4e554c: 0x269411c0  addiu       $s4, $s4, 0x11C0
    ctx->pc = 0x4e554cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4544));
    // 0x4e5550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e5550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e5554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e5554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e5558: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4e5558u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4e555c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e5560: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4e5560u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4e5564: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e5568: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4e5568u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4e556c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e556cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e5570: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4e5570u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5574: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e5574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e5578: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4e5578u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e557c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4e5580: 0x267311c4  addiu       $s3, $s3, 0x11C4
    ctx->pc = 0x4e5580u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4548));
    // 0x4e5584: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4e5584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11C0u, _value); } while (0);
    // 0x4e5588: 0x265211c8  addiu       $s2, $s2, 0x11C8
    ctx->pc = 0x4e5588u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4552));
    // 0x4e558c: 0x263111b8  addiu       $s1, $s1, 0x11B8
    ctx->pc = 0x4e558cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4536));
    // 0x4e5590: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4e5590u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4e5594: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4e5594u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F11C4u));
    // 0x4e5598: 0x261011bc  addiu       $s0, $s0, 0x11BC
    ctx->pc = 0x4e5598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4540));
    // 0x4e559c: 0x86c2015a  lh          $v0, 0x15A($s6)
    ctx->pc = 0x4e559cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 346)));
    // 0x4e55a0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11C8u));
    // 0x4e55a4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4e55a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4e55a8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e55a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e55ac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4e55acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4e55b0: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4e55b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4e55b4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4e55b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4e55b8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x4e55b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x4e55bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e55bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e55c0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e55c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e55c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e55c8: 0x86c20118  lh          $v0, 0x118($s6)
    ctx->pc = 0x4e55c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x4e55cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e55ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e55d0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e55d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e55d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e55d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e55d8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e55d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e55dc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E55DCu;
    SET_GPR_U32(ctx, 31, 0x4E55E4u);
    ctx->pc = 0x4E55E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E55DCu;
    // 0x4e55e0: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E55DCu, 0x4E55E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E55E4u;
label_4e55e4:
    // 0x4e55e4: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4e55e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e55e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e55e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e55ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e55f0: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e55f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e55f4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4e55f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e55f8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E55F8u;
    SET_GPR_U32(ctx, 31, 0x4E5600u);
    ctx->pc = 0x4E55FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E55F8u;
    // 0x4e55fc: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E55F8u, 0x4E5600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5600u;
label_4e5600:
    // 0x4e5600: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e5600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5604: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4e5604u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5608: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e5608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e560c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4e560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5610: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4e5610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e5614: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e5614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e5618: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e5618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4e561c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e561cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e5620: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E5620u;
    SET_GPR_U32(ctx, 31, 0x4E5628u);
    ctx->pc = 0x4E5624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5620u;
    // 0x4e5624: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E5620u, 0x4E5628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5628u;
label_4e5628:
    // 0x4e5628: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E5628u;
    SET_GPR_U32(ctx, 31, 0x4E5630u);
    ctx->pc = 0x4E562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5628u;
    // 0x4e562c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E5628u, 0x4E5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5630u;
label_4e5630:
    // 0x4e5630: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4e5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5634: 0x86c2011c  lh          $v0, 0x11C($s6)
    ctx->pc = 0x4e5634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
    // 0x4e5638: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e563c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4e5640: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5644: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e5644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4e5648: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E5648u;
    SET_GPR_U32(ctx, 31, 0x4E5650u);
    ctx->pc = 0x4E564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5648u;
    // 0x4e564c: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E5648u, 0x4E5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5650u;
label_4e5650:
    // 0x4e5650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e5650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5654: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e5654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4e5658: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E5658u;
    SET_GPR_U32(ctx, 31, 0x4E5660u);
    ctx->pc = 0x4E565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5658u;
    // 0x4e565c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E5658u, 0x4E5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5660u;
label_4e5660:
    // 0x4e5660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e5660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5664: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4e5664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5668: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e5668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e566c: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4E566Cu;
    SET_GPR_U32(ctx, 31, 0x4E5674u);
    ctx->pc = 0x4E5670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E566Cu;
    // 0x4e5670: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4E566Cu, 0x4E5674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5674u;
label_4e5674:
    // 0x4e5674: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E5674u;
    SET_GPR_U32(ctx, 31, 0x4E567Cu);
    ctx->pc = 0x4E5678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5674u;
    // 0x4e5678: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E5674u, 0x4E567Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E567Cu;
label_4e567c:
    // 0x4e567c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E567Cu;
    SET_GPR_U32(ctx, 31, 0x4E5684u);
    ctx->pc = 0x4E5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E567Cu;
    // 0x4e5680: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E567Cu, 0x4E5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5684u;
label_4e5684:
    // 0x4e5684: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E5684u;
    SET_GPR_U32(ctx, 31, 0x4E568Cu);
    ctx->pc = 0x4E5688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5684u;
    // 0x4e5688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E5684u, 0x4E568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E568Cu;
label_4e568c:
    // 0x4e568c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4e568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5690: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5694: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e5694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e5698: 0x248a000f  addiu       $t2, $a0, 0xF
    ctx->pc = 0x4e5698u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x4e569c: 0x28880000  slti        $t0, $a0, 0x0
    ctx->pc = 0x4e569cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e56a0: 0x2449000f  addiu       $t1, $v0, 0xF
    ctx->pc = 0x4e56a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x4e56a4: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x4e56a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e56a8: 0x2467000f  addiu       $a3, $v1, 0xF
    ctx->pc = 0x4e56a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x4e56ac: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x4e56acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4e56b0: 0x148200b  movn        $a0, $t2, $t0
    ctx->pc = 0x4e56b0u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x4e56b4: 0x126100b  movn        $v0, $t1, $a2
    ctx->pc = 0x4e56b4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 9));
    // 0x4e56b8: 0xe5180b  movn        $v1, $a3, $a1
    ctx->pc = 0x4e56b8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x4e56bc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x4e56bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x4e56c0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x4e56c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x4e56c4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x4e56c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x4e56c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e56cc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4e56ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4e56d0: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4e56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4e56d4: 0xaec40124  sw          $a0, 0x124($s6)
    ctx->pc = 0x4e56d4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 292), GPR_U32(ctx, 4));
    // 0x4e56d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e56d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e56dc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e56e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e56e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e56e4: 0xaec20128  sw          $v0, 0x128($s6)
    ctx->pc = 0x4e56e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 296), GPR_U32(ctx, 2));
    // 0x4e56e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e56e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e56ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4e56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4e56f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e56f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e56f4: 0xaec3012c  sw          $v1, 0x12C($s6)
    ctx->pc = 0x4e56f4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 300), GPR_U32(ctx, 3));
    // 0x4e56f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e56f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e56fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e56fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e5700: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e5700u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5704: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e5704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e5708: 0x3e00008  jr          $ra
    ctx->pc = 0x4E5708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5708u;
        // 0x4e570c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5710u;
}
