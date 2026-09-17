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

// Function: sub_0031902C
// Address: 0x31902c - 0x319068
void sub_0031902C_0x31902c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031902C_0x31902c");
#endif

    switch (ctx->pc) {
        case 0x31904cu: goto label_31904c;
        default: break;
    }

    ctx->pc = 0x31902cu;

    // 0x31902c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31902cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319030: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x319030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x319034: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x319034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x319038: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319038u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31903c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31903cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319044: 0xc0c5eaf  jal         func_317ABC
    ctx->pc = 0x319044u;
    SET_GPR_U32(ctx, 31, 0x31904Cu);
    ctx->pc = 0x317ABCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317ABCu, 0x319044u, 0x31904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31904Cu;
label_31904c:
    // 0x31904c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31904cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319050: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319050u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319054: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x319054u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319058: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x319058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31905c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x31905cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x319060: 0x3e00008  jr          $ra
    ctx->pc = 0x319060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319068u;
}
