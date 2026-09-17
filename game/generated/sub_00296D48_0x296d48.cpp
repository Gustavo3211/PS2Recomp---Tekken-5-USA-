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

// Function: sub_00296D48
// Address: 0x296d48 - 0x296d80
void sub_00296D48_0x296d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296D48_0x296d48");
#endif

    switch (ctx->pc) {
        case 0x296d70u: goto label_296d70;
        default: break;
    }

    ctx->pc = 0x296d48u;

    // 0x296d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296d50: 0x8c82013c  lw          $v0, 0x13C($a0)
    ctx->pc = 0x296d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
    // 0x296d54: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x296D54u;
    {
        const bool branch_taken_0x296d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296d54) {
            ctx->pc = 0x296D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296D54u;
            // 0x296d58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296D74u;
            goto label_296d74;
        }
    }
    ctx->pc = 0x296D5Cu;
    // 0x296d5c: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x296d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x296d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296D60u;
    {
        const bool branch_taken_0x296d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D60u;
        // 0x296d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296d60) {
            ctx->pc = 0x296D70u;
            goto label_296d70;
        }
    }
    ctx->pc = 0x296D68u;
    // 0x296d68: 0xc0ace76  jal         func_2B39D8
    ctx->pc = 0x296D68u;
    SET_GPR_U32(ctx, 31, 0x296D70u);
    ctx->pc = 0x2B39D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B39D8u, 0x296D68u, 0x296D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296D70u;
label_296d70:
    // 0x296d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296d74:
    // 0x296d74: 0x3e00008  jr          $ra
    ctx->pc = 0x296D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296D74u;
        // 0x296d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296D7Cu;
    // 0x296d7c: 0x0  nop
    ctx->pc = 0x296d7cu;
    // NOP
    ctx->pc = 0x296d80u;
}
