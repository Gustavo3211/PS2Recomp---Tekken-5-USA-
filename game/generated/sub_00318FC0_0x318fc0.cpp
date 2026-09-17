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

// Function: sub_00318FC0
// Address: 0x318fc0 - 0x31902c
void sub_00318FC0_0x318fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318FC0_0x318fc0");
#endif

    switch (ctx->pc) {
        case 0x319010u: goto label_319010;
        default: break;
    }

    ctx->pc = 0x318fc0u;

    // 0x318fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318fc4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x318fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x318fc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x318fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x318fcc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318fccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fd0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x318fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fd4: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x318fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x318fd8: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x318fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x318fdc: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x318fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x318fe0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x318fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x318fe4: 0xac62419c  sw          $v0, 0x419C($v1)
    ctx->pc = 0x318fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16796), GPR_U32(ctx, 2));
    // 0x318fe8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x318fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318fec: 0xac6241a0  sw          $v0, 0x41A0($v1)
    ctx->pc = 0x318fecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16800), GPR_U32(ctx, 2));
    // 0x318ff0: 0xac6041a4  sw          $zero, 0x41A4($v1)
    ctx->pc = 0x318ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16804), GPR_U32(ctx, 0));
    // 0x318ff4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ff8: 0xac6241a8  sw          $v0, 0x41A8($v1)
    ctx->pc = 0x318ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16808), GPR_U32(ctx, 2));
    // 0x318ffc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x318ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x319000: 0xac6241ac  sw          $v0, 0x41AC($v1)
    ctx->pc = 0x319000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16812), GPR_U32(ctx, 2));
    // 0x319004: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x319004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319008: 0xc0c5e4c  jal         func_317930
    ctx->pc = 0x319008u;
    SET_GPR_U32(ctx, 31, 0x319010u);
    ctx->pc = 0x317930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317930u, 0x319008u, 0x319010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319010u;
label_319010:
    // 0x319010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x319010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319014: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319014u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319018: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x319018u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31901c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319020: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x319020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319024: 0x3e00008  jr          $ra
    ctx->pc = 0x319024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31902Cu;
}
