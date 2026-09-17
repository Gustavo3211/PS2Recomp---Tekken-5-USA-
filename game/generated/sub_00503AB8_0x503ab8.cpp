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

// Function: sub_00503AB8
// Address: 0x503ab8 - 0x503af0
void sub_00503AB8_0x503ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503AB8_0x503ab8");
#endif

    ctx->pc = 0x503ab8u;

    // 0x503ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503abc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x503abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503ac4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x503ac8: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x503ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503acc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x503accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x503ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x503ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503ad4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x503ad4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503ad8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x503ad8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503ae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x503ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503ae4: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x503ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x503ae8: 0x814549c  j           func_515270
    ctx->pc = 0x503AE8u;
    ctx->pc = 0x503AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503AE8u;
    // 0x503aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x515270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x515270u, 0x503AE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x503AF0u;
}
