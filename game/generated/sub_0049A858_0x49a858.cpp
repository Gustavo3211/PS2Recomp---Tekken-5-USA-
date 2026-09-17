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

// Function: sub_0049A858
// Address: 0x49a858 - 0x49ad90
void sub_0049A858_0x49a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A858_0x49a858");
#endif

    switch (ctx->pc) {
        case 0x49a88cu: goto label_49a88c;
        case 0x49a89cu: goto label_49a89c;
        case 0x49a8a4u: goto label_49a8a4;
        case 0x49a8b4u: goto label_49a8b4;
        case 0x49a8bcu: goto label_49a8bc;
        case 0x49a900u: goto label_49a900;
        case 0x49a918u: goto label_49a918;
        case 0x49a9c8u: goto label_49a9c8;
        case 0x49ad3cu: goto label_49ad3c;
        case 0x49ad44u: goto label_49ad44;
        case 0x49ad4cu: goto label_49ad4c;
        case 0x49ad58u: goto label_49ad58;
        default: break;
    }

    ctx->pc = 0x49a858u;

    // 0x49a858: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x49a85c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49a860: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49a864: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x49a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49a868: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49a86c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x49a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x49a870: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x49a870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x49a874: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x49a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x49a878: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x49a878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x49a87c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x49a87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x49a880: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x49a880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x49a884: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49A884u;
    SET_GPR_U32(ctx, 31, 0x49A88Cu);
    ctx->pc = 0x49A888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A884u;
    // 0x49a888: 0x3c13ffff  lui         $s3, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49A884u, 0x49A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A88Cu;
label_49a88c:
    // 0x49a88c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49a88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a890: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49a890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49a894: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x49A894u;
    SET_GPR_U32(ctx, 31, 0x49A89Cu);
    ctx->pc = 0x49A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A894u;
    // 0x49a898: 0x2451d680  addiu       $s1, $v0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x49A894u, 0x49A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A89Cu;
label_49a89c:
    // 0x49a89c: 0xc140eda  jal         func_503B68
    ctx->pc = 0x49A89Cu;
    SET_GPR_U32(ctx, 31, 0x49A8A4u);
    ctx->pc = 0x503B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B68u, 0x49A89Cu, 0x49A8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A8A4u;
label_49a8a4:
    // 0x49a8a4: 0xa620220e  sh          $zero, 0x220E($s1)
    ctx->pc = 0x49a8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8718), (uint16_t)GPR_U32(ctx, 0));
    // 0x49a8a8: 0xa620220a  sh          $zero, 0x220A($s1)
    ctx->pc = 0x49a8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8714), (uint16_t)GPR_U32(ctx, 0));
    // 0x49a8ac: 0xc124c72  jal         func_4931C8
    ctx->pc = 0x49A8ACu;
    SET_GPR_U32(ctx, 31, 0x49A8B4u);
    ctx->pc = 0x49A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A8ACu;
    // 0x49a8b0: 0xa62021fe  sh          $zero, 0x21FE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 8702), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931C8u, 0x49A8ACu, 0x49A8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A8B4u;
label_49a8b4:
    // 0x49a8b4: 0xc12211a  jal         func_488468
    ctx->pc = 0x49A8B4u;
    SET_GPR_U32(ctx, 31, 0x49A8BCu);
    ctx->pc = 0x488468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488468u, 0x49A8B4u, 0x49A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A8BCu;
label_49a8bc:
    // 0x49a8bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49a8bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49a8c0: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x49a8c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x49a8c4: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x49a8c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x49a8c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x49a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x49a8cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x49a8d0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49a8d4: 0x24637e40  addiu       $v1, $v1, 0x7E40
    ctx->pc = 0x49a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32320));
    // 0x49a8d8: 0x24500b58  addiu       $s0, $v0, 0xB58
    ctx->pc = 0x49a8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2904));
    // 0x49a8dc: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x49a8dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a8e0: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x49a8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x49a8e4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x49a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x49a8e8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49a8e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a8ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x49a8f0: 0xa625000e  sh          $a1, 0xE($s1)
    ctx->pc = 0x49a8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 5));
    // 0x49a8f4: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x49a8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x49a8f8: 0xc124620  jal         func_491880
    ctx->pc = 0x49A8F8u;
    SET_GPR_U32(ctx, 31, 0x49A900u);
    ctx->pc = 0x49A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A8F8u;
    // 0x49a8fc: 0xa6200016  sh          $zero, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x49A8F8u, 0x49A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A900u;
label_49a900:
    // 0x49a900: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49a900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49a904: 0x3401a800  ori         $at, $zero, 0xA800
    ctx->pc = 0x49a904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x49a908: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x49a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49a90c: 0x24710b60  addiu       $s1, $v1, 0xB60
    ctx->pc = 0x49a90cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2912));
    // 0x49a910: 0xc12a64c  jal         func_4A9930
    ctx->pc = 0x49A910u;
    SET_GPR_U32(ctx, 31, 0x49A918u);
    ctx->pc = 0x49A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A910u;
    // 0x49a914: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9930u, 0x49A910u, 0x49A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A918u;
label_49a918:
    // 0x49a918: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49a918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49a91c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x49a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49a920: 0x24890b3c  addiu       $t1, $a0, 0xB3C
    ctx->pc = 0x49a920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2876));
    // 0x49a924: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x49a924u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B3Cu));
    // 0x49a928: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49a928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49a92c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49a930: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x49a930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49a934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a938: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49a938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49a93c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49a93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a940: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x49a940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x49a944: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x49a944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49a948: 0x25080b40  addiu       $t0, $t0, 0xB40
    ctx->pc = 0x49a948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2880));
    // 0x49a94c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x49a950: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x49a950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x49a954: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a958: 0x24870b48  addiu       $a3, $a0, 0xB48
    ctx->pc = 0x49a958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2888));
    // 0x49a95c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x49a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x49a960: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a964: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49a964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49a968: 0x34a500ff  ori         $a1, $a1, 0xFF
    ctx->pc = 0x49a968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)255);
    // 0x49a96c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x49a96cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a970: 0x248a0b44  addiu       $t2, $a0, 0xB44
    ctx->pc = 0x49a970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 2884));
    // 0x49a974: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a978: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x49a978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x49a97c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a980: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x49a980u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x49a984: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x49a984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a988: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49a988u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a98c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49a98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49a990: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x49a990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x49a994: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x49a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49a998: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x49a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a99c: 0x85240000  lh          $a0, 0x0($t1)
    ctx->pc = 0x49a99cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a9a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49a9a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a9a8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x49a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x49a9ac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49a9b0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x49a9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x49a9b4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x49a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x49a9b8: 0x48000db  bltz        $a0, . + 4 + (0xDB << 2)
    ctx->pc = 0x49A9B8u;
    {
        const bool branch_taken_0x49a9b8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x49A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A9B8u;
        // 0x49a9bc: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a9b8) {
            ctx->pc = 0x49AD28u;
            goto label_49ad28;
        }
    }
    ctx->pc = 0x49A9C0u;
    // 0x49a9c0: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x49a9c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a9c4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x49a9c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_49a9c8:
    // 0x49a9c8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49a9cc: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x49a9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49a9d0: 0x24630b44  addiu       $v1, $v1, 0xB44
    ctx->pc = 0x49a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2884));
    // 0x49a9d4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49a9d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49a9d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B44u));
    // 0x49a9dc: 0x24840b40  addiu       $a0, $a0, 0xB40
    ctx->pc = 0x49a9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2880));
    // 0x49a9e0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49a9e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49a9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49a9e8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49a9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49a9ec: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x49a9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49a9f0: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x49a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x49a9f4: 0x24c30002  addiu       $v1, $a2, 0x2
    ctx->pc = 0x49a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49a9f8: 0x24a50b48  addiu       $a1, $a1, 0xB48
    ctx->pc = 0x49a9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2888));
    // 0x49a9fc: 0x24ca0004  addiu       $t2, $a2, 0x4
    ctx->pc = 0x49a9fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49aa00: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49aa00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B40u));
    // 0x49aa04: 0x24e70b60  addiu       $a3, $a3, 0xB60
    ctx->pc = 0x49aa04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2912));
    // 0x49aa08: 0x24c80018  addiu       $t0, $a2, 0x18
    ctx->pc = 0x49aa08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x49aa0c: 0x24cb0006  addiu       $t3, $a2, 0x6
    ctx->pc = 0x49aa0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x49aa10: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x49aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49aa14: 0x24cc0008  addiu       $t4, $a2, 0x8
    ctx->pc = 0x49aa14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x49aa18: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x49aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x49aa1c: 0x24cd000a  addiu       $t5, $a2, 0xA
    ctx->pc = 0x49aa1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 10));
    // 0x49aa20: 0x24ce000c  addiu       $t6, $a2, 0xC
    ctx->pc = 0x49aa20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x49aa24: 0x24cf000e  addiu       $t7, $a2, 0xE
    ctx->pc = 0x49aa24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x49aa28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49aa28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B48u));
    // 0x49aa2c: 0x24c5001a  addiu       $a1, $a2, 0x1A
    ctx->pc = 0x49aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 26));
    // 0x49aa30: 0x24d90010  addiu       $t9, $a2, 0x10
    ctx->pc = 0x49aa30u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49aa34: 0x24d40012  addiu       $s4, $a2, 0x12
    ctx->pc = 0x49aa34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x49aa38: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49aa38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49aa3c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49aa40: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x49aa40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x49aa44: 0x24630b4c  addiu       $v1, $v1, 0xB4C
    ctx->pc = 0x49aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2892));
    // 0x49aa48: 0x24d60014  addiu       $s6, $a2, 0x14
    ctx->pc = 0x49aa48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x49aa4c: 0x24d80016  addiu       $t8, $a2, 0x16
    ctx->pc = 0x49aa4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x49aa50: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B60u));
    // 0x49aa54: 0x24d3001c  addiu       $s3, $a2, 0x1C
    ctx->pc = 0x49aa54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x49aa58: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x49aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x49aa5c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49aa5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49aa60: 0x25080b4c  addiu       $t0, $t0, 0xB4C
    ctx->pc = 0x49aa60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2892));
    // 0x49aa64: 0x24d0001e  addiu       $s0, $a2, 0x1E
    ctx->pc = 0x49aa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 30));
    // 0x49aa68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B4Cu));
    // 0x49aa6c: 0x24d10020  addiu       $s1, $a2, 0x20
    ctx->pc = 0x49aa6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x49aa70: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x49aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x49aa74: 0x24d50022  addiu       $s5, $a2, 0x22
    ctx->pc = 0x49aa74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
    // 0x49aa78: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49aa78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49aa7c: 0x24d70024  addiu       $s7, $a2, 0x24
    ctx->pc = 0x49aa7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
    // 0x49aa80: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49aa80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49aa84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49aa88: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49aa88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B60u, _value); } while (0);
    // 0x49aa8c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49aa8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49aa90: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49aa90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49aa94: 0x24e70b50  addiu       $a3, $a3, 0xB50
    ctx->pc = 0x49aa94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2896));
    // 0x49aa98: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49aa98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49aa9c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49aaa0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x49aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49aaa4: 0x24470002  addiu       $a3, $v0, 0x2
    ctx->pc = 0x49aaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49aaa8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49aaac: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49aaacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49aab0: 0x24630b54  addiu       $v1, $v1, 0xB54
    ctx->pc = 0x49aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2900));
    // 0x49aab4: 0x25080b60  addiu       $t0, $t0, 0xB60
    ctx->pc = 0x49aab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2912));
    // 0x49aab8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49aab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B54u));
    // 0x49aabc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49aabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49aac0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49aac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49aac4: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x49aac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x49aac8: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x49aac8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7F0B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B60u, _value); } while (0);
    // 0x49aacc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49aad0: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49aad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49aad4: 0x24420b4c  addiu       $v0, $v0, 0xB4C
    ctx->pc = 0x49aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2892));
    // 0x49aad8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49aad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49aadc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49aae0: 0x24630b50  addiu       $v1, $v1, 0xB50
    ctx->pc = 0x49aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2896));
    // 0x49aae4: 0x94480000  lhu         $t0, 0x0($v0)
    ctx->pc = 0x49aae4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49aae8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x49aae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B50u, _value); } while (0);
    // 0x49aaec: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49aaf0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49aaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49aaf4: 0x24a50b60  addiu       $a1, $a1, 0xB60
    ctx->pc = 0x49aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2912));
    // 0x49aaf8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49aaf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49aafc: 0x24c70026  addiu       $a3, $a2, 0x26
    ctx->pc = 0x49aafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 38));
    // 0x49ab00: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x49ab00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x7F0B60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B60u, _value); } while (0);
    // 0x49ab04: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49ab08: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49ab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49ab0c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49ab10: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49ab10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49ab14: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49ab18: 0x24420b54  addiu       $v0, $v0, 0xB54
    ctx->pc = 0x49ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2900));
    // 0x49ab1c: 0x24630b44  addiu       $v1, $v1, 0xB44
    ctx->pc = 0x49ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2884));
    // 0x49ab20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49ab20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F0B54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B54u, _value); } while (0);
    // 0x49ab24: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49ab24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49ab28: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x49ab28u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x49ab2c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49ab2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49ab30: 0xafcb0000  sw          $t3, 0x0($fp)
    ctx->pc = 0x49ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 11));
    // 0x49ab34: 0x24840b50  addiu       $a0, $a0, 0xB50
    ctx->pc = 0x49ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2896));
    // 0x49ab38: 0x24a50b54  addiu       $a1, $a1, 0xB54
    ctx->pc = 0x49ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2900));
    // 0x49ab3c: 0x25080b44  addiu       $t0, $t0, 0xB44
    ctx->pc = 0x49ab3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2884));
    // 0x49ab40: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49ab40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ab44: 0x24c60028  addiu       $a2, $a2, 0x28
    ctx->pc = 0x49ab44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
    // 0x49ab48: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x49ab48u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ab4c: 0xafcc0000  sw          $t4, 0x0($fp)
    ctx->pc = 0x49ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 12));
    // 0x49ab50: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49ab50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B50u));
    // 0x49ab54: 0xa5820000  sh          $v0, 0x0($t4)
    ctx->pc = 0x49ab54u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ab58: 0xafcd0000  sw          $t5, 0x0($fp)
    ctx->pc = 0x49ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 13));
    // 0x49ab5c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49ab5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ab60: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x49ab60u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ab64: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49ab64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ab68: 0xafce0000  sw          $t6, 0x0($fp)
    ctx->pc = 0x49ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 14));
    // 0x49ab6c: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x49ab6cu;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49ab70: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x49ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x49ab74: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49ab74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F0B44u));
    // 0x49ab78: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49ab78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49ab7c: 0x25080b50  addiu       $t0, $t0, 0xB50
    ctx->pc = 0x49ab7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2896));
    // 0x49ab80: 0xa5e20000  sh          $v0, 0x0($t7)
    ctx->pc = 0x49ab80u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ab84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49ab88: 0xafd90000  sw          $t9, 0x0($fp)
    ctx->pc = 0x49ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 25));
    // 0x49ab8c: 0x24420b4c  addiu       $v0, $v0, 0xB4C
    ctx->pc = 0x49ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2892));
    // 0x49ab90: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x49ab90u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x7F0B4Cu));
    // 0x49ab94: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x49ab94u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7F0B50u));
    // 0x49ab98: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49ab9c: 0x24840b54  addiu       $a0, $a0, 0xB54
    ctx->pc = 0x49ab9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2900));
    // 0x49aba0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x49aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x49aba4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49aba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49aba8: 0xb22024  and         $a0, $a1, $s2
    ctx->pc = 0x49aba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x49abac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x49abacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x49abb0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49abb4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49abb8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49abbc: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49abbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49abc0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x49abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x49abc4: 0x25080b4c  addiu       $t0, $t0, 0xB4C
    ctx->pc = 0x49abc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2892));
    // 0x49abc8: 0x24630b54  addiu       $v1, $v1, 0xB54
    ctx->pc = 0x49abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2900));
    // 0x49abcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49abccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49abd0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49abd4: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x49abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x49abd8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49abdc: 0xa7240000  sh          $a0, 0x0($t9)
    ctx->pc = 0x49abdcu;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49abe0: 0x24630b50  addiu       $v1, $v1, 0xB50
    ctx->pc = 0x49abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2896));
    // 0x49abe4: 0xafd40000  sw          $s4, 0x0($fp)
    ctx->pc = 0x49abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 20));
    // 0x49abe8: 0x24a50b54  addiu       $a1, $a1, 0xB54
    ctx->pc = 0x49abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2900));
    // 0x49abec: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49abecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49abf0: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x49abf0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49abf4: 0xafd60000  sw          $s6, 0x0($fp)
    ctx->pc = 0x49abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 22));
    // 0x49abf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0B50u));
    // 0x49abfc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x49abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49ac00: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49ac04: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x49ac04u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac08: 0xafd80000  sw          $t8, 0x0($fp)
    ctx->pc = 0x49ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 24));
    // 0x49ac0c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49ac0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ac10: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49ac14: 0x24630b44  addiu       $v1, $v1, 0xB44
    ctx->pc = 0x49ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2884));
    // 0x49ac18: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x49ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ac20: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x49ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x49ac24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ac28: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x49ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49ac2c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49ac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49ac30: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49ac30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac34: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x49ac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ac38: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x49ac38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49ac3c: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x49ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x49ac40: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49ac40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49ac44: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49ac48: 0x24a50b3c  addiu       $a1, $a1, 0xB3C
    ctx->pc = 0x49ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2876));
    // 0x49ac4c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x49ac4cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac50: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49ac50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49ac54: 0xafd30000  sw          $s3, 0x0($fp)
    ctx->pc = 0x49ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
    // 0x49ac58: 0x25080b3c  addiu       $t0, $t0, 0xB3C
    ctx->pc = 0x49ac58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2876));
    // 0x49ac5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ac60: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x49ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49ac64: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49ac68: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x49ac68u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac6c: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x49ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
    // 0x49ac70: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49ac70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ac74: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x49ac74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac78: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49ac78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ac7c: 0xafd10000  sw          $s1, 0x0($fp)
    ctx->pc = 0x49ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
    // 0x49ac80: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x49ac80u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49ac84: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x49ac84u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
    // 0x49ac88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ac8c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x49ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49ac90: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49ac94: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x49ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ac98: 0xafd70000  sw          $s7, 0x0($fp)
    ctx->pc = 0x49ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
    // 0x49ac9c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49ac9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49aca0: 0xa6e20000  sh          $v0, 0x0($s7)
    ctx->pc = 0x49aca0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49aca4: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x49aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x49aca8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49aca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49acac: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49acacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49acb0: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x49acb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x49acb4: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x49acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x49acb8: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x49acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x49acbc: 0x24c60b40  addiu       $a2, $a2, 0xB40
    ctx->pc = 0x49acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2880));
    // 0x49acc0: 0x24e70b48  addiu       $a3, $a3, 0xB48
    ctx->pc = 0x49acc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2888));
    // 0x49acc4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49acc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49acc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49accc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49acd0: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x49acd0u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x7F0B48u));
    // 0x49acd4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49acd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49acd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49acd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49acdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49acdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49ace0: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x49ace0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49ace4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49ace4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49ace8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x49ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x49acec: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49acecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49acf0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49acf4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x49acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49acf8: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x49acf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x49acfc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x49acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49ad00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49ad04: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x49ad04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49ad08: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x49ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49ad0c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49ad10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49ad10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49ad14: 0x24840b40  addiu       $a0, $a0, 0xB40
    ctx->pc = 0x49ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2880));
    // 0x49ad18: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x49ad18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49ad1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49ad20: 0x4c1ff29  bgez        $a2, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x49AD20u;
    {
        const bool branch_taken_0x49ad20 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x49AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD20u;
        // 0x49ad24: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ad20) {
            ctx->pc = 0x49A9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a9c8;
        }
    }
    ctx->pc = 0x49AD28u;
label_49ad28:
    // 0x49ad28: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x49ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x49ad2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49ad30: 0x24b0d680  addiu       $s0, $a1, -0x2980
    ctx->pc = 0x49ad30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x49ad34: 0xc12487a  jal         func_4921E8
    ctx->pc = 0x49AD34u;
    SET_GPR_U32(ctx, 31, 0x49AD3Cu);
    ctx->pc = 0x49AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AD34u;
    // 0x49ad38: 0xa602220c  sh          $v0, 0x220C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8716), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4921E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4921E8u, 0x49AD34u, 0x49AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AD3Cu;
label_49ad3c:
    // 0x49ad3c: 0xc124910  jal         func_492440
    ctx->pc = 0x49AD3Cu;
    SET_GPR_U32(ctx, 31, 0x49AD44u);
    ctx->pc = 0x49AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AD3Cu;
    // 0x49ad40: 0x3c04001a  lui         $a0, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x49AD3Cu, 0x49AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AD44u;
label_49ad44:
    // 0x49ad44: 0xc124910  jal         func_492440
    ctx->pc = 0x49AD44u;
    SET_GPR_U32(ctx, 31, 0x49AD4Cu);
    ctx->pc = 0x49AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AD44u;
    // 0x49ad48: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x49AD44u, 0x49AD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AD4Cu;
label_49ad4c:
    // 0x49ad4c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x49ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x49ad50: 0xc123bdc  jal         func_48EF70
    ctx->pc = 0x49AD50u;
    SET_GPR_U32(ctx, 31, 0x49AD58u);
    ctx->pc = 0x49AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49AD50u;
    // 0x49ad54: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF70u, 0x49AD50u, 0x49AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49AD58u;
label_49ad58:
    // 0x49ad58: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x49ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x49ad5c: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x49ad5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ad60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49ad60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49ad64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49ad64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ad68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49ad68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ad6c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x49ad6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49ad70: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x49ad70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49ad74: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x49ad74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49ad78: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x49ad78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49ad7c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x49ad7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49ad80: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x49ad80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49ad84: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x49ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x49ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x49AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49AD88u;
        // 0x49ad8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49AD90u;
}
