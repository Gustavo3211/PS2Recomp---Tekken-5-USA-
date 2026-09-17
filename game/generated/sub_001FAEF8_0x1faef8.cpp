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

// Function: sub_001FAEF8
// Address: 0x1faef8 - 0x1fafd0
void sub_001FAEF8_0x1faef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAEF8_0x1faef8");
#endif

    switch (ctx->pc) {
        case 0x1faf28u: goto label_1faf28;
        default: break;
    }

    ctx->pc = 0x1faef8u;

    // 0x1faef8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1faefc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faf00: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1faf04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1faf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1faf08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1faf08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf0c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1faf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1faf10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1faf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1faf14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1faf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1faf18: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FAF18u;
    {
        const bool branch_taken_0x1faf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF18u;
        // 0x1faf1c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf18) {
            ctx->pc = 0x1FAFB4u;
            goto label_1fafb4;
        }
    }
    ctx->pc = 0x1FAF20u;
    // 0x1faf20: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x1FAF20u;
    SET_GPR_U32(ctx, 31, 0x1FAF28u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x1FAF20u, 0x1FAF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF28u;
label_1faf28:
    // 0x1faf28: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FAF28u;
    {
        const bool branch_taken_0x1faf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF28u;
        // 0x1faf2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf28) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAF30u;
    // 0x1faf30: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1faf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1faf34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1faf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faf38: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FAF38u;
    {
        const bool branch_taken_0x1faf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faf38) {
            ctx->pc = 0x1FAF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAF38u;
            // 0x1faf3c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF6Cu;
            goto label_1faf6c;
        }
    }
    ctx->pc = 0x1FAF40u;
    // 0x1faf40: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1faf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1faf44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF44u;
    {
        const bool branch_taken_0x1faf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF44u;
        // 0x1faf48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf44) {
            ctx->pc = 0x1FAF54u;
            goto label_1faf54;
        }
    }
    ctx->pc = 0x1FAF4Cu;
    // 0x1faf4c: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x1faf4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1faf50: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1faf50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1faf54:
    // 0x1faf54: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FAF54u;
    {
        const bool branch_taken_0x1faf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF54u;
        // 0x1faf58: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf54) {
            ctx->pc = 0x1FAF94u;
            goto label_1faf94;
        }
    }
    ctx->pc = 0x1FAF5Cu;
    // 0x1faf5c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1faf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1faf60: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FAF60u;
    {
        const bool branch_taken_0x1faf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1faf60) {
            ctx->pc = 0x1FAF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAF60u;
            // 0x1faf64: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAF98u;
            goto label_1faf98;
        }
    }
    ctx->pc = 0x1FAF68u;
    // 0x1faf68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1faf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1faf6c:
    // 0x1faf6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1faf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1faf70: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FAF70u;
    {
        const bool branch_taken_0x1faf70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF70u;
        // 0x1faf74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf70) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAF78u;
    // 0x1faf78: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1faf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1faf7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF7Cu;
    {
        const bool branch_taken_0x1faf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF7Cu;
        // 0x1faf80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf7c) {
            ctx->pc = 0x1FAF8Cu;
            goto label_1faf8c;
        }
    }
    ctx->pc = 0x1FAF84u;
    // 0x1faf84: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x1faf84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1faf88: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1faf88u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1faf8c:
    // 0x1faf8c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FAF8Cu;
    {
        const bool branch_taken_0x1faf8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF8Cu;
        // 0x1faf90: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf8c) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAF94u;
label_1faf94:
    // 0x1faf94: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1faf98:
    // 0x1faf98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAF98u;
    {
        const bool branch_taken_0x1faf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF98u;
        // 0x1faf9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf98) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAFA0u;
    // 0x1fafa0: 0x86020086  lh          $v0, 0x86($s0)
    ctx->pc = 0x1fafa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 134)));
    // 0x1fafa4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAFA4u;
    {
        const bool branch_taken_0x1fafa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFA4u;
        // 0x1fafa8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafa4) {
            ctx->pc = 0x1FAFB8u;
            goto label_1fafb8;
        }
    }
    ctx->pc = 0x1FAFACu;
    // 0x1fafac: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1fafacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1fafb0: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1fafb0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fafb4:
    // 0x1fafb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fafb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fafb8:
    // 0x1fafb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fafb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fafbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fafbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fafc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fafc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fafc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFC4u;
        // 0x1fafc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFCCu;
    // 0x1fafcc: 0x0  nop
    ctx->pc = 0x1fafccu;
    // NOP
    ctx->pc = 0x1fafd0u;
}
