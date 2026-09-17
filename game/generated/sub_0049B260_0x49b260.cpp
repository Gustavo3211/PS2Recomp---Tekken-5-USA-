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

// Function: sub_0049B260
// Address: 0x49b260 - 0x49b3c8
void sub_0049B260_0x49b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049B260_0x49b260");
#endif

    switch (ctx->pc) {
        case 0x49b2c8u: goto label_49b2c8;
        case 0x49b304u: goto label_49b304;
        case 0x49b31cu: goto label_49b31c;
        case 0x49b33cu: goto label_49b33c;
        case 0x49b370u: goto label_49b370;
        case 0x49b3a8u: goto label_49b3a8;
        default: break;
    }

    ctx->pc = 0x49b260u;

    // 0x49b260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49b264: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49b264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x49b268: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x49b268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b26c: 0x34637800  ori         $v1, $v1, 0x7800
    ctx->pc = 0x49b26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30720);
    // 0x49b270: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x49b270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49b274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x49b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b278: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x49b278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b27c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49b27cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49b280: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x49b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x49b284: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x49b284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x49b288: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49b288u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49b28c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49b28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49b290: 0x1104024  and         $t0, $t0, $s0
    ctx->pc = 0x49b290u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 16));
    // 0x49b294: 0xf03824  and         $a3, $a3, $s0
    ctx->pc = 0x49b294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 16));
    // 0x49b298: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x49b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x49b29c: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x49b29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x49b2a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49b2a4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x49b2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x49b2a8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x49b2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x49b2ac: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x49b2acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x49b2b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x49b2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x49b2b4: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x49b2b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x49b2b8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x49b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x49b2bc: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x49b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x49b2c0: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x49B2C0u;
    SET_GPR_U32(ctx, 31, 0x49B2C8u);
    ctx->pc = 0x49B2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B2C0u;
    // 0x49b2c4: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x49B2C0u, 0x49B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B2C8u;
label_49b2c8:
    // 0x49b2c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x49b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x49b2cc: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x49b2ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x49b2d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b2d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x49b2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b2d8: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x49b2d8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b2dc: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x49b2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x49b2e0: 0x97a40008  lhu         $a0, 0x8($sp)
    ctx->pc = 0x49b2e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b2e4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49b2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49b2e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49b2e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49b2ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49b2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49b2f0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x49b2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b2f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49b2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b2f8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x49b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x49b2fc: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x49B2FCu;
    SET_GPR_U32(ctx, 31, 0x49B304u);
    ctx->pc = 0x49B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B2FCu;
    // 0x49b300: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x49B2FCu, 0x49B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B304u;
label_49b304:
    // 0x49b304: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x49b304u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x49b308: 0x22023  negu        $a0, $v0
    ctx->pc = 0x49b308u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x49b30c: 0xa6220074  sh          $v0, 0x74($s1)
    ctx->pc = 0x49b30cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b310: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x49b310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49b314: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x49B314u;
    SET_GPR_U32(ctx, 31, 0x49B31Cu);
    ctx->pc = 0x49B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B314u;
    // 0x49b318: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x49B314u, 0x49B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B31Cu;
label_49b31c:
    // 0x49b31c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x49b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49b320: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x49b320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x49b324: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x49b324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49b328: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x49b328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x49b32c: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x49b32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x49b330: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49b330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49b334: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x49B334u;
    SET_GPR_U32(ctx, 31, 0x49B33Cu);
    ctx->pc = 0x49B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B334u;
    // 0x49b338: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x49B334u, 0x49B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B33Cu;
label_49b33c:
    // 0x49b33c: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x49b33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x49b340: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x49b340u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b344: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49b344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49b348: 0x87a50008  lh          $a1, 0x8($sp)
    ctx->pc = 0x49b348u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49b34c: 0x87a60000  lh          $a2, 0x0($sp)
    ctx->pc = 0x49b34cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49b350: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x49b350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49b354: 0x70661818  mult1       $v1, $v1, $a2
    ctx->pc = 0x49b354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x49b358: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49b358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49b35c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49b360: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x49b360u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49b364: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x49b364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x49b368: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x49B368u;
    SET_GPR_U32(ctx, 31, 0x49B370u);
    ctx->pc = 0x49B36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B368u;
    // 0x49b36c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x49B368u, 0x49B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B370u;
label_49b370:
    // 0x49b370: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x49b370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49b374: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x49b374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b378: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x49b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x49b37c: 0x97a50014  lhu         $a1, 0x14($sp)
    ctx->pc = 0x49b37cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x49b380: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x49b380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x49b384: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x49b384u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49b388: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x49b388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x49b38c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49b38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49b390: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49b390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49b394: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x49b394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49b39c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x49b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x49b3a0: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x49B3A0u;
    SET_GPR_U32(ctx, 31, 0x49B3A8u);
    ctx->pc = 0x49B3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49B3A0u;
    // 0x49b3a4: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x49B3A0u, 0x49B3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49B3A8u;
label_49b3a8:
    // 0x49b3a8: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x49b3a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x49b3ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x49b3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49b3b0: 0xa6220076  sh          $v0, 0x76($s1)
    ctx->pc = 0x49b3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 118), (uint16_t)GPR_U32(ctx, 2));
    // 0x49b3b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x49b3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49b3b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x49b3b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49b3bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x49b3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49b3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x49B3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49B3C0u;
        // 0x49b3c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49B3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49B3C8u;
}
