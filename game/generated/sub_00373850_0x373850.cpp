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

// Function: sub_00373850
// Address: 0x373850 - 0x3738a0
void sub_00373850_0x373850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373850_0x373850");
#endif

    switch (ctx->pc) {
        case 0x373880u: goto label_373880;
        default: break;
    }

    ctx->pc = 0x373850u;

    // 0x373850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x373858: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x373858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x37385c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x373860: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373860u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373868: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x373868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37386c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x37386cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x373870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373878: 0xc0dcf76  jal         func_373DD8
    ctx->pc = 0x373878u;
    SET_GPR_U32(ctx, 31, 0x373880u);
    ctx->pc = 0x373DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373DD8u, 0x373878u, 0x373880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373880u;
label_373880:
    // 0x373880: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373884: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373884u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37388c: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x37388cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373890: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373894: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373898: 0x3e00008  jr          $ra
    ctx->pc = 0x373898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3738A0u;
}
