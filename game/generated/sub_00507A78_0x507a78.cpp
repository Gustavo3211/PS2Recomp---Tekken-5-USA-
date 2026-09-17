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

// Function: sub_00507A78
// Address: 0x507a78 - 0x507b80
void sub_00507A78_0x507a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00507A78_0x507a78");
#endif

    switch (ctx->pc) {
        case 0x507accu: goto label_507acc;
        case 0x507ad4u: goto label_507ad4;
        case 0x507adcu: goto label_507adc;
        case 0x507b34u: goto label_507b34;
        default: break;
    }

    ctx->pc = 0x507a78u;

    // 0x507a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x507a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x507a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x507a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x507a80: 0x3c100090  lui         $s0, 0x90
    ctx->pc = 0x507a80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)144 << 16));
    // 0x507a84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x507a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x507a88: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x507a88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x507a8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x507a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x507a90: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x507a90u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x507a94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x507a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x507a98: 0x2610f080  addiu       $s0, $s0, -0xF80
    ctx->pc = 0x507a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963328));
    // 0x507a9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x507a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x507aa0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x507aa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x507aa4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x507aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x507aa8: 0x26130054  addiu       $s3, $s0, 0x54
    ctx->pc = 0x507aa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x507aac: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x507aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x507ab0: 0x2631c57c  addiu       $s1, $s1, -0x3A84
    ctx->pc = 0x507ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952316));
    // 0x507ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x507ab8: 0x2652c580  addiu       $s2, $s2, -0x3A80
    ctx->pc = 0x507ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952320));
    // 0x507abc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x507abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x507ac0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x507ac0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC57Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC57Cu, _value); } while (0);
    // 0x507ac4: 0xc141e4c  jal         func_507930
    ctx->pc = 0x507AC4u;
    SET_GPR_U32(ctx, 31, 0x507ACCu);
    ctx->pc = 0x507AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507AC4u;
    // 0x507ac8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507930u, 0x507AC4u, 0x507ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507ACCu;
label_507acc:
    // 0x507acc: 0xc141e1c  jal         func_507870
    ctx->pc = 0x507ACCu;
    SET_GPR_U32(ctx, 31, 0x507AD4u);
    ctx->pc = 0x507AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507ACCu;
    // 0x507ad0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x507870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507870u, 0x507ACCu, 0x507AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507AD4u;
label_507ad4:
    // 0x507ad4: 0xc141e76  jal         func_5079D8
    ctx->pc = 0x507AD4u;
    SET_GPR_U32(ctx, 31, 0x507ADCu);
    ctx->pc = 0x5079D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5079D8u, 0x507AD4u, 0x507ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507ADCu;
label_507adc:
    // 0x507adc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x507adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507ae0: 0x2691009c  addiu       $s1, $s4, 0x9C
    ctx->pc = 0x507ae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 156));
    // 0x507ae4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x507ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x507ae8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x507ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x507aec: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x507aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x507af0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x507af0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507af4: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x507af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x507af8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x507AF8u;
    {
        const bool branch_taken_0x507af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x507AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507AF8u;
        // 0x507afc: 0x26840094  addiu       $a0, $s4, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507af8) {
            ctx->pc = 0x507B60u;
            goto label_507b60;
        }
    }
    ctx->pc = 0x507B00u;
    // 0x507b00: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x507b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x507b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x507b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x507b08: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x507b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x507b0c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x507b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x507b10: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x507B10u;
    {
        const bool branch_taken_0x507b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x507B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507B10u;
        // 0x507b14: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x507b10) {
            ctx->pc = 0x507B60u;
            goto label_507b60;
        }
    }
    ctx->pc = 0x507B18u;
    // 0x507b18: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x507b18u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x507b1c: 0x26900098  addiu       $s0, $s4, 0x98
    ctx->pc = 0x507b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x507b20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x507b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507b24: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x507b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x507b28: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x507b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x507b2c: 0xc144c5a  jal         func_513168
    ctx->pc = 0x507B2Cu;
    SET_GPR_U32(ctx, 31, 0x507B34u);
    ctx->pc = 0x507B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x507B2Cu;
    // 0x507b30: 0x84450002  lh          $a1, 0x2($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513168u, 0x507B2Cu, 0x507B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x507B34u;
label_507b34:
    // 0x507b34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x507b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x507b38: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x507b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x507b3c: 0x244278f0  addiu       $v0, $v0, 0x78F0
    ctx->pc = 0x507b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30960));
    // 0x507b40: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x507b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
    // 0x507b44: 0x2444ff90  addiu       $a0, $v0, -0x70
    ctx->pc = 0x507b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x507b48: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x507b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x507b4c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x507b4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x507b50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x507b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x507b54: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x507b54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x507b58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x507b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x507b5c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x507b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_507b60:
    // 0x507b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x507b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x507b64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x507b64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x507b68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x507b68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x507b6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x507b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x507b70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x507b70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x507b74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x507b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x507b78: 0x3e00008  jr          $ra
    ctx->pc = 0x507B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x507B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x507B78u;
        // 0x507b7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x507B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x507B80u;
}
