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

// Function: sub_003739C0
// Address: 0x3739c0 - 0x373a14
void sub_003739C0_0x3739c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003739C0_0x3739c0");
#endif

    switch (ctx->pc) {
        case 0x3739e8u: goto label_3739e8;
        case 0x3739f8u: goto label_3739f8;
        default: break;
    }

    ctx->pc = 0x3739c0u;

    // 0x3739c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3739c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3739c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3739c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3739c8: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x3739c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x3739cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3739ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3739d0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3739d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3739d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739d8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3739d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3739dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3739dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739e0: 0xc0dcfb0  jal         func_373EC0
    ctx->pc = 0x3739E0u;
    SET_GPR_U32(ctx, 31, 0x3739E8u);
    ctx->pc = 0x373EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373EC0u, 0x3739E0u, 0x3739E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739E8u;
label_3739e8:
    // 0x3739e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3739e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3739ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739f0: 0xc0dcf43  jal         func_373D0C
    ctx->pc = 0x3739F0u;
    SET_GPR_U32(ctx, 31, 0x3739F8u);
    ctx->pc = 0x373D0Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373D0Cu, 0x3739F0u, 0x3739F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739F8u;
label_3739f8:
    // 0x3739f8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3739f8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3739fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a00: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x373a00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373a04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373a08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x373A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A14u;
}
