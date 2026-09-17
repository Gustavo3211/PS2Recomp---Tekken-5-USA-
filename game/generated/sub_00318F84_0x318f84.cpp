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

// Function: sub_00318F84
// Address: 0x318f84 - 0x318fc0
void sub_00318F84_0x318f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318F84_0x318f84");
#endif

    switch (ctx->pc) {
        case 0x318fa4u: goto label_318fa4;
        default: break;
    }

    ctx->pc = 0x318f84u;

    // 0x318f84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x318f84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x318f88: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x318f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x318f8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x318f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x318f90: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318f90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f94: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x318f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x318f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318f9c: 0xc0c5eaf  jal         func_317ABC
    ctx->pc = 0x318F9Cu;
    SET_GPR_U32(ctx, 31, 0x318FA4u);
    ctx->pc = 0x317ABCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317ABCu, 0x318F9Cu, 0x318FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318FA4u;
label_318fa4:
    // 0x318fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fa8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318fa8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318fac: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x318facu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x318fb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x318fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x318fb4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x318fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x318fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x318FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318FC0u;
}
