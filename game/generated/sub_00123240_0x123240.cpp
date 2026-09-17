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

// Function: sub_00123240
// Address: 0x123240 - 0x123298
void sub_00123240_0x123240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123240_0x123240");
#endif

    switch (ctx->pc) {
        case 0x123260u: goto label_123260;
        case 0x123270u: goto label_123270;
        case 0x123280u: goto label_123280;
        case 0x123288u: goto label_123288;
        default: break;
    }

    ctx->pc = 0x123240u;

    // 0x123240: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x123240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x123244: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x123244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x123248: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x123248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12324c: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x12324cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x123250: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x123250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x123254: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x123254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x123258: 0xc049ca4  jal         func_127290
    ctx->pc = 0x123258u;
    SET_GPR_U32(ctx, 31, 0x123260u);
    ctx->pc = 0x12325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123258u;
    // 0x12325c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x123258u, 0x123260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123260u;
label_123260:
    // 0x123260: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x123260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x123264: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x123264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x123268: 0xc049ca4  jal         func_127290
    ctx->pc = 0x123268u;
    SET_GPR_U32(ctx, 31, 0x123270u);
    ctx->pc = 0x12326Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123268u;
    // 0x12326c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127290u, 0x123268u, 0x123270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123270u;
label_123270:
    // 0x123270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123278: 0xc048bf8  jal         func_122FE0
    ctx->pc = 0x123278u;
    SET_GPR_U32(ctx, 31, 0x123280u);
    ctx->pc = 0x12327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123278u;
    // 0x12327c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FE0u, 0x123278u, 0x123280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123280u;
label_123280:
    // 0x123280: 0xc049c6e  jal         func_1271B8
    ctx->pc = 0x123280u;
    SET_GPR_U32(ctx, 31, 0x123288u);
    ctx->pc = 0x123284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123280u;
    // 0x123284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271B8u, 0x123280u, 0x123288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123288u;
label_123288:
    // 0x123288: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x123288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12328c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x12328cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123290: 0x3e00008  jr          $ra
    ctx->pc = 0x123290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123290u;
        // 0x123294: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123298u;
}
