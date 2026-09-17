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

// Function: sub_0050ECD0
// Address: 0x50ecd0 - 0x50ee30
void sub_0050ECD0_0x50ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050ECD0_0x50ecd0");
#endif

    switch (ctx->pc) {
        case 0x50ed18u: goto label_50ed18;
        case 0x50ed20u: goto label_50ed20;
        case 0x50ed80u: goto label_50ed80;
        case 0x50ed88u: goto label_50ed88;
        case 0x50ede0u: goto label_50ede0;
        case 0x50edf0u: goto label_50edf0;
        default: break;
    }

    ctx->pc = 0x50ecd0u;

    // 0x50ecd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x50ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x50ecd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50ecd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x50ecd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ecdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x50ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50ece0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x50ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x50ece4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x50ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50ece8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x50ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50ecec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x50ecf0: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x50ecf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x50ecf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x50ECF4u;
    {
        const bool branch_taken_0x50ecf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ECF4u;
        // 0x50ecf8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ecf4) {
            ctx->pc = 0x50ED28u;
            goto label_50ed28;
        }
    }
    ctx->pc = 0x50ECFCu;
    // 0x50ecfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50ecfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50ed00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50ed00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50ed04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50ed04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50ed08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50ed08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50ed0c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50ed0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50ed10: 0x8143a84  j           func_50EA10
    ctx->pc = 0x50ED10u;
    ctx->pc = 0x50ED14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50ED10u;
    // 0x50ed14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50EA10u, 0x50ED10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50ED18u;
label_50ed18:
    // 0x50ed18: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x50ED18u;
    SET_GPR_U32(ctx, 31, 0x50ED20u);
    ctx->pc = 0x50ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50ED18u;
    // 0x50ed1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x50ED18u, 0x50ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50ED20u;
label_50ed20:
    // 0x50ed20: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x50ED20u;
    {
        const bool branch_taken_0x50ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ED20u;
        // 0x50ed24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ed20) {
            ctx->pc = 0x50EDC0u;
            goto label_50edc0;
        }
    }
    ctx->pc = 0x50ED28u;
label_50ed28:
    // 0x50ed28: 0x261400dc  addiu       $s4, $s0, 0xDC
    ctx->pc = 0x50ed28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x50ed2c: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x50ed2cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x50ed30: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x50ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50ed34: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x50ed34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x50ed38: 0x2666c67c  addiu       $a2, $s3, -0x3984
    ctx->pc = 0x50ed38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952572));
    // 0x50ed3c: 0x261100d8  addiu       $s1, $s0, 0xD8
    ctx->pc = 0x50ed3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
    // 0x50ed40: 0xae44c688  sw          $a0, -0x3978($s2)
    ctx->pc = 0x50ed40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC688u, _value); } while (0);
    // 0x50ed44: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x50ed44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x50ed48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x50ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC67Cu));
    // 0x50ed4c: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x50ed4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x50ed50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ed50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ed54: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x50ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x50ed58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ed58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ed5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x50ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x50ed60: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x50ed60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50ed64: 0x440ffec  bltz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x50ED64u;
    {
        const bool branch_taken_0x50ed64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x50ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ED64u;
        // 0x50ed68: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ed64) {
            ctx->pc = 0x50ED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50ed18;
        }
    }
    ctx->pc = 0x50ED6Cu;
    // 0x50ed6c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50ed6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50ed70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x50ed70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x50ed74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x50ED74u;
    {
        const bool branch_taken_0x50ed74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x50ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ED74u;
        // 0x50ed78: 0x8e43c688  lw          $v1, -0x3978($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ed74) {
            ctx->pc = 0x50EDA8u;
            goto label_50eda8;
        }
    }
    ctx->pc = 0x50ED7Cu;
    // 0x50ed7c: 0x0  nop
    ctx->pc = 0x50ed7cu;
    // NOP
label_50ed80:
    // 0x50ed80: 0xc143a12  jal         func_50E848
    ctx->pc = 0x50ED80u;
    SET_GPR_U32(ctx, 31, 0x50ED88u);
    ctx->pc = 0x50E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50E848u, 0x50ED80u, 0x50ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50ED88u;
label_50ed88:
    // 0x50ed88: 0x8e42c688  lw          $v0, -0x3978($s2)
    ctx->pc = 0x50ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952584)));
    // 0x50ed8c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x50ed8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50ed90: 0x460ffe1  bltz        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x50ED90u;
    {
        const bool branch_taken_0x50ed90 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x50ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ED90u;
        // 0x50ed94: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ed90) {
            ctx->pc = 0x50ED18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50ed18;
        }
    }
    ctx->pc = 0x50ED98u;
    // 0x50ed98: 0x9662c67c  lhu         $v0, -0x3984($s3)
    ctx->pc = 0x50ed98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294952572)));
    // 0x50ed9c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x50ed9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x50eda0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x50EDA0u;
    {
        const bool branch_taken_0x50eda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EDA0u;
        // 0x50eda4: 0x8e43c688  lw          $v1, -0x3978($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294952584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50eda0) {
            ctx->pc = 0x50ED80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50ed80;
        }
    }
    ctx->pc = 0x50EDA8u;
label_50eda8:
    // 0x50eda8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x50eda8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x50edac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50edb0: 0x34018000  ori         $at, $zero, 0x8000
    ctx->pc = 0x50edb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x50edb4: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x50edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x50edb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x50edbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x50edbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50edc0:
    // 0x50edc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x50edc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50edc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x50edc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50edc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50edc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50edcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x50edccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50edd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x50edd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50edd4: 0x3e00008  jr          $ra
    ctx->pc = 0x50EDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EDD4u;
        // 0x50edd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50EDD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50EDDCu;
    // 0x50eddc: 0x0  nop
    ctx->pc = 0x50eddcu;
    // NOP
label_50ede0:
    // 0x50ede0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50ede4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50ede8: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x50EDE8u;
    SET_GPR_U32(ctx, 31, 0x50EDF0u);
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x50EDE8u, 0x50EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EDF0u;
label_50edf0:
    // 0x50edf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50edf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50edf4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x50edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x50edf8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x50edf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x50edfc: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x50edfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x50ee00: 0x24631840  addiu       $v1, $v1, 0x1840
    ctx->pc = 0x50ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6208));
    // 0x50ee04: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x50ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x50ee08: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x50ee08u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50ee0c: 0xac4300dc  sw          $v1, 0xDC($v0)
    ctx->pc = 0x50ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 3));
    // 0x50ee10: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x50ee10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x50ee14: 0x81441d0  j           func_510740
    ctx->pc = 0x50EE14u;
    ctx->pc = 0x50EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EE14u;
    // 0x50ee18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x510740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510740u, 0x50EE14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50EE1Cu;
    // 0x50ee1c: 0x0  nop
    ctx->pc = 0x50ee1cu;
    // NOP
    // 0x50ee20: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x50ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x50ee24: 0x3e00008  jr          $ra
    ctx->pc = 0x50EE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EE24u;
        // 0x50ee28: 0x2442a380  addiu       $v0, $v0, -0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943616));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50EE24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50EE2Cu;
    // 0x50ee2c: 0x0  nop
    ctx->pc = 0x50ee2cu;
    // NOP
    ctx->pc = 0x50ee30u;
}
