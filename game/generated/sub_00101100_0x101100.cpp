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

// Function: sub_00101100
// Address: 0x101100 - 0x101150
void sub_00101100_0x101100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101100_0x101100");
#endif

    switch (ctx->pc) {
        case 0x101110u: goto label_101110;
        case 0x101118u: goto label_101118;
        case 0x101120u: goto label_101120;
        case 0x101128u: goto label_101128;
        case 0x101130u: goto label_101130;
        case 0x101138u: goto label_101138;
        case 0x101144u: goto label_101144;
        default: break;
    }

    ctx->pc = 0x101100u;

    // 0x101100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101108: 0xc04019e  jal         func_100678
    ctx->pc = 0x101108u;
    SET_GPR_U32(ctx, 31, 0x101110u);
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x101108u, 0x101110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101110u;
label_101110:
    // 0x101110: 0xc0401ac  jal         func_1006B0
    ctx->pc = 0x101110u;
    SET_GPR_U32(ctx, 31, 0x101118u);
    ctx->pc = 0x1006B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006B0u, 0x101110u, 0x101118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101118u;
label_101118:
    // 0x101118: 0xc0401b2  jal         func_1006C8
    ctx->pc = 0x101118u;
    SET_GPR_U32(ctx, 31, 0x101120u);
    ctx->pc = 0x1006C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006C8u, 0x101118u, 0x101120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101120u;
label_101120:
    // 0x101120: 0xc0401d0  jal         func_100740
    ctx->pc = 0x101120u;
    SET_GPR_U32(ctx, 31, 0x101128u);
    ctx->pc = 0x100740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100740u, 0x101120u, 0x101128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101128u;
label_101128:
    // 0x101128: 0xc0401c4  jal         func_100710
    ctx->pc = 0x101128u;
    SET_GPR_U32(ctx, 31, 0x101130u);
    ctx->pc = 0x100710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100710u, 0x101128u, 0x101130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101130u;
label_101130:
    // 0x101130: 0xc0401ca  jal         func_100728
    ctx->pc = 0x101130u;
    SET_GPR_U32(ctx, 31, 0x101138u);
    ctx->pc = 0x100728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100728u, 0x101130u, 0x101138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101138u;
label_101138:
    // 0x101138: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x101138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
    // 0x10113c: 0xc040226  jal         func_100898
    ctx->pc = 0x10113Cu;
    SET_GPR_U32(ctx, 31, 0x101144u);
    ctx->pc = 0x101140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10113Cu;
    // 0x101140: 0x2484f5c0  addiu       $a0, $a0, -0xA40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100898u, 0x10113Cu, 0x101144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101144u;
label_101144:
    // 0x101144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101148: 0x3e00008  jr          $ra
    ctx->pc = 0x101148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10114Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101148u;
        // 0x10114c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101150u;
}
