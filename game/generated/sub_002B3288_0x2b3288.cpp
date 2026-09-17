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

// Function: sub_002B3288
// Address: 0x2b3288 - 0x2b33c8
void sub_002B3288_0x2b3288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3288_0x2b3288");
#endif

    switch (ctx->pc) {
        case 0x2b32c8u: goto label_2b32c8;
        case 0x2b32fcu: goto label_2b32fc;
        case 0x2b3394u: goto label_2b3394;
        default: break;
    }

    ctx->pc = 0x2b3288u;

    // 0x2b3288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b328c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b3294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b3298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b329c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b329cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b32a0: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x2b32a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b32a4: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B32A4u;
    {
        const bool branch_taken_0x2b32a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B32A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32A4u;
        // 0x2b32a8: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32a4) {
            ctx->pc = 0x2B32D8u;
            goto label_2b32d8;
        }
    }
    ctx->pc = 0x2B32ACu;
    // 0x2b32ac: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b32b0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b32b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b32b4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B32B4u;
    {
        const bool branch_taken_0x2b32b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B32B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32B4u;
        // 0x2b32b8: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32b4) {
            ctx->pc = 0x2B32C0u;
            goto label_2b32c0;
        }
    }
    ctx->pc = 0x2B32BCu;
    // 0x2b32bc: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2b32bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2b32c0:
    // 0x2b32c0: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B32C0u;
    SET_GPR_U32(ctx, 31, 0x2B32C8u);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B32C0u, 0x2B32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32C8u;
label_2b32c8:
    // 0x2b32c8: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x2b32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x2b32cc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B32CCu;
    {
        const bool branch_taken_0x2b32cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32CCu;
        // 0x2b32d0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32cc) {
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B32D4u;
    // 0x2b32d4: 0x0  nop
    ctx->pc = 0x2b32d4u;
    // NOP
label_2b32d8:
    // 0x2b32d8: 0x16200013  bnez        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B32D8u;
    {
        const bool branch_taken_0x2b32d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32D8u;
        // 0x2b32dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32d8) {
            ctx->pc = 0x2B3328u;
            goto label_2b3328;
        }
    }
    ctx->pc = 0x2B32E0u;
    // 0x2b32e0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b32e4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b32e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b32e8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B32E8u;
    {
        const bool branch_taken_0x2b32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B32E8u;
        // 0x2b32ec: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b32e8) {
            ctx->pc = 0x2B32F4u;
            goto label_2b32f4;
        }
    }
    ctx->pc = 0x2B32F0u;
    // 0x2b32f0: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2b32f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2b32f4:
    // 0x2b32f4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B32F4u;
    SET_GPR_U32(ctx, 31, 0x2B32FCu);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B32F4u, 0x2B32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B32FCu;
label_2b32fc:
    // 0x2b32fc: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x2b32fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b3300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3308: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3308u;
    {
        const bool branch_taken_0x2b3308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3308) {
            ctx->pc = 0x2B330Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3308u;
            // 0x2b330c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3318u;
            goto label_2b3318;
        }
    }
    ctx->pc = 0x2B3310u;
    // 0x2b3310: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2B3310u;
    {
        const bool branch_taken_0x2b3310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3310u;
        // 0x2b3314: 0xae0400c8  sw          $a0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3310) {
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B3318u;
label_2b3318:
    // 0x2b3318: 0x50620025  beql        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B3318u;
    {
        const bool branch_taken_0x2b3318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3318) {
            ctx->pc = 0x2B331Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3318u;
            // 0x2b331c: 0xae0400e8  sw          $a0, 0xE8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B3320u;
    // 0x2b3320: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2B3320u;
    {
        const bool branch_taken_0x2b3320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3320u;
        // 0x2b3324: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3320) {
            ctx->pc = 0x2B33B4u;
            goto label_2b33b4;
        }
    }
    ctx->pc = 0x2B3328u;
label_2b3328:
    // 0x2b3328: 0x16320011  bne         $s1, $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3328u;
    {
        const bool branch_taken_0x2b3328 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3328u;
        // 0x2b332c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3328) {
            ctx->pc = 0x2B3370u;
            goto label_2b3370;
        }
    }
    ctx->pc = 0x2B3330u;
    // 0x2b3330: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b3330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b3334: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b3334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b3338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3338u;
    {
        const bool branch_taken_0x2b3338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3338u;
        // 0x2b333c: 0x92030080  lbu         $v1, 0x80($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3338) {
            ctx->pc = 0x2B3348u;
            goto label_2b3348;
        }
    }
    ctx->pc = 0x2B3340u;
    // 0x2b3340: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3340u;
    {
        const bool branch_taken_0x2b3340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3340u;
        // 0x2b3344: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3340) {
            ctx->pc = 0x2B334Cu;
            goto label_2b334c;
        }
    }
    ctx->pc = 0x2B3348u;
label_2b3348:
    // 0x2b3348: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2b3348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b334c:
    // 0x2b334c: 0x54710004  bnel        $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B334Cu;
    {
        const bool branch_taken_0x2b334c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b334c) {
            ctx->pc = 0x2B3350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B334Cu;
            // 0x2b3350: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3360u;
            goto label_2b3360;
        }
    }
    ctx->pc = 0x2B3354u;
    // 0x2b3354: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2B3354u;
    {
        const bool branch_taken_0x2b3354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3354u;
        // 0x2b3358: 0xe60000c8  swc1        $f0, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3354) {
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B335Cu;
    // 0x2b335c: 0x0  nop
    ctx->pc = 0x2b335cu;
    // NOP
label_2b3360:
    // 0x2b3360: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B3360u;
    {
        const bool branch_taken_0x2b3360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3360) {
            ctx->pc = 0x2B3364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3360u;
            // 0x2b3364: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B3368u;
    // 0x2b3368: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3368u;
    {
        const bool branch_taken_0x2b3368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3368u;
        // 0x2b336c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3368) {
            ctx->pc = 0x2B33B4u;
            goto label_2b33b4;
        }
    }
    ctx->pc = 0x2B3370u;
label_2b3370:
    // 0x2b3370: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B3370u;
    {
        const bool branch_taken_0x2b3370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3370) {
            ctx->pc = 0x2B3374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3370u;
            // 0x2b3374: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B33B4u;
            goto label_2b33b4;
        }
    }
    ctx->pc = 0x2B3378u;
    // 0x2b3378: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b337c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b337cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b3380: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3380u;
    {
        const bool branch_taken_0x2b3380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3380u;
        // 0x2b3384: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3380) {
            ctx->pc = 0x2B338Cu;
            goto label_2b338c;
        }
    }
    ctx->pc = 0x2B3388u;
    // 0x2b3388: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2b3388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2b338c:
    // 0x2b338c: 0xc0aa7aa  jal         func_2A9EA8
    ctx->pc = 0x2B338Cu;
    SET_GPR_U32(ctx, 31, 0x2B3394u);
    ctx->pc = 0x2A9EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA8u, 0x2B338Cu, 0x2B3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3394u;
label_2b3394:
    // 0x2b3394: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x2b3394u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b3398: 0x14720003  bne         $v1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3398u;
    {
        const bool branch_taken_0x2b3398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x2b3398) {
            ctx->pc = 0x2B33A8u;
            goto label_2b33a8;
        }
    }
    ctx->pc = 0x2B33A0u;
    // 0x2b33a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B33A0u;
    {
        const bool branch_taken_0x2b33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33A0u;
        // 0x2b33a4: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b33a0) {
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B33A8u;
label_2b33a8:
    // 0x2b33a8: 0x50710001  beql        $v1, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B33A8u;
    {
        const bool branch_taken_0x2b33a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b33a8) {
            ctx->pc = 0x2B33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B33A8u;
            // 0x2b33ac: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B33B0u;
            goto label_2b33b0;
        }
    }
    ctx->pc = 0x2B33B0u;
label_2b33b0:
    // 0x2b33b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b33b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b33b4:
    // 0x2b33b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b33b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b33b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b33b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b33bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b33bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b33c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B33C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B33C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B33C0u;
        // 0x2b33c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B33C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B33C8u;
}
