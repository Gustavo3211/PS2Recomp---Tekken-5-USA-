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

// Function: sub_0031A5B8
// Address: 0x31a5b8 - 0x31a5d0
void sub_0031A5B8_0x31a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A5B8_0x31a5b8");
#endif

    ctx->pc = 0x31a5b8u;

    // 0x31a5b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a5bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a5c0: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x31a5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x31a5c4: 0x248400d8  addiu       $a0, $a0, 0xD8
    ctx->pc = 0x31a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x31a5c8: 0x80c8b46  j           func_322D18
    ctx->pc = 0x31A5C8u;
    ctx->pc = 0x31A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A5C8u;
    // 0x31a5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D18u, 0x31A5C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31A5D0u;
}
