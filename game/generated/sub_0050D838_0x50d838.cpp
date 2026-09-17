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

// Function: sub_0050D838
// Address: 0x50d838 - 0x50d870
void sub_0050D838_0x50d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D838_0x50d838");
#endif

    switch (ctx->pc) {
        case 0x50d838u: goto label_50d838;
        case 0x50d83cu: goto label_50d83c;
        case 0x50d840u: goto label_50d840;
        case 0x50d844u: goto label_50d844;
        case 0x50d848u: goto label_50d848;
        case 0x50d84cu: goto label_50d84c;
        case 0x50d850u: goto label_50d850;
        case 0x50d854u: goto label_50d854;
        case 0x50d858u: goto label_50d858;
        case 0x50d85cu: goto label_50d85c;
        case 0x50d860u: goto label_50d860;
        case 0x50d864u: goto label_50d864;
        case 0x50d868u: goto label_50d868;
        case 0x50d86cu: goto label_50d86c;
        default: break;
    }

    ctx->pc = 0x50d838u;

label_50d838:
    // 0x50d838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_50d83c:
    // 0x50d83c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
label_50d840:
    // 0x50d840: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_50d844:
    // 0x50d844: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x50d844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
label_50d848:
    // 0x50d848: 0x84454cd2  lh          $a1, 0x4CD2($v0)
    ctx->pc = 0x50d848u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 19666)));
label_50d84c:
    // 0x50d84c: 0x2ca30011  sltiu       $v1, $a1, 0x11
    ctx->pc = 0x50d84cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_50d850:
    // 0x50d850: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_50d854:
    if (ctx->pc == 0x50D854u) {
        ctx->pc = 0x50D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D850u;
        // 0x50d854: 0x84444cd4  lh          $a0, 0x4CD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 19668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50D858u;
        goto label_50d858;
    }
    ctx->pc = 0x50D850u;
    {
        const bool branch_taken_0x50d850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D850u;
        // 0x50d854: 0x84444cd4  lh          $a0, 0x4CD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 19668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d850) {
            ctx->pc = 0x50D8A0u;
            return;
        }
    }
    ctx->pc = 0x50D858u;
label_50d858:
    // 0x50d858: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x50d858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50d85c:
    // 0x50d85c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_50d860:
    // 0x50d860: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50d864:
    // 0x50d864: 0x8c63d2f0  lw          $v1, -0x2D10($v1)
    ctx->pc = 0x50d864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955760)));
label_50d868:
    // 0x50d868: 0x600008  jr          $v1
label_50d86c:
    if (ctx->pc == 0x50D86Cu) {
        ctx->pc = 0x50D870u;
        goto label_fallthrough_0x50d868;
    }
    ctx->pc = 0x50D868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D868u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x50d868:
    ctx->pc = 0x50D870u;
}
