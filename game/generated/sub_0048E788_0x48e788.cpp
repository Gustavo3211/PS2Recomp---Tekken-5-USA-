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

// Function: sub_0048E788
// Address: 0x48e788 - 0x48e7c8
void sub_0048E788_0x48e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E788_0x48e788");
#endif

    ctx->pc = 0x48e788u;

    // 0x48e788: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x48e788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x48e78c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48e78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48e790: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48e790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48e794: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x48e794u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x48e798: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x48E798u;
    {
        const bool branch_taken_0x48e798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x48E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E798u;
        // 0x48e79c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e798) {
            ctx->pc = 0x48E7B0u;
            goto label_48e7b0;
        }
    }
    ctx->pc = 0x48E7A0u;
    // 0x48e7a0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e7a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48E7A4u;
    {
        const bool branch_taken_0x48e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48E7A4u;
        // 0x48e7a8: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48e7a4) {
            ctx->pc = 0x48E7B8u;
            goto label_48e7b8;
        }
    }
    ctx->pc = 0x48E7ACu;
    // 0x48e7ac: 0x0  nop
    ctx->pc = 0x48e7acu;
    // NOP
label_48e7b0:
    // 0x48e7b0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48e7b4: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x48e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_48e7b8:
    // 0x48e7b8: 0xac62d69c  sw          $v0, -0x2964($v1)
    ctx->pc = 0x48e7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956700), GPR_U32(ctx, 2));
    // 0x48e7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e7c0: 0x8123a38  j           func_48E8E0
    ctx->pc = 0x48E7C0u;
    ctx->pc = 0x48E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48E7C0u;
    // 0x48e7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8E0u, 0x48E7C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x48E7C8u;
}
