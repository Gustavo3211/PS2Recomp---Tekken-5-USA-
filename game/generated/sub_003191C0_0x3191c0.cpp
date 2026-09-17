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

// Function: sub_003191C0
// Address: 0x3191c0 - 0x319218
void sub_003191C0_0x3191c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003191C0_0x3191c0");
#endif

    switch (ctx->pc) {
        case 0x3191e4u: goto label_3191e4;
        case 0x3191fcu: goto label_3191fc;
        default: break;
    }

    ctx->pc = 0x3191c0u;

    // 0x3191c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3191c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3191c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3191c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3191c8: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x3191c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x3191cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3191ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3191d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3191d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3191d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3191d8: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x3191d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x3191dc: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3191DCu;
    SET_GPR_U32(ctx, 31, 0x3191E4u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3191DCu, 0x3191E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191E4u;
label_3191e4:
    // 0x3191e4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x3191e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x3191e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3191e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3191ec: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x3191ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    // 0x3191f0: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x3191f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x3191f4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3191F4u;
    SET_GPR_U32(ctx, 31, 0x3191FCu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3191F4u, 0x3191FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3191FCu;
label_3191fc:
    // 0x3191fc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3191fcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319204: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x319204u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x319208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x319208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31920c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x31920cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319210: 0x3e00008  jr          $ra
    ctx->pc = 0x319210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319218u;
}
