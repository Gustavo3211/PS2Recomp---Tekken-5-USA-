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

// Function: sub_00369EB8
// Address: 0x369eb8 - 0x369edc
void sub_00369EB8_0x369eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369EB8_0x369eb8");
#endif

    ctx->pc = 0x369eb8u;

    // 0x369eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369ec0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ec4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369ec8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369ecc: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x369eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x369ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ed4: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x369ED4u;
    SET_GPR_U32(ctx, 31, 0x369EDCu);
    ctx->pc = 0x369ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369ED4u;
    // 0x369ed8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x369ED4u, 0x369EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369EDCu;
}
