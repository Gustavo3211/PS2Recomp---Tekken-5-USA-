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

// Function: sub_003165FC
// Address: 0x3165fc - 0x316634
void sub_003165FC_0x3165fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003165FC_0x3165fc");
#endif

    switch (ctx->pc) {
        case 0x31661cu: goto label_31661c;
        default: break;
    }

    ctx->pc = 0x3165fcu;

    // 0x3165fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3165fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316600: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x316600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x316604: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x316604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x316608: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316608u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31660c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x31660cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x316610: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x316610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316614: 0xc0c5b0f  jal         func_316C3C
    ctx->pc = 0x316614u;
    SET_GPR_U32(ctx, 31, 0x31661Cu);
    ctx->pc = 0x316C3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316C3Cu, 0x316614u, 0x31661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31661Cu;
label_31661c:
    // 0x31661c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x31661cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316620: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x316620u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316624: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x316624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x316628: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x316628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31662c: 0x3e00008  jr          $ra
    ctx->pc = 0x31662Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31662Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316634u;
}
