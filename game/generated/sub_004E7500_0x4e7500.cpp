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

// Function: sub_004E7500
// Address: 0x4e7500 - 0x4e7528
void sub_004E7500_0x4e7500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7500_0x4e7500");
#endif

    ctx->pc = 0x4e7500u;

    // 0x4e7500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e7500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e7504: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e7504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e7508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e7508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e750c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e750cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e7510: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e7510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e7514: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e7514u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e7518: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4e7518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e751c: 0x8139dac  j           func_4E76B0
    ctx->pc = 0x4E751Cu;
    ctx->pc = 0x4E7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E751Cu;
    // 0x4e7520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E76B0u, 0x4E751Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E7524u;
    // 0x4e7524: 0x0  nop
    ctx->pc = 0x4e7524u;
    // NOP
    ctx->pc = 0x4e7528u;
}
