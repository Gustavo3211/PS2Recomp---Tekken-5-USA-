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

// Function: sub_00373B94
// Address: 0x373b94 - 0x373be8
void sub_00373B94_0x373b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B94_0x373b94");
#endif

    switch (ctx->pc) {
        case 0x373bbcu: goto label_373bbc;
        case 0x373bccu: goto label_373bcc;
        default: break;
    }

    ctx->pc = 0x373b94u;

    // 0x373b94: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373b94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x373b9c: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x373b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x373ba0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x373ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x373ba4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373ba4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ba8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bac: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x373bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x373bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x373bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bb4: 0xc0dd053  jal         func_37414C
    ctx->pc = 0x373BB4u;
    SET_GPR_U32(ctx, 31, 0x373BBCu);
    ctx->pc = 0x37414Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37414Cu, 0x373BB4u, 0x373BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BBCu;
label_373bbc:
    // 0x373bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bc4: 0xc0dd02a  jal         func_3740A8
    ctx->pc = 0x373BC4u;
    SET_GPR_U32(ctx, 31, 0x373BCCu);
    ctx->pc = 0x3740A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3740A8u, 0x373BC4u, 0x373BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BCCu;
label_373bcc:
    // 0x373bcc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373bccu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373bd4: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x373bd4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373bdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373be0: 0x3e00008  jr          $ra
    ctx->pc = 0x373BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373BE8u;
}
