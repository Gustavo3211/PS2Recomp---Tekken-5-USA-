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

// Function: sub_00353FA4
// Address: 0x353fa4 - 0x353ff8
void sub_00353FA4_0x353fa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353FA4_0x353fa4");
#endif

    switch (ctx->pc) {
        case 0x353fe0u: goto label_353fe0;
        default: break;
    }

    ctx->pc = 0x353fa4u;

    // 0x353fa4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353fa8: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353fac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x353fb0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353fb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fb4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353fb8: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353fbc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353fc0: 0xaf82cbe8  sw          $v0, -0x3418($gp)
    ctx->pc = 0x353fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953960), GPR_U32(ctx, 2));
    // 0x353fc4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x353fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x353fc8: 0xaf82cbec  sw          $v0, -0x3414($gp)
    ctx->pc = 0x353fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953964), GPR_U32(ctx, 2));
    // 0x353fcc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353fd0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x353fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x353fd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x353fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fd8: 0xc0d540d  jal         func_355034
    ctx->pc = 0x353FD8u;
    SET_GPR_U32(ctx, 31, 0x353FE0u);
    ctx->pc = 0x355034u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355034u, 0x353FD8u, 0x353FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353FE0u;
label_353fe0:
    // 0x353fe0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353fe0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353fe4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353fe4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x353fe8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x353fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353fec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353fecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x353FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353FF8u;
}
