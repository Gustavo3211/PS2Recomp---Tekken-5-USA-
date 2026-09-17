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

// Function: sub_00101150
// Address: 0x101150 - 0x1011a0
void sub_00101150_0x101150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101150_0x101150");
#endif

    switch (ctx->pc) {
        case 0x101160u: goto label_101160;
        case 0x101168u: goto label_101168;
        case 0x101170u: goto label_101170;
        case 0x101178u: goto label_101178;
        case 0x101180u: goto label_101180;
        case 0x101188u: goto label_101188;
        case 0x101194u: goto label_101194;
        default: break;
    }

    ctx->pc = 0x101150u;

    // 0x101150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101158: 0xc04019e  jal         func_100678
    ctx->pc = 0x101158u;
    SET_GPR_U32(ctx, 31, 0x101160u);
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x101158u, 0x101160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101160u;
label_101160:
    // 0x101160: 0xc0401ac  jal         func_1006B0
    ctx->pc = 0x101160u;
    SET_GPR_U32(ctx, 31, 0x101168u);
    ctx->pc = 0x1006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006B0u, 0x101160u, 0x101168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101168u;
label_101168:
    // 0x101168: 0xc0401b2  jal         func_1006C8
    ctx->pc = 0x101168u;
    SET_GPR_U32(ctx, 31, 0x101170u);
    ctx->pc = 0x1006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006C8u, 0x101168u, 0x101170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101170u;
label_101170:
    // 0x101170: 0xc0401d0  jal         func_100740
    ctx->pc = 0x101170u;
    SET_GPR_U32(ctx, 31, 0x101178u);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x101170u, 0x101178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101178u;
label_101178:
    // 0x101178: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x101178u;
    SET_GPR_U32(ctx, 31, 0x101180u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x101178u, 0x101180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101180u;
label_101180:
    // 0x101180: 0xc0401ca  jal         func_100728
    ctx->pc = 0x101180u;
    SET_GPR_U32(ctx, 31, 0x101188u);
    ctx->pc = 0x100728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100728u, 0x101180u, 0x101188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101188u;
label_101188:
    // 0x101188: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x101188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x10118c: 0xc040230  jal         func_1008C0
    ctx->pc = 0x10118Cu;
    SET_GPR_U32(ctx, 31, 0x101194u);
    ctx->pc = 0x101190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10118Cu;
    // 0x101190: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1008C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1008C0u, 0x10118Cu, 0x101194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101194u;
label_101194:
    // 0x101194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101198: 0x3e00008  jr          $ra
    ctx->pc = 0x101198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101198u;
        // 0x10119c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1011A0u;
}
