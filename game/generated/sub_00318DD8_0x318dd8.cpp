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

// Function: sub_00318DD8
// Address: 0x318dd8 - 0x318e54
void sub_00318DD8_0x318dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318DD8_0x318dd8");
#endif

    switch (ctx->pc) {
        case 0x318e18u: goto label_318e18;
        case 0x318e34u: goto label_318e34;
        default: break;
    }

    ctx->pc = 0x318dd8u;

    // 0x318dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x318dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x318ddc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x318ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x318de0: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x318de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x318de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x318de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x318de8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318de8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318dec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x318decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318df0: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x318df0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x318df4: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x318df4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x318df8: 0xafc70008  sw          $a3, 0x8($fp)
    ctx->pc = 0x318df8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 7));
    // 0x318dfc: 0xae00419c  sw          $zero, 0x419C($s0)
    ctx->pc = 0x318dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16796), GPR_U32(ctx, 0));
    // 0x318e00: 0x260241a0  addiu       $v0, $s0, 0x41A0
    ctx->pc = 0x318e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16800));
    // 0x318e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e08: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x318e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318e0c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x318e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x318e10: 0xc04a58e  jal         func_129638
    ctx->pc = 0x318E10u;
    SET_GPR_U32(ctx, 31, 0x318E18u);
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x318E10u, 0x318E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E18u;
label_318e18:
    // 0x318e18: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318e1c: 0xae0242a4  sw          $v0, 0x42A4($s0)
    ctx->pc = 0x318e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17060), GPR_U32(ctx, 2));
    // 0x318e20: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x318e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x318e24: 0xae0242a8  sw          $v0, 0x42A8($s0)
    ctx->pc = 0x318e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17064), GPR_U32(ctx, 2));
    // 0x318e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x318e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e2c: 0xc0c5e4c  jal         func_317930
    ctx->pc = 0x318E2Cu;
    SET_GPR_U32(ctx, 31, 0x318E34u);
    ctx->pc = 0x317930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317930u, 0x318E2Cu, 0x318E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318E34u;
label_318e34:
    // 0x318e34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318e34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e38: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318e38u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x318e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318e40: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x318e40u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x318e44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x318e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318e48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x318e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x318e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x318E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318E54u;
}
