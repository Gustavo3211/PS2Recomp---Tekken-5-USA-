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

// Function: sub_00354868
// Address: 0x354868 - 0x3548c8
void sub_00354868_0x354868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354868_0x354868");
#endif

    switch (ctx->pc) {
        case 0x354890u: goto label_354890;
        default: break;
    }

    ctx->pc = 0x354868u;

    // 0x354868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35486c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35486cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x354870: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x354870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x354874: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x354874u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354878: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x354878u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35487c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35487cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x354880: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x354880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x354884: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x354884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x354888: 0xc0d548b  jal         func_35522C
    ctx->pc = 0x354888u;
    SET_GPR_U32(ctx, 31, 0x354890u);
    ctx->pc = 0x35522Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35522Cu, 0x354888u, 0x354890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354890u;
label_354890:
    // 0x354890: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x354890u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x354894: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x354894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x354898: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x354898u;
    {
        const bool branch_taken_0x354898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354898) {
            ctx->pc = 0x3548ACu;
            goto label_3548ac;
        }
    }
    ctx->pc = 0x3548A0u;
    // 0x3548a0: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3548a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3548a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3548A4u;
    {
        const bool branch_taken_0x3548a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3548a4) {
            ctx->pc = 0x3548B0u;
            goto label_3548b0;
        }
    }
    ctx->pc = 0x3548ACu;
label_3548ac:
    // 0x3548ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3548acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3548b0:
    // 0x3548b0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3548b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3548b4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3548b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3548b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3548b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3548bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3548bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3548c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3548C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3548C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3548C8u;
}
