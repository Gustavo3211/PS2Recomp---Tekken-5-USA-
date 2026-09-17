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

// Function: sub_0048F728
// Address: 0x48f728 - 0x48f790
void sub_0048F728_0x48f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F728_0x48f728");
#endif

    ctx->pc = 0x48f728u;

    // 0x48f728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f72c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f734: 0x8123dd8  j           func_48F760
    ctx->pc = 0x48F734u;
    ctx->pc = 0x48F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F734u;
    // 0x48f738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F760u;
    goto label_48f760;
    ctx->pc = 0x48F73Cu;
    // 0x48f73c: 0x0  nop
    ctx->pc = 0x48f73cu;
    // NOP
    // 0x48f740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48f744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48f748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48f748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f74c: 0x81237cc  j           func_48DF30
    ctx->pc = 0x48F74Cu;
    ctx->pc = 0x48F750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F74Cu;
    // 0x48f750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48DF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DF30u, 0x48F74Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48F754u;
    // 0x48f754: 0x0  nop
    ctx->pc = 0x48f754u;
    // NOP
    // 0x48f758: 0x3e00008  jr          $ra
    ctx->pc = 0x48F758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F760u;
label_48f760:
    // 0x48f760: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48f760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48f764: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48f764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48f768: 0x2463009e  addiu       $v1, $v1, 0x9E
    ctx->pc = 0x48f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 158));
    // 0x48f76c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48f76cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D71Eu));
    // 0x48f770: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x48f770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x48f774: 0x3e00008  jr          $ra
    ctx->pc = 0x48F774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F774u;
        // 0x48f778: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F77Cu;
    // 0x48f77c: 0x0  nop
    ctx->pc = 0x48f77cu;
    // NOP
    // 0x48f780: 0x3e00008  jr          $ra
    ctx->pc = 0x48F780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F788u;
    // 0x48f788: 0x3e00008  jr          $ra
    ctx->pc = 0x48F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F790u;
}
