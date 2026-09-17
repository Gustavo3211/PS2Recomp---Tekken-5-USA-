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

// Function: sub_003741D0
// Address: 0x3741d0 - 0x374238
void sub_003741D0_0x3741d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003741D0_0x3741d0");
#endif

    ctx->pc = 0x3741d0u;

    // 0x3741d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3741d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3741d4: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x3741d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x3741d8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3741d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741dc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3741dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3741e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741e4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3741e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3741e8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3741e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3741ec: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3741ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x3741f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3741f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3741f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3741f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3741f8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3741f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3741fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3741fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374200: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x374200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x374204: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x374204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x374208: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x374208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37420c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x37420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x374210: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x374210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374214: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x374214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x374218: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x374218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37421c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37421cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x374220: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x374220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x374224: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374224u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374228: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x374228u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37422c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37422cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x374230: 0x3e00008  jr          $ra
    ctx->pc = 0x374230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374238u;
}
