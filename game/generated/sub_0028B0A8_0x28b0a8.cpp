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

// Function: sub_0028B0A8
// Address: 0x28b0a8 - 0x28b310
void sub_0028B0A8_0x28b0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B0A8_0x28b0a8");
#endif

    switch (ctx->pc) {
        case 0x28b134u: goto label_28b134;
        case 0x28b180u: goto label_28b180;
        case 0x28b188u: goto label_28b188;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b244u: goto label_28b244;
        case 0x28b268u: goto label_28b268;
        case 0x28b2dcu: goto label_28b2dc;
        default: break;
    }

    ctx->pc = 0x28b0a8u;

    // 0x28b0a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28b0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28b0ac: 0x24840158  addiu       $a0, $a0, 0x158
    ctx->pc = 0x28b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    // 0x28b0b0: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x28b0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x28b0b4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x28b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x28b0b8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x28b0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x28b0bc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x28b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x28b0c0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x28b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x28b0c4: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x28b0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x28b0c8: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x28b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x28b0cc: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x28b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x28b0d0: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x28b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x28b0d4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x28b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x28b0d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x28b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28b0dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B0DCu;
    {
        const bool branch_taken_0x28b0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0DCu;
        // 0x28b0e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0dc) {
            ctx->pc = 0x28B0F4u;
            goto label_28b0f4;
        }
    }
    ctx->pc = 0x28B0E4u;
    // 0x28b0e4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28b0e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28b0ec: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B0ECu;
    {
        const bool branch_taken_0x28b0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28b0ec) {
            ctx->pc = 0x28B0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B0ECu;
            // 0x28b0f0: 0x8e0400e8  lw          $a0, 0xE8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B104u;
            goto label_28b104;
        }
    }
    ctx->pc = 0x28B0F4u;
label_28b0f4:
    // 0x28b0f4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x28b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x28b0f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b0fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x28b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x28b100: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x28b100u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0xE8u));
label_28b104:
    // 0x28b104: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x28b104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x28b108: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x28B108u;
    {
        const bool branch_taken_0x28b108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B108u;
        // 0x28b10c: 0x245483c0  addiu       $s4, $v0, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b108) {
            ctx->pc = 0x28B2DCu;
            goto label_28b2dc;
        }
    }
    ctx->pc = 0x28B110u;
    // 0x28b110: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x28b110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x28b114: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x28b114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x28b118: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28b118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28b11c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x28b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x28b120: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28b124: 0x5460006e  bnel        $v1, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x28B124u;
    {
        const bool branch_taken_0x28b124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b124) {
            ctx->pc = 0x28B128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B124u;
            // 0x28b128: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B2E0u;
            goto label_28b2e0;
        }
    }
    ctx->pc = 0x28B12Cu;
    // 0x28b12c: 0xc0a39b4  jal         func_28E6D0
    ctx->pc = 0x28B12Cu;
    SET_GPR_U32(ctx, 31, 0x28B134u);
    ctx->pc = 0x28E6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E6D0u, 0x28B12Cu, 0x28B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B134u;
label_28b134:
    // 0x28b134: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x28B134u;
    {
        const bool branch_taken_0x28b134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b134) {
            ctx->pc = 0x28B138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B134u;
            // 0x28b138: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B2E0u;
            goto label_28b2e0;
        }
    }
    ctx->pc = 0x28B13Cu;
    // 0x28b13c: 0x8e820198  lw          $v0, 0x198($s4)
    ctx->pc = 0x28b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 408)));
    // 0x28b140: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x28B140u;
    {
        const bool branch_taken_0x28b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B140u;
        // 0x28b144: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b140) {
            ctx->pc = 0x28B2DCu;
            goto label_28b2dc;
        }
    }
    ctx->pc = 0x28B148u;
    // 0x28b148: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x28b148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x28b14c: 0x24bea208  addiu       $fp, $a1, -0x5DF8
    ctx->pc = 0x28b14cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943240));
    // 0x28b150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b154: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x28b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28b158: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28b158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28b15c: 0x3c1780ff  lui         $s7, 0x80FF
    ctx->pc = 0x28b15cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)33023 << 16));
    // 0x28b160: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x28b160u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
    // 0x28b164: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x28b164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x28b168: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28b168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b16c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x28b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x28b170: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x28b170u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x28b174: 0x36d600ff  ori         $s6, $s6, 0xFF
    ctx->pc = 0x28b174u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)255);
    // 0x28b178: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x28B178u;
    SET_GPR_U32(ctx, 31, 0x28B180u);
    ctx->pc = 0x28B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B178u;
    // 0x28b17c: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x28B178u, 0x28B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B180u;
label_28b180:
    // 0x28b180: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x28b180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28b184: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x28b184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_28b188:
    // 0x28b188: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x28b188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x28b18c: 0x248483e0  addiu       $a0, $a0, -0x7C20
    ctx->pc = 0x28b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935520));
    // 0x28b190: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x28b190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x28b194: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x28b194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28b198: 0x24a583e4  addiu       $a1, $a1, -0x7C1C
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935524));
    // 0x28b19c: 0x8c640190  lw          $a0, 0x190($v1)
    ctx->pc = 0x28b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x28b1a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28b1a4: 0x8c520180  lw          $s2, 0x180($v0)
    ctx->pc = 0x28b1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
    // 0x28b1a8: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x28B1A8u;
    SET_GPR_U32(ctx, 31, 0x28B1B0u);
    ctx->pc = 0x28B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1A8u;
    // 0x28b1ac: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x28B1A8u, 0x28B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1B0u;
label_28b1b0:
    // 0x28b1b0: 0xc08e48c  jal         func_239230
    ctx->pc = 0x28B1B0u;
    SET_GPR_U32(ctx, 31, 0x28B1B8u);
    ctx->pc = 0x28B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1B0u;
    // 0x28b1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239230u, 0x28B1B0u, 0x28B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1B8u;
label_28b1b8:
    // 0x28b1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1bc: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x28b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x28b1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x28B1C4u;
    SET_GPR_U32(ctx, 31, 0x28B1CCu);
    ctx->pc = 0x28B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1C4u;
    // 0x28b1c8: 0x529023  subu        $s2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x28B1C4u, 0x28B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1CCu;
label_28b1cc:
    // 0x28b1cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28b1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1d0: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x28b1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x28b1d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1d8: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x28B1D8u;
    SET_GPR_U32(ctx, 31, 0x28B1E0u);
    ctx->pc = 0x28B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1D8u;
    // 0x28b1dc: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x28B1D8u, 0x28B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1E0u;
label_28b1e0:
    // 0x28b1e0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x28b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x28b1e4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28b1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28b1e8: 0x8e84019c  lw          $a0, 0x19C($s4)
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x28b1ec: 0x24a5a20c  addiu       $a1, $a1, -0x5DF4
    ctx->pc = 0x28b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943244));
    // 0x28b1f0: 0xa7a00048  sh          $zero, 0x48($sp)
    ctx->pc = 0x28b1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 72), (uint16_t)GPR_U32(ctx, 0));
    // 0x28b1f4: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x28b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28b1f8: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x28b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x28b1fc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x28b1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28b200: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28b200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28b204: 0x2642026  xor         $a0, $s3, $a0
    ctx->pc = 0x28b204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 4));
    // 0x28b208: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x28b208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28b20c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x28b20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b210: 0x2e4880b  movn        $s1, $s7, $a0
    ctx->pc = 0x28b210u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 23));
    // 0x28b214: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b218: 0x24449bb0  addiu       $a0, $v0, -0x6450
    ctx->pc = 0x28b218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941616));
    // 0x28b21c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x28b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28b220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b224: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b228: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x28b228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28b22c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x28b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x28b230: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x28b234: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x28b234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b238: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28b238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x28b23c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28B23Cu;
    SET_GPR_U32(ctx, 31, 0x28B244u);
    ctx->pc = 0x28B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B23Cu;
    // 0x28b240: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28B23Cu, 0x28B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B244u;
label_28b244:
    // 0x28b244: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x28b244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b248: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28b248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28b24c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x28b24cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28b250: 0x24a49bc0  addiu       $a0, $a1, -0x6440
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941632));
    // 0x28b254: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x28b254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b258: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x28b258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b25c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b260: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28B260u;
    SET_GPR_U32(ctx, 31, 0x28B268u);
    ctx->pc = 0x28B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B260u;
    // 0x28b264: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28B260u, 0x28B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B268u;
label_28b268:
    // 0x28b268: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x28b268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28b26c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x28B26Cu;
    {
        const bool branch_taken_0x28b26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B26Cu;
        // 0x28b270: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b26c) {
            ctx->pc = 0x28B188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b188;
        }
    }
    ctx->pc = 0x28B274u;
    // 0x28b274: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x28b274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x28b278: 0x8e85019c  lw          $a1, 0x19C($s4)
    ctx->pc = 0x28b278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
    // 0x28b27c: 0x2443a208  addiu       $v1, $v0, -0x5DF8
    ctx->pc = 0x28b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943240));
    // 0x28b280: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x28b284: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x28b284u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x47A224u));
    // 0x28b288: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x28b288u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x28b28c: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x28b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x47A220u));
    // 0x28b290: 0x38a50003  xori        $a1, $a1, 0x3
    ctx->pc = 0x28b290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x28b294: 0x8fac0000  lw          $t4, 0x0($sp)
    ctx->pc = 0x28b294u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b298: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28b29c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28b2a0: 0x352900ff  ori         $t1, $t1, 0xFF
    ctx->pc = 0x28b2a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)255);
    // 0x28b2a4: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x28b2a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x28b2a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x28b2ac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x28b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28b2b0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28b2b4: 0x45480b  movn        $t1, $v0, $a1
    ctx->pc = 0x28b2b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 2));
    // 0x28b2b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28b2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2bc: 0x24849bd0  addiu       $a0, $a0, -0x6430
    ctx->pc = 0x28b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941648));
    // 0x28b2c0: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x28b2c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2c4: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x28b2c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b2c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28b2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b2cc: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x28b2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x28b2d0: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x28b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x28b2d4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x28B2D4u;
    SET_GPR_U32(ctx, 31, 0x28B2DCu);
    ctx->pc = 0x28B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2D4u;
    // 0x28b2d8: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x28B2D4u, 0x28B2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2DCu;
label_28b2dc:
    // 0x28b2dc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x28b2dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28b2e0:
    // 0x28b2e0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x28b2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28b2e4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x28b2e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b2e8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x28b2e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28b2ec: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x28b2ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b2f0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x28b2f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x28b2f4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x28b2f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b2f8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x28b2f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x28b2fc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x28b2fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b300: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x28b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x28b304: 0x3e00008  jr          $ra
    ctx->pc = 0x28B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B304u;
        // 0x28b308: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B30Cu;
    // 0x28b30c: 0x0  nop
    ctx->pc = 0x28b30cu;
    // NOP
    ctx->pc = 0x28b310u;
}
