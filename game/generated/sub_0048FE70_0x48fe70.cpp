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

// Function: sub_0048FE70
// Address: 0x48fe70 - 0x48feb0
void sub_0048FE70_0x48fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048FE70_0x48fe70");
#endif

    ctx->pc = 0x48fe70u;

    // 0x48fe70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48fe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48fe74: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x48fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x48fe78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48fe7c: 0x24a2d680  addiu       $v0, $a1, -0x2980
    ctx->pc = 0x48fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x48fe80: 0x84420096  lh          $v0, 0x96($v0)
    ctx->pc = 0x48fe80u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D716u));
    // 0x48fe84: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x48fe84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x48fe88: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x48FE88u;
    {
        const bool branch_taken_0x48fe88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FE88u;
        // 0x48fe8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fe88) {
            ctx->pc = 0x48FEBCu;
            return;
        }
    }
    ctx->pc = 0x48FE90u;
    // 0x48fe90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x48fe94: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48fe94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48fe98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48fe9c: 0x8c63ac00  lw          $v1, -0x5400($v1)
    ctx->pc = 0x48fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945792)));
    // 0x48fea0: 0x600008  jr          $v1
    ctx->pc = 0x48FEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x48FEA8u: goto label_48fea8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48FEA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48FEA8u;
label_48fea8:
    // 0x48fea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48FEA8u;
    {
        const bool branch_taken_0x48fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48FEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48FEA8u;
        // 0x48feac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48fea8) {
            ctx->pc = 0x48FEBCu;
            return;
        }
    }
    ctx->pc = 0x48FEB0u;
}
