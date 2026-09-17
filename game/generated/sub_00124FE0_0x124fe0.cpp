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

// Function: sub_00124FE0
// Address: 0x124fe0 - 0x125128
void sub_00124FE0_0x124fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124FE0_0x124fe0");
#endif

    switch (ctx->pc) {
        case 0x124fe0u: goto label_124fe0;
        case 0x124fe4u: goto label_124fe4;
        case 0x124fe8u: goto label_124fe8;
        case 0x124fecu: goto label_124fec;
        case 0x124ff0u: goto label_124ff0;
        case 0x124ff4u: goto label_124ff4;
        case 0x124ff8u: goto label_124ff8;
        case 0x124ffcu: goto label_124ffc;
        case 0x125000u: goto label_125000;
        case 0x125004u: goto label_125004;
        case 0x125008u: goto label_125008;
        case 0x12500cu: goto label_12500c;
        case 0x125010u: goto label_125010;
        case 0x125014u: goto label_125014;
        case 0x125018u: goto label_125018;
        case 0x12501cu: goto label_12501c;
        case 0x125020u: goto label_125020;
        case 0x125024u: goto label_125024;
        case 0x125028u: goto label_125028;
        case 0x12502cu: goto label_12502c;
        case 0x125030u: goto label_125030;
        case 0x125034u: goto label_125034;
        case 0x125038u: goto label_125038;
        case 0x12503cu: goto label_12503c;
        case 0x125040u: goto label_125040;
        case 0x125044u: goto label_125044;
        case 0x125048u: goto label_125048;
        case 0x12504cu: goto label_12504c;
        case 0x125050u: goto label_125050;
        case 0x125054u: goto label_125054;
        case 0x125058u: goto label_125058;
        case 0x12505cu: goto label_12505c;
        case 0x125060u: goto label_125060;
        case 0x125064u: goto label_125064;
        case 0x125068u: goto label_125068;
        case 0x12506cu: goto label_12506c;
        case 0x125070u: goto label_125070;
        case 0x125074u: goto label_125074;
        case 0x125078u: goto label_125078;
        case 0x12507cu: goto label_12507c;
        case 0x125080u: goto label_125080;
        case 0x125084u: goto label_125084;
        case 0x125088u: goto label_125088;
        case 0x12508cu: goto label_12508c;
        case 0x125090u: goto label_125090;
        case 0x125094u: goto label_125094;
        case 0x125098u: goto label_125098;
        case 0x12509cu: goto label_12509c;
        case 0x1250a0u: goto label_1250a0;
        case 0x1250a4u: goto label_1250a4;
        case 0x1250a8u: goto label_1250a8;
        case 0x1250acu: goto label_1250ac;
        case 0x1250b0u: goto label_1250b0;
        case 0x1250b4u: goto label_1250b4;
        case 0x1250b8u: goto label_1250b8;
        case 0x1250bcu: goto label_1250bc;
        case 0x1250c0u: goto label_1250c0;
        case 0x1250c4u: goto label_1250c4;
        case 0x1250c8u: goto label_1250c8;
        case 0x1250ccu: goto label_1250cc;
        case 0x1250d0u: goto label_1250d0;
        case 0x1250d4u: goto label_1250d4;
        case 0x1250d8u: goto label_1250d8;
        case 0x1250dcu: goto label_1250dc;
        case 0x1250e0u: goto label_1250e0;
        case 0x1250e4u: goto label_1250e4;
        case 0x1250e8u: goto label_1250e8;
        case 0x1250ecu: goto label_1250ec;
        case 0x1250f0u: goto label_1250f0;
        case 0x1250f4u: goto label_1250f4;
        case 0x1250f8u: goto label_1250f8;
        case 0x1250fcu: goto label_1250fc;
        case 0x125100u: goto label_125100;
        case 0x125104u: goto label_125104;
        case 0x125108u: goto label_125108;
        case 0x12510cu: goto label_12510c;
        case 0x125110u: goto label_125110;
        case 0x125114u: goto label_125114;
        case 0x125118u: goto label_125118;
        case 0x12511cu: goto label_12511c;
        case 0x125120u: goto label_125120;
        case 0x125124u: goto label_125124;
        default: break;
    }

    ctx->pc = 0x124fe0u;

label_124fe0:
    // 0x124fe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x124fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_124fe4:
    // 0x124fe4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x124fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124fe8:
    // 0x124fe8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x124fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_124fec:
    // 0x124fec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124ff0:
    // 0x124ff0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x124ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_124ff4:
    // 0x124ff4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x124ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_124ff8:
    // 0x124ff8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_124ffc:
    // 0x124ffc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x124ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125000:
    // 0x125000: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x125000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_125004:
    // 0x125004: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x125004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_125008:
    // 0x125008: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_12500c:
    // 0x12500c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_125010:
    // 0x125010: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x125010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_125014:
    // 0x125014: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_125018:
    // 0x125018: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x125018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12501c:
    // 0x12501c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x12501cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125020:
    // 0x125020: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x125020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_125024:
    // 0x125024: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x125024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_125028:
    // 0x125028: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x125028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_12502c:
    // 0x12502c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12502cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_125030:
    // 0x125030: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x125030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125034:
    // 0x125034: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x125034u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_125038:
    // 0x125038: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x125038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_12503c:
    // 0x12503c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x12503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_125040:
    // 0x125040: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125044:
    // 0x125044: 0x40f809  jalr        $v0
label_125048:
    if (ctx->pc == 0x125048u) {
        ctx->pc = 0x125048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125044u;
        // 0x125048: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12504Cu;
        goto label_12504c;
    }
    ctx->pc = 0x125044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12504Cu);
        ctx->pc = 0x125048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125044u;
        // 0x125048: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125044u, 0x12504Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12504Cu;
label_12504c:
    // 0x12504c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x12504cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125050:
    // 0x125050: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
label_125054:
    if (ctx->pc == 0x125054u) {
        ctx->pc = 0x125054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125050u;
        // 0x125054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125058u;
        goto label_125058;
    }
    ctx->pc = 0x125050u;
    {
        const bool branch_taken_0x125050 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x125054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125050u;
        // 0x125054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125050) {
            ctx->pc = 0x12510Cu;
            goto label_12510c;
        }
    }
    ctx->pc = 0x125058u;
label_125058:
    // 0x125058: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_12505c:
    // 0x12505c: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x12505cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_125060:
    // 0x125060: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x125060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_125064:
    // 0x125064: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_125068:
    if (ctx->pc == 0x125068u) {
        ctx->pc = 0x125068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125064u;
        // 0x125068: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12506Cu;
        goto label_12506c;
    }
    ctx->pc = 0x125064u;
    {
        const bool branch_taken_0x125064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x125068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125064u;
        // 0x125068: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125064) {
            ctx->pc = 0x12510Cu;
            goto label_12510c;
        }
    }
    ctx->pc = 0x12506Cu;
label_12506c:
    // 0x12506c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x12506cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_125070:
    // 0x125070: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x125070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125074:
    // 0x125074: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x125074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_125078:
    // 0x125078: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x125078u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_12507c:
    // 0x12507c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x12507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_125080:
    // 0x125080: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
label_125084:
    if (ctx->pc == 0x125084u) {
        ctx->pc = 0x125084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125080u;
        // 0x125084: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125088u;
        goto label_125088;
    }
    ctx->pc = 0x125080u;
    {
        const bool branch_taken_0x125080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x125080) {
            ctx->pc = 0x125084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125080u;
            // 0x125084: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125110u;
            goto label_125110;
        }
    }
    ctx->pc = 0x125088u;
label_125088:
    // 0x125088: 0x30a30005  andi        $v1, $a1, 0x5
    ctx->pc = 0x125088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)5);
label_12508c:
    // 0x12508c: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x12508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
label_125090:
    // 0x125090: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_125094:
    if (ctx->pc == 0x125094u) {
        ctx->pc = 0x125094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125090u;
        // 0x125094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125098u;
        goto label_125098;
    }
    ctx->pc = 0x125090u;
    {
        const bool branch_taken_0x125090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125090u;
        // 0x125094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125090) {
            ctx->pc = 0x12510Cu;
            goto label_12510c;
        }
    }
    ctx->pc = 0x125098u;
label_125098:
    // 0x125098: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_12509c:
    if (ctx->pc == 0x12509Cu) {
        ctx->pc = 0x12509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125098u;
        // 0x12509c: 0x28830006  slti        $v1, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250A0u;
        goto label_1250a0;
    }
    ctx->pc = 0x125098u;
    {
        const bool branch_taken_0x125098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x12509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125098u;
        // 0x12509c: 0x28830006  slti        $v1, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125098) {
            ctx->pc = 0x1250FCu;
            goto label_1250fc;
        }
    }
    ctx->pc = 0x1250A0u;
label_1250a0:
    // 0x1250a0: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
label_1250a4:
    if (ctx->pc == 0x1250A4u) {
        ctx->pc = 0x1250A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250A0u;
        // 0x1250a4: 0x2271023  subu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250A8u;
        goto label_1250a8;
    }
    ctx->pc = 0x1250A0u;
    {
        const bool branch_taken_0x1250a0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1250A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250A0u;
        // 0x1250a4: 0x2271023  subu        $v0, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250a0) {
            ctx->pc = 0x1250C0u;
            goto label_1250c0;
        }
    }
    ctx->pc = 0x1250A8u;
label_1250a8:
    // 0x1250a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1250ac:
    // 0x1250ac: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x1250acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
label_1250b0:
    // 0x1250b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1250b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1250b4:
    // 0x1250b4: 0x1000000f  b           . + 4 + (0xF << 2)
label_1250b8:
    if (ctx->pc == 0x1250B8u) {
        ctx->pc = 0x1250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250B4u;
        // 0x1250b8: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250BCu;
        goto label_1250bc;
    }
    ctx->pc = 0x1250B4u;
    {
        const bool branch_taken_0x1250b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250B4u;
        // 0x1250b8: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250b4) {
            ctx->pc = 0x1250F4u;
            goto label_1250f4;
        }
    }
    ctx->pc = 0x1250BCu;
label_1250bc:
    // 0x1250bc: 0x0  nop
    ctx->pc = 0x1250bcu;
    // NOP
label_1250c0:
    // 0x1250c0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1250c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1250c4:
    // 0x1250c4: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_1250c8:
    if (ctx->pc == 0x1250C8u) {
        ctx->pc = 0x1250C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250C4u;
        // 0x1250c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250CCu;
        goto label_1250cc;
    }
    ctx->pc = 0x1250C4u;
    {
        const bool branch_taken_0x1250c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1250C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250C4u;
        // 0x1250c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250c4) {
            ctx->pc = 0x1250F4u;
            goto label_1250f4;
        }
    }
    ctx->pc = 0x1250CCu;
label_1250cc:
    // 0x1250cc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1250d0:
    // 0x1250d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1250d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1250d4:
    // 0x1250d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1250d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1250d8:
    // 0x1250d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1250d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1250dc:
    // 0x1250dc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1250dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1250e0:
    // 0x1250e0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x1250e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1250e4:
    // 0x1250e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1250e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1250e8:
    // 0x1250e8: 0x40f809  jalr        $v0
label_1250ec:
    if (ctx->pc == 0x1250ECu) {
        ctx->pc = 0x1250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E8u;
        // 0x1250ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1250F0u;
        goto label_1250f0;
    }
    ctx->pc = 0x1250E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1250F0u);
        ctx->pc = 0x1250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E8u;
        // 0x1250ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1250E8u, 0x1250F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1250F0u;
label_1250f0:
    // 0x1250f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1250f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1250f4:
    // 0x1250f4: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x1250f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_1250f8:
    // 0x1250f8: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x1250f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_1250fc:
    // 0x1250fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_125100:
    // 0x125100: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_125104:
    // 0x125104: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x125104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
label_125108:
    // 0x125108: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x125108u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_12510c:
    // 0x12510c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12510cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125110:
    // 0x125110: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x125110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125114:
    // 0x125114: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x125114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125118:
    // 0x125118: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x125118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12511c:
    // 0x12511c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12511cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_125120:
    // 0x125120: 0x3e00008  jr          $ra
label_125124:
    if (ctx->pc == 0x125124u) {
        ctx->pc = 0x125124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125120u;
        // 0x125124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125128u;
        goto label_fallthrough_0x125120;
    }
    ctx->pc = 0x125120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125120u;
        // 0x125124: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125120:
    ctx->pc = 0x125128u;
}
