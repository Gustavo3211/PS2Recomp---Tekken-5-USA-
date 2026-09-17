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

// Function: sub_00237CA0
// Address: 0x237ca0 - 0x238118
void sub_00237CA0_0x237ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237CA0_0x237ca0");
#endif

    switch (ctx->pc) {
        case 0x237cd4u: goto label_237cd4;
        case 0x237ce4u: goto label_237ce4;
        case 0x237e58u: goto label_237e58;
        case 0x237e70u: goto label_237e70;
        case 0x237f98u: goto label_237f98;
        case 0x237fa8u: goto label_237fa8;
        case 0x238018u: goto label_238018;
        case 0x23803cu: goto label_23803c;
        case 0x23804cu: goto label_23804c;
        case 0x23807cu: goto label_23807c;
        case 0x238084u: goto label_238084;
        case 0x2380a4u: goto label_2380a4;
        case 0x2380d4u: goto label_2380d4;
        case 0x2380f4u: goto label_2380f4;
        default: break;
    }

    ctx->pc = 0x237ca0u;

    // 0x237ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x237ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237ca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x237cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237cb0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x237cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237cb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x237cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x237cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x237cc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x237cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237cc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x237cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x237cc8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x237cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x237ccc: 0xc082fac  jal         func_20BEB0
    ctx->pc = 0x237CCCu;
    SET_GPR_U32(ctx, 31, 0x237CD4u);
    ctx->pc = 0x237CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237CCCu;
    // 0x237cd0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BEB0u, 0x237CCCu, 0x237CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CD4u;
label_237cd4:
    // 0x237cd4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x237CD4u;
    {
        const bool branch_taken_0x237cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237cd4) {
            ctx->pc = 0x237CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237CD4u;
            // 0x237cd8: 0x86020148  lh          $v0, 0x148($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237CF4u;
            goto label_237cf4;
        }
    }
    ctx->pc = 0x237CDCu;
    // 0x237cdc: 0xc08215c  jal         func_208570
    ctx->pc = 0x237CDCu;
    SET_GPR_U32(ctx, 31, 0x237CE4u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x237CDCu, 0x237CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237CE4u;
label_237ce4:
    // 0x237ce4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x237ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x237ce8: 0x50430103  beql        $v0, $v1, . + 4 + (0x103 << 2)
    ctx->pc = 0x237CE8u;
    {
        const bool branch_taken_0x237ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x237ce8) {
            ctx->pc = 0x237CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237CE8u;
            // 0x237cec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x237CF0u;
    // 0x237cf0: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x237cf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
label_237cf4:
    // 0x237cf4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237CF4u;
    {
        const bool branch_taken_0x237cf4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237CF4u;
        // 0x237cf8: 0x86220148  lh          $v0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cf4) {
            ctx->pc = 0x237D04u;
            goto label_237d04;
        }
    }
    ctx->pc = 0x237CFCu;
    // 0x237cfc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x237cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d00: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x237d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237d04:
    // 0x237d04: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237D04u;
    {
        const bool branch_taken_0x237d04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x237D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D04u;
        // 0x237d08: 0x96040166  lhu         $a0, 0x166($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d04) {
            ctx->pc = 0x237D14u;
            goto label_237d14;
        }
    }
    ctx->pc = 0x237D0Cu;
    // 0x237d0c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x237d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d10: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x237d10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237d14:
    // 0x237d14: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x237d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x237d18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x237d1c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x237d20: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x237d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x237d24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237D24u;
    {
        const bool branch_taken_0x237d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D24u;
        // 0x237d28: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d24) {
            ctx->pc = 0x237D38u;
            goto label_237d38;
        }
    }
    ctx->pc = 0x237D2Cu;
    // 0x237d2c: 0x9202018a  lbu         $v0, 0x18A($s0)
    ctx->pc = 0x237d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 394)));
    // 0x237d30: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x237D30u;
    {
        const bool branch_taken_0x237d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237d30) {
            ctx->pc = 0x237D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D30u;
            // 0x237d34: 0x3088ffff  andi        $t0, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D38u;
            goto label_237d38;
        }
    }
    ctx->pc = 0x237D38u;
label_237d38:
    // 0x237d38: 0x96230166  lhu         $v1, 0x166($s1)
    ctx->pc = 0x237d38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 358)));
    // 0x237d3c: 0x3402fffc  ori         $v0, $zero, 0xFFFC
    ctx->pc = 0x237d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x237d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237d44: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x237d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x237d48: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x237d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x237d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x237D4Cu;
    {
        const bool branch_taken_0x237d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237d4c) {
            ctx->pc = 0x237D60u;
            goto label_237d60;
        }
    }
    ctx->pc = 0x237D54u;
    // 0x237d54: 0x9222018a  lbu         $v0, 0x18A($s1)
    ctx->pc = 0x237d54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 394)));
    // 0x237d58: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x237D58u;
    {
        const bool branch_taken_0x237d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237d58) {
            ctx->pc = 0x237D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237D58u;
            // 0x237d5c: 0x3068ffff  andi        $t0, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x237D60u;
            goto label_237d60;
        }
    }
    ctx->pc = 0x237D60u;
label_237d60:
    // 0x237d60: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x237D60u;
    {
        const bool branch_taken_0x237d60 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237D60u;
        // 0x237d64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d60) {
            ctx->pc = 0x237D98u;
            goto label_237d98;
        }
    }
    ctx->pc = 0x237D68u;
    // 0x237d68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x237d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237d74: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237d74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237d7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237d80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x237d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237d84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237d88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237d88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237d8c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237d90: 0x808dd60  j           func_237580
    ctx->pc = 0x237D90u;
    ctx->pc = 0x237D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237D90u;
    // 0x237d94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    sub_00237580_0x237580(rdram, ctx, runtime); return;
    ctx->pc = 0x237D98u;
label_237d98:
    // 0x237d98: 0x3402fff6  ori         $v0, $zero, 0xFFF6
    ctx->pc = 0x237d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    // 0x237d9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x237d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x237da0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x237da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x237da4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x237da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x237da8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x237DA8u;
    {
        const bool branch_taken_0x237da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DA8u;
        // 0x237dac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237da8) {
            ctx->pc = 0x237DE8u;
            goto label_237de8;
        }
    }
    ctx->pc = 0x237DB0u;
    // 0x237db0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237db0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237db4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x237db4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237dbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237dc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237dc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237dc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237dcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237dd0: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x237dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x237dd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237dd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237dd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ddc: 0x808dd60  j           func_237580
    ctx->pc = 0x237DDCu;
    ctx->pc = 0x237DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237DDCu;
    // 0x237de0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    sub_00237580_0x237580(rdram, ctx, runtime); return;
    ctx->pc = 0x237DE4u;
    // 0x237de4: 0x0  nop
    ctx->pc = 0x237de4u;
    // NOP
label_237de8:
    // 0x237de8: 0x3402fff6  ori         $v0, $zero, 0xFFF6
    ctx->pc = 0x237de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65526);
    // 0x237dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x237df0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x237df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x237df4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x237df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x237df8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x237DF8u;
    {
        const bool branch_taken_0x237df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237DF8u;
        // 0x237dfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237df8) {
            ctx->pc = 0x237E30u;
            goto label_237e30;
        }
    }
    ctx->pc = 0x237E00u;
    // 0x237e00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237e00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237e04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237e08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x237e08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237e10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237e14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237e18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237e18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237e1c: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x237e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x237e20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237e24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e28: 0x808dd60  j           func_237580
    ctx->pc = 0x237E28u;
    ctx->pc = 0x237E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E28u;
    // 0x237e2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    sub_00237580_0x237580(rdram, ctx, runtime); return;
    ctx->pc = 0x237E30u;
label_237e30:
    // 0x237e30: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x237E30u;
    {
        const bool branch_taken_0x237e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x237e30) {
            ctx->pc = 0x237E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237E30u;
            // 0x237e34: 0x8e620280  lw          $v0, 0x280($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237E44u;
            goto label_237e44;
        }
    }
    ctx->pc = 0x237E38u;
    // 0x237e38: 0x1680004b  bnez        $s4, . + 4 + (0x4B << 2)
    ctx->pc = 0x237E38u;
    {
        const bool branch_taken_0x237e38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x237e38) {
            ctx->pc = 0x237F68u;
            goto label_237f68;
        }
    }
    ctx->pc = 0x237E40u;
    // 0x237e40: 0x8e620280  lw          $v0, 0x280($s3)
    ctx->pc = 0x237e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 640)));
label_237e44:
    // 0x237e44: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x237E44u;
    {
        const bool branch_taken_0x237e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E44u;
        // 0x237e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e44) {
            ctx->pc = 0x237F68u;
            goto label_237f68;
        }
    }
    ctx->pc = 0x237E4Cu;
    // 0x237e4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e50: 0xc08cb46  jal         func_232D18
    ctx->pc = 0x237E50u;
    SET_GPR_U32(ctx, 31, 0x237E58u);
    ctx->pc = 0x237E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E50u;
    // 0x237e54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D18u, 0x237E50u, 0x237E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E58u;
label_237e58:
    // 0x237e58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x237E58u;
    {
        const bool branch_taken_0x237e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E58u;
        // 0x237e5c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e58) {
            ctx->pc = 0x237E78u;
            goto label_237e78;
        }
    }
    ctx->pc = 0x237E60u;
    // 0x237e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e68: 0xc08cb46  jal         func_232D18
    ctx->pc = 0x237E68u;
    SET_GPR_U32(ctx, 31, 0x237E70u);
    ctx->pc = 0x237E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237E68u;
    // 0x237e6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D18u, 0x237E68u, 0x237E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237E70u;
label_237e70:
    // 0x237e70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x237E70u;
    {
        const bool branch_taken_0x237e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E70u;
        // 0x237e74: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e70) {
            ctx->pc = 0x237EC8u;
            goto label_237ec8;
        }
    }
    ctx->pc = 0x237E78u;
label_237e78:
    // 0x237e78: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x237e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x237e7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237e80: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x237e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x237e84: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x237e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237e88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x237e88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237e8c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x237E8Cu;
    {
        const bool branch_taken_0x237e8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237E8Cu;
        // 0x237e90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e8c) {
            ctx->pc = 0x237F18u;
            goto label_237f18;
        }
    }
    ctx->pc = 0x237E94u;
    // 0x237e94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237e98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x237e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237ea0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ea4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237ea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237ea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237eac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237eb0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237eb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237eb4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x237eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237eb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ec0: 0x808dd60  j           func_237580
    ctx->pc = 0x237EC0u;
    ctx->pc = 0x237EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237EC0u;
    // 0x237ec4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    sub_00237580_0x237580(rdram, ctx, runtime); return;
    ctx->pc = 0x237EC8u;
label_237ec8:
    // 0x237ec8: 0x3c0143af  lui         $at, 0x43AF
    ctx->pc = 0x237ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17327 << 16));
    // 0x237ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x237eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x237ed0: 0x2462dda0  addiu       $v0, $v1, -0x2260
    ctx->pc = 0x237ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x237ed4: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x237ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x237ed8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x237ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237edc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x237EDCu;
    {
        const bool branch_taken_0x237edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237EDCu;
        // 0x237ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237edc) {
            ctx->pc = 0x237F18u;
            goto label_237f18;
        }
    }
    ctx->pc = 0x237EE4u;
    // 0x237ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237ee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x237ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237ef0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237ef0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237ef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237efc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237f00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237f00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237f04: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x237f04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237f08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237f0c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f10: 0x808dd60  j           func_237580
    ctx->pc = 0x237F10u;
    ctx->pc = 0x237F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F10u;
    // 0x237f14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    sub_00237580_0x237580(rdram, ctx, runtime); return;
    ctx->pc = 0x237F18u;
label_237f18:
    // 0x237f18: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x237f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x237f1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x237f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x237f20: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x237f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x237f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x237f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x237f28: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x237F28u;
    {
        const bool branch_taken_0x237f28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x237F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F28u;
        // 0x237f2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f28) {
            ctx->pc = 0x237F68u;
            goto label_237f68;
        }
    }
    ctx->pc = 0x237F30u;
    // 0x237f30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x237f30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x237f34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x237f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237f3c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237f3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237f40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x237f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x237f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237f48: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237f4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x237f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x237f50: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x237f50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x237f54: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x237f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x237f58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x237f58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237f5c: 0x808dd60  j           func_237580
    ctx->pc = 0x237F5Cu;
    ctx->pc = 0x237F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F5Cu;
    // 0x237f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    sub_00237580_0x237580(rdram, ctx, runtime); return;
    ctx->pc = 0x237F64u;
    // 0x237f64: 0x0  nop
    ctx->pc = 0x237f64u;
    // NOP
label_237f68:
    // 0x237f68: 0x12400063  beqz        $s2, . + 4 + (0x63 << 2)
    ctx->pc = 0x237F68u;
    {
        const bool branch_taken_0x237f68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F68u;
        // 0x237f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f68) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x237F70u;
    // 0x237f70: 0x12800061  beqz        $s4, . + 4 + (0x61 << 2)
    ctx->pc = 0x237F70u;
    {
        const bool branch_taken_0x237f70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F70u;
        // 0x237f74: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f70) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x237F78u;
    // 0x237f78: 0x96430166  lhu         $v1, 0x166($s2)
    ctx->pc = 0x237f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
    // 0x237f7c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x237f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x237f80: 0x1082005e  beq         $a0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x237F80u;
    {
        const bool branch_taken_0x237f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x237F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237F80u;
        // 0x237f84: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f80) {
            ctx->pc = 0x2380FCu;
            goto label_2380fc;
        }
    }
    ctx->pc = 0x237F88u;
    // 0x237f88: 0x54800025  bnel        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x237F88u;
    {
        const bool branch_taken_0x237f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x237f88) {
            ctx->pc = 0x237F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F88u;
            // 0x237f8c: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x238020u;
            goto label_238020;
        }
    }
    ctx->pc = 0x237F90u;
    // 0x237f90: 0xc084334  jal         func_210CD0
    ctx->pc = 0x237F90u;
    SET_GPR_U32(ctx, 31, 0x237F98u);
    ctx->pc = 0x237F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237F90u;
    // 0x237f94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x237F90u, 0x237F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237F98u;
label_237f98:
    // 0x237f98: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x237F98u;
    {
        const bool branch_taken_0x237f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237f98) {
            ctx->pc = 0x237F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237F98u;
            // 0x237f9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237FFCu;
            goto label_237ffc;
        }
    }
    ctx->pc = 0x237FA0u;
    // 0x237fa0: 0xc084334  jal         func_210CD0
    ctx->pc = 0x237FA0u;
    SET_GPR_U32(ctx, 31, 0x237FA8u);
    ctx->pc = 0x237FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237FA0u;
    // 0x237fa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x237FA0u, 0x237FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237FA8u;
label_237fa8:
    // 0x237fa8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x237FA8u;
    {
        const bool branch_taken_0x237fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FA8u;
        // 0x237fac: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fa8) {
            ctx->pc = 0x237FF8u;
            goto label_237ff8;
        }
    }
    ctx->pc = 0x237FB0u;
    // 0x237fb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x237fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237fb4: 0x2442e020  addiu       $v0, $v0, -0x1FE0
    ctx->pc = 0x237fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959136));
    // 0x237fb8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x237fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x237fbc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x237FBCu;
    {
        const bool branch_taken_0x237fbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x237FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FBCu;
        // 0x237fc0: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fbc) {
            ctx->pc = 0x237FD0u;
            goto label_237fd0;
        }
    }
    ctx->pc = 0x237FC4u;
    // 0x237fc4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x237fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x237fc8: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x237FC8u;
    {
        const bool branch_taken_0x237fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x237fc8) {
            ctx->pc = 0x237FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237FC8u;
            // 0x237fcc: 0x96430166  lhu         $v1, 0x166($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23801Cu;
            goto label_23801c;
        }
    }
    ctx->pc = 0x237FD0u;
label_237fd0:
    // 0x237fd0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x237fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x237fd4: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x237FD4u;
    {
        const bool branch_taken_0x237fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x237FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FD4u;
        // 0x237fd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fd4) {
            ctx->pc = 0x238018u;
            goto label_238018;
        }
    }
    ctx->pc = 0x237FDCu;
    // 0x237fdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x237fe0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x237fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fe4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x237fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x237fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x237FECu;
    {
        const bool branch_taken_0x237fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237FECu;
        // 0x237ff0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237fec) {
            ctx->pc = 0x238010u;
            goto label_238010;
        }
    }
    ctx->pc = 0x237FF4u;
    // 0x237ff4: 0x0  nop
    ctx->pc = 0x237ff4u;
    // NOP
label_237ff8:
    // 0x237ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x237ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_237ffc:
    // 0x237ffc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238000: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x238000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238004: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x238004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238008: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x238008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23800c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23800cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238010:
    // 0x238010: 0xc08dd60  jal         func_237580
    ctx->pc = 0x238010u;
    SET_GPR_U32(ctx, 31, 0x238018u);
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x238010u, 0x238018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238018u;
label_238018:
    // 0x238018: 0x96430166  lhu         $v1, 0x166($s2)
    ctx->pc = 0x238018u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
label_23801c:
    // 0x23801c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x23801cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_238020:
    // 0x238020: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x238020u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x238024: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238024u;
    {
        const bool branch_taken_0x238024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238024u;
        // 0x238028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238024) {
            ctx->pc = 0x238034u;
            goto label_238034;
        }
    }
    ctx->pc = 0x23802Cu;
    // 0x23802c: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x23802Cu;
    {
        const bool branch_taken_0x23802c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x238030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23802Cu;
        // 0x238030: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23802c) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x238034u;
label_238034:
    // 0x238034: 0xc084334  jal         func_210CD0
    ctx->pc = 0x238034u;
    SET_GPR_U32(ctx, 31, 0x23803Cu);
    ctx->pc = 0x238038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238034u;
    // 0x238038: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x238034u, 0x23803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23803Cu;
label_23803c:
    // 0x23803c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23803Cu;
    {
        const bool branch_taken_0x23803c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23803c) {
            ctx->pc = 0x238054u;
            goto label_238054;
        }
    }
    ctx->pc = 0x238044u;
    // 0x238044: 0xc084334  jal         func_210CD0
    ctx->pc = 0x238044u;
    SET_GPR_U32(ctx, 31, 0x23804Cu);
    ctx->pc = 0x238048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238044u;
    // 0x238048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210CD0u, 0x238044u, 0x23804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23804Cu;
label_23804c:
    // 0x23804c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23804Cu;
    {
        const bool branch_taken_0x23804c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23804Cu;
        // 0x238050: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23804c) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x238054u;
label_238054:
    // 0x238054: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x238054u;
    {
        const bool branch_taken_0x238054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x238058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238054u;
        // 0x238058: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238054) {
            ctx->pc = 0x238070u;
            goto label_238070;
        }
    }
    ctx->pc = 0x23805Cu;
    // 0x23805c: 0x96420166  lhu         $v0, 0x166($s2)
    ctx->pc = 0x23805cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 358)));
    // 0x238060: 0x2c4200fa  sltiu       $v0, $v0, 0xFA
    ctx->pc = 0x238060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)250) ? 1 : 0);
    // 0x238064: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x238064u;
    {
        const bool branch_taken_0x238064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238064) {
            ctx->pc = 0x238068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238064u;
            // 0x238068: 0xa6400166  sh          $zero, 0x166($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 358), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x238070u;
            goto label_238070;
        }
    }
    ctx->pc = 0x23806Cu;
    // 0x23806c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238070:
    // 0x238070: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x238070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238074: 0xc08de9c  jal         func_237A70
    ctx->pc = 0x238074u;
    SET_GPR_U32(ctx, 31, 0x23807Cu);
    ctx->pc = 0x238078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238074u;
    // 0x238078: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A70u, 0x238074u, 0x23807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23807Cu;
label_23807c:
    // 0x23807c: 0xc08cb60  jal         func_232D80
    ctx->pc = 0x23807Cu;
    SET_GPR_U32(ctx, 31, 0x238084u);
    ctx->pc = 0x238080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23807Cu;
    // 0x238080: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D80u, 0x23807Cu, 0x238084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238084u;
label_238084:
    // 0x238084: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x238084u;
    {
        const bool branch_taken_0x238084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238084u;
        // 0x238088: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238084) {
            ctx->pc = 0x2380B0u;
            goto label_2380b0;
        }
    }
    ctx->pc = 0x23808Cu;
    // 0x23808c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x23808cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238090: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x238090u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x238094: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x238094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238098: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x238098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23809c: 0xc08dd60  jal         func_237580
    ctx->pc = 0x23809Cu;
    SET_GPR_U32(ctx, 31, 0x2380A4u);
    ctx->pc = 0x2380A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23809Cu;
    // 0x2380a0: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x23809Cu, 0x2380A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380A4u;
label_2380a4:
    // 0x2380a4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2380A4u;
    {
        const bool branch_taken_0x2380a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380A4u;
        // 0x2380a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380a4) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x2380ACu;
    // 0x2380ac: 0x0  nop
    ctx->pc = 0x2380acu;
    // NOP
label_2380b0:
    // 0x2380b0: 0x2a020066  slti        $v0, $s0, 0x66
    ctx->pc = 0x2380b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x2380b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2380B4u;
    {
        const bool branch_taken_0x2380b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2380B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380B4u;
        // 0x2380b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380b4) {
            ctx->pc = 0x2380E0u;
            goto label_2380e0;
        }
    }
    ctx->pc = 0x2380BCu;
    // 0x2380bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2380bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380c0: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2380c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2380c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2380c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380c8: 0x2608ff9a  addiu       $t0, $s0, -0x66
    ctx->pc = 0x2380c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967194));
    // 0x2380cc: 0xc08dd60  jal         func_237580
    ctx->pc = 0x2380CCu;
    SET_GPR_U32(ctx, 31, 0x2380D4u);
    ctx->pc = 0x2380D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380CCu;
    // 0x2380d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x2380CCu, 0x2380D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380D4u;
label_2380d4:
    // 0x2380d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2380D4u;
    {
        const bool branch_taken_0x2380d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2380D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2380D4u;
        // 0x2380d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2380d4) {
            ctx->pc = 0x2380F8u;
            goto label_2380f8;
        }
    }
    ctx->pc = 0x2380DCu;
    // 0x2380dc: 0x0  nop
    ctx->pc = 0x2380dcu;
    // NOP
label_2380e0:
    // 0x2380e0: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x2380e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2380e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2380e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2380e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2380ec: 0xc08dd60  jal         func_237580
    ctx->pc = 0x2380ECu;
    SET_GPR_U32(ctx, 31, 0x2380F4u);
    ctx->pc = 0x2380F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2380ECu;
    // 0x2380f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237580u, 0x2380ECu, 0x2380F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2380F4u;
label_2380f4:
    // 0x2380f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2380f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2380f8:
    // 0x2380f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2380f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2380fc:
    // 0x2380fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2380fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x238100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238104: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x238104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238108: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x238108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23810c: 0x3e00008  jr          $ra
    ctx->pc = 0x23810Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23810Cu;
        // 0x238110: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23810Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238114u;
    // 0x238114: 0x0  nop
    ctx->pc = 0x238114u;
    // NOP
    ctx->pc = 0x238118u;
}
