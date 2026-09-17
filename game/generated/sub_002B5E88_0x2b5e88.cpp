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

// Function: sub_002B5E88
// Address: 0x2b5e88 - 0x2b5f80
void sub_002B5E88_0x2b5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5E88_0x2b5e88");
#endif

    switch (ctx->pc) {
        case 0x2b5ed4u: goto label_2b5ed4;
        case 0x2b5eecu: goto label_2b5eec;
        case 0x2b5efcu: goto label_2b5efc;
        case 0x2b5f10u: goto label_2b5f10;
        case 0x2b5f28u: goto label_2b5f28;
        case 0x2b5f38u: goto label_2b5f38;
        case 0x2b5f50u: goto label_2b5f50;
        default: break;
    }

    ctx->pc = 0x2b5e88u;

    // 0x2b5e88: 0x27bdfbc0  addiu       $sp, $sp, -0x440
    ctx->pc = 0x2b5e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966208));
    // 0x2b5e8c: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x2b5e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2b5e90: 0xffb10418  sd          $s1, 0x418($sp)
    ctx->pc = 0x2b5e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 17));
    // 0x2b5e94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b5e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e98: 0xffb20420  sd          $s2, 0x420($sp)
    ctx->pc = 0x2b5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 18));
    // 0x2b5e9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b5e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ea0: 0xffb30428  sd          $s3, 0x428($sp)
    ctx->pc = 0x2b5ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 19));
    // 0x2b5ea4: 0x27b30404  addiu       $s3, $sp, 0x404
    ctx->pc = 0x2b5ea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1028));
    // 0x2b5ea8: 0xffb40430  sd          $s4, 0x430($sp)
    ctx->pc = 0x2b5ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 20));
    // 0x2b5eac: 0x27b40400  addiu       $s4, $sp, 0x400
    ctx->pc = 0x2b5eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2b5eb0: 0xffb00410  sd          $s0, 0x410($sp)
    ctx->pc = 0x2b5eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 16));
    // 0x2b5eb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b5eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5eb8: 0xffbf0438  sd          $ra, 0x438($sp)
    ctx->pc = 0x2b5eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 31));
    // 0x2b5ebc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ec0: 0xafa00400  sw          $zero, 0x400($sp)
    ctx->pc = 0x2b5ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 0));
    // 0x2b5ec4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b5ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ec8: 0xafa00404  sw          $zero, 0x404($sp)
    ctx->pc = 0x2b5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 0));
    // 0x2b5ecc: 0xc0a9dbe  jal         func_2A76F8
    ctx->pc = 0x2B5ECCu;
    SET_GPR_U32(ctx, 31, 0x2B5ED4u);
    ctx->pc = 0x2B5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5ECCu;
    // 0x2b5ed0: 0x8e5000ac  lw          $s0, 0xAC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A76F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A76F8u, 0x2B5ECCu, 0x2B5ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5ED4u;
label_2b5ed4:
    // 0x2b5ed4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B5ED4u;
    {
        const bool branch_taken_0x2b5ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5ED4u;
        // 0x2b5ed8: 0x8fa60400  lw          $a2, 0x400($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ed4) {
            ctx->pc = 0x2B5F60u;
            goto label_2b5f60;
        }
    }
    ctx->pc = 0x2B5EDCu;
    // 0x2b5edc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ee0: 0x8fa70404  lw          $a3, 0x404($sp)
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x2b5ee4: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5EE4u;
    SET_GPR_U32(ctx, 31, 0x2B5EECu);
    ctx->pc = 0x2B5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EE4u;
    // 0x2b5ee8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5EE4u, 0x2B5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EECu;
label_2b5eec:
    // 0x2b5eec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b5ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ef4: 0xc0ad7e0  jal         func_2B5F80
    ctx->pc = 0x2B5EF4u;
    SET_GPR_U32(ctx, 31, 0x2B5EFCu);
    ctx->pc = 0x2B5EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EF4u;
    // 0x2b5ef8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F80u, 0x2B5EF4u, 0x2B5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EFCu;
label_2b5efc:
    // 0x2b5efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f00: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B5F00u;
    {
        const bool branch_taken_0x2b5f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f00) {
            ctx->pc = 0x2B5F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5F00u;
            // 0x2b5f04: 0xdfb00410  ld          $s0, 0x410($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5F64u;
            goto label_2b5f64;
        }
    }
    ctx->pc = 0x2B5F08u;
    // 0x2b5f08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B5F08u;
    {
        const bool branch_taken_0x2b5f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F08u;
        // 0x2b5f0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f08) {
            ctx->pc = 0x2B5F40u;
            goto label_2b5f40;
        }
    }
    ctx->pc = 0x2B5F10u;
label_2b5f10:
    // 0x2b5f10: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B5F10u;
    {
        const bool branch_taken_0x2b5f10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F10u;
        // 0x2b5f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f10) {
            ctx->pc = 0x2B5F60u;
            goto label_2b5f60;
        }
    }
    ctx->pc = 0x2B5F18u;
    // 0x2b5f18: 0x8fa60400  lw          $a2, 0x400($sp)
    ctx->pc = 0x2b5f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x2b5f1c: 0x8fa70404  lw          $a3, 0x404($sp)
    ctx->pc = 0x2b5f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x2b5f20: 0xc0a9df8  jal         func_2A77E0
    ctx->pc = 0x2B5F20u;
    SET_GPR_U32(ctx, 31, 0x2B5F28u);
    ctx->pc = 0x2B5F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F20u;
    // 0x2b5f24: 0x8e100074  lw          $s0, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A77E0u, 0x2B5F20u, 0x2B5F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F28u;
label_2b5f28:
    // 0x2b5f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b5f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b5f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f30: 0xc0ad7e0  jal         func_2B5F80
    ctx->pc = 0x2B5F30u;
    SET_GPR_U32(ctx, 31, 0x2B5F38u);
    ctx->pc = 0x2B5F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F30u;
    // 0x2b5f34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F80u, 0x2B5F30u, 0x2B5F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F38u;
label_2b5f38:
    // 0x2b5f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b5f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f40:
    // 0x2b5f40: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b5f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f44: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x2b5f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x2b5f48: 0xc0a9dbe  jal         func_2A76F8
    ctx->pc = 0x2B5F48u;
    SET_GPR_U32(ctx, 31, 0x2B5F50u);
    ctx->pc = 0x2B5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F48u;
    // 0x2b5f4c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A76F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A76F8u, 0x2B5F48u, 0x2B5F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F50u;
label_2b5f50:
    // 0x2b5f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b5f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f54: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B5F54u;
    {
        const bool branch_taken_0x2b5f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F54u;
        // 0x2b5f58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f54) {
            ctx->pc = 0x2B5F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5f10;
        }
    }
    ctx->pc = 0x2B5F5Cu;
    // 0x2b5f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b5f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f60:
    // 0x2b5f60: 0xdfb00410  ld          $s0, 0x410($sp)
    ctx->pc = 0x2b5f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_2b5f64:
    // 0x2b5f64: 0xdfb10418  ld          $s1, 0x418($sp)
    ctx->pc = 0x2b5f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x2b5f68: 0xdfb20420  ld          $s2, 0x420($sp)
    ctx->pc = 0x2b5f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x2b5f6c: 0xdfb30428  ld          $s3, 0x428($sp)
    ctx->pc = 0x2b5f6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x2b5f70: 0xdfb40430  ld          $s4, 0x430($sp)
    ctx->pc = 0x2b5f70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x2b5f74: 0xdfbf0438  ld          $ra, 0x438($sp)
    ctx->pc = 0x2b5f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x2b5f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F78u;
        // 0x2b5f7c: 0x27bd0440  addiu       $sp, $sp, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5F80u;
}
