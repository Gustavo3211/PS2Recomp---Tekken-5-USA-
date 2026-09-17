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

// Function: sub_004EB770
// Address: 0x4eb770 - 0x4ebb78
void sub_004EB770_0x4eb770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB770_0x4eb770");
#endif

    switch (ctx->pc) {
        case 0x4eb82cu: goto label_4eb82c;
        case 0x4eb888u: goto label_4eb888;
        case 0x4ebb28u: goto label_4ebb28;
        case 0x4ebb38u: goto label_4ebb38;
        default: break;
    }

    ctx->pc = 0x4eb770u;

    // 0x4eb770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4eb770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4eb774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eb774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eb778: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4eb778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4eb77c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4eb77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4eb780: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4eb780u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4eb784: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4eb784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4eb788: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4eb788u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4eb78c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4eb78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4eb790: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4eb790u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4eb794: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4eb794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4eb798: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4eb798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb79c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4eb79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4eb7a0: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x4eb7a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x4eb7a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4eb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4eb7a8: 0x261011e8  addiu       $s0, $s0, 0x11E8
    ctx->pc = 0x4eb7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4584));
    // 0x4eb7ac: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4eb7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4eb7b0: 0x26b5d680  addiu       $s5, $s5, -0x2980
    ctx->pc = 0x4eb7b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956672));
    // 0x4eb7b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4eb7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4eb7b8: 0x267311f4  addiu       $s3, $s3, 0x11F4
    ctx->pc = 0x4eb7b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4596));
    // 0x4eb7bc: 0x265211f8  addiu       $s2, $s2, 0x11F8
    ctx->pc = 0x4eb7bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
    // 0x4eb7c0: 0x26b7249c  addiu       $s7, $s5, 0x249C
    ctx->pc = 0x4eb7c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 9372));
    // 0x4eb7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eb7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4eb7c8: 0x26b62494  addiu       $s6, $s5, 0x2494
    ctx->pc = 0x4eb7c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 9364));
    // 0x4eb7cc: 0x86a223f8  lh          $v0, 0x23F8($s5)
    ctx->pc = 0x4eb7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72FA78u));
    // 0x4eb7d0: 0x26b52498  addiu       $s5, $s5, 0x2498
    ctx->pc = 0x4eb7d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 9368));
    // 0x4eb7d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb7d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4eb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4eb7dc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb7e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb7e4: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4eb7e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4eb7e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb7ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb7f0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eb7f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb7f4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4eb7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4eb7f8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb7fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb800: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb808: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eb808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb80c: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4eb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4eb810: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb818: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4eb818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4eb81c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb820: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4eb820u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4eb824: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EB824u;
    SET_GPR_U32(ctx, 31, 0x4EB82Cu);
    ctx->pc = 0x4EB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB824u;
    // 0x4eb828: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EB824u, 0x4EB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB82Cu;
label_4eb82c:
    // 0x4eb82c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eb82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb830: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb834: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4eb834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb838: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb83c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb840: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4eb840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4eb844: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb848: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb84c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eb84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb850: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4eb850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4eb854: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb858: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb85c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb860: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb864: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eb864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb868: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4eb868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4eb86c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb874: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4eb874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4eb878: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb87c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4eb87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4eb880: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4EB880u;
    SET_GPR_U32(ctx, 31, 0x4EB888u);
    ctx->pc = 0x4EB884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB880u;
    // 0x4eb884: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4EB880u, 0x4EB888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB888u;
label_4eb888:
    // 0x4eb888: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4eb888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb88c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb890: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4eb890u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4eb894: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb898: 0x258c11fc  addiu       $t4, $t4, 0x11FC
    ctx->pc = 0x4eb898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4604));
    // 0x4eb89c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb8a0: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4eb8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eb8a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb8a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb8ac: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4eb8acu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4eb8b0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4eb8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4eb8b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eb8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb8b8: 0x25ad11ec  addiu       $t5, $t5, 0x11EC
    ctx->pc = 0x4eb8b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4588));
    // 0x4eb8bc: 0x8da90000  lw          $t1, 0x0($t5)
    ctx->pc = 0x4eb8bcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eb8c0: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4eb8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4eb8c4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x4eb8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4eb8c8: 0x866e0000  lh          $t6, 0x0($s3)
    ctx->pc = 0x4eb8c8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb8cc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb8d0: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4eb8d0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb8d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb8d8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4eb8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb8dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb8e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb8e4: 0x1314824  and         $t1, $t1, $s1
    ctx->pc = 0x4eb8e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 17));
    // 0x4eb8e8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4eb8e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4eb8ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4eb8ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb8f0: 0x8c8f1208  lw          $t7, 0x1208($a0)
    ctx->pc = 0x4eb8f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4616)));
    // 0x4eb8f4: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x4eb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x4eb8f8: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4eb8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb8fc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb900: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb904: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4eb904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4eb908: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4eb908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4eb90c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb910: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4eb910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4eb914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb918: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4eb918u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4eb91c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb91cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb920: 0x868201be  lh          $v0, 0x1BE($s4)
    ctx->pc = 0x4eb920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 446)));
    // 0x4eb924: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4eb924u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eb928: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb92c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb930: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb938: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eb938u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb93c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4eb93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4eb940: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb944: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eb944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eb948: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4eb948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4eb94c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4eb94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eb950: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x4eb950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4eb954: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4eb954u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb958: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x4eb958u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x4eb95c: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x4eb95cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x4eb960: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4eb960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4eb964: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4eb964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4eb968: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4eb968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4eb96c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4eb96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4eb970: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4eb970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4eb974: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4eb974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4eb978: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4eb978u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb97c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eb980: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4eb980u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eb984: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4eb984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4eb988: 0x3c010055  lui         $at, 0x55
    ctx->pc = 0x4eb988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)85 << 16));
    // 0x4eb98c: 0x242180a8  addiu       $at, $at, -0x7F58
    ctx->pc = 0x4eb98cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294934696));
    // 0x4eb990: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4eb990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4eb994: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4eb994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4eb998: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4eb998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4eb99c: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x4eb99cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4eb9a0: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4eb9a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4eb9a4: 0x1c47021  addu        $t6, $t6, $a0
    ctx->pc = 0x4eb9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x4eb9a8: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x4eb9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x4eb9ac: 0x1d17025  or          $t6, $t6, $s1
    ctx->pc = 0x4eb9acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 17));
    // 0x4eb9b0: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x4eb9b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x4eb9b4: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4eb9b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4eb9b8: 0x1715825  or          $t3, $t3, $s1
    ctx->pc = 0x4eb9b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 17));
    // 0x4eb9bc: 0xee3824  and         $a3, $a3, $t6
    ctx->pc = 0x4eb9bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 14));
    // 0x4eb9c0: 0x10b4024  and         $t0, $t0, $t3
    ctx->pc = 0x4eb9c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 11));
    // 0x4eb9c4: 0xca3024  and         $a2, $a2, $t2
    ctx->pc = 0x4eb9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x4eb9c8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4eb9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4eb9cc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4eb9ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4eb9d0: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4eb9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4eb9d4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4eb9d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4eb9d8: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4eb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4eb9dc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eb9dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eb9e0: 0x8de20010  lw          $v0, 0x10($t7)
    ctx->pc = 0x4eb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 16)));
    // 0x4eb9e4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4eb9e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb9e8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4eb9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4eb9ec: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4eb9ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb9f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eb9f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eb9f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eb9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eb9f8: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4eb9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4eb9fc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4eb9fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4eba00: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4eba00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4eba04: 0x8de20014  lw          $v0, 0x14($t7)
    ctx->pc = 0x4eba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 20)));
    // 0x4eba08: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4eba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4eba0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eba0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eba10: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4eba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4eba14: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4eba14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4eba18: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4eba18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4eba1c: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4eba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4eba20: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x4eba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x4eba24: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4eba24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eba28: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4eba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4eba2c: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x4eba2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eba30: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eba30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4eba34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4eba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4eba38: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4eba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4eba3c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4eba3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4eba40: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4eba40u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4eba44: 0xa685011a  sh          $a1, 0x11A($s4)
    ctx->pc = 0x4eba44u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 5));
    // 0x4eba48: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x4eba48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x4eba4c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4eba4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eba50: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4eba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4eba54: 0xa682011e  sh          $v0, 0x11E($s4)
    ctx->pc = 0x4eba54u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eba58: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4eba58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4eba5c: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4eba5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eba60: 0xa6820122  sh          $v0, 0x122($s4)
    ctx->pc = 0x4eba60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 290), (uint16_t)GPR_U32(ctx, 2));
    // 0x4eba64: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4eba64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eba68: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4eba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eba6c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4eba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4eba70: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4eba70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eba74: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4eba74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4eba78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4eba78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4eba7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4eba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4eba80: 0x86450000  lh          $a1, 0x0($s2)
    ctx->pc = 0x4eba80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eba84: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4eba84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4eba88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4eba88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4eba8c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4eba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4eba90: 0x858a0000  lh          $t2, 0x0($t4)
    ctx->pc = 0x4eba90u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eba94: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4eba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4eba98: 0x8d8b0000  lw          $t3, 0x0($t4)
    ctx->pc = 0x4eba98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4eba9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4eba9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebaa0: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x4ebaa0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ebaa4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4ebaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ebaa8: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4ebaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ebaac: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4ebaacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4ebab0: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4ebab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ebab4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4ebab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4ebab8: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4ebab8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ebabc: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4ebabcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4ebac0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ebac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ebac4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ebac4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ebac8: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4ebac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4ebacc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4ebaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4ebad0: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4ebad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4ebad4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4ebad4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ebad8: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4ebad8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4ebadc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4ebadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4ebae0: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x4ebae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4ebae4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ebae4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ebae8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ebae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ebaec: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4ebaecu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4ebaf0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ebaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ebaf4: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4ebaf4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4ebaf8: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ebaf8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ebafc: 0x16a5824  and         $t3, $t3, $t2
    ctx->pc = 0x4ebafcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x4ebb00: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x4ebb00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x4ebb04: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x4ebb04u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x4ebb08: 0x1314825  or          $t1, $t1, $s1
    ctx->pc = 0x4ebb08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 17));
    // 0x4ebb0c: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4ebb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4ebb10: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x4ebb10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ebb14: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ebb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ebb18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ebb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ebb1c: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ebb1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ebb20: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4EBB20u;
    SET_GPR_U32(ctx, 31, 0x4EBB28u);
    ctx->pc = 0x4EBB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBB20u;
    // 0x4ebb24: 0xaee90000  sw          $t1, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4EBB20u, 0x4EBB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EBB28u;
label_4ebb28:
    // 0x4ebb28: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x4ebb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4ebb2c: 0xa682015a  sh          $v0, 0x15A($s4)
    ctx->pc = 0x4ebb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ebb30: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4EBB30u;
    SET_GPR_U32(ctx, 31, 0x4EBB38u);
    ctx->pc = 0x4EBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBB30u;
    // 0x4ebb34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4EBB30u, 0x4EBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EBB38u;
label_4ebb38:
    // 0x4ebb38: 0x26830164  addiu       $v1, $s4, 0x164
    ctx->pc = 0x4ebb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
    // 0x4ebb3c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ebb3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ebb40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ebb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ebb44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ebb44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ebb48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ebb48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ebb4c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ebb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ebb50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ebb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ebb54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ebb54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ebb58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ebb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ebb5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ebb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ebb60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ebb60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ebb64: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ebb64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ebb68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ebb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ebb6c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ebb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ebb70: 0x813b08a  j           func_4EC228
    ctx->pc = 0x4EBB70u;
    ctx->pc = 0x4EBB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EBB70u;
    // 0x4ebb74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EC228u;
    sub_004EC228_0x4ec228(rdram, ctx, runtime); return;
    ctx->pc = 0x4EBB78u;
}
