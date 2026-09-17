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

// Function: sub_00374380
// Address: 0x374380 - 0x3743c8
void sub_00374380_0x374380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374380_0x374380");
#endif

    switch (ctx->pc) {
        case 0x3743b0u: goto label_3743b0;
        default: break;
    }

    ctx->pc = 0x374380u;

    // 0x374380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x374380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x374384: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x374384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x374388: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x374388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x37438c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x37438cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374390: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x374390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x374394: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x374394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x374398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37439c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37439Cu;
    {
        const bool branch_taken_0x37439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37439c) {
            ctx->pc = 0x3743B0u;
            goto label_3743b0;
        }
    }
    ctx->pc = 0x3743A4u;
    // 0x3743a4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x3743a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3743a8: 0xc049a7a  jal         func_1269E8
    ctx->pc = 0x3743A8u;
    SET_GPR_U32(ctx, 31, 0x3743B0u);
    ctx->pc = 0x1269E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E8u, 0x3743A8u, 0x3743B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743B0u;
label_3743b0:
    // 0x3743b0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3743b0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743b4: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3743b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3743b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3743b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3743bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3743bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3743c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3743C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3743C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3743C8u;
}
