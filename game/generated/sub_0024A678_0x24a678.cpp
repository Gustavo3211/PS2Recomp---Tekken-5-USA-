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

// Function: sub_0024A678
// Address: 0x24a678 - 0x24a6b8
void sub_0024A678_0x24a678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A678_0x24a678");
#endif

    switch (ctx->pc) {
        case 0x24a68cu: goto label_24a68c;
        case 0x24a6a8u: goto label_24a6a8;
        default: break;
    }

    ctx->pc = 0x24a678u;

    // 0x24a678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a67c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a680: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a684: 0xc09226a  jal         func_2489A8
    ctx->pc = 0x24A684u;
    SET_GPR_U32(ctx, 31, 0x24A68Cu);
    ctx->pc = 0x24A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A684u;
    // 0x24a688: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2489A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2489A8u, 0x24A684u, 0x24A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A68Cu;
label_24a68c:
    // 0x24a68c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24a68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24a690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a694: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x24a694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24a698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a69c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a69cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a6a0: 0xc09289a  jal         func_24A268
    ctx->pc = 0x24A6A0u;
    SET_GPR_U32(ctx, 31, 0x24A6A8u);
    ctx->pc = 0x24A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6A0u;
    // 0x24a6a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A268u, 0x24A6A0u, 0x24A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6A8u;
label_24a6a8:
    // 0x24a6a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a6ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6B0u;
        // 0x24a6b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A6B8u;
}
