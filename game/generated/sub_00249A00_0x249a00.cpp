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

// Function: sub_00249A00
// Address: 0x249a00 - 0x249a20
void sub_00249A00_0x249a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249A00_0x249a00");
#endif

    ctx->pc = 0x249a00u;

    // 0x249a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249a04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x249a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249a0c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x249a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x249a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249a14: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x249a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x249a18: 0x8092434  j           func_2490D0
    ctx->pc = 0x249A18u;
    ctx->pc = 0x249A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249A18u;
    // 0x249a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490D0u, 0x249A18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x249A20u;
}
