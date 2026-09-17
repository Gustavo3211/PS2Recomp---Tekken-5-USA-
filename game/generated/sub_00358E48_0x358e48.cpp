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

// Function: sub_00358E48
// Address: 0x358e48 - 0x358e68
void sub_00358E48_0x358e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358E48_0x358e48");
#endif

    ctx->pc = 0x358e48u;

    // 0x358e48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x358e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x358e4c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x358e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x358e50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358e54: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x358e54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x358e58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358e5c: 0x80d8586  j           func_361618
    ctx->pc = 0x358E5Cu;
    ctx->pc = 0x358E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E5Cu;
    // 0x358e60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361618u, 0x358E5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358E64u;
    // 0x358e64: 0x0  nop
    ctx->pc = 0x358e64u;
    // NOP
    ctx->pc = 0x358e68u;
}
