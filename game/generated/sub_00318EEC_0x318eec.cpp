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

// Function: sub_00318EEC
// Address: 0x318eec - 0x318f28
void sub_00318EEC_0x318eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318EEC_0x318eec");
#endif

    switch (ctx->pc) {
        case 0x318f0cu: goto label_318f0c;
        default: break;
    }

    ctx->pc = 0x318eecu;

    // 0x318eec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x318ef0: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x318ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x318ef4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x318ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x318ef8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318ef8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318efc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x318efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f04: 0xc0c5eaf  jal         func_317ABC
    ctx->pc = 0x318F04u;
    SET_GPR_U32(ctx, 31, 0x318F0Cu);
    ctx->pc = 0x317ABCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317ABCu, 0x318F04u, 0x318F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318F0Cu;
label_318f0c:
    // 0x318f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f10: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318f10u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f14: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x318f14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318f18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x318f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x318f1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x318f1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x318f20: 0x3e00008  jr          $ra
    ctx->pc = 0x318F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318F28u;
}
