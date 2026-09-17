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

// Function: sub_0033FC48
// Address: 0x33fc48 - 0x33ffe0
void sub_0033FC48_0x33fc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033FC48_0x33fc48");
#endif

    switch (ctx->pc) {
        case 0x33fc90u: goto label_33fc90;
        case 0x33fcb8u: goto label_33fcb8;
        case 0x33fce0u: goto label_33fce0;
        case 0x33fe7cu: goto label_33fe7c;
        case 0x33fe98u: goto label_33fe98;
        case 0x33ff40u: goto label_33ff40;
        default: break;
    }

    ctx->pc = 0x33fc48u;

    // 0x33fc48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33fc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33fc4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33fc50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x33fc54: 0x24540d00  addiu       $s4, $v0, 0xD00
    ctx->pc = 0x33fc54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x33fc58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33fc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33fc5c: 0x26910040  addiu       $s1, $s4, 0x40
    ctx->pc = 0x33fc5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x33fc60: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x33fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400D50u));
    // 0x33fc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33fc68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33fc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc6c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x33fc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x33fc70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33fc74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33fc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33fc78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33fc78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fc7c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33fc80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FC80u;
    {
        const bool branch_taken_0x33fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FC80u;
        // 0x33fc84: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fc80) {
            ctx->pc = 0x33FCA4u;
            goto label_33fca4;
        }
    }
    ctx->pc = 0x33FC88u;
    // 0x33fc88: 0xc0c8c36  jal         func_3230D8
    ctx->pc = 0x33FC88u;
    SET_GPR_U32(ctx, 31, 0x33FC90u);
    ctx->pc = 0x33FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FC88u;
    // 0x33fc8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3230D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3230D8u, 0x33FC88u, 0x33FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FC90u;
label_33fc90:
    // 0x33fc90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33fc94: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x33fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x33fc98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fc9c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33fca0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33fca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33fca4:
    // 0x33fca4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33fca8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33FCA8u;
    {
        const bool branch_taken_0x33fca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fca8) {
            ctx->pc = 0x33FCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FCA8u;
            // 0x33fcac: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FCD0u;
            goto label_33fcd0;
        }
    }
    ctx->pc = 0x33FCB0u;
    // 0x33fcb0: 0xc0c8c7e  jal         func_3231F8
    ctx->pc = 0x33FCB0u;
    SET_GPR_U32(ctx, 31, 0x33FCB8u);
    ctx->pc = 0x33FCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FCB0u;
    // 0x33fcb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3231F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3231F8u, 0x33FCB0u, 0x33FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FCB8u;
label_33fcb8:
    // 0x33fcb8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33fcbc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x33fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33fcc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fcc4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33fcc8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33fcc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fccc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x33fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33fcd0:
    // 0x33fcd0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FCD0u;
    {
        const bool branch_taken_0x33fcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fcd0) {
            ctx->pc = 0x33FCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FCD0u;
            // 0x33fcd4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FCF4u;
            goto label_33fcf4;
        }
    }
    ctx->pc = 0x33FCD8u;
    // 0x33fcd8: 0xc0c8b60  jal         func_322D80
    ctx->pc = 0x33FCD8u;
    SET_GPR_U32(ctx, 31, 0x33FCE0u);
    ctx->pc = 0x33FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FCD8u;
    // 0x33fcdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D80u, 0x33FCD8u, 0x33FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FCE0u;
label_33fce0:
    // 0x33fce0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33fce4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x33fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x33fce8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fcec: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33fcf0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x33fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_33fcf4:
    // 0x33fcf4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fcf8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33fcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33fcfc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FCFCu;
    {
        const bool branch_taken_0x33fcfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33fcfc) {
            ctx->pc = 0x33FD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FCFCu;
            // 0x33fd00: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FD18u;
            goto label_33fd18;
        }
    }
    ctx->pc = 0x33FD04u;
    // 0x33fd04: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fd08: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fd0c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fd10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33FD10u;
    {
        const bool branch_taken_0x33fd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD10u;
        // 0x33fd14: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd10) {
            ctx->pc = 0x33FD28u;
            goto label_33fd28;
        }
    }
    ctx->pc = 0x33FD18u;
label_33fd18:
    // 0x33fd18: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fd1c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fd20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fd24: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fd24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fd28:
    // 0x33fd28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fd2c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fd30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33fd34: 0x3c026808  lui         $v0, 0x6808
    ctx->pc = 0x33fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26632 << 16));
    // 0x33fd38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33fd3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fd3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fd40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33fd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33fd44: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33fd44u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33fd48: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x33fd48u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x33fd4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33fd50: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fd54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x33fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x33fd58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33fd5c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x33fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x33fd60: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33fd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33fd64: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FD64u;
    {
        const bool branch_taken_0x33fd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD64u;
        // 0x33fd68: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd64) {
            ctx->pc = 0x33FD80u;
            goto label_33fd80;
        }
    }
    ctx->pc = 0x33FD6Cu;
    // 0x33fd6c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fd70: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fd74: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33fd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33fd78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33FD78u;
    {
        const bool branch_taken_0x33fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FD78u;
        // 0x33fd7c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fd78) {
            ctx->pc = 0x33FD94u;
            goto label_33fd94;
        }
    }
    ctx->pc = 0x33FD80u;
label_33fd80:
    // 0x33fd80: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33fd84: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fd88: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33fd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33fd8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fd90: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fd94:
    // 0x33fd94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fd98: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fd98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fd9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33fda0: 0x3c026801  lui         $v0, 0x6801
    ctx->pc = 0x33fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26625 << 16));
    // 0x33fda4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33fda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33fda8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fdac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33fdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33fdb0: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33fdb0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33fdb4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x33fdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x33fdb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33fdbc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33fdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33fdc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33fdc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33fdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33fdc8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x33fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x33fdcc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33fdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33fdd0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33FDD0u;
    {
        const bool branch_taken_0x33fdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDD0u;
        // 0x33fdd4: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fdd0) {
            ctx->pc = 0x33FDF0u;
            goto label_33fdf0;
        }
    }
    ctx->pc = 0x33FDD8u;
    // 0x33fdd8: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fddc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fde0: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fde0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fde4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33FDE4u;
    {
        const bool branch_taken_0x33fde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FDE4u;
        // 0x33fde8: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fde4) {
            ctx->pc = 0x33FE04u;
            goto label_33fe04;
        }
    }
    ctx->pc = 0x33FDECu;
    // 0x33fdec: 0x0  nop
    ctx->pc = 0x33fdecu;
    // NOP
label_33fdf0:
    // 0x33fdf0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33fdf4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fdf8: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fdfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fe00: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fe00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fe04:
    // 0x33fe04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fe04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fe08: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fe08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fe0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33fe10: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x33fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
    // 0x33fe14: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x33fe14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x33fe18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33fe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fe1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fe20: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x33fe20u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33fe24: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x33fe24u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x33fe28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33fe2c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33fe30: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33fe34: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x33FE34u;
    {
        const bool branch_taken_0x33fe34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE34u;
        // 0x33fe38: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe34) {
            ctx->pc = 0x33FE70u;
            goto label_33fe70;
        }
    }
    ctx->pc = 0x33FE3Cu;
    // 0x33fe3c: 0x26840068  addiu       $a0, $s4, 0x68
    ctx->pc = 0x33fe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
    // 0x33fe40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x33fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33fe44: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x33fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33fe48: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x33fe48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33fe4c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x33fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x33fe50: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x33fe50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33fe54: 0x48a2a800  qmtc2.ni    $v0, $vf21
    ctx->pc = 0x33fe54u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33fe58: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x33fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x33fe5c: 0x268300b0  addiu       $v1, $s4, 0xB0
    ctx->pc = 0x33fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x33fe60: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33fe64: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x33fe64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x33fe68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33FE68u;
    {
        const bool branch_taken_0x33fe68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FE68u;
        // 0x33fe6c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fe68) {
            ctx->pc = 0x33FE74u;
            goto label_33fe74;
        }
    }
    ctx->pc = 0x33FE70u;
label_33fe70:
    // 0x33fe70: 0x26840068  addiu       $a0, $s4, 0x68
    ctx->pc = 0x33fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
label_33fe74:
    // 0x33fe74: 0xc0c8976  jal         func_3225D8
    ctx->pc = 0x33FE74u;
    SET_GPR_U32(ctx, 31, 0x33FE7Cu);
    ctx->pc = 0x33FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE74u;
    // 0x33fe78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3225D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3225D8u, 0x33FE74u, 0x33FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE7Cu;
label_33fe7c:
    // 0x33fe7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33fe7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fe80: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33fe84: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x33fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x33fe88: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FE88u;
    {
        const bool branch_taken_0x33fe88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fe88) {
            ctx->pc = 0x33FE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FE88u;
            // 0x33fe8c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FEACu;
            goto label_33feac;
        }
    }
    ctx->pc = 0x33FE90u;
    // 0x33fe90: 0xc0c8c92  jal         func_323248
    ctx->pc = 0x33FE90u;
    SET_GPR_U32(ctx, 31, 0x33FE98u);
    ctx->pc = 0x33FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FE90u;
    // 0x33fe94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323248u, 0x33FE90u, 0x33FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FE98u;
label_33fe98:
    // 0x33fe98: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33fe9c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x33fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x33fea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33fea4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33fea8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x33fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_33feac:
    // 0x33feac: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33feacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33feb0: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33feb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33feb4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FEB4u;
    {
        const bool branch_taken_0x33feb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33feb4) {
            ctx->pc = 0x33FEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FEB4u;
            // 0x33feb8: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FED0u;
            goto label_33fed0;
        }
    }
    ctx->pc = 0x33FEBCu;
    // 0x33febc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33febcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33fec0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fec4: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33FEC8u;
    {
        const bool branch_taken_0x33fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FEC8u;
        // 0x33fecc: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33fec8) {
            ctx->pc = 0x33FEE0u;
            goto label_33fee0;
        }
    }
    ctx->pc = 0x33FED0u;
label_33fed0:
    // 0x33fed0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33fed4: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33fed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33fed8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33fed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33fedc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33fedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33fee0:
    // 0x33fee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33fee4: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33fee4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33fee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33feec: 0x3c026808  lui         $v0, 0x6808
    ctx->pc = 0x33feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26632 << 16));
    // 0x33fef0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33fef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33fef4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33fef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33fef8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33fef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33fefc: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33fefcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33ff00: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x33ff00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x33ff04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33ff04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33ff08: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x33ff08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x33ff0c: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x33ff0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ff10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33ff14: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x33ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x33ff18: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x33ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x33ff1c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x33ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33ff20: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x33FF20u;
    {
        const bool branch_taken_0x33ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF20u;
        // 0x33ff24: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff20) {
            ctx->pc = 0x33FFBCu;
            goto label_33ffbc;
        }
    }
    ctx->pc = 0x33FF28u;
    // 0x33ff28: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33ff2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x33ff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x33ff30: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33FF30u;
    {
        const bool branch_taken_0x33ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ff30) {
            ctx->pc = 0x33FF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF30u;
            // 0x33ff34: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF54u;
            goto label_33ff54;
        }
    }
    ctx->pc = 0x33FF38u;
    // 0x33ff38: 0xc0c8cda  jal         func_323368
    ctx->pc = 0x33FF38u;
    SET_GPR_U32(ctx, 31, 0x33FF40u);
    ctx->pc = 0x33FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FF38u;
    // 0x33ff3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323368u, 0x33FF38u, 0x33FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FF40u;
label_33ff40:
    // 0x33ff40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33ff44: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x33ff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x33ff48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33ff4c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33ff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33ff50: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x33ff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_33ff54:
    // 0x33ff54: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33ff58: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33ff58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33ff5c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33FF5Cu;
    {
        const bool branch_taken_0x33ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33ff5c) {
            ctx->pc = 0x33FF60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FF5Cu;
            // 0x33ff60: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FF78u;
            goto label_33ff78;
        }
    }
    ctx->pc = 0x33FF64u;
    // 0x33ff64: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33ff68: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33ff6c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x33ff6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x33ff70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33FF70u;
    {
        const bool branch_taken_0x33ff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33FF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FF70u;
        // 0x33ff74: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ff70) {
            ctx->pc = 0x33FF88u;
            goto label_33ff88;
        }
    }
    ctx->pc = 0x33FF78u;
label_33ff78:
    // 0x33ff78: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33ff7c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x33ff7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x33ff80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33ff80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33ff84: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33ff84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33ff88:
    // 0x33ff88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33ff88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33ff8c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33ff8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ff90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33ff94: 0x3c03600a  lui         $v1, 0x600A
    ctx->pc = 0x33ff94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24586 << 16));
    // 0x33ff98: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x33ff98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x33ff9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33ffa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33ffa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33ffa4: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x33ffa4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33ffa8: 0x7e640000  sq          $a0, 0x0($s3)
    ctx->pc = 0x33ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 4));
    // 0x33ffac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33ffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33ffb0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x33ffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x33ffb4: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x33ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x33ffb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33ffbc:
    // 0x33ffbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ffbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ffc0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33ffc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ffc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ffc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33ffc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ffc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ffcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33ffccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33ffd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33ffd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ffd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x33ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33ffd8: 0x3e00008  jr          $ra
    ctx->pc = 0x33FFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FFD8u;
        // 0x33ffdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FFE0u;
}
