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

// Function: sub_00373804
// Address: 0x373804 - 0x373850
void sub_00373804_0x373804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373804_0x373804");
#endif

    switch (ctx->pc) {
        case 0x373830u: goto label_373830;
        default: break;
    }

    ctx->pc = 0x373804u;

    // 0x373804: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37380c: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x37380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x373810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x373810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x373814: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x373814u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373818: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37381c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x37381cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373824: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x373824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x373828: 0xc0dcf76  jal         func_373DD8
    ctx->pc = 0x373828u;
    SET_GPR_U32(ctx, 31, 0x373830u);
    ctx->pc = 0x373DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373DD8u, 0x373828u, 0x373830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373830u;
label_373830:
    // 0x373830: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373834: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x373834u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373838: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373838u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37383c: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x37383cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373840: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x373840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373844: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x373844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x373848: 0x3e00008  jr          $ra
    ctx->pc = 0x373848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373850u;
}
