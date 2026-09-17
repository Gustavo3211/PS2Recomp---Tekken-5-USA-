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

// Function: sub_00513CB8
// Address: 0x513cb8 - 0x513d18
void sub_00513CB8_0x513cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513CB8_0x513cb8");
#endif

    switch (ctx->pc) {
        case 0x513cd0u: goto label_513cd0;
        case 0x513cfcu: goto label_513cfc;
        default: break;
    }

    ctx->pc = 0x513cb8u;

    // 0x513cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x513cbc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x513CBCu;
    {
        const bool branch_taken_0x513cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x513CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513CBCu;
        // 0x513cc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513cbc) {
            ctx->pc = 0x513CD8u;
            goto label_513cd8;
        }
    }
    ctx->pc = 0x513CC4u;
    // 0x513cc4: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x513cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x513cc8: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x513CC8u;
    SET_GPR_U32(ctx, 31, 0x513CD0u);
    ctx->pc = 0x513CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513CC8u;
    // 0x513ccc: 0x8c84010c  lw          $a0, 0x10C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF40u, 0x513CC8u, 0x513CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513CD0u;
label_513cd0:
    // 0x513cd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x513CD0u;
    {
        const bool branch_taken_0x513cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513CD0u;
        // 0x513cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513cd0) {
            ctx->pc = 0x513CDCu;
            goto label_513cdc;
        }
    }
    ctx->pc = 0x513CD8u;
label_513cd8:
    // 0x513cd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x513cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_513cdc:
    // 0x513cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x513cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x513CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513CE0u;
        // 0x513ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513CE8u;
    // 0x513ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x513ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x513cec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x513cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x513cf0: 0x8c850110  lw          $a1, 0x110($a0)
    ctx->pc = 0x513cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x513cf4: 0xc043088  jal         func_10C220
    ctx->pc = 0x513CF4u;
    SET_GPR_U32(ctx, 31, 0x513CFCu);
    ctx->pc = 0x513CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513CF4u;
    // 0x513cf8: 0x8c84010c  lw          $a0, 0x10C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C220u, 0x513CF4u, 0x513CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513CFCu;
label_513cfc:
    // 0x513cfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x513cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x513d00: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x513d00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x513d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x513d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x513d08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x513d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x513D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513D0Cu;
        // 0x513d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x513D14u;
    // 0x513d14: 0x0  nop
    ctx->pc = 0x513d14u;
    // NOP
    ctx->pc = 0x513d18u;
}
