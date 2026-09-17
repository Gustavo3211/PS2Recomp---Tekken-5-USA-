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

// Function: sub_00359D38
// Address: 0x359d38 - 0x359d88
void sub_00359D38_0x359d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359D38_0x359d38");
#endif

    switch (ctx->pc) {
        case 0x359d50u: goto label_359d50;
        case 0x359d64u: goto label_359d64;
        case 0x359d70u: goto label_359d70;
        default: break;
    }

    ctx->pc = 0x359d38u;

    // 0x359d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359d40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d44: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x359d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x359d48: 0xc0d6724  jal         func_359C90
    ctx->pc = 0x359D48u;
    SET_GPR_U32(ctx, 31, 0x359D50u);
    ctx->pc = 0x359D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D48u;
    // 0x359d4c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359C90u, 0x359D48u, 0x359D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D50u;
label_359d50:
    // 0x359d50: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x359d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x359d54: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x359d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x359d58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x359d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d5c: 0xc0d999e  jal         func_366678
    ctx->pc = 0x359D5Cu;
    SET_GPR_U32(ctx, 31, 0x359D64u);
    ctx->pc = 0x359D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D5Cu;
    // 0x359d60: 0xaf82c7ac  sw          $v0, -0x3854($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952876), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366678u, 0x359D5Cu, 0x359D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D64u;
label_359d64:
    // 0x359d64: 0x8f84c7ac  lw          $a0, -0x3854($gp)
    ctx->pc = 0x359d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952876)));
    // 0x359d68: 0xc0d99c2  jal         func_366708
    ctx->pc = 0x359D68u;
    SET_GPR_U32(ctx, 31, 0x359D70u);
    ctx->pc = 0x359D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359D68u;
    // 0x359d6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366708u, 0x359D68u, 0x359D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359D70u;
label_359d70:
    // 0x359d70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359d70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359d78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x359d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x359D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D7Cu;
        // 0x359d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359D84u;
    // 0x359d84: 0x0  nop
    ctx->pc = 0x359d84u;
    // NOP
    ctx->pc = 0x359d88u;
}
