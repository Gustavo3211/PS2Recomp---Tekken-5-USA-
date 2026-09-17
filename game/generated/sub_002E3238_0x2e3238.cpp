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

// Function: sub_002E3238
// Address: 0x2e3238 - 0x2e3390
void sub_002E3238_0x2e3238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3238_0x2e3238");
#endif

    switch (ctx->pc) {
        case 0x2e32e0u: goto label_2e32e0;
        case 0x2e3358u: goto label_2e3358;
        default: break;
    }

    ctx->pc = 0x2e3238u;

    // 0x2e3238: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e3238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e323c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e323cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e3240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e3240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e3244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e3244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e3248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e3248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e324c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e3250: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e3250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e3254: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x2e3254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2e3258: 0x50800045  beql        $a0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2E3258u;
    {
        const bool branch_taken_0x2e3258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3258) {
            ctx->pc = 0x2E325Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3258u;
            // 0x2e325c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3370u;
            goto label_2e3370;
        }
    }
    ctx->pc = 0x2E3260u;
    // 0x2e3260: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x2e3260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2e3264: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E3264u;
    {
        const bool branch_taken_0x2e3264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3264u;
        // 0x2e3268: 0x2ca20003  sltiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3264) {
            ctx->pc = 0x2E336Cu;
            goto label_2e336c;
        }
    }
    ctx->pc = 0x2E326Cu;
    // 0x2e326c: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2E326Cu;
    {
        const bool branch_taken_0x2e326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e326c) {
            ctx->pc = 0x2E3270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E326Cu;
            // 0x2e3270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3370u;
            goto label_2e3370;
        }
    }
    ctx->pc = 0x2E3274u;
    // 0x2e3274: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2e3274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e3278: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e3278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e327c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e327cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e3280: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2e3280u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e3284: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e3284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e3288: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e3288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e328c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E328Cu;
    {
        const bool branch_taken_0x2e328c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E328Cu;
        // 0x2e3290: 0x84420004  lh          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e328c) {
            ctx->pc = 0x2E329Cu;
            goto label_2e329c;
        }
    }
    ctx->pc = 0x2E3294u;
    // 0x2e3294: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3294u;
    {
        const bool branch_taken_0x2e3294 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x2e3294) {
            ctx->pc = 0x2E3298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3294u;
            // 0x2e3298: 0x222102a  slt         $v0, $s1, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E32A8u;
            goto label_2e32a8;
        }
    }
    ctx->pc = 0x2E329Cu;
label_2e329c:
    // 0x2e329c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E329Cu;
    {
        const bool branch_taken_0x2e329c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E32A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E329Cu;
        // 0x2e32a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e329c) {
            ctx->pc = 0x2E32B4u;
            goto label_2e32b4;
        }
    }
    ctx->pc = 0x2E32A4u;
    // 0x2e32a4: 0x0  nop
    ctx->pc = 0x2e32a4u;
    // NOP
label_2e32a8:
    // 0x2e32a8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2e32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e32ac: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2e32acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2e32b0: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2e32b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2e32b4:
    // 0x2e32b4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2e32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e32b8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2e32b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2e32bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2e32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e32c0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2e32c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e32c4: 0x24b00004  addiu       $s0, $a1, 0x4
    ctx->pc = 0x2e32c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2e32c8: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2e32c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e32cc: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E32CCu;
    {
        const bool branch_taken_0x2e32cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E32D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32CCu;
        // 0x2e32d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32cc) {
            ctx->pc = 0x2E336Cu;
            goto label_2e336c;
        }
    }
    ctx->pc = 0x2E32D4u;
    // 0x2e32d4: 0x24b4000c  addiu       $s4, $a1, 0xC
    ctx->pc = 0x2e32d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2e32d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e32d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e32dc: 0x0  nop
    ctx->pc = 0x2e32dcu;
    // NOP
label_2e32e0:
    // 0x2e32e0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2e32e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e32e4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2e32e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2e32e8: 0x2c830009  sltiu       $v1, $a0, 0x9
    ctx->pc = 0x2e32e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2e32ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E32ECu;
    {
        const bool branch_taken_0x2e32ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E32F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E32ECu;
        // 0x2e32f0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e32ec) {
            ctx->pc = 0x2E32F8u;
            goto label_2e32f8;
        }
    }
    ctx->pc = 0x2E32F4u;
    // 0x2e32f4: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x2e32f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2e32f8:
    // 0x2e32f8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2e32f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e32fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e32fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e3300: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e3300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e3304: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3304u;
    {
        const bool branch_taken_0x2e3304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E3308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3304u;
        // 0x2e3308: 0x82182a  slt         $v1, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3304) {
            ctx->pc = 0x2E3318u;
            goto label_2e3318;
        }
    }
    ctx->pc = 0x2E330Cu;
    // 0x2e330c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E330Cu;
    {
        const bool branch_taken_0x2e330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E330Cu;
        // 0x2e3310: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e330c) {
            ctx->pc = 0x2E334Cu;
            goto label_2e334c;
        }
    }
    ctx->pc = 0x2E3314u;
    // 0x2e3314: 0x0  nop
    ctx->pc = 0x2e3314u;
    // NOP
label_2e3318:
    // 0x2e3318: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3318u;
    {
        const bool branch_taken_0x2e3318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3318) {
            ctx->pc = 0x2E331Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3318u;
            // 0x2e331c: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3330u;
            goto label_2e3330;
        }
    }
    ctx->pc = 0x2E3320u;
    // 0x2e3320: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e3320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e3324: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3324u;
    {
        const bool branch_taken_0x2e3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3324u;
        // 0x2e3328: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3324) {
            ctx->pc = 0x2E3344u;
            goto label_2e3344;
        }
    }
    ctx->pc = 0x2E332Cu;
    // 0x2e332c: 0x0  nop
    ctx->pc = 0x2e332cu;
    // NOP
label_2e3330:
    // 0x2e3330: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3330u;
    {
        const bool branch_taken_0x2e3330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3330) {
            ctx->pc = 0x2E3334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3330u;
            // 0x2e3334: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3350u;
            goto label_2e3350;
        }
    }
    ctx->pc = 0x2E3338u;
    // 0x2e3338: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e3338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e333c: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2e333cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e3340: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2e3340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2e3344:
    // 0x2e3344: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3348: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x2e3348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e334c:
    // 0x2e334c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2e334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e3350:
    // 0x2e3350: 0xc0c82f4  jal         func_320BD0
    ctx->pc = 0x2E3350u;
    SET_GPR_U32(ctx, 31, 0x2E3358u);
    ctx->pc = 0x2E3354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3350u;
    // 0x2e3354: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320BD0u, 0x2E3350u, 0x2E3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3358u;
label_2e3358:
    // 0x2e3358: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x2e3358u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2e335c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e335cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e3360: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e3360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e3364: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2E3364u;
    {
        const bool branch_taken_0x2e3364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3364u;
        // 0x2e3368: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3364) {
            ctx->pc = 0x2E32E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e32e0;
        }
    }
    ctx->pc = 0x2E336Cu;
label_2e336c:
    // 0x2e336c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e336cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3370:
    // 0x2e3370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e3370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e3374: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e3374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3378: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e3378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e337c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e337cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3380: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e3380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e3384: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3384u;
        // 0x2e3388: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E338Cu;
    // 0x2e338c: 0x0  nop
    ctx->pc = 0x2e338cu;
    // NOP
    ctx->pc = 0x2e3390u;
}
