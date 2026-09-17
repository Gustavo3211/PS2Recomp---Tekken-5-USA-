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

// Function: sub_00319DA0
// Address: 0x319da0 - 0x319dec
void sub_00319DA0_0x319da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319DA0_0x319da0");
#endif

    switch (ctx->pc) {
        case 0x319dd4u: goto label_319dd4;
        default: break;
    }

    ctx->pc = 0x319da0u;

    // 0x319da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319da4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x319da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x319da8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x319da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x319dac: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319dacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319db0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x319db0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x319db4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x319db4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x319db8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x319db8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x319dbc: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x319dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x319dc0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x319dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x319dc4: 0x8fc4000c  lw          $a0, 0xC($fp)
    ctx->pc = 0x319dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x319dc8: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x319dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319dcc: 0xc0c6355  jal         func_318D54
    ctx->pc = 0x319DCCu;
    SET_GPR_U32(ctx, 31, 0x319DD4u);
    ctx->pc = 0x318D54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318D54u, 0x319DCCu, 0x319DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DD4u;
label_319dd4:
    // 0x319dd4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319dd4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319dd8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x319dd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319ddc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x319ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319de0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x319de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319de4: 0x3e00008  jr          $ra
    ctx->pc = 0x319DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319DECu;
}
