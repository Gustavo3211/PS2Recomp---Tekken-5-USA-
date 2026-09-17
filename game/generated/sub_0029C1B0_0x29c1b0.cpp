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

// Function: sub_0029C1B0
// Address: 0x29c1b0 - 0x29c208
void sub_0029C1B0_0x29c1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C1B0_0x29c1b0");
#endif

    ctx->pc = 0x29c1b0u;

    // 0x29c1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c1b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29c1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c1bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c1c0: 0x8cc30160  lw          $v1, 0x160($a2)
    ctx->pc = 0x29c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x29c1c4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C1C4u;
    {
        const bool branch_taken_0x29c1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1C4u;
        // 0x29c1c8: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1c4) {
            ctx->pc = 0x29C1E8u;
            goto label_29c1e8;
        }
    }
    ctx->pc = 0x29C1CCu;
    // 0x29c1cc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x29C1CCu;
    {
        const bool branch_taken_0x29c1cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1CCu;
        // 0x29c1d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1cc) {
            ctx->pc = 0x29C1F8u;
            goto label_29c1f8;
        }
    }
    ctx->pc = 0x29C1D4u;
    // 0x29c1d4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29C1D4u;
    {
        const bool branch_taken_0x29c1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c1d4) {
            ctx->pc = 0x29C1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C1D4u;
            // 0x29c1d8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C1FCu;
            goto label_29c1fc;
        }
    }
    ctx->pc = 0x29C1DCu;
    // 0x29c1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c1e0: 0x80a7082  j           func_29C208
    ctx->pc = 0x29C1E0u;
    ctx->pc = 0x29C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1E0u;
    // 0x29c1e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C208u;
    sub_0029C208_0x29c208(rdram, ctx, runtime); return;
    ctx->pc = 0x29C1E8u;
label_29c1e8:
    // 0x29c1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c1ec: 0x80a709c  j           func_29C270
    ctx->pc = 0x29C1ECu;
    ctx->pc = 0x29C1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1ECu;
    // 0x29c1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C270u;
    sub_0029C270_0x29c270(rdram, ctx, runtime); return;
    ctx->pc = 0x29C1F4u;
    // 0x29c1f4: 0x0  nop
    ctx->pc = 0x29c1f4u;
    // NOP
label_29c1f8:
    // 0x29c1f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x29c1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29c1fc:
    // 0x29c1fc: 0x80a70f2  j           func_29C3C8
    ctx->pc = 0x29C1FCu;
    ctx->pc = 0x29C200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C1FCu;
    // 0x29c200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C3C8u;
    sub_0029C3C8_0x29c3c8(rdram, ctx, runtime); return;
    ctx->pc = 0x29C204u;
    // 0x29c204: 0x0  nop
    ctx->pc = 0x29c204u;
    // NOP
    ctx->pc = 0x29c208u;
}
