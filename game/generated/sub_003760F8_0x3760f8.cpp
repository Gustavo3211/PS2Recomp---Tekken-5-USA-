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

// Function: sub_003760F8
// Address: 0x3760f8 - 0x376128
void sub_003760F8_0x3760f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003760F8_0x3760f8");
#endif

    switch (ctx->pc) {
        case 0x376100u: goto label_376100;
        case 0x376114u: goto label_376114;
        default: break;
    }

    ctx->pc = 0x3760f8u;

    // 0x3760f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3760F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3760FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3760F8u;
        // 0x3760fc: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3760F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376100u;
label_376100:
    // 0x376100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x376104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x376104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376108: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37610c: 0xc0dd874  jal         func_3761D0
    ctx->pc = 0x37610Cu;
    SET_GPR_U32(ctx, 31, 0x376114u);
    ctx->pc = 0x376110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37610Cu;
    // 0x376110: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3761D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3761D0u, 0x37610Cu, 0x376114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376114u;
label_376114:
    // 0x376114: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x376114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x376118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37611c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376120: 0x3e00008  jr          $ra
    ctx->pc = 0x376120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376120u;
        // 0x376124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376128u;
}
