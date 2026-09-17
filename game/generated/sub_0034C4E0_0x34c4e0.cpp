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

// Function: sub_0034C4E0
// Address: 0x34c4e0 - 0x34c550
void sub_0034C4E0_0x34c4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034C4E0_0x34c4e0");
#endif

    switch (ctx->pc) {
        case 0x34c510u: goto label_34c510;
        case 0x34c538u: goto label_34c538;
        default: break;
    }

    ctx->pc = 0x34c4e0u;

    // 0x34c4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34c4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34c4e4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x34c4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x34c4e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34c4ec: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34c4ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c4f0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x34c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x34c4f4: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x34c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x34c4f8: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x34c4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x34c4fc: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34c500: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x34c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x34c504: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x34c504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x34c508: 0xc0d30ad  jal         func_34C2B4
    ctx->pc = 0x34C508u;
    SET_GPR_U32(ctx, 31, 0x34C510u);
    ctx->pc = 0x34C2B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B4u, 0x34C508u, 0x34C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C510u;
label_34c510:
    // 0x34c510: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x34c510u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x34c514: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34c518: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C518u;
    {
        const bool branch_taken_0x34c518 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x34c518) {
            ctx->pc = 0x34C52Cu;
            goto label_34c52c;
        }
    }
    ctx->pc = 0x34C520u;
    // 0x34c520: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x34c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x34c524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34C524u;
    {
        const bool branch_taken_0x34c524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c524) {
            ctx->pc = 0x34C538u;
            goto label_34c538;
        }
    }
    ctx->pc = 0x34C52Cu;
label_34c52c:
    // 0x34c52c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x34c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34c530: 0xc0d3073  jal         func_34C1CC
    ctx->pc = 0x34C530u;
    SET_GPR_U32(ctx, 31, 0x34C538u);
    ctx->pc = 0x34C1CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C1CCu, 0x34C530u, 0x34C538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C538u;
label_34c538:
    // 0x34c538: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34c538u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c53c: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x34c53cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34c540: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34c540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34c544: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x34c544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34c548: 0x3e00008  jr          $ra
    ctx->pc = 0x34C548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C550u;
}
