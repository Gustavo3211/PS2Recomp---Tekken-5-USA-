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

// Function: sub_004ACD30
// Address: 0x4acd30 - 0x4acf50
void sub_004ACD30_0x4acd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACD30_0x4acd30");
#endif

    switch (ctx->pc) {
        case 0x4ace44u: goto label_4ace44;
        default: break;
    }

    ctx->pc = 0x4acd30u;

    // 0x4acd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4acd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4acd34: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4acd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4acd38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4acd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4acd3c: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4acd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4acd40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4acd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4acd44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4acd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4acd48: 0x24740cd4  addiu       $s4, $v1, 0xCD4
    ctx->pc = 0x4acd48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 3284));
    // 0x4acd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4acd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4acd50: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4acd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4acd54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4acd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4acd58: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4acd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4acd5c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4acd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4acd60: 0x84a2f980  lh          $v0, -0x680($a1)
    ctx->pc = 0x4acd60u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F980u));
    // 0x4acd64: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4acd64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CD4u));
    // 0x4acd68: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acd6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4acd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acd70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4acd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acd74: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4acd74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4acd78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4acd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acd7c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4acd7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4acd80: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4acd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4acd84: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acd88: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4acd88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acd8c: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4acd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4acd90: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4acd90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4acd94: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x4ACD94u;
    {
        const bool branch_taken_0x4acd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD94u;
        // 0x4acd98: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acd94) {
            ctx->pc = 0x4ACF28u;
            goto label_4acf28;
        }
    }
    ctx->pc = 0x4ACD9Cu;
    // 0x4acd9c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4acd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4acda0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4acda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4acda4: 0x26100cdc  addiu       $s0, $s0, 0xCDC
    ctx->pc = 0x4acda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3292));
    // 0x4acda8: 0x24750ce0  addiu       $s5, $v1, 0xCE0
    ctx->pc = 0x4acda8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 3296));
    // 0x4acdac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4acdacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0CDCu));
    // 0x4acdb0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4acdb0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4acdb4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4acdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0CE0u));
    // 0x4acdb8: 0x26310ce4  addiu       $s1, $s1, 0xCE4
    ctx->pc = 0x4acdb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3300));
    // 0x4acdbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4acdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4acdc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4acdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CE4u));
    // 0x4acdc4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4acdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4acdc8: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x4acdc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4acdcc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4acdccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4acdd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4acdd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acdd4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4acdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4acdd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4acdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acddc: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4acddcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4acde0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4acde0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4acde4: 0x866201c0  lh          $v0, 0x1C0($s3)
    ctx->pc = 0x4acde4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 448)));
    // 0x4acde8: 0x25290cd8  addiu       $t1, $t1, 0xCD8
    ctx->pc = 0x4acde8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3288));
    // 0x4acdec: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4acdecu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0CD8u));
    // 0x4acdf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4acdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acdf4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acdf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4acdf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acdfc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4acdfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ace00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ace00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ace04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ace04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ace08: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ace08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ace0c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ace0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ace10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ace10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ace14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ace14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ace18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ace18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ace1c: 0x86620026  lh          $v0, 0x26($s3)
    ctx->pc = 0x4ace1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
    // 0x4ace20: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ace20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ace24: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ace24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ace28: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4ace28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4ace2c: 0x86620028  lh          $v0, 0x28($s3)
    ctx->pc = 0x4ace2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x4ace30: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ace30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ace34: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4ace34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4ace38: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4ace38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4ace3c: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4ACE3Cu;
    SET_GPR_U32(ctx, 31, 0x4ACE44u);
    ctx->pc = 0x4ACE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACE3Cu;
    // 0x4ace40: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4ACE3Cu, 0x4ACE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACE44u;
label_4ace44:
    // 0x4ace44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ace44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ace48: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4ace48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4ace4c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ace4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ace50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ace50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ace54: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ace54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ace58: 0x86a60000  lh          $a2, 0x0($s5)
    ctx->pc = 0x4ace58u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ace5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ace5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ace60: 0x8ea80000  lw          $t0, 0x0($s5)
    ctx->pc = 0x4ace60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ace64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ace64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ace68: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4ace68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ace6c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ace6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ace70: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ace70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ace74: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ace74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ace78: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ace78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ace7c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ace7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ace80: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x4ace80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4ace84: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4ace84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4ace88: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4ace88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ace8c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ace8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ace90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ace90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ace94: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ace94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ace98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ace98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ace9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ace9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acea0: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4acea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4acea4: 0x1064024  and         $t0, $t0, $a2
    ctx->pc = 0x4acea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x4acea8: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x4acea8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x4aceac: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4aceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4aceb0: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4aceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4aceb4: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4aceb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4aceb8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aceb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4acebc: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x4acebcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4acec0: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4acec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4acec4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4acec4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4acec8: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4acec8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4acecc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4aceccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4aced0: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x4aced0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4aced4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4ACED4u;
    {
        const bool branch_taken_0x4aced4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACED4u;
        // 0x4aced8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aced4) {
            ctx->pc = 0x4ACF28u;
            goto label_4acf28;
        }
    }
    ctx->pc = 0x4ACEDCu;
    // 0x4acedc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acee0: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x4acee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4acee4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4acee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acee8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4acee8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4aceec: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x4aceecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4acef0: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x4acef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x4acef4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4ACEF4u;
    {
        const bool branch_taken_0x4acef4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ACEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACEF4u;
        // 0x4acef8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acef4) {
            ctx->pc = 0x4ACF2Cu;
            goto label_4acf2c;
        }
    }
    ctx->pc = 0x4ACEFCu;
    // 0x4acefc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4acefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acf00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4acf00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4acf04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4acf04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4acf08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4acf08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4acf0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4acf0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acf10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4acf10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acf14: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4acf14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4acf18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4acf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acf1c: 0x812b3da  j           func_4ACF68
    ctx->pc = 0x4ACF1Cu;
    ctx->pc = 0x4ACF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACF1Cu;
    // 0x4acf20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACF68u, 0x4ACF1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4ACF24u;
    // 0x4acf24: 0x0  nop
    ctx->pc = 0x4acf24u;
    // NOP
label_4acf28:
    // 0x4acf28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4acf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4acf2c:
    // 0x4acf2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4acf2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4acf30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4acf30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acf34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4acf34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4acf38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4acf38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acf3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4acf3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4acf40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4acf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acf44: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF44u;
        // 0x4acf48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACF4Cu;
    // 0x4acf4c: 0x0  nop
    ctx->pc = 0x4acf4cu;
    // NOP
    ctx->pc = 0x4acf50u;
}
