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

// Function: sub_00284FC0
// Address: 0x284fc0 - 0x285060
void sub_00284FC0_0x284fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284FC0_0x284fc0");
#endif

    switch (ctx->pc) {
        case 0x284fc0u: goto label_284fc0;
        case 0x284fc4u: goto label_284fc4;
        case 0x284fc8u: goto label_284fc8;
        case 0x284fccu: goto label_284fcc;
        case 0x284fd0u: goto label_284fd0;
        case 0x284fd4u: goto label_284fd4;
        case 0x284fd8u: goto label_284fd8;
        case 0x284fdcu: goto label_284fdc;
        case 0x284fe0u: goto label_284fe0;
        case 0x284fe4u: goto label_284fe4;
        case 0x284fe8u: goto label_284fe8;
        case 0x284fecu: goto label_284fec;
        case 0x284ff0u: goto label_284ff0;
        case 0x284ff4u: goto label_284ff4;
        case 0x284ff8u: goto label_284ff8;
        case 0x284ffcu: goto label_284ffc;
        case 0x285000u: goto label_285000;
        case 0x285004u: goto label_285004;
        case 0x285008u: goto label_285008;
        case 0x28500cu: goto label_28500c;
        case 0x285010u: goto label_285010;
        case 0x285014u: goto label_285014;
        case 0x285018u: goto label_285018;
        case 0x28501cu: goto label_28501c;
        case 0x285020u: goto label_285020;
        case 0x285024u: goto label_285024;
        case 0x285028u: goto label_285028;
        case 0x28502cu: goto label_28502c;
        case 0x285030u: goto label_285030;
        case 0x285034u: goto label_285034;
        case 0x285038u: goto label_285038;
        case 0x28503cu: goto label_28503c;
        case 0x285040u: goto label_285040;
        case 0x285044u: goto label_285044;
        case 0x285048u: goto label_285048;
        case 0x28504cu: goto label_28504c;
        case 0x285050u: goto label_285050;
        case 0x285054u: goto label_285054;
        case 0x285058u: goto label_285058;
        case 0x28505cu: goto label_28505c;
        default: break;
    }

    ctx->pc = 0x284fc0u;

label_284fc0:
    // 0x284fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_284fc4:
    // 0x284fc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x284fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_284fc8:
    // 0x284fc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x284fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_284fcc:
    // 0x284fcc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x284fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_284fd0:
    // 0x284fd0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x284fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_284fd4:
    // 0x284fd4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_284fd8:
    if (ctx->pc == 0x284FD8u) {
        ctx->pc = 0x284FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FD4u;
        // 0x284fd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FDCu;
        goto label_284fdc;
    }
    ctx->pc = 0x284FD4u;
    {
        const bool branch_taken_0x284fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x284fd4) {
            ctx->pc = 0x284FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284FD4u;
            // 0x284fd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284FE8u;
            goto label_284fe8;
        }
    }
    ctx->pc = 0x284FDCu;
label_284fdc:
    // 0x284fdc: 0x1000001c  b           . + 4 + (0x1C << 2)
label_284fe0:
    if (ctx->pc == 0x284FE0u) {
        ctx->pc = 0x284FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FDCu;
        // 0x284fe0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FE4u;
        goto label_284fe4;
    }
    ctx->pc = 0x284FDCu;
    {
        const bool branch_taken_0x284fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FDCu;
        // 0x284fe0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fdc) {
            ctx->pc = 0x285050u;
            goto label_285050;
        }
    }
    ctx->pc = 0x284FE4u;
label_284fe4:
    // 0x284fe4: 0x0  nop
    ctx->pc = 0x284fe4u;
    // NOP
label_284fe8:
    // 0x284fe8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_284fec:
    if (ctx->pc == 0x284FECu) {
        ctx->pc = 0x284FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FE8u;
        // 0x284fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FF0u;
        goto label_284ff0;
    }
    ctx->pc = 0x284FE8u;
    {
        const bool branch_taken_0x284fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FE8u;
        // 0x284fec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fe8) {
            ctx->pc = 0x285050u;
            goto label_285050;
        }
    }
    ctx->pc = 0x284FF0u;
label_284ff0:
    // 0x284ff0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x284ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_284ff4:
    // 0x284ff4: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x284ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_284ff8:
    // 0x284ff8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x284ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_284ffc:
    // 0x284ffc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x284ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_285000:
    // 0x285000: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x285000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_285004:
    // 0x285004: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_285008:
    // 0x285008: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x285008u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_28500c:
    // 0x28500c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285010:
    // 0x285010: 0x40f809  jalr        $v0
label_285014:
    if (ctx->pc == 0x285014u) {
        ctx->pc = 0x285014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285010u;
        // 0x285014: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285018u;
        goto label_285018;
    }
    ctx->pc = 0x285010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285018u);
        ctx->pc = 0x285014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285010u;
        // 0x285014: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285010u, 0x285018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285018u;
label_285018:
    // 0x285018: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x285018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_28501c:
    // 0x28501c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28501cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285020:
    // 0x285020: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x285020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_285024:
    // 0x285024: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x285024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_285028:
    // 0x285028: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x285028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_28502c:
    // 0x28502c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28502cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_285030:
    // 0x285030: 0x40f809  jalr        $v0
label_285034:
    if (ctx->pc == 0x285034u) {
        ctx->pc = 0x285034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285030u;
        // 0x285034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285038u;
        goto label_285038;
    }
    ctx->pc = 0x285030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x285038u);
        ctx->pc = 0x285034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285030u;
        // 0x285034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285030u, 0x285038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285038u;
label_285038:
    // 0x285038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x285038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28503c:
    // 0x28503c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_285040:
    if (ctx->pc == 0x285040u) {
        ctx->pc = 0x285040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28503Cu;
        // 0x285040: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285044u;
        goto label_285044;
    }
    ctx->pc = 0x28503Cu;
    {
        const bool branch_taken_0x28503c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x285040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28503Cu;
        // 0x285040: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28503c) {
            ctx->pc = 0x28504Cu;
            goto label_28504c;
        }
    }
    ctx->pc = 0x285044u;
label_285044:
    // 0x285044: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_285048:
    if (ctx->pc == 0x285048u) {
        ctx->pc = 0x285048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285044u;
        // 0x285048: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28504Cu;
        goto label_28504c;
    }
    ctx->pc = 0x285044u;
    {
        const bool branch_taken_0x285044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285044u;
        // 0x285048: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285044) {
            ctx->pc = 0x285054u;
            goto label_285054;
        }
    }
    ctx->pc = 0x28504Cu;
label_28504c:
    // 0x28504c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285050:
    // 0x285050: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x285050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_285054:
    // 0x285054: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x285054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_285058:
    // 0x285058: 0x3e00008  jr          $ra
label_28505c:
    if (ctx->pc == 0x28505Cu) {
        ctx->pc = 0x28505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285058u;
        // 0x28505c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285060u;
        goto label_fallthrough_0x285058;
    }
    ctx->pc = 0x285058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285058u;
        // 0x28505c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285058:
    ctx->pc = 0x285060u;
}
