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

// Function: sub_00232D80
// Address: 0x232d80 - 0x232de8
void sub_00232D80_0x232d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D80_0x232d80");
#endif

    switch (ctx->pc) {
        case 0x232d94u: goto label_232d94;
        default: break;
    }

    ctx->pc = 0x232d80u;

    // 0x232d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232d8c: 0xc08b8ae  jal         func_22E2B8
    ctx->pc = 0x232D8Cu;
    SET_GPR_U32(ctx, 31, 0x232D94u);
    ctx->pc = 0x232D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D8Cu;
    // 0x232d90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2B8u, 0x232D8Cu, 0x232D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D94u;
label_232d94:
    // 0x232d94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232D94u;
    {
        const bool branch_taken_0x232d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D94u;
        // 0x232d98: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d94) {
            ctx->pc = 0x232DA8u;
            goto label_232da8;
        }
    }
    ctx->pc = 0x232D9Cu;
    // 0x232d9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x232D9Cu;
    {
        const bool branch_taken_0x232d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D9Cu;
        // 0x232da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d9c) {
            ctx->pc = 0x232DD8u;
            goto label_232dd8;
        }
    }
    ctx->pc = 0x232DA4u;
    // 0x232da4: 0x0  nop
    ctx->pc = 0x232da4u;
    // NOP
label_232da8:
    // 0x232da8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x232da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x232dac: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x232dacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8880u));
    // 0x232db0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232DB0u;
    {
        const bool branch_taken_0x232db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x232DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DB0u;
        // 0x232db4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232db0) {
            ctx->pc = 0x232DD0u;
            goto label_232dd0;
        }
    }
    ctx->pc = 0x232DB8u;
    // 0x232db8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232DB8u;
    {
        const bool branch_taken_0x232db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DB8u;
        // 0x232dbc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232db8) {
            ctx->pc = 0x232DD0u;
            goto label_232dd0;
        }
    }
    ctx->pc = 0x232DC0u;
    // 0x232dc0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232DC0u;
    {
        const bool branch_taken_0x232dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DC0u;
        // 0x232dc4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dc0) {
            ctx->pc = 0x232DD0u;
            goto label_232dd0;
        }
    }
    ctx->pc = 0x232DC8u;
    // 0x232dc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232DC8u;
    {
        const bool branch_taken_0x232dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DC8u;
        // 0x232dcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232dc8) {
            ctx->pc = 0x232DD8u;
            goto label_232dd8;
        }
    }
    ctx->pc = 0x232DD0u;
label_232dd0:
    // 0x232dd0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x232dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232dd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x232dd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232dd8:
    // 0x232dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ddc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232de0: 0x3e00008  jr          $ra
    ctx->pc = 0x232DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232DE0u;
        // 0x232de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232DE8u;
}
