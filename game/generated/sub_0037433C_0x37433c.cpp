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

// Function: sub_0037433C
// Address: 0x37433c - 0x374380
void sub_0037433C_0x37433c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037433C_0x37433c");
#endif

    switch (ctx->pc) {
        case 0x374368u: goto label_374368;
        default: break;
    }

    ctx->pc = 0x37433cu;

    // 0x37433c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37433cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374340: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x374340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x374344: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x374348: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x374348u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37434c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x37434cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374350: 0x24430024  addiu       $v1, $v0, 0x24
    ctx->pc = 0x374350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x374354: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x374354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374358: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x374358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37435c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x37435cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x374360: 0xc0dd0f2  jal         func_3743C8
    ctx->pc = 0x374360u;
    SET_GPR_U32(ctx, 31, 0x374368u);
    ctx->pc = 0x3743C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3743C8u, 0x374360u, 0x374368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374368u;
label_374368:
    // 0x374368: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374368u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37436c: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x37436cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x374370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374374: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x374374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x374378: 0x3e00008  jr          $ra
    ctx->pc = 0x374378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374380u;
}
