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

// Function: sub_002E2F40
// Address: 0x2e2f40 - 0x2e2fe0
void sub_002E2F40_0x2e2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2F40_0x2e2f40");
#endif

    switch (ctx->pc) {
        case 0x2e2f68u: goto label_2e2f68;
        case 0x2e2facu: goto label_2e2fac;
        case 0x2e2fd0u: goto label_2e2fd0;
        default: break;
    }

    ctx->pc = 0x2e2f40u;

    // 0x2e2f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e2f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e2f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e2f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e2f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e2f54: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x2e2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2e2f58: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E2F58u;
    {
        const bool branch_taken_0x2e2f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e2f58) {
            ctx->pc = 0x2E2F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2F58u;
            // 0x2e2f5c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2F90u;
            goto label_2e2f90;
        }
    }
    ctx->pc = 0x2E2F60u;
    // 0x2e2f60: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x2E2F60u;
    SET_GPR_U32(ctx, 31, 0x2E2F68u);
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x2E2F60u, 0x2E2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2F68u;
label_2e2f68:
    // 0x2e2f68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E2F68u;
    {
        const bool branch_taken_0x2e2f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2F68u;
        // 0x2e2f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2f68) {
            ctx->pc = 0x2E2F80u;
            goto label_2e2f80;
        }
    }
    ctx->pc = 0x2E2F70u;
    // 0x2e2f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2f74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e2f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2f78: 0x80b8a94  j           func_2E2A50
    ctx->pc = 0x2E2F78u;
    ctx->pc = 0x2E2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F78u;
    // 0x2e2f7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2A50u;
    sub_002E2A50_0x2e2a50(rdram, ctx, runtime); return;
    ctx->pc = 0x2E2F80u;
label_2e2f80:
    // 0x2e2f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2f84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2f88: 0x80b8b54  j           func_2E2D50
    ctx->pc = 0x2E2F88u;
    ctx->pc = 0x2E2F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2F88u;
    // 0x2e2f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D50u;
    sub_002E2D50_0x2e2d50(rdram, ctx, runtime); return;
    ctx->pc = 0x2E2F90u;
label_2e2f90:
    // 0x2e2f90: 0x8f83a530  lw          $v1, -0x5AD0($gp)
    ctx->pc = 0x2e2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2e2f94: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2e2f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2e2f98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e2f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e2f9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E2F9Cu;
    {
        const bool branch_taken_0x2e2f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2f9c) {
            ctx->pc = 0x2E2FC8u;
            goto label_2e2fc8;
        }
    }
    ctx->pc = 0x2E2FA4u;
    // 0x2e2fa4: 0xc08b8bc  jal         func_22E2F0
    ctx->pc = 0x2E2FA4u;
    SET_GPR_U32(ctx, 31, 0x2E2FACu);
    ctx->pc = 0x22E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2F0u, 0x2E2FA4u, 0x2E2FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FACu;
label_2e2fac:
    // 0x2e2fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E2FACu;
    {
        const bool branch_taken_0x2e2fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FACu;
        // 0x2e2fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2fac) {
            ctx->pc = 0x2E2FC8u;
            goto label_2e2fc8;
        }
    }
    ctx->pc = 0x2E2FB4u;
    // 0x2e2fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2fb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e2fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2fbc: 0x80b8a94  j           func_2E2A50
    ctx->pc = 0x2E2FBCu;
    ctx->pc = 0x2E2FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2FBCu;
    // 0x2e2fc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2A50u;
    sub_002E2A50_0x2e2a50(rdram, ctx, runtime); return;
    ctx->pc = 0x2E2FC4u;
    // 0x2e2fc4: 0x0  nop
    ctx->pc = 0x2e2fc4u;
    // NOP
label_2e2fc8:
    // 0x2e2fc8: 0xc0b8b54  jal         func_2E2D50
    ctx->pc = 0x2E2FC8u;
    SET_GPR_U32(ctx, 31, 0x2E2FD0u);
    ctx->pc = 0x2E2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2FC8u;
    // 0x2e2fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2D50u, 0x2E2FC8u, 0x2E2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2FD0u;
label_2e2fd0:
    // 0x2e2fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e2fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2fd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e2fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e2fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2FD8u;
        // 0x2e2fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2FE0u;
}
