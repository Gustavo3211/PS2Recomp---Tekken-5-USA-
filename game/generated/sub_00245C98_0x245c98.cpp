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

// Function: sub_00245C98
// Address: 0x245c98 - 0x245d70
void sub_00245C98_0x245c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245C98_0x245c98");
#endif

    switch (ctx->pc) {
        case 0x245cb4u: goto label_245cb4;
        case 0x245cdcu: goto label_245cdc;
        case 0x245d40u: goto label_245d40;
        case 0x245d4cu: goto label_245d4c;
        default: break;
    }

    ctx->pc = 0x245c98u;

    // 0x245c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245c9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x245c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x245ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x245ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ca4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x245ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x245ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x245ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x245cac: 0xc0916b0  jal         func_245AC0
    ctx->pc = 0x245CACu;
    SET_GPR_U32(ctx, 31, 0x245CB4u);
    ctx->pc = 0x245CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CACu;
    // 0x245cb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AC0u, 0x245CACu, 0x245CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CB4u;
label_245cb4:
    // 0x245cb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x245cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245cb8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x245cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x245cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245cc0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x245cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x245cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245cc8: 0x8c63f0d8  lw          $v1, -0xF28($v1)
    ctx->pc = 0x245cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963416)));
    // 0x245ccc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x245CCCu;
    {
        const bool branch_taken_0x245ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ccc) {
            ctx->pc = 0x245D38u;
            goto label_245d38;
        }
    }
    ctx->pc = 0x245CD4u;
    // 0x245cd4: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x245CD4u;
    SET_GPR_U32(ctx, 31, 0x245CDCu);
    ctx->pc = 0x245CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245CD4u;
    // 0x245cd8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x245CD4u, 0x245CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245CDCu;
label_245cdc:
    // 0x245cdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x245cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245ce0: 0x50a0001e  beql        $a1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x245CE0u;
    {
        const bool branch_taken_0x245ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ce0) {
            ctx->pc = 0x245CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245CE0u;
            // 0x245ce4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245D5Cu;
            goto label_245d5c;
        }
    }
    ctx->pc = 0x245CE8u;
    // 0x245ce8: 0x2e020007  sltiu       $v0, $s0, 0x7
    ctx->pc = 0x245ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x245cec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x245CECu;
    {
        const bool branch_taken_0x245cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x245CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245CECu;
        // 0x245cf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245cec) {
            ctx->pc = 0x245D58u;
            goto label_245d58;
        }
    }
    ctx->pc = 0x245CF4u;
    // 0x245cf4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x245cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x245cf8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x245cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x245cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245d00: 0x8c6308c0  lw          $v1, 0x8C0($v1)
    ctx->pc = 0x245d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2240)));
    // 0x245d04: 0x600008  jr          $v1
    ctx->pc = 0x245D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245D10u: goto label_245d10;
            case 0x245D18u: goto label_245d18;
            case 0x245D20u: goto label_245d20;
            case 0x245D28u: goto label_245d28;
            case 0x245D30u: goto label_245d30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245D04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x245D0Cu;
    // 0x245d0c: 0x0  nop
    ctx->pc = 0x245d0cu;
    // NOP
label_245d10:
    // 0x245d10: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x245D10u;
    {
        const bool branch_taken_0x245d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D10u;
        // 0x245d14: 0x8cb10030  lw          $s1, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d10) {
            ctx->pc = 0x245D54u;
            goto label_245d54;
        }
    }
    ctx->pc = 0x245D18u;
label_245d18:
    // 0x245d18: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x245D18u;
    {
        const bool branch_taken_0x245d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D18u;
        // 0x245d1c: 0x8cb10038  lw          $s1, 0x38($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d18) {
            ctx->pc = 0x245D54u;
            goto label_245d54;
        }
    }
    ctx->pc = 0x245D20u;
label_245d20:
    // 0x245d20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x245D20u;
    {
        const bool branch_taken_0x245d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D20u;
        // 0x245d24: 0x8cb10048  lw          $s1, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d20) {
            ctx->pc = 0x245D54u;
            goto label_245d54;
        }
    }
    ctx->pc = 0x245D28u;
label_245d28:
    // 0x245d28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x245D28u;
    {
        const bool branch_taken_0x245d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D28u;
        // 0x245d2c: 0x8cb10040  lw          $s1, 0x40($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d28) {
            ctx->pc = 0x245D54u;
            goto label_245d54;
        }
    }
    ctx->pc = 0x245D30u;
label_245d30:
    // 0x245d30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245D30u;
    {
        const bool branch_taken_0x245d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D30u;
        // 0x245d34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245d30) {
            ctx->pc = 0x245D54u;
            goto label_245d54;
        }
    }
    ctx->pc = 0x245D38u;
label_245d38:
    // 0x245d38: 0xc0916b8  jal         func_245AE0
    ctx->pc = 0x245D38u;
    SET_GPR_U32(ctx, 31, 0x245D40u);
    ctx->pc = 0x245D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D38u;
    // 0x245d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245AE0u, 0x245D38u, 0x245D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D40u;
label_245d40:
    // 0x245d40: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x245d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x245d44: 0xc0916e6  jal         func_245B98
    ctx->pc = 0x245D44u;
    SET_GPR_U32(ctx, 31, 0x245D4Cu);
    ctx->pc = 0x245D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245D44u;
    // 0x245d48: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245B98u, 0x245D44u, 0x245D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245D4Cu;
label_245d4c:
    // 0x245d4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x245D4Cu;
    {
        const bool branch_taken_0x245d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245d4c) {
            ctx->pc = 0x245D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245D4Cu;
            // 0x245d50: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245D54u;
            goto label_245d54;
        }
    }
    ctx->pc = 0x245D54u;
label_245d54:
    // 0x245d54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x245d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_245d58:
    // 0x245d58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245d5c:
    // 0x245d5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245d60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x245d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245d64: 0x3e00008  jr          $ra
    ctx->pc = 0x245D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245D64u;
        // 0x245d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245D6Cu;
    // 0x245d6c: 0x0  nop
    ctx->pc = 0x245d6cu;
    // NOP
    ctx->pc = 0x245d70u;
}
