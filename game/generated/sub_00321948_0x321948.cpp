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

// Function: sub_00321948
// Address: 0x321948 - 0x321960
void sub_00321948_0x321948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321948_0x321948");
#endif

    ctx->pc = 0x321948u;

    // 0x321948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32194c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x32194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x321950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321958: 0x80ce8be  j           func_33A2F8
    ctx->pc = 0x321958u;
    ctx->pc = 0x32195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321958u;
    // 0x32195c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A2F8u, 0x321958u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x321960u;
}
