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

// Function: sub_0048E750
// Address: 0x48e750 - 0x48e788
void sub_0048E750_0x48e750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E750_0x48e750");
#endif

    ctx->pc = 0x48e750u;

    // 0x48e750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e754: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e75c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x48e75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x48e760: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x48e760u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D680u));
    // 0x48e764: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x48e764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x48e768: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48E768u;
    {
        const bool branch_taken_0x48e768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48E76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E768u;
        // 0x48e76c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e768) {
            ctx->pc = 0x48E778u;
            goto label_48e778;
        }
    }
    ctx->pc = 0x48E770u;
    // 0x48e770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48E770u;
    {
        const bool branch_taken_0x48e770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E770u;
        // 0x48e774: 0xac60001c  sw          $zero, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e770) {
            ctx->pc = 0x48E77Cu;
            goto label_48e77c;
        }
    }
    ctx->pc = 0x48E778u;
label_48e778:
    // 0x48e778: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x48e778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_48e77c:
    // 0x48e77c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e780: 0x8123a76  j           func_48E9D8
    ctx->pc = 0x48E780u;
    ctx->pc = 0x48E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E780u;
    // 0x48e784: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E9D8u, 0x48E780u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48E788u;
}
