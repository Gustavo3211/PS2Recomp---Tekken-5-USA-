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

// Function: sub_0050E6C0
// Address: 0x50e6c0 - 0x50e848
void sub_0050E6C0_0x50e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050E6C0_0x50e6c0");
#endif

    switch (ctx->pc) {
        case 0x50e714u: goto label_50e714;
        case 0x50e728u: goto label_50e728;
        case 0x50e768u: goto label_50e768;
        case 0x50e798u: goto label_50e798;
        case 0x50e7b8u: goto label_50e7b8;
        case 0x50e7ecu: goto label_50e7ec;
        case 0x50e820u: goto label_50e820;
        default: break;
    }

    ctx->pc = 0x50e6c0u;

    // 0x50e6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x50e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x50e6c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x50e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x50e6c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x50e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e6cc: 0x34427800  ori         $v0, $v0, 0x7800
    ctx->pc = 0x50e6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30720);
    // 0x50e6d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x50e6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x50e6d4: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x50e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x50e6d8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x50e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x50e6dc: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x50e6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x50e6e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e6e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e6e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e6ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50e6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e6f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50e6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e6f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x50e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x50e6f8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x50e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x50e6fc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x50e6fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x50e700: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x50e704: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x50e704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x50e708: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x50e708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x50e70c: 0xc141358  jal         func_504D60
    ctx->pc = 0x50E70Cu;
    SET_GPR_U32(ctx, 31, 0x50E714u);
    ctx->pc = 0x50E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E70Cu;
    // 0x50e710: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504D60u, 0x50E70Cu, 0x50E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E714u;
label_50e714:
    // 0x50e714: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x50e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50e718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e71c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x50e71cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e720: 0xc141130  jal         func_5044C0
    ctx->pc = 0x50E720u;
    SET_GPR_U32(ctx, 31, 0x50E728u);
    ctx->pc = 0x50E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E720u;
    // 0x50e724: 0x3c100090  lui         $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5044C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5044C0u, 0x50E720u, 0x50E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E728u;
label_50e728:
    // 0x50e728: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x50e728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x50e72c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x50e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50e730: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x50e730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x50e734: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x50e734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50e738: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x50e738u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x50e73c: 0x97a40000  lhu         $a0, 0x0($sp)
    ctx->pc = 0x50e73cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e740: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x50e740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x50e744: 0x97a60008  lhu         $a2, 0x8($sp)
    ctx->pc = 0x50e744u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e748: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x50e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x50e74c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x50e74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x50e750: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e754: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e758: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50e758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e75c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x50e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x50e760: 0xc144d2c  jal         func_5134B0
    ctx->pc = 0x50E760u;
    SET_GPR_U32(ctx, 31, 0x50E768u);
    ctx->pc = 0x50E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E760u;
    // 0x50e764: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5134B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5134B0u, 0x50E760u, 0x50E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E768u;
label_50e768:
    // 0x50e768: 0x97a4000c  lhu         $a0, 0xC($sp)
    ctx->pc = 0x50e768u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50e76c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x50e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50e770: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x50e770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50e774: 0xa6040074  sh          $a0, 0x74($s0)
    ctx->pc = 0x50e774u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 4));
    // 0x50e778: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50e778u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50e77c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e780: 0x21023  negu        $v0, $v0
    ctx->pc = 0x50e780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x50e784: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x50e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50e788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e78c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x50e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e790: 0xc144cf4  jal         func_5133D0
    ctx->pc = 0x50E790u;
    SET_GPR_U32(ctx, 31, 0x50E798u);
    ctx->pc = 0x50E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E790u;
    // 0x50e794: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5133D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5133D0u, 0x50E790u, 0x50E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E798u;
label_50e798:
    // 0x50e798: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e79c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x50e79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50e7a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x50e7a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x50e7a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x50e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x50e7a8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x50e7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x50e7ac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x50e7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x50e7b0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E7B0u;
    SET_GPR_U32(ctx, 31, 0x50E7B8u);
    ctx->pc = 0x50E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E7B0u;
    // 0x50e7b4: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E7B0u, 0x50E7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E7B8u;
label_50e7b8:
    // 0x50e7b8: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x50e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x50e7bc: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x50e7bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50e7c0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50e7c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50e7c4: 0x87a50008  lh          $a1, 0x8($sp)
    ctx->pc = 0x50e7c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50e7c8: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x50e7c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e7cc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x50e7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x50e7d0: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x50e7d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x50e7d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50e7d8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x50e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x50e7dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50e7e0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x50e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x50e7e4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50E7E4u;
    SET_GPR_U32(ctx, 31, 0x50E7ECu);
    ctx->pc = 0x50E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E7E4u;
    // 0x50e7e8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50E7E4u, 0x50E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E7ECu;
label_50e7ec:
    // 0x50e7ec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x50e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50e7f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e7f4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x50e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50e7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x50e7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e7fc: 0x97a70014  lhu         $a3, 0x14($sp)
    ctx->pc = 0x50e7fcu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x50e800: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x50e800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x50e804: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x50e804u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x50e808: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x50e808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x50e80c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x50e80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x50e810: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50e814: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x50e814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x50e818: 0xc144d2c  jal         func_5134B0
    ctx->pc = 0x50E818u;
    SET_GPR_U32(ctx, 31, 0x50E820u);
    ctx->pc = 0x50E81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50E818u;
    // 0x50e81c: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5134B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5134B0u, 0x50E818u, 0x50E820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E820u;
label_50e820:
    // 0x50e820: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x50e820u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x50e824: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x50e824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50e828: 0xa6020076  sh          $v0, 0x76($s0)
    ctx->pc = 0x50e828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e82c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x50e82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50e830: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x50e830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50e834: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x50e834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50e838: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50e838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50e83c: 0x3e00008  jr          $ra
    ctx->pc = 0x50E83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E83Cu;
        // 0x50e840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50E83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50E844u;
    // 0x50e844: 0x0  nop
    ctx->pc = 0x50e844u;
    // NOP
    ctx->pc = 0x50e848u;
}
