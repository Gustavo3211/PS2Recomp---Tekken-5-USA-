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

// Function: sub_002E1BC0
// Address: 0x2e1bc0 - 0x2e1c38
void sub_002E1BC0_0x2e1bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1BC0_0x2e1bc0");
#endif

    switch (ctx->pc) {
        case 0x2e1bf0u: goto label_2e1bf0;
        case 0x2e1c00u: goto label_2e1c00;
        case 0x2e1c08u: goto label_2e1c08;
        case 0x2e1c28u: goto label_2e1c28;
        default: break;
    }

    ctx->pc = 0x2e1bc0u;

    // 0x2e1bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1bc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e1bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e1bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1bd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e1bd4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2e1bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e1bd8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1BD8u;
    {
        const bool branch_taken_0x2e1bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BD8u;
        // 0x2e1bdc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1bd8) {
            ctx->pc = 0x2E1C20u;
            goto label_2e1c20;
        }
    }
    ctx->pc = 0x2E1BE0u;
    // 0x2e1be0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1BE0u;
    {
        const bool branch_taken_0x2e1be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1be0) {
            ctx->pc = 0x2E1BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1BE0u;
            // 0x2e1be4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1BF8u;
            goto label_2e1bf8;
        }
    }
    ctx->pc = 0x2E1BE8u;
    // 0x2e1be8: 0xc091a28  jal         func_2468A0
    ctx->pc = 0x2E1BE8u;
    SET_GPR_U32(ctx, 31, 0x2E1BF0u);
    ctx->pc = 0x2468A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2468A0u, 0x2E1BE8u, 0x2E1BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1BF0u;
label_2e1bf0:
    // 0x2e1bf0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2e1bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e1bf4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e1bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e1bf8:
    // 0x2e1bf8: 0xc08c2fe  jal         func_230BF8
    ctx->pc = 0x2E1BF8u;
    SET_GPR_U32(ctx, 31, 0x2E1C00u);
    ctx->pc = 0x2E1BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1BF8u;
    // 0x2e1bfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BF8u, 0x2E1BF8u, 0x2E1C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C00u;
label_2e1c00:
    // 0x2e1c00: 0xc0c10c0  jal         func_304300
    ctx->pc = 0x2E1C00u;
    SET_GPR_U32(ctx, 31, 0x2E1C08u);
    ctx->pc = 0x2E1C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C00u;
    // 0x2e1c04: 0x26040054  addiu       $a0, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304300u, 0x2E1C00u, 0x2E1C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C08u;
label_2e1c08:
    // 0x2e1c08: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2e1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e1c0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1C0Cu;
    {
        const bool branch_taken_0x2e1c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C0Cu;
        // 0x2e1c10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c0c) {
            ctx->pc = 0x2E1C2Cu;
            goto label_2e1c2c;
        }
    }
    ctx->pc = 0x2E1C14u;
    // 0x2e1c14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1c18: 0x8091a16  j           func_246858
    ctx->pc = 0x2E1C18u;
    ctx->pc = 0x2E1C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C18u;
    // 0x2e1c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246858u;
    sub_00246858_0x246858(rdram, ctx, runtime); return;
    ctx->pc = 0x2E1C20u;
label_2e1c20:
    // 0x2e1c20: 0xc08c2fe  jal         func_230BF8
    ctx->pc = 0x2E1C20u;
    SET_GPR_U32(ctx, 31, 0x2E1C28u);
    ctx->pc = 0x2E1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C20u;
    // 0x2e1c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230BF8u, 0x2E1C20u, 0x2E1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C28u;
label_2e1c28:
    // 0x2e1c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e1c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1c2c:
    // 0x2e1c2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e1c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e1c30: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C30u;
        // 0x2e1c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1C38u;
}
