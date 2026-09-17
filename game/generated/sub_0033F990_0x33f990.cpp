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

// Function: sub_0033F990
// Address: 0x33f990 - 0x33fc48
void sub_0033F990_0x33f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F990_0x33f990");
#endif

    switch (ctx->pc) {
        case 0x33f9d0u: goto label_33f9d0;
        case 0x33f9f8u: goto label_33f9f8;
        case 0x33fa20u: goto label_33fa20;
        case 0x33fba4u: goto label_33fba4;
        default: break;
    }

    ctx->pc = 0x33f990u;

    // 0x33f990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33f994: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33f994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33f998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f99c: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x33f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x33f9a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33f9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33f9a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33f9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f9a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33f9ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f9b0: 0x24500040  addiu       $s0, $v0, 0x40
    ctx->pc = 0x33f9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x33f9b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x33f9b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x33f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400D50u));
    // 0x33f9bc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x33f9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x33f9c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F9C0u;
    {
        const bool branch_taken_0x33f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9C0u;
        // 0x33f9c4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9c0) {
            ctx->pc = 0x33F9E4u;
            goto label_33f9e4;
        }
    }
    ctx->pc = 0x33F9C8u;
    // 0x33f9c8: 0xc0c8c36  jal         func_3230D8
    ctx->pc = 0x33F9C8u;
    SET_GPR_U32(ctx, 31, 0x33F9D0u);
    ctx->pc = 0x33F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F9C8u;
    // 0x33f9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3230D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3230D8u, 0x33F9C8u, 0x33F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F9D0u;
label_33f9d0:
    // 0x33f9d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33f9d4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x33f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x33f9d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f9dc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33f9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33f9e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33f9e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33f9e4:
    // 0x33f9e4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33f9e8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33F9E8u;
    {
        const bool branch_taken_0x33f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f9e8) {
            ctx->pc = 0x33F9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F9E8u;
            // 0x33f9ec: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FA10u;
            goto label_33fa10;
        }
    }
    ctx->pc = 0x33F9F0u;
    // 0x33f9f0: 0xc0c8c7e  jal         func_3231F8
    ctx->pc = 0x33F9F0u;
    SET_GPR_U32(ctx, 31, 0x33F9F8u);
    ctx->pc = 0x33F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F9F0u;
    // 0x33f9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3231F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3231F8u, 0x33F9F0u, 0x33F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F9F8u;
label_33f9f8:
    // 0x33f9f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33f9fc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x33f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33fa00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fa04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33fa08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33fa08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa0c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x33fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33fa10:
    // 0x33fa10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FA10u;
    {
        const bool branch_taken_0x33fa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa10) {
            ctx->pc = 0x33FA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FA10u;
            // 0x33fa14: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FA34u;
            goto label_33fa34;
        }
    }
    ctx->pc = 0x33FA18u;
    // 0x33fa18: 0xc0c8b60  jal         func_322D80
    ctx->pc = 0x33FA18u;
    SET_GPR_U32(ctx, 31, 0x33FA20u);
    ctx->pc = 0x33FA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA18u;
    // 0x33fa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D80u, 0x33FA18u, 0x33FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA20u;
label_33fa20:
    // 0x33fa20: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33fa24: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x33fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x33fa28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fa2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33fa30: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x33fa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_33fa34:
    // 0x33fa34: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fa38: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33fa38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33fa3c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FA3Cu;
    {
        const bool branch_taken_0x33fa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fa3c) {
            ctx->pc = 0x33FA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FA3Cu;
            // 0x33fa40: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FA58u;
            goto label_33fa58;
        }
    }
    ctx->pc = 0x33FA44u;
    // 0x33fa44: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fa48: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fa4c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fa4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fa50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33FA50u;
    {
        const bool branch_taken_0x33fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA50u;
        // 0x33fa54: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fa50) {
            ctx->pc = 0x33FA68u;
            goto label_33fa68;
        }
    }
    ctx->pc = 0x33FA58u;
label_33fa58:
    // 0x33fa58: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fa5c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fa5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fa60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fa64: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fa68:
    // 0x33fa68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fa6c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fa6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fa70: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fa74: 0x3c026808  lui         $v0, 0x6808
    ctx->pc = 0x33fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26632 << 16));
    // 0x33fa78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33fa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33fa7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fa80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33fa80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33fa84: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33fa84u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33fa88: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x33fa88u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x33fa8c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fa90: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fa94: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x33fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x33fa98: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33fa98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x33fa9c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x33fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x33faa0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33faa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33faa4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FAA4u;
    {
        const bool branch_taken_0x33faa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAA4u;
        // 0x33faa8: 0x26710010  addiu       $s1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33faa4) {
            ctx->pc = 0x33FAC0u;
            goto label_33fac0;
        }
    }
    ctx->pc = 0x33FAACu;
    // 0x33faac: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fab0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fab4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33fab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33fab8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33FAB8u;
    {
        const bool branch_taken_0x33fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FAB8u;
        // 0x33fabc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fab8) {
            ctx->pc = 0x33FAD4u;
            goto label_33fad4;
        }
    }
    ctx->pc = 0x33FAC0u;
label_33fac0:
    // 0x33fac0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33fac4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fac8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33fac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33facc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33faccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fad0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fad4:
    // 0x33fad4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fad8: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fad8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fadc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fae0: 0x3c026801  lui         $v0, 0x6801
    ctx->pc = 0x33fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26625 << 16));
    // 0x33fae4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33fae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33fae8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33faec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33faecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33faf0: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33faf0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33faf4: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x33faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x33faf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fafc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fb00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33fb04: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x33fb08: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x33fb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x33fb0c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33fb10: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FB10u;
    {
        const bool branch_taken_0x33fb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB10u;
        // 0x33fb14: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb10) {
            ctx->pc = 0x33FB30u;
            goto label_33fb30;
        }
    }
    ctx->pc = 0x33FB18u;
    // 0x33fb18: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fb1c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fb20: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fb24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33FB24u;
    {
        const bool branch_taken_0x33fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB24u;
        // 0x33fb28: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb24) {
            ctx->pc = 0x33FB44u;
            goto label_33fb44;
        }
    }
    ctx->pc = 0x33FB2Cu;
    // 0x33fb2c: 0x0  nop
    ctx->pc = 0x33fb2cu;
    // NOP
label_33fb30:
    // 0x33fb30: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33fb30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33fb34: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fb38: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fb3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fb40: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fb44:
    // 0x33fb44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fb48: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fb4c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fb50: 0x3c026c06  lui         $v0, 0x6C06
    ctx->pc = 0x33fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27654 << 16));
    // 0x33fb54: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33fb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33fb58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fb5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33fb60: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33fb60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33fb64: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x33fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x33fb68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x33fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fb6c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x33fb6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x33fb70: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x33fb70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fb74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33fb78: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x33fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x33fb7c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x33fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x33fb80: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x33fb84: 0x14430027  bne         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x33FB84u;
    {
        const bool branch_taken_0x33fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FB84u;
        // 0x33fb88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fb84) {
            ctx->pc = 0x33FC24u;
            goto label_33fc24;
        }
    }
    ctx->pc = 0x33FB8Cu;
    // 0x33fb8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33fb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33fb90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x33fb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x33fb94: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FB94u;
    {
        const bool branch_taken_0x33fb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fb94) {
            ctx->pc = 0x33FB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FB94u;
            // 0x33fb98: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FBB8u;
            goto label_33fbb8;
        }
    }
    ctx->pc = 0x33FB9Cu;
    // 0x33fb9c: 0xc0c8cda  jal         func_323368
    ctx->pc = 0x33FB9Cu;
    SET_GPR_U32(ctx, 31, 0x33FBA4u);
    ctx->pc = 0x33FBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FB9Cu;
    // 0x33fba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323368u, 0x33FB9Cu, 0x33FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FBA4u;
label_33fba4:
    // 0x33fba4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33fba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33fba8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x33fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x33fbac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fbb0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33fbb4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x33fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_33fbb8:
    // 0x33fbb8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fbbc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33fbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33fbc0: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FBC0u;
    {
        const bool branch_taken_0x33fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fbc0) {
            ctx->pc = 0x33FBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FBC0u;
            // 0x33fbc4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FBE0u;
            goto label_33fbe0;
        }
    }
    ctx->pc = 0x33FBC8u;
    // 0x33fbc8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fbcc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fbd0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x33fbd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x33fbd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33FBD4u;
    {
        const bool branch_taken_0x33fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FBD4u;
        // 0x33fbd8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fbd4) {
            ctx->pc = 0x33FBF0u;
            goto label_33fbf0;
        }
    }
    ctx->pc = 0x33FBDCu;
    // 0x33fbdc: 0x0  nop
    ctx->pc = 0x33fbdcu;
    // NOP
label_33fbe0:
    // 0x33fbe0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fbe4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x33fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x33fbe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fbec: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fbf0:
    // 0x33fbf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fbf4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fbf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fbfc: 0x3c03600a  lui         $v1, 0x600A
    ctx->pc = 0x33fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24586 << 16));
    // 0x33fc00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x33fc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x33fc04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fc08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fc0c: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x33fc0cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33fc10: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x33fc10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
    // 0x33fc14: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x33fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33fc18: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x33fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x33fc1c: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x33fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x33fc20: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x33fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_33fc24:
    // 0x33fc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33fc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fc28: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33fc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33fc2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33fc30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33fc30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33fc34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33fc34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33fc38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33fc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fc3c: 0x3e00008  jr          $ra
    ctx->pc = 0x33FC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC3Cu;
        // 0x33fc40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FC44u;
    // 0x33fc44: 0x0  nop
    ctx->pc = 0x33fc44u;
    // NOP
    ctx->pc = 0x33fc48u;
}
