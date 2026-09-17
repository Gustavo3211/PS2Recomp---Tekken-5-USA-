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

// Function: sub_00373598
// Address: 0x373598 - 0x3735ec
void sub_00373598_0x373598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373598_0x373598");
#endif

    switch (ctx->pc) {
        case 0x3735bcu: goto label_3735bc;
        case 0x3735ccu: goto label_3735cc;
        default: break;
    }

    ctx->pc = 0x373598u;

    // 0x373598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x373598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37359c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3735a0: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x3735a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x3735a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3735a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3735a8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3735a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3735acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3735b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735b4: 0xc0dcefa  jal         func_373BE8
    ctx->pc = 0x3735B4u;
    SET_GPR_U32(ctx, 31, 0x3735BCu);
    ctx->pc = 0x373BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373BE8u, 0x3735B4u, 0x3735BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735BCu;
label_3735bc:
    // 0x3735bc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3735bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3735c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3735c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735c4: 0xc0dcefa  jal         func_373BE8
    ctx->pc = 0x3735C4u;
    SET_GPR_U32(ctx, 31, 0x3735CCu);
    ctx->pc = 0x373BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373BE8u, 0x3735C4u, 0x3735CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3735CCu;
label_3735cc:
    // 0x3735cc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3735ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x3735d0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3735d0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3735d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3735d8: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x3735d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3735dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3735dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3735e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3735e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3735e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3735E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3735E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3735ECu;
}
