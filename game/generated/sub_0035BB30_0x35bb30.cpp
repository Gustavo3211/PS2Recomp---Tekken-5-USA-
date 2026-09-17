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

// Function: sub_0035BB30
// Address: 0x35bb30 - 0x35bba0
void sub_0035BB30_0x35bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BB30_0x35bb30");
#endif

    switch (ctx->pc) {
        case 0x35bb58u: goto label_35bb58;
        case 0x35bb6cu: goto label_35bb6c;
        case 0x35bb84u: goto label_35bb84;
        default: break;
    }

    ctx->pc = 0x35bb30u;

    // 0x35bb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bb34: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35bb38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35bb3c: 0x24501320  addiu       $s0, $v0, 0x1320
    ctx->pc = 0x35bb3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35bb40: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x35bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D1340u));
    // 0x35bb44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35bb48: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35BB48u;
    {
        const bool branch_taken_0x35bb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB48u;
        // 0x35bb4c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb48) {
            ctx->pc = 0x35BB60u;
            goto label_35bb60;
        }
    }
    ctx->pc = 0x35BB50u;
    // 0x35bb50: 0xc045d82  jal         func_117608
    ctx->pc = 0x35BB50u;
    SET_GPR_U32(ctx, 31, 0x35BB58u);
    ctx->pc = 0x117608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117608u, 0x35BB50u, 0x35BB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB58u;
label_35bb58:
    // 0x35bb58: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35BB58u;
    {
        const bool branch_taken_0x35bb58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35bb58) {
            ctx->pc = 0x35BB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BB58u;
            // 0x35bb5c: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BB78u;
            goto label_35bb78;
        }
    }
    ctx->pc = 0x35BB60u;
label_35bb60:
    // 0x35bb60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35bb64: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BB64u;
    SET_GPR_U32(ctx, 31, 0x35BB6Cu);
    ctx->pc = 0x35BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB64u;
    // 0x35bb68: 0x24845608  addiu       $a0, $a0, 0x5608 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BB64u, 0x35BB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB6Cu;
label_35bb6c:
    // 0x35bb6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35BB6Cu;
    {
        const bool branch_taken_0x35bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB6Cu;
        // 0x35bb70: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bb6c) {
            ctx->pc = 0x35BB8Cu;
            goto label_35bb8c;
        }
    }
    ctx->pc = 0x35BB74u;
    // 0x35bb74: 0x0  nop
    ctx->pc = 0x35bb74u;
    // NOP
label_35bb78:
    // 0x35bb78: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35bb7c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BB7Cu;
    SET_GPR_U32(ctx, 31, 0x35BB84u);
    ctx->pc = 0x35BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BB7Cu;
    // 0x35bb80: 0x24845630  addiu       $a0, $a0, 0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BB7Cu, 0x35BB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BB84u;
label_35bb84:
    // 0x35bb84: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x35bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x35bb88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35bb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bb8c:
    // 0x35bb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bb90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35bb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35bb94: 0x3e00008  jr          $ra
    ctx->pc = 0x35BB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BB94u;
        // 0x35bb98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BB9Cu;
    // 0x35bb9c: 0x0  nop
    ctx->pc = 0x35bb9cu;
    // NOP
    ctx->pc = 0x35bba0u;
}
