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

// Function: sub_00358B70
// Address: 0x358b70 - 0x358c28
void sub_00358B70_0x358b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358B70_0x358b70");
#endif

    switch (ctx->pc) {
        case 0x358b84u: goto label_358b84;
        case 0x358ba0u: goto label_358ba0;
        case 0x358ba8u: goto label_358ba8;
        case 0x358bb0u: goto label_358bb0;
        case 0x358bb8u: goto label_358bb8;
        case 0x358bc0u: goto label_358bc0;
        case 0x358bd4u: goto label_358bd4;
        case 0x358be8u: goto label_358be8;
        case 0x358bf0u: goto label_358bf0;
        default: break;
    }

    ctx->pc = 0x358b70u;

    // 0x358b70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x358b78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x358b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x358b7c: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x358B7Cu;
    SET_GPR_U32(ctx, 31, 0x358B84u);
    ctx->pc = 0x358B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B7Cu;
    // 0x358b80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x358B7Cu, 0x358B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B84u;
label_358b84:
    // 0x358b84: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358B84u;
    {
        const bool branch_taken_0x358b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B84u;
        // 0x358b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b84) {
            ctx->pc = 0x358B98u;
            goto label_358b98;
        }
    }
    ctx->pc = 0x358B8Cu;
    // 0x358b8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x358b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x358b90: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x358B90u;
    {
        const bool branch_taken_0x358b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B90u;
        // 0x358b94: 0x3442002a  ori         $v0, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b90) {
            ctx->pc = 0x358BF4u;
            goto label_358bf4;
        }
    }
    ctx->pc = 0x358B98u;
label_358b98:
    // 0x358b98: 0xc0d671e  jal         func_359C78
    ctx->pc = 0x358B98u;
    SET_GPR_U32(ctx, 31, 0x358BA0u);
    ctx->pc = 0x358B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B98u;
    // 0x358b9c: 0xaf90c7a8  sw          $s0, -0x3858($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952872), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C78u, 0x358B98u, 0x358BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BA0u;
label_358ba0:
    // 0x358ba0: 0xc0d6044  jal         func_358110
    ctx->pc = 0x358BA0u;
    SET_GPR_U32(ctx, 31, 0x358BA8u);
    ctx->pc = 0x358BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BA0u;
    // 0x358ba4: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358110u, 0x358BA0u, 0x358BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BA8u;
label_358ba8:
    // 0x358ba8: 0xc0d6c1e  jal         func_35B078
    ctx->pc = 0x358BA8u;
    SET_GPR_U32(ctx, 31, 0x358BB0u);
    ctx->pc = 0x358BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BA8u;
    // 0x358bac: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B078u, 0x358BA8u, 0x358BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BB0u;
label_358bb0:
    // 0x358bb0: 0xc0d67a6  jal         func_359E98
    ctx->pc = 0x358BB0u;
    SET_GPR_U32(ctx, 31, 0x358BB8u);
    ctx->pc = 0x358BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BB0u;
    // 0x358bb4: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E98u, 0x358BB0u, 0x358BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BB8u;
label_358bb8:
    // 0x358bb8: 0xc0d8ad6  jal         func_362B58
    ctx->pc = 0x358BB8u;
    SET_GPR_U32(ctx, 31, 0x358BC0u);
    ctx->pc = 0x362B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B58u, 0x358BB8u, 0x358BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BC0u;
label_358bc0:
    // 0x358bc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358bc4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x358BC4u;
    {
        const bool branch_taken_0x358bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x358BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BC4u;
        // 0x358bc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bc4) {
            ctx->pc = 0x358BE0u;
            goto label_358be0;
        }
    }
    ctx->pc = 0x358BCCu;
    // 0x358bcc: 0xc0d921c  jal         func_364870
    ctx->pc = 0x358BCCu;
    SET_GPR_U32(ctx, 31, 0x358BD4u);
    ctx->pc = 0x364870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364870u, 0x358BCCu, 0x358BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BD4u;
label_358bd4:
    // 0x358bd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x358BD4u;
    {
        const bool branch_taken_0x358bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358bd4) {
            ctx->pc = 0x358BE8u;
            goto label_358be8;
        }
    }
    ctx->pc = 0x358BDCu;
    // 0x358bdc: 0x0  nop
    ctx->pc = 0x358bdcu;
    // NOP
label_358be0:
    // 0x358be0: 0xc0d921c  jal         func_364870
    ctx->pc = 0x358BE0u;
    SET_GPR_U32(ctx, 31, 0x358BE8u);
    ctx->pc = 0x358BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BE0u;
    // 0x358be4: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364870u, 0x358BE0u, 0x358BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BE8u;
label_358be8:
    // 0x358be8: 0xc0d8a60  jal         func_362980
    ctx->pc = 0x358BE8u;
    SET_GPR_U32(ctx, 31, 0x358BF0u);
    ctx->pc = 0x358BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358BE8u;
    // 0x358bec: 0x8f84c7a8  lw          $a0, -0x3858($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362980u, 0x358BE8u, 0x358BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358BF0u;
label_358bf0:
    // 0x358bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358bf4:
    // 0x358bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358bf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x358bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x358BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358BFCu;
        // 0x358c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358C04u;
    // 0x358c04: 0x0  nop
    ctx->pc = 0x358c04u;
    // NOP
    // 0x358c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358c14: 0x80d8ac4  j           func_362B10
    ctx->pc = 0x358C14u;
    ctx->pc = 0x358C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358C14u;
    // 0x358c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B10u, 0x358C14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358C1Cu;
    // 0x358c1c: 0x0  nop
    ctx->pc = 0x358c1cu;
    // NOP
    // 0x358c20: 0x3e00008  jr          $ra
    ctx->pc = 0x358C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358C20u;
        // 0x358c24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358C28u;
}
