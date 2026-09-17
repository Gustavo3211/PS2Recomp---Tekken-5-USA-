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

// Function: sub_00512390
// Address: 0x512390 - 0x5123a8
void sub_00512390_0x512390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512390_0x512390");
#endif

    ctx->pc = 0x512390u;

    // 0x512390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x512390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x512394: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x512394u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x512398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x512398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51239c: 0x81431ae  j           func_50C6B8
    ctx->pc = 0x51239Cu;
    ctx->pc = 0x5123A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51239Cu;
    // 0x5123a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50C6B8u, 0x51239Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5123A4u;
    // 0x5123a4: 0x0  nop
    ctx->pc = 0x5123a4u;
    // NOP
    ctx->pc = 0x5123a8u;
}
