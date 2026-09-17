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

// Function: sub_00488788
// Address: 0x488788 - 0x4887c8
void sub_00488788_0x488788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488788_0x488788");
#endif

    ctx->pc = 0x488788u;

    // 0x488788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48878c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x48878cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488794: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x488794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488798: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x488798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48879c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48879cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4887a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4887a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4887a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4887a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4887a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4887a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4887ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4887acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4887b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4887b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4887b4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4887b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4887b8: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x4887b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4887bc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4887bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4887c0: 0x8140e4a  j           func_503928
    ctx->pc = 0x4887C0u;
    ctx->pc = 0x4887C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4887C0u;
    // 0x4887c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503928u, 0x4887C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4887C8u;
}
