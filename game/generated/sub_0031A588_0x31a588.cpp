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

// Function: sub_0031A588
// Address: 0x31a588 - 0x31a5a0
void sub_0031A588_0x31a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A588_0x31a588");
#endif

    ctx->pc = 0x31a588u;

    // 0x31a588: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x31a588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x31a58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a590: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x31a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x31a594: 0x248401f0  addiu       $a0, $a0, 0x1F0
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x31a598: 0x80c8d32  j           func_3234C8
    ctx->pc = 0x31A598u;
    ctx->pc = 0x31A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A598u;
    // 0x31a59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234C8u, 0x31A598u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31A5A0u;
}
