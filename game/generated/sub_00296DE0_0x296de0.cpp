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

// Function: sub_00296DE0
// Address: 0x296de0 - 0x296e30
void sub_00296DE0_0x296de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296DE0_0x296de0");
#endif

    switch (ctx->pc) {
        case 0x296dfcu: goto label_296dfc;
        case 0x296e18u: goto label_296e18;
        default: break;
    }

    ctx->pc = 0x296de0u;

    // 0x296de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296de8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x296de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296df0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296df4: 0xc0a5b60  jal         func_296D80
    ctx->pc = 0x296DF4u;
    SET_GPR_U32(ctx, 31, 0x296DFCu);
    ctx->pc = 0x296DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296DF4u;
    // 0x296df8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D80u, 0x296DF4u, 0x296DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296DFCu;
label_296dfc:
    // 0x296dfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296DFCu;
    {
        const bool branch_taken_0x296dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296DFCu;
        // 0x296e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296dfc) {
            ctx->pc = 0x296E10u;
            goto label_296e10;
        }
    }
    ctx->pc = 0x296E04u;
    // 0x296e04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296E04u;
    {
        const bool branch_taken_0x296e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E04u;
        // 0x296e08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296e04) {
            ctx->pc = 0x296E18u;
            goto label_296e18;
        }
    }
    ctx->pc = 0x296E0Cu;
    // 0x296e0c: 0x0  nop
    ctx->pc = 0x296e0cu;
    // NOP
label_296e10:
    // 0x296e10: 0xc0ad718  jal         func_2B5C60
    ctx->pc = 0x296E10u;
    SET_GPR_U32(ctx, 31, 0x296E18u);
    ctx->pc = 0x296E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296E10u;
    // 0x296e14: 0x8e240130  lw          $a0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C60u, 0x296E10u, 0x296E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296E18u;
label_296e18:
    // 0x296e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296e24: 0x3e00008  jr          $ra
    ctx->pc = 0x296E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296E24u;
        // 0x296e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296E2Cu;
    // 0x296e2c: 0x0  nop
    ctx->pc = 0x296e2cu;
    // NOP
    ctx->pc = 0x296e30u;
}
