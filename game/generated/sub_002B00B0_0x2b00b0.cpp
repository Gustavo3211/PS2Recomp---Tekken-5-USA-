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

// Function: sub_002B00B0
// Address: 0x2b00b0 - 0x2b0c00
void sub_002B00B0_0x2b00b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B00B0_0x2b00b0");
#endif

    switch (ctx->pc) {
        case 0x2b00f8u: goto label_2b00f8;
        case 0x2b017cu: goto label_2b017c;
        case 0x2b0194u: goto label_2b0194;
        case 0x2b01acu: goto label_2b01ac;
        case 0x2b01c8u: goto label_2b01c8;
        case 0x2b01e4u: goto label_2b01e4;
        case 0x2b0200u: goto label_2b0200;
        case 0x2b0218u: goto label_2b0218;
        case 0x2b0230u: goto label_2b0230;
        case 0x2b0248u: goto label_2b0248;
        case 0x2b02a8u: goto label_2b02a8;
        case 0x2b02c0u: goto label_2b02c0;
        case 0x2b02d8u: goto label_2b02d8;
        case 0x2b02f0u: goto label_2b02f0;
        case 0x2b0308u: goto label_2b0308;
        case 0x2b0320u: goto label_2b0320;
        case 0x2b03a8u: goto label_2b03a8;
        case 0x2b0608u: goto label_2b0608;
        case 0x2b0830u: goto label_2b0830;
        case 0x2b0854u: goto label_2b0854;
        case 0x2b0888u: goto label_2b0888;
        case 0x2b0b88u: goto label_2b0b88;
        case 0x2b0bccu: goto label_2b0bcc;
        case 0x2b0bd8u: goto label_2b0bd8;
        default: break;
    }

    ctx->pc = 0x2b00b0u;

    // 0x2b00b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b00b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b00b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b00b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b00b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b00b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b00bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b00bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b00c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b00c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b00c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b00c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b00c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b00c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b00cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b00ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b00d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b00d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b00d4: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2b00d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b00d8: 0xae600064  sw          $zero, 0x64($s3)
    ctx->pc = 0x2b00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
    // 0x2b00dc: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2b00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2b00e0: 0x1840009f  blez        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2B00E0u;
    {
        const bool branch_taken_0x2b00e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B00E0u;
        // 0x2b00e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b00e0) {
            ctx->pc = 0x2B0360u;
            goto label_2b0360;
        }
    }
    ctx->pc = 0x2B00E8u;
    // 0x2b00e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b00e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b00ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b00ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b00f0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2b00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2b00f4: 0x0  nop
    ctx->pc = 0x2b00f4u;
    // NOP
label_2b00f8:
    // 0x2b00f8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2b00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2b00fc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2b00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b0100: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b0100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b0104: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0108: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2b0108u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b010c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b010cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0110: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2b0110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0114: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2b0114u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b0118: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x2b0118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x2b011c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B011Cu;
    {
        const bool branch_taken_0x2b011c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B011Cu;
        // 0x2b0120: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b011c) {
            ctx->pc = 0x2B0140u;
            goto label_2b0140;
        }
    }
    ctx->pc = 0x2B0124u;
    // 0x2b0124: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x2b0124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0128: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2b0128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2b012c: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x2b012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0130: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x2b0130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2b0134: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2b0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0138: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x2b0138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2b013c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2b013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_2b0140:
    // 0x2b0140: 0x32420380  andi        $v0, $s2, 0x380
    ctx->pc = 0x2b0140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)896);
    // 0x2b0144: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0144u;
    {
        const bool branch_taken_0x2b0144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0144u;
        // 0x2b0148: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0144) {
            ctx->pc = 0x2B0168u;
            goto label_2b0168;
        }
    }
    ctx->pc = 0x2B014Cu;
    // 0x2b014c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x2b014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0150: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2b0150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2b0154: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x2b0154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0158: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x2b0158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2b015c: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x2b015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0160: 0xe614005c  swc1        $f20, 0x5C($s0)
    ctx->pc = 0x2b0160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2b0164: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2b0164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_2b0168:
    // 0x2b0168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0168u;
    {
        const bool branch_taken_0x2b0168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0168u;
        // 0x2b016c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0168) {
            ctx->pc = 0x2B017Cu;
            goto label_2b017c;
        }
    }
    ctx->pc = 0x2B0170u;
    // 0x2b0170: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x2b0170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0174: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0174u;
    SET_GPR_U32(ctx, 31, 0x2B017Cu);
    ctx->pc = 0x2B0178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0174u;
    // 0x2b0178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0174u, 0x2B017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B017Cu;
label_2b017c:
    // 0x2b017c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x2b017cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x2b0180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0180u;
    {
        const bool branch_taken_0x2b0180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0180u;
        // 0x2b0184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0180) {
            ctx->pc = 0x2B0194u;
            goto label_2b0194;
        }
    }
    ctx->pc = 0x2B0188u;
    // 0x2b0188: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2b0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b018c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B018Cu;
    SET_GPR_U32(ctx, 31, 0x2B0194u);
    ctx->pc = 0x2B0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B018Cu;
    // 0x2b0190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B018Cu, 0x2B0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0194u;
label_2b0194:
    // 0x2b0194: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x2b0194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x2b0198: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0198u;
    {
        const bool branch_taken_0x2b0198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0198u;
        // 0x2b019c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0198) {
            ctx->pc = 0x2B01ACu;
            goto label_2b01ac;
        }
    }
    ctx->pc = 0x2B01A0u;
    // 0x2b01a0: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x2b01a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b01a4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B01A4u;
    SET_GPR_U32(ctx, 31, 0x2B01ACu);
    ctx->pc = 0x2B01A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01A4u;
    // 0x2b01a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B01A4u, 0x2B01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01ACu;
label_2b01ac:
    // 0x2b01ac: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2b01acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2b01b0: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b01b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b01b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B01B4u;
    {
        const bool branch_taken_0x2b01b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01B4u;
        // 0x2b01b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01b4) {
            ctx->pc = 0x2B01C8u;
            goto label_2b01c8;
        }
    }
    ctx->pc = 0x2B01BCu;
    // 0x2b01bc: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x2b01bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b01c0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B01C0u;
    SET_GPR_U32(ctx, 31, 0x2B01C8u);
    ctx->pc = 0x2B01C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01C0u;
    // 0x2b01c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B01C0u, 0x2B01C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01C8u;
label_2b01c8:
    // 0x2b01c8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b01c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2b01cc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b01ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b01d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B01D0u;
    {
        const bool branch_taken_0x2b01d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01D0u;
        // 0x2b01d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01d0) {
            ctx->pc = 0x2B01E4u;
            goto label_2b01e4;
        }
    }
    ctx->pc = 0x2B01D8u;
    // 0x2b01d8: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x2b01d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b01dc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B01DCu;
    SET_GPR_U32(ctx, 31, 0x2B01E4u);
    ctx->pc = 0x2B01E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01DCu;
    // 0x2b01e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B01DCu, 0x2B01E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B01E4u;
label_2b01e4:
    // 0x2b01e4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2b01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2b01e8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b01e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b01ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B01ECu;
    {
        const bool branch_taken_0x2b01ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B01ECu;
        // 0x2b01f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b01ec) {
            ctx->pc = 0x2B0200u;
            goto label_2b0200;
        }
    }
    ctx->pc = 0x2B01F4u;
    // 0x2b01f4: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2b01f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b01f8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B01F8u;
    SET_GPR_U32(ctx, 31, 0x2B0200u);
    ctx->pc = 0x2B01FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B01F8u;
    // 0x2b01fc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B01F8u, 0x2B0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0200u;
label_2b0200:
    // 0x2b0200: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x2b0200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x2b0204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0204u;
    {
        const bool branch_taken_0x2b0204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0204u;
        // 0x2b0208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0204) {
            ctx->pc = 0x2B0218u;
            goto label_2b0218;
        }
    }
    ctx->pc = 0x2B020Cu;
    // 0x2b020c: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x2b020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0210: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0210u;
    SET_GPR_U32(ctx, 31, 0x2B0218u);
    ctx->pc = 0x2B0214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0210u;
    // 0x2b0214: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0210u, 0x2B0218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0218u;
label_2b0218:
    // 0x2b0218: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x2b0218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x2b021c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B021Cu;
    {
        const bool branch_taken_0x2b021c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B021Cu;
        // 0x2b0220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b021c) {
            ctx->pc = 0x2B0230u;
            goto label_2b0230;
        }
    }
    ctx->pc = 0x2B0224u;
    // 0x2b0224: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2b0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0228: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0228u;
    SET_GPR_U32(ctx, 31, 0x2B0230u);
    ctx->pc = 0x2B022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0228u;
    // 0x2b022c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0228u, 0x2B0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0230u;
label_2b0230:
    // 0x2b0230: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x2b0230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x2b0234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0234u;
    {
        const bool branch_taken_0x2b0234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0234u;
        // 0x2b0238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0234) {
            ctx->pc = 0x2B0248u;
            goto label_2b0248;
        }
    }
    ctx->pc = 0x2B023Cu;
    // 0x2b023c: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x2b023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0240: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0240u;
    SET_GPR_U32(ctx, 31, 0x2B0248u);
    ctx->pc = 0x2B0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0240u;
    // 0x2b0244: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0240u, 0x2B0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0248u;
label_2b0248:
    // 0x2b0248: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b0248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b024c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0250: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0250u;
    {
        const bool branch_taken_0x2b0250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0250u;
        // 0x2b0254: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0250) {
            ctx->pc = 0x2B026Cu;
            goto label_2b026c;
        }
    }
    ctx->pc = 0x2B0258u;
    // 0x2b0258: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b025c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2b025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b0260: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b0260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b0264: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0268: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2b0268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_2b026c:
    // 0x2b026c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2b026cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2b0270: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0274: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0274u;
    {
        const bool branch_taken_0x2b0274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0274) {
            ctx->pc = 0x2B0278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0274u;
            // 0x2b0278: 0xde020080  ld          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0288u;
            goto label_2b0288;
        }
    }
    ctx->pc = 0x2B027Cu;
    // 0x2b027c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2b027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2b0280: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2b0280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2b0284: 0xde020080  ld          $v0, 0x80($s0)
    ctx->pc = 0x2b0284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
label_2b0288:
    // 0x2b0288: 0x30420016  andi        $v0, $v0, 0x16
    ctx->pc = 0x2b0288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)22);
    // 0x2b028c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B028Cu;
    {
        const bool branch_taken_0x2b028c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B028Cu;
        // 0x2b0290: 0x32420400  andi        $v0, $s2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b028c) {
            ctx->pc = 0x2B0328u;
            goto label_2b0328;
        }
    }
    ctx->pc = 0x2B0294u;
    // 0x2b0294: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0294u;
    {
        const bool branch_taken_0x2b0294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0294u;
        // 0x2b0298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0294) {
            ctx->pc = 0x2B02A8u;
            goto label_2b02a8;
        }
    }
    ctx->pc = 0x2B029Cu;
    // 0x2b029c: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x2b029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b02a0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B02A0u;
    SET_GPR_U32(ctx, 31, 0x2B02A8u);
    ctx->pc = 0x2B02A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02A0u;
    // 0x2b02a4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B02A0u, 0x2B02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02A8u;
label_2b02a8:
    // 0x2b02a8: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x2b02a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
    // 0x2b02ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B02ACu;
    {
        const bool branch_taken_0x2b02ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02ACu;
        // 0x2b02b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02ac) {
            ctx->pc = 0x2B02C0u;
            goto label_2b02c0;
        }
    }
    ctx->pc = 0x2B02B4u;
    // 0x2b02b4: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2b02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b02b8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B02B8u;
    SET_GPR_U32(ctx, 31, 0x2B02C0u);
    ctx->pc = 0x2B02BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02B8u;
    // 0x2b02bc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B02B8u, 0x2B02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02C0u;
label_2b02c0:
    // 0x2b02c0: 0x32421000  andi        $v0, $s2, 0x1000
    ctx->pc = 0x2b02c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
    // 0x2b02c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B02C4u;
    {
        const bool branch_taken_0x2b02c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02C4u;
        // 0x2b02c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02c4) {
            ctx->pc = 0x2B02D8u;
            goto label_2b02d8;
        }
    }
    ctx->pc = 0x2B02CCu;
    // 0x2b02cc: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x2b02ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b02d0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B02D0u;
    SET_GPR_U32(ctx, 31, 0x2B02D8u);
    ctx->pc = 0x2B02D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02D0u;
    // 0x2b02d4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B02D0u, 0x2B02D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02D8u;
label_2b02d8:
    // 0x2b02d8: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x2b02d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x2b02dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B02DCu;
    {
        const bool branch_taken_0x2b02dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02DCu;
        // 0x2b02e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02dc) {
            ctx->pc = 0x2B02F0u;
            goto label_2b02f0;
        }
    }
    ctx->pc = 0x2B02E4u;
    // 0x2b02e4: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x2b02e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b02e8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B02E8u;
    SET_GPR_U32(ctx, 31, 0x2B02F0u);
    ctx->pc = 0x2B02ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02E8u;
    // 0x2b02ec: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B02E8u, 0x2B02F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02F0u;
label_2b02f0:
    // 0x2b02f0: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x2b02f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x2b02f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B02F4u;
    {
        const bool branch_taken_0x2b02f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02F4u;
        // 0x2b02f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02f4) {
            ctx->pc = 0x2B0308u;
            goto label_2b0308;
        }
    }
    ctx->pc = 0x2B02FCu;
    // 0x2b02fc: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x2b02fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0300: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0300u;
    SET_GPR_U32(ctx, 31, 0x2B0308u);
    ctx->pc = 0x2B0304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0300u;
    // 0x2b0304: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0300u, 0x2B0308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0308u;
label_2b0308:
    // 0x2b0308: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x2b0308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x2b030c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B030Cu;
    {
        const bool branch_taken_0x2b030c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B030Cu;
        // 0x2b0310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b030c) {
            ctx->pc = 0x2B034Cu;
            goto label_2b034c;
        }
    }
    ctx->pc = 0x2B0314u;
    // 0x2b0314: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x2b0314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0318: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0318u;
    SET_GPR_U32(ctx, 31, 0x2B0320u);
    ctx->pc = 0x2B031Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0318u;
    // 0x2b031c: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0318u, 0x2B0320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0320u;
label_2b0320:
    // 0x2b0320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B0320u;
    {
        const bool branch_taken_0x2b0320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0320u;
        // 0x2b0324: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0320) {
            ctx->pc = 0x2B0350u;
            goto label_2b0350;
        }
    }
    ctx->pc = 0x2B0328u;
label_2b0328:
    // 0x2b0328: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b0328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b032c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b032cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2b0330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0330u;
    {
        const bool branch_taken_0x2b0330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0330u;
        // 0x2b0334: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0330) {
            ctx->pc = 0x2B034Cu;
            goto label_2b034c;
        }
    }
    ctx->pc = 0x2B0338u;
    // 0x2b0338: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b033c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B033Cu;
    {
        const bool branch_taken_0x2b033c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b033c) {
            ctx->pc = 0x2B0340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B033Cu;
            // 0x2b0340: 0x8e62003c  lw          $v0, 0x3C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0350u;
            goto label_2b0350;
        }
    }
    ctx->pc = 0x2B0344u;
    // 0x2b0344: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2b0344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2b0348: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2b0348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_2b034c:
    // 0x2b034c: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2b034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_2b0350:
    // 0x2b0350: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b0350u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b0354: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2b0354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b0358: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x2B0358u;
    {
        const bool branch_taken_0x2b0358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0358u;
        // 0x2b035c: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0358) {
            ctx->pc = 0x2B00F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b00f8;
        }
    }
    ctx->pc = 0x2B0360u;
label_2b0360:
    // 0x2b0360: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2b0360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2b0364: 0x18400096  blez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B0364u;
    {
        const bool branch_taken_0x2b0364 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0364u;
        // 0x2b0368: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0364) {
            ctx->pc = 0x2B05C0u;
            goto label_2b05c0;
        }
    }
    ctx->pc = 0x2B036Cu;
    // 0x2b036c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b036cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b0370: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b0374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0378: 0x2447cec8  addiu       $a3, $v0, -0x3138
    ctx->pc = 0x2b0378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2b037c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b037cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0380: 0x24f00004  addiu       $s0, $a3, 0x4
    ctx->pc = 0x2b0380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b0384: 0x24ef0008  addiu       $t7, $a3, 0x8
    ctx->pc = 0x2b0384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b0388: 0x24ee000c  addiu       $t6, $a3, 0xC
    ctx->pc = 0x2b0388u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2b038c: 0x24ed0010  addiu       $t5, $a3, 0x10
    ctx->pc = 0x2b038cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b0390: 0x24eb0014  addiu       $t3, $a3, 0x14
    ctx->pc = 0x2b0390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b0394: 0x24ec0018  addiu       $t4, $a3, 0x18
    ctx->pc = 0x2b0394u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2b0398: 0x24ea001c  addiu       $t2, $a3, 0x1C
    ctx->pc = 0x2b0398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2b039c: 0x24e90020  addiu       $t1, $a3, 0x20
    ctx->pc = 0x2b039cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b03a0: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x2b03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x2b03a4: 0x0  nop
    ctx->pc = 0x2b03a4u;
    // NOP
label_2b03a8:
    // 0x2b03a8: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2b03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2b03ac: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b03acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2b03b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b03b4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b03b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b03b8: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2b03b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b03bc: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x2b03bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2b03c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B03C0u;
    {
        const bool branch_taken_0x2b03c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03C0u;
        // 0x2b03c4: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03c0) {
            ctx->pc = 0x2B03F4u;
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B03C8u;
    // 0x2b03c8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b03c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b03cc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b03ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b03d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b03d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b03d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B03D4u;
    {
        const bool branch_taken_0x2b03d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03D4u;
        // 0x2b03d8: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03d4) {
            ctx->pc = 0x2B03F0u;
            goto label_2b03f0;
        }
    }
    ctx->pc = 0x2B03DCu;
    // 0x2b03dc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b03e0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b03e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b03e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B03E4u;
    {
        const bool branch_taken_0x2b03e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03E4u;
        // 0x2b03e8: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03e4) {
            ctx->pc = 0x2B03F4u;
            goto label_2b03f4;
        }
    }
    ctx->pc = 0x2B03ECu;
    // 0x2b03ec: 0x0  nop
    ctx->pc = 0x2b03ecu;
    // NOP
label_2b03f0:
    // 0x2b03f0: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2b03f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2b03f4:
    // 0x2b03f4: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x2b03f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2b03f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B03F8u;
    {
        const bool branch_taken_0x2b03f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03F8u;
        // 0x2b03fc: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03f8) {
            ctx->pc = 0x2B0430u;
            goto label_2b0430;
        }
    }
    ctx->pc = 0x2B0400u;
    // 0x2b0400: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0404: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b0404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b040c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B040Cu;
    {
        const bool branch_taken_0x2b040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B040Cu;
        // 0x2b0410: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b040c) {
            ctx->pc = 0x2B0428u;
            goto label_2b0428;
        }
    }
    ctx->pc = 0x2B0414u;
    // 0x2b0414: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2b0414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b0418: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b041c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B041Cu;
    {
        const bool branch_taken_0x2b041c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B041Cu;
        // 0x2b0420: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b041c) {
            ctx->pc = 0x2B042Cu;
            goto label_2b042c;
        }
    }
    ctx->pc = 0x2B0424u;
    // 0x2b0424: 0x0  nop
    ctx->pc = 0x2b0424u;
    // NOP
label_2b0428:
    // 0x2b0428: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2b0428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2b042c:
    // 0x2b042c: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2b042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_2b0430:
    // 0x2b0430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0430u;
    {
        const bool branch_taken_0x2b0430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0430u;
        // 0x2b0434: 0x30c20100  andi        $v0, $a2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0430) {
            ctx->pc = 0x2B0468u;
            goto label_2b0468;
        }
    }
    ctx->pc = 0x2B0438u;
    // 0x2b0438: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b043c: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2b043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2b0440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0444u;
    {
        const bool branch_taken_0x2b0444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0444u;
        // 0x2b0448: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0444) {
            ctx->pc = 0x2B0460u;
            goto label_2b0460;
        }
    }
    ctx->pc = 0x2B044Cu;
    // 0x2b044c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2b044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b0450: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0454u;
    {
        const bool branch_taken_0x2b0454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0454u;
        // 0x2b0458: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0454) {
            ctx->pc = 0x2B0464u;
            goto label_2b0464;
        }
    }
    ctx->pc = 0x2B045Cu;
    // 0x2b045c: 0x0  nop
    ctx->pc = 0x2b045cu;
    // NOP
label_2b0460:
    // 0x2b0460: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b0460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2b0464:
    // 0x2b0464: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x2b0464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_2b0468:
    // 0x2b0468: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0468u;
    {
        const bool branch_taken_0x2b0468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0468u;
        // 0x2b046c: 0x30c20200  andi        $v0, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0468) {
            ctx->pc = 0x2B04A0u;
            goto label_2b04a0;
        }
    }
    ctx->pc = 0x2B0470u;
    // 0x2b0470: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0474: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b0474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b0478: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b047c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B047Cu;
    {
        const bool branch_taken_0x2b047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B047Cu;
        // 0x2b0480: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b047c) {
            ctx->pc = 0x2B0498u;
            goto label_2b0498;
        }
    }
    ctx->pc = 0x2B0484u;
    // 0x2b0484: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2b0484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2b0488: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b048c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B048Cu;
    {
        const bool branch_taken_0x2b048c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B048Cu;
        // 0x2b0490: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b048c) {
            ctx->pc = 0x2B049Cu;
            goto label_2b049c;
        }
    }
    ctx->pc = 0x2B0494u;
    // 0x2b0494: 0x0  nop
    ctx->pc = 0x2b0494u;
    // NOP
label_2b0498:
    // 0x2b0498: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2b0498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2b049c:
    // 0x2b049c: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x2b049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
label_2b04a0:
    // 0x2b04a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B04A0u;
    {
        const bool branch_taken_0x2b04a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04A0u;
        // 0x2b04a4: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04a0) {
            ctx->pc = 0x2B04D8u;
            goto label_2b04d8;
        }
    }
    ctx->pc = 0x2B04A8u;
    // 0x2b04a8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b04ac: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b04acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b04b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b04b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b04b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B04B4u;
    {
        const bool branch_taken_0x2b04b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04B4u;
        // 0x2b04b8: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04b4) {
            ctx->pc = 0x2B04D0u;
            goto label_2b04d0;
        }
    }
    ctx->pc = 0x2B04BCu;
    // 0x2b04bc: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2b04bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b04c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b04c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b04c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B04C4u;
    {
        const bool branch_taken_0x2b04c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04C4u;
        // 0x2b04c8: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04c4) {
            ctx->pc = 0x2B04D4u;
            goto label_2b04d4;
        }
    }
    ctx->pc = 0x2B04CCu;
    // 0x2b04cc: 0x0  nop
    ctx->pc = 0x2b04ccu;
    // NOP
label_2b04d0:
    // 0x2b04d0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2b04d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2b04d4:
    // 0x2b04d4: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x2b04d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
label_2b04d8:
    // 0x2b04d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B04D8u;
    {
        const bool branch_taken_0x2b04d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04D8u;
        // 0x2b04dc: 0x30c20800  andi        $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04d8) {
            ctx->pc = 0x2B0510u;
            goto label_2b0510;
        }
    }
    ctx->pc = 0x2B04E0u;
    // 0x2b04e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b04e4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2b04e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b04e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b04e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b04ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B04ECu;
    {
        const bool branch_taken_0x2b04ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04ECu;
        // 0x2b04f0: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04ec) {
            ctx->pc = 0x2B0508u;
            goto label_2b0508;
        }
    }
    ctx->pc = 0x2B04F4u;
    // 0x2b04f4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2b04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b04f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b04f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b04fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B04FCu;
    {
        const bool branch_taken_0x2b04fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B04FCu;
        // 0x2b0500: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b04fc) {
            ctx->pc = 0x2B050Cu;
            goto label_2b050c;
        }
    }
    ctx->pc = 0x2B0504u;
    // 0x2b0504: 0x0  nop
    ctx->pc = 0x2b0504u;
    // NOP
label_2b0508:
    // 0x2b0508: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2b0508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_2b050c:
    // 0x2b050c: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x2b050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_2b0510:
    // 0x2b0510: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0510u;
    {
        const bool branch_taken_0x2b0510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0510u;
        // 0x2b0514: 0x30c21000  andi        $v0, $a2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0510) {
            ctx->pc = 0x2B0548u;
            goto label_2b0548;
        }
    }
    ctx->pc = 0x2B0518u;
    // 0x2b0518: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b051c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2b051cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b0520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0524: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0524u;
    {
        const bool branch_taken_0x2b0524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0524u;
        // 0x2b0528: 0xc4a00024  lwc1        $f0, 0x24($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0524) {
            ctx->pc = 0x2B0540u;
            goto label_2b0540;
        }
    }
    ctx->pc = 0x2B052Cu;
    // 0x2b052c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b0530: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0534u;
    {
        const bool branch_taken_0x2b0534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0534u;
        // 0x2b0538: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0534) {
            ctx->pc = 0x2B0544u;
            goto label_2b0544;
        }
    }
    ctx->pc = 0x2B053Cu;
    // 0x2b053c: 0x0  nop
    ctx->pc = 0x2b053cu;
    // NOP
label_2b0540:
    // 0x2b0540: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2b0540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_2b0544:
    // 0x2b0544: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x2b0544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
label_2b0548:
    // 0x2b0548: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B0548u;
    {
        const bool branch_taken_0x2b0548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0548u;
        // 0x2b054c: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0548) {
            ctx->pc = 0x2B057Cu;
            goto label_2b057c;
        }
    }
    ctx->pc = 0x2B0550u;
    // 0x2b0550: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b0550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0554: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b0554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b0558: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b055c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2b055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b0560: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0564: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0564u;
    {
        const bool branch_taken_0x2b0564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0564) {
            ctx->pc = 0x2B0568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0564u;
            // 0x2b0568: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0578u;
            goto label_2b0578;
        }
    }
    ctx->pc = 0x2B056Cu;
    // 0x2b056c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2b056cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b0570: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0574: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b0574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0578:
    // 0x2b0578: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x2b0578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
label_2b057c:
    // 0x2b057c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B057Cu;
    {
        const bool branch_taken_0x2b057c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b057c) {
            ctx->pc = 0x2B0580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B057Cu;
            // 0x2b0580: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B05B0u;
            goto label_2b05b0;
        }
    }
    ctx->pc = 0x2B0584u;
    // 0x2b0584: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2b0584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0588: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2b0588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b058c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0590: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2b0590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b0594: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0598: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0598u;
    {
        const bool branch_taken_0x2b0598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0598) {
            ctx->pc = 0x2B059Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0598u;
            // 0x2b059c: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B05ACu;
            goto label_2b05ac;
        }
    }
    ctx->pc = 0x2B05A0u;
    // 0x2b05a0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2b05a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2b05a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b05a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b05a8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b05a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b05ac:
    // 0x2b05ac: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2b05acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2b05b0:
    // 0x2b05b0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b05b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b05b4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2b05b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b05b8: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2B05B8u;
    {
        const bool branch_taken_0x2b05b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B05BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05B8u;
        // 0x2b05bc: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05b8) {
            ctx->pc = 0x2B03A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b03a8;
        }
    }
    ctx->pc = 0x2B05C0u;
label_2b05c0:
    // 0x2b05c0: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2b05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2b05c4: 0x18400090  blez        $v0, . + 4 + (0x90 << 2)
    ctx->pc = 0x2B05C4u;
    {
        const bool branch_taken_0x2b05c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B05C4u;
        // 0x2b05c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b05c4) {
            ctx->pc = 0x2B0808u;
            goto label_2b0808;
        }
    }
    ctx->pc = 0x2B05CCu;
    // 0x2b05cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b05d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b05d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b05d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b05d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b05d8: 0x2447cde0  addiu       $a3, $v0, -0x3220
    ctx->pc = 0x2b05d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x2b05dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b05dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b05e0: 0x24ef0004  addiu       $t7, $a3, 0x4
    ctx->pc = 0x2b05e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b05e4: 0x24f00008  addiu       $s0, $a3, 0x8
    ctx->pc = 0x2b05e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b05e8: 0x24ee000c  addiu       $t6, $a3, 0xC
    ctx->pc = 0x2b05e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2b05ec: 0x24ed0010  addiu       $t5, $a3, 0x10
    ctx->pc = 0x2b05ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b05f0: 0x24eb0014  addiu       $t3, $a3, 0x14
    ctx->pc = 0x2b05f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b05f4: 0x24ec0018  addiu       $t4, $a3, 0x18
    ctx->pc = 0x2b05f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2b05f8: 0x24ea001c  addiu       $t2, $a3, 0x1C
    ctx->pc = 0x2b05f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2b05fc: 0x24e90020  addiu       $t1, $a3, 0x20
    ctx->pc = 0x2b05fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b0600: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2b0600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2b0604: 0x0  nop
    ctx->pc = 0x2b0604u;
    // NOP
label_2b0608:
    // 0x2b0608: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x2b0608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x2b060c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2b060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0610: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b0610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b0614: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b0618: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0618u;
    {
        const bool branch_taken_0x2b0618 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0618u;
        // 0x2b061c: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0618) {
            ctx->pc = 0x2B0624u;
            goto label_2b0624;
        }
    }
    ctx->pc = 0x2B0620u;
    // 0x2b0620: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b0620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b0624:
    // 0x2b0624: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b0628: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b0628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b062c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b062cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0630: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0630u;
    {
        const bool branch_taken_0x2b0630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0630) {
            ctx->pc = 0x2B0634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0630u;
            // 0x2b0634: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0644u;
            goto label_2b0644;
        }
    }
    ctx->pc = 0x2B0638u;
    // 0x2b0638: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2b0638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2b063c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b063cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0640: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b0640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0644:
    // 0x2b0644: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b0648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b064c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B064Cu;
    {
        const bool branch_taken_0x2b064c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B064Cu;
        // 0x2b0650: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b064c) {
            ctx->pc = 0x2B0658u;
            goto label_2b0658;
        }
    }
    ctx->pc = 0x2B0654u;
    // 0x2b0654: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x2b0654u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
label_2b0658:
    // 0x2b0658: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b065c: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2b065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2b0660: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0664: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0664u;
    {
        const bool branch_taken_0x2b0664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0664) {
            ctx->pc = 0x2B0668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0664u;
            // 0x2b0668: 0xe4800068  swc1        $f0, 0x68($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0678u;
            goto label_2b0678;
        }
    }
    ctx->pc = 0x2B066Cu;
    // 0x2b066c: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2b066cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2b0670: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0674: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b0674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0678:
    // 0x2b0678: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b067c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B067Cu;
    {
        const bool branch_taken_0x2b067c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B067Cu;
        // 0x2b0680: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b067c) {
            ctx->pc = 0x2B0688u;
            goto label_2b0688;
        }
    }
    ctx->pc = 0x2B0684u;
    // 0x2b0684: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b0684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b0688:
    // 0x2b0688: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b068c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b068cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b0690: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0694: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0694u;
    {
        const bool branch_taken_0x2b0694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0694) {
            ctx->pc = 0x2B0698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0694u;
            // 0x2b0698: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B06A8u;
            goto label_2b06a8;
        }
    }
    ctx->pc = 0x2B069Cu;
    // 0x2b069c: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2b069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2b06a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b06a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b06a4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b06a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b06a8:
    // 0x2b06a8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b06ac: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B06ACu;
    {
        const bool branch_taken_0x2b06ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B06B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06ACu;
        // 0x2b06b0: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06ac) {
            ctx->pc = 0x2B06B8u;
            goto label_2b06b8;
        }
    }
    ctx->pc = 0x2B06B4u;
    // 0x2b06b4: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b06b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b06b8:
    // 0x2b06b8: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b06bc: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b06bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b06c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b06c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b06c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B06C4u;
    {
        const bool branch_taken_0x2b06c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b06c4) {
            ctx->pc = 0x2B06C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B06C4u;
            // 0x2b06c8: 0xe4800070  swc1        $f0, 0x70($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B06D8u;
            goto label_2b06d8;
        }
    }
    ctx->pc = 0x2B06CCu;
    // 0x2b06cc: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2b06ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2b06d0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b06d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b06d4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b06d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b06d8:
    // 0x2b06d8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b06dc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B06DCu;
    {
        const bool branch_taken_0x2b06dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06DCu;
        // 0x2b06e0: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06dc) {
            ctx->pc = 0x2B06E8u;
            goto label_2b06e8;
        }
    }
    ctx->pc = 0x2B06E4u;
    // 0x2b06e4: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b06e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b06e8:
    // 0x2b06e8: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b06ec: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b06ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b06f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b06f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b06f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B06F4u;
    {
        const bool branch_taken_0x2b06f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b06f4) {
            ctx->pc = 0x2B06F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B06F4u;
            // 0x2b06f8: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0708u;
            goto label_2b0708;
        }
    }
    ctx->pc = 0x2B06FCu;
    // 0x2b06fc: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b06fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b0700: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0704: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b0704u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0708:
    // 0x2b0708: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b070c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B070Cu;
    {
        const bool branch_taken_0x2b070c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B070Cu;
        // 0x2b0710: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b070c) {
            ctx->pc = 0x2B0718u;
            goto label_2b0718;
        }
    }
    ctx->pc = 0x2B0714u;
    // 0x2b0714: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b0714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b0718:
    // 0x2b0718: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b071c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2b071cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b0720: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0724: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0724u;
    {
        const bool branch_taken_0x2b0724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0724) {
            ctx->pc = 0x2B0728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0724u;
            // 0x2b0728: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0738u;
            goto label_2b0738;
        }
    }
    ctx->pc = 0x2B072Cu;
    // 0x2b072c: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2b072cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2b0730: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0734: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b0734u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0738:
    // 0x2b0738: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b073c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B073Cu;
    {
        const bool branch_taken_0x2b073c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B073Cu;
        // 0x2b0740: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b073c) {
            ctx->pc = 0x2B0748u;
            goto label_2b0748;
        }
    }
    ctx->pc = 0x2B0744u;
    // 0x2b0744: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b0744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b0748:
    // 0x2b0748: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b074c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2b074cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b0750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0754: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0754u;
    {
        const bool branch_taken_0x2b0754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0754) {
            ctx->pc = 0x2B0758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0754u;
            // 0x2b0758: 0xe480007c  swc1        $f0, 0x7C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0768u;
            goto label_2b0768;
        }
    }
    ctx->pc = 0x2B075Cu;
    // 0x2b075c: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2b075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2b0760: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0764: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b0764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0768:
    // 0x2b0768: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b076c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B076Cu;
    {
        const bool branch_taken_0x2b076c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B076Cu;
        // 0x2b0770: 0xc4a00034  lwc1        $f0, 0x34($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b076c) {
            ctx->pc = 0x2B0778u;
            goto label_2b0778;
        }
    }
    ctx->pc = 0x2B0774u;
    // 0x2b0774: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b0774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b0778:
    // 0x2b0778: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b077c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2b077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b0780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0784: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0784u;
    {
        const bool branch_taken_0x2b0784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0784) {
            ctx->pc = 0x2B0788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0784u;
            // 0x2b0788: 0xe4800080  swc1        $f0, 0x80($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0798u;
            goto label_2b0798;
        }
    }
    ctx->pc = 0x2B078Cu;
    // 0x2b078c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2b078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2b0790: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0794: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b0794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0798:
    // 0x2b0798: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b0798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b079c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B079Cu;
    {
        const bool branch_taken_0x2b079c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B079Cu;
        // 0x2b07a0: 0xc4a00038  lwc1        $f0, 0x38($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b079c) {
            ctx->pc = 0x2B07A8u;
            goto label_2b07a8;
        }
    }
    ctx->pc = 0x2B07A4u;
    // 0x2b07a4: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b07a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b07a8:
    // 0x2b07a8: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b07ac: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2b07acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b07b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b07b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b07b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B07B4u;
    {
        const bool branch_taken_0x2b07b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b07b4) {
            ctx->pc = 0x2B07B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B07B4u;
            // 0x2b07b8: 0xe4800084  swc1        $f0, 0x84($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B07C8u;
            goto label_2b07c8;
        }
    }
    ctx->pc = 0x2B07BCu;
    // 0x2b07bc: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2b07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2b07c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b07c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b07c4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b07c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b07c8:
    // 0x2b07c8: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2b07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b07cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b07ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b07d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b07d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b07d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b07d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b07d8: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x2b07d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2b07dc: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b07e0: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2b07e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2b07e4: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x2b07e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b07e8: 0xe482004c  swc1        $f2, 0x4C($a0)
    ctx->pc = 0x2b07e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2b07ec: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x2b07ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2b07f0: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x2b07f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2b07f4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2b07f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2b07f8: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2b07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2b07fc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2b07fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b0800: 0x5440ff81  bnel        $v0, $zero, . + 4 + (-0x7F << 2)
    ctx->pc = 0x2B0800u;
    {
        const bool branch_taken_0x2b0800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0800) {
            ctx->pc = 0x2B0804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0800u;
            // 0x2b0804: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0608;
        }
    }
    ctx->pc = 0x2B0808u;
label_2b0808:
    // 0x2b0808: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x2b0808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2b080c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b080cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b0810: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0814: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B0814u;
    {
        const bool branch_taken_0x2b0814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0814) {
            ctx->pc = 0x2B0818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0814u;
            // 0x2b0818: 0x8e62004c  lw          $v0, 0x4C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0868u;
            goto label_2b0868;
        }
    }
    ctx->pc = 0x2B081Cu;
    // 0x2b081c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x2b081cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2b0820: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0820u;
    {
        const bool branch_taken_0x2b0820 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B0824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0820u;
        // 0x2b0824: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0820) {
            ctx->pc = 0x2B0864u;
            goto label_2b0864;
        }
    }
    ctx->pc = 0x2B0828u;
    // 0x2b0828: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x2b0828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b082c: 0x0  nop
    ctx->pc = 0x2b082cu;
    // NOP
label_2b0830:
    // 0x2b0830: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2b0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2b0834: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b0834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2b0838: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b0838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b083c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2b083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2b0840: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b0840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b0844: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b0844u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b0848: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b0848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b084c: 0xc0aad18  jal         func_2AB460
    ctx->pc = 0x2B084Cu;
    SET_GPR_U32(ctx, 31, 0x2B0854u);
    ctx->pc = 0x2B0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B084Cu;
    // 0x2b0850: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB460u, 0x2B084Cu, 0x2B0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0854u;
label_2b0854:
    // 0x2b0854: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x2b0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2b0858: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2b0858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b085c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B085Cu;
    {
        const bool branch_taken_0x2b085c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B085Cu;
        // 0x2b0860: 0x102880  sll         $a1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b085c) {
            ctx->pc = 0x2B0830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0830;
        }
    }
    ctx->pc = 0x2B0864u;
label_2b0864:
    // 0x2b0864: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2b0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
label_2b0868:
    // 0x2b0868: 0x184000ce  blez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x2B0868u;
    {
        const bool branch_taken_0x2b0868 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0868u;
        // 0x2b086c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0868) {
            ctx->pc = 0x2B0BA4u;
            goto label_2b0ba4;
        }
    }
    ctx->pc = 0x2B0870u;
    // 0x2b0870: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2b0870u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2b0874: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b0874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b0878: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b0878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b087c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b087cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0880: 0x26b2ce50  addiu       $s2, $s5, -0x31B0
    ctx->pc = 0x2b0880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954576));
    // 0x2b0884: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2b0884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2b0888:
    // 0x2b0888: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2b0888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b088c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b088cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b0890: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0894: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2b0894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2b0898: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b089c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2b089cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b08a0: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x2b08a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b08a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b08a8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B08A8u;
    {
        const bool branch_taken_0x2b08a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08A8u;
        // 0x2b08ac: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08a8) {
            ctx->pc = 0x2B08B4u;
            goto label_2b08b4;
        }
    }
    ctx->pc = 0x2B08B0u;
    // 0x2b08b0: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b08b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b08b4:
    // 0x2b08b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b08b8: 0x8ea3ce50  lw          $v1, -0x31B0($s5)
    ctx->pc = 0x2b08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954576)));
    // 0x2b08bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b08c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B08C0u;
    {
        const bool branch_taken_0x2b08c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b08c0) {
            ctx->pc = 0x2B08C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B08C0u;
            // 0x2b08c4: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B08D4u;
            goto label_2b08d4;
        }
    }
    ctx->pc = 0x2B08C8u;
    // 0x2b08c8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2b08c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b08cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b08ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b08d0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b08d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b08d4:
    // 0x2b08d4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b08d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b08d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b08dc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B08DCu;
    {
        const bool branch_taken_0x2b08dc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08DCu;
        // 0x2b08e0: 0xc4c00010  lwc1        $f0, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08dc) {
            ctx->pc = 0x2B08E8u;
            goto label_2b08e8;
        }
    }
    ctx->pc = 0x2B08E4u;
    // 0x2b08e4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2b08e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2b08e8:
    // 0x2b08e8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b08ec: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b08ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b08f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b08f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b08f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B08F4u;
    {
        const bool branch_taken_0x2b08f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b08f4) {
            ctx->pc = 0x2B08F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B08F4u;
            // 0x2b08f8: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0908u;
            goto label_2b0908;
        }
    }
    ctx->pc = 0x2B08FCu;
    // 0x2b08fc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b08fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b0900: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0904: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0908:
    // 0x2b0908: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b090c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B090Cu;
    {
        const bool branch_taken_0x2b090c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B090Cu;
        // 0x2b0910: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b090c) {
            ctx->pc = 0x2B0918u;
            goto label_2b0918;
        }
    }
    ctx->pc = 0x2B0914u;
    // 0x2b0914: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0918:
    // 0x2b0918: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b091c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b0920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0924: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0924u;
    {
        const bool branch_taken_0x2b0924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0924) {
            ctx->pc = 0x2B0928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0924u;
            // 0x2b0928: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0938u;
            goto label_2b0938;
        }
    }
    ctx->pc = 0x2B092Cu;
    // 0x2b092c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2b092cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b0930: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0934: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0934u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0938:
    // 0x2b0938: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b093c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B093Cu;
    {
        const bool branch_taken_0x2b093c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B093Cu;
        // 0x2b0940: 0xc4c00018  lwc1        $f0, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b093c) {
            ctx->pc = 0x2B0948u;
            goto label_2b0948;
        }
    }
    ctx->pc = 0x2B0944u;
    // 0x2b0944: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0948:
    // 0x2b0948: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b094c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2b094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b0950: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0954: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0954u;
    {
        const bool branch_taken_0x2b0954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0954) {
            ctx->pc = 0x2B0958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0954u;
            // 0x2b0958: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0968u;
            goto label_2b0968;
        }
    }
    ctx->pc = 0x2B095Cu;
    // 0x2b095c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b0960: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0964: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0968:
    // 0x2b0968: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b096c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B096Cu;
    {
        const bool branch_taken_0x2b096c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B096Cu;
        // 0x2b0970: 0xc4c0001c  lwc1        $f0, 0x1C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b096c) {
            ctx->pc = 0x2B0978u;
            goto label_2b0978;
        }
    }
    ctx->pc = 0x2B0974u;
    // 0x2b0974: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0978:
    // 0x2b0978: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b097c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2b097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b0980: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0984: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0984u;
    {
        const bool branch_taken_0x2b0984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0984) {
            ctx->pc = 0x2B0988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0984u;
            // 0x2b0988: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0998u;
            goto label_2b0998;
        }
    }
    ctx->pc = 0x2B098Cu;
    // 0x2b098c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b098cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b0990: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0994: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0998:
    // 0x2b0998: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b099c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B099Cu;
    {
        const bool branch_taken_0x2b099c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B09A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B099Cu;
        // 0x2b09a0: 0xc4c00020  lwc1        $f0, 0x20($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b099c) {
            ctx->pc = 0x2B09A8u;
            goto label_2b09a8;
        }
    }
    ctx->pc = 0x2B09A4u;
    // 0x2b09a4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b09a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b09a8:
    // 0x2b09a8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b09ac: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b09acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b09b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b09b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b09b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B09B4u;
    {
        const bool branch_taken_0x2b09b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b09b4) {
            ctx->pc = 0x2B09B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B09B4u;
            // 0x2b09b8: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B09C8u;
            goto label_2b09c8;
        }
    }
    ctx->pc = 0x2B09BCu;
    // 0x2b09bc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b09c0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b09c4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b09c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b09c8:
    // 0x2b09c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b09c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b09cc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B09CCu;
    {
        const bool branch_taken_0x2b09cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09CCu;
        // 0x2b09d0: 0xc4c00024  lwc1        $f0, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09cc) {
            ctx->pc = 0x2B09D8u;
            goto label_2b09d8;
        }
    }
    ctx->pc = 0x2B09D4u;
    // 0x2b09d4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b09d8:
    // 0x2b09d8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b09dc: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2b09dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2b09e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b09e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b09e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B09E4u;
    {
        const bool branch_taken_0x2b09e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b09e4) {
            ctx->pc = 0x2B09E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B09E4u;
            // 0x2b09e8: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B09F8u;
            goto label_2b09f8;
        }
    }
    ctx->pc = 0x2B09ECu;
    // 0x2b09ec: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b09ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b09f0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b09f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b09f4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b09f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b09f8:
    // 0x2b09f8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b09fc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B09FCu;
    {
        const bool branch_taken_0x2b09fc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09FCu;
        // 0x2b0a00: 0xc4c00028  lwc1        $f0, 0x28($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b09fc) {
            ctx->pc = 0x2B0A08u;
            goto label_2b0a08;
        }
    }
    ctx->pc = 0x2B0A04u;
    // 0x2b0a04: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0a08:
    // 0x2b0a08: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0a0c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2b0a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2b0a10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0a14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A14u;
    {
        const bool branch_taken_0x2b0a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0a14) {
            ctx->pc = 0x2B0A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0A14u;
            // 0x2b0a18: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0A28u;
            goto label_2b0a28;
        }
    }
    ctx->pc = 0x2B0A1Cu;
    // 0x2b0a1c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2b0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2b0a20: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0a24: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0a28:
    // 0x2b0a28: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b0a2c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0A2Cu;
    {
        const bool branch_taken_0x2b0a2c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A2Cu;
        // 0x2b0a30: 0xc4c0002c  lwc1        $f0, 0x2C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a2c) {
            ctx->pc = 0x2B0A38u;
            goto label_2b0a38;
        }
    }
    ctx->pc = 0x2B0A34u;
    // 0x2b0a34: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0a38:
    // 0x2b0a38: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0a3c: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2b0a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b0a40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0a44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A44u;
    {
        const bool branch_taken_0x2b0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0a44) {
            ctx->pc = 0x2B0A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0A44u;
            // 0x2b0a48: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0A58u;
            goto label_2b0a58;
        }
    }
    ctx->pc = 0x2B0A4Cu;
    // 0x2b0a4c: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2b0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b0a50: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0a54: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0a58:
    // 0x2b0a58: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b0a5c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0A5Cu;
    {
        const bool branch_taken_0x2b0a5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A5Cu;
        // 0x2b0a60: 0xc4c00030  lwc1        $f0, 0x30($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a5c) {
            ctx->pc = 0x2B0A68u;
            goto label_2b0a68;
        }
    }
    ctx->pc = 0x2B0A64u;
    // 0x2b0a64: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0a68:
    // 0x2b0a68: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0a6c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2b0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2b0a70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0a74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0A74u;
    {
        const bool branch_taken_0x2b0a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0a74) {
            ctx->pc = 0x2B0A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0A74u;
            // 0x2b0a78: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0A88u;
            goto label_2b0a88;
        }
    }
    ctx->pc = 0x2B0A7Cu;
    // 0x2b0a7c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2b0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2b0a80: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0a84: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0a84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0a88:
    // 0x2b0a88: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b0a8c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0A8Cu;
    {
        const bool branch_taken_0x2b0a8c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A8Cu;
        // 0x2b0a90: 0xc4c00034  lwc1        $f0, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a8c) {
            ctx->pc = 0x2B0A98u;
            goto label_2b0a98;
        }
    }
    ctx->pc = 0x2B0A94u;
    // 0x2b0a94: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0a98:
    // 0x2b0a98: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0a9c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2b0a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2b0aa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0aa4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0AA4u;
    {
        const bool branch_taken_0x2b0aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0aa4) {
            ctx->pc = 0x2B0AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0AA4u;
            // 0x2b0aa8: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0AB8u;
            goto label_2b0ab8;
        }
    }
    ctx->pc = 0x2B0AACu;
    // 0x2b0aac: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2b0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2b0ab0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0ab4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0ab4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0ab8:
    // 0x2b0ab8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b0abc: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0ABCu;
    {
        const bool branch_taken_0x2b0abc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0ABCu;
        // 0x2b0ac0: 0xc4c00038  lwc1        $f0, 0x38($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0abc) {
            ctx->pc = 0x2B0AC8u;
            goto label_2b0ac8;
        }
    }
    ctx->pc = 0x2B0AC4u;
    // 0x2b0ac4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0ac8:
    // 0x2b0ac8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0acc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2b0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2b0ad0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0ad4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0AD4u;
    {
        const bool branch_taken_0x2b0ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0ad4) {
            ctx->pc = 0x2B0AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0AD4u;
            // 0x2b0ad8: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0AE8u;
            goto label_2b0ae8;
        }
    }
    ctx->pc = 0x2B0ADCu;
    // 0x2b0adc: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b0adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b0ae0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0ae4: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0ae4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0ae8:
    // 0x2b0ae8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b0aec: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0AECu;
    {
        const bool branch_taken_0x2b0aec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0AECu;
        // 0x2b0af0: 0xc4c0003c  lwc1        $f0, 0x3C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0aec) {
            ctx->pc = 0x2B0AF8u;
            goto label_2b0af8;
        }
    }
    ctx->pc = 0x2B0AF4u;
    // 0x2b0af4: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0af8:
    // 0x2b0af8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0afc: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2b0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2b0b00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0b04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B04u;
    {
        const bool branch_taken_0x2b0b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b04) {
            ctx->pc = 0x2B0B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0B04u;
            // 0x2b0b08: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0B18u;
            goto label_2b0b18;
        }
    }
    ctx->pc = 0x2B0B0Cu;
    // 0x2b0b0c: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b0b10: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0b14: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0b14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0b18:
    // 0x2b0b18: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b0b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b0b1c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0B1Cu;
    {
        const bool branch_taken_0x2b0b1c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B1Cu;
        // 0x2b0b20: 0xc4c00040  lwc1        $f0, 0x40($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b1c) {
            ctx->pc = 0x2B0B28u;
            goto label_2b0b28;
        }
    }
    ctx->pc = 0x2B0B24u;
    // 0x2b0b24: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b0b28:
    // 0x2b0b28: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b0b2c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2b0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b0b30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0b34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0B34u;
    {
        const bool branch_taken_0x2b0b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b34) {
            ctx->pc = 0x2B0B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0B34u;
            // 0x2b0b38: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0B48u;
            goto label_2b0b48;
        }
    }
    ctx->pc = 0x2B0B3Cu;
    // 0x2b0b3c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b0b40: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0b44: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b0b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b0b48:
    // 0x2b0b48: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x2b0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0b4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b0b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0b50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b0b54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b0b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0b58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b0b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b0b5c: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2b0b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b0b60: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2b0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b0b64: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x2b0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0b68: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b0b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b0b6c: 0xc4c1004c  lwc1        $f1, 0x4C($a2)
    ctx->pc = 0x2b0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0b70: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2b0b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2b0b74: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2b0b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b0b78: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x2b0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2b0b7c: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x2b0b80: 0xc0ca4d2  jal         func_329348
    ctx->pc = 0x2B0B80u;
    SET_GPR_U32(ctx, 31, 0x2B0B88u);
    ctx->pc = 0x2B0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0B80u;
    // 0x2b0b84: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329348u, 0x2B0B80u, 0x2B0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0B88u;
label_2b0b88:
    // 0x2b0b88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b0b8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2b0b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2b0b90: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2b0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2b0b94: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2b0b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2b0b98: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2b0b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0b9c: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x2B0B9Cu;
    {
        const bool branch_taken_0x2b0b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B9Cu;
        // 0x2b0ba0: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b9c) {
            ctx->pc = 0x2B0888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0888;
        }
    }
    ctx->pc = 0x2B0BA4u;
label_2b0ba4:
    // 0x2b0ba4: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2b0ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2b0ba8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b0bac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B0BACu;
    {
        const bool branch_taken_0x2b0bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BACu;
        // 0x2b0bb0: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bac) {
            ctx->pc = 0x2B0BD8u;
            goto label_2b0bd8;
        }
    }
    ctx->pc = 0x2B0BB4u;
    // 0x2b0bb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0BB4u;
    {
        const bool branch_taken_0x2b0bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BB4u;
        // 0x2b0bb8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0bb4) {
            ctx->pc = 0x2B0BDCu;
            goto label_2b0bdc;
        }
    }
    ctx->pc = 0x2B0BBCu;
    // 0x2b0bbc: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2b0bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b0bc0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2b0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b0bc4: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B0BC4u;
    SET_GPR_U32(ctx, 31, 0x2B0BCCu);
    ctx->pc = 0x2B0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BC4u;
    // 0x2b0bc8: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B0BC4u, 0x2B0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BCCu;
label_2b0bcc:
    // 0x2b0bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0bd0: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B0BD0u;
    SET_GPR_U32(ctx, 31, 0x2B0BD8u);
    ctx->pc = 0x2B0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0BD0u;
    // 0x2b0bd4: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B0BD0u, 0x2B0BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0BD8u;
label_2b0bd8:
    // 0x2b0bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0bdc:
    // 0x2b0bdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b0bdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b0be0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b0be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0be4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b0be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b0be8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b0be8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0bec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b0becu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b0bf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0bf4: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2b0bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b0bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0BF8u;
        // 0x2b0bfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0C00u;
}
