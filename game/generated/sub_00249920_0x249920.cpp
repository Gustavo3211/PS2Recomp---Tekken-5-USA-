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

// Function: sub_00249920
// Address: 0x249920 - 0x249958
void sub_00249920_0x249920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249920_0x249920");
#endif

    ctx->pc = 0x249920u;

    // 0x249920: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x249920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x249924: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x249924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x249928: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x249928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24992c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x24992cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x249930: 0x24217180  addiu       $at, $at, 0x7180
    ctx->pc = 0x249930u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 29056));
    // 0x249934: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x249934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x249938: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x249938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24993c: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24993Cu;
    {
        const bool branch_taken_0x24993c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x24993c) {
            ctx->pc = 0x24994Cu;
            goto label_24994c;
        }
    }
    ctx->pc = 0x249944u;
    // 0x249944: 0xac46003c  sw          $a2, 0x3C($v0)
    ctx->pc = 0x249944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 6));
    // 0x249948: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x249948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_24994c:
    // 0x24994c: 0x3e00008  jr          $ra
    ctx->pc = 0x24994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24994Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249954u;
    // 0x249954: 0x0  nop
    ctx->pc = 0x249954u;
    // NOP
    ctx->pc = 0x249958u;
}
