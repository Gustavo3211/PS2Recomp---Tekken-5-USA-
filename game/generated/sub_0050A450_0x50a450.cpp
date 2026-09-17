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

// Function: sub_0050A450
// Address: 0x50a450 - 0x50a490
void sub_0050A450_0x50a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A450_0x50a450");
#endif

    ctx->pc = 0x50a450u;

    // 0x50a450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a454: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50a454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50a458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a45c: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x50a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50a460: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x50a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x50a464: 0x8c434de8  lw          $v1, 0x4DE8($v0)
    ctx->pc = 0x50a464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x903E68u));
    // 0x50a468: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x50A468u;
    {
        const bool branch_taken_0x50a468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x50A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50A468u;
        // 0x50a46c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50a468) {
            ctx->pc = 0x50A488u;
            goto label_50a488;
        }
    }
    ctx->pc = 0x50A470u;
    // 0x50a470: 0x84424cc4  lh          $v0, 0x4CC4($v0)
    ctx->pc = 0x50a470u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 19652)));
    // 0x50a474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x50A474u;
    {
        const bool branch_taken_0x50a474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50a474) {
            ctx->pc = 0x50A488u;
            goto label_50a488;
        }
    }
    ctx->pc = 0x50A47Cu;
    // 0x50a47c: 0x8142906  j           func_50A418
    ctx->pc = 0x50A47Cu;
    ctx->pc = 0x50A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A47Cu;
    // 0x50a480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A418u, 0x50A47Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50A484u;
    // 0x50a484: 0x0  nop
    ctx->pc = 0x50a484u;
    // NOP
label_50a488:
    // 0x50a488: 0x812a6f0  j           func_4A9BC0
    ctx->pc = 0x50A488u;
    ctx->pc = 0x50A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A488u;
    // 0x50a48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9BC0u;
    sub_004A9BC0_0x4a9bc0(rdram, ctx, runtime); return;
    ctx->pc = 0x50A490u;
}
