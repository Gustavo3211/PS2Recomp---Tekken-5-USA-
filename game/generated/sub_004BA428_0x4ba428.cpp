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

// Function: sub_004BA428
// Address: 0x4ba428 - 0x4ba460
void sub_004BA428_0x4ba428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA428_0x4ba428");
#endif

    switch (ctx->pc) {
        case 0x4ba43cu: goto label_4ba43c;
        default: break;
    }

    ctx->pc = 0x4ba428u;

    // 0x4ba428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ba428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ba42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ba430: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ba430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ba434: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4BA434u;
    SET_GPR_U32(ctx, 31, 0x4BA43Cu);
    ctx->pc = 0x4BA438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA434u;
    // 0x4ba438: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4BA434u, 0x4BA43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA43Cu;
label_4ba43c:
    // 0x4ba43c: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4ba43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4ba440: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4ba440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4ba444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ba444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ba448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ba448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ba44c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ba44cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ba450: 0xa44001be  sh          $zero, 0x1BE($v0)
    ctx->pc = 0x4ba450u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ba454: 0x3e00008  jr          $ra
    ctx->pc = 0x4BA454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA454u;
        // 0x4ba458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BA454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BA45Cu;
    // 0x4ba45c: 0x0  nop
    ctx->pc = 0x4ba45cu;
    // NOP
    ctx->pc = 0x4ba460u;
}
