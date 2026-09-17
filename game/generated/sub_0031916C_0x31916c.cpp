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

// Function: sub_0031916C
// Address: 0x31916c - 0x3191c0
void sub_0031916C_0x31916c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031916C_0x31916c");
#endif

    switch (ctx->pc) {
        case 0x319190u: goto label_319190;
        case 0x3191a4u: goto label_3191a4;
        default: break;
    }

    ctx->pc = 0x31916cu;

    // 0x31916c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31916cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319174: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x319174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x319178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31917c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x31917cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x319180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319184: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319188: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x319188u;
    SET_GPR_U32(ctx, 31, 0x319190u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x319188u, 0x319190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319190u;
label_319190:
    // 0x319190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319194: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x319194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x319198: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x31919c: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x31919Cu;
    SET_GPR_U32(ctx, 31, 0x3191A4u);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x31919Cu, 0x3191A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191A4u;
label_3191a4:
    // 0x3191a4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3191a4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3191a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3191ac: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x3191acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3191b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3191b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3191b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3191b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3191b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3191B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3191B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3191C0u;
}
