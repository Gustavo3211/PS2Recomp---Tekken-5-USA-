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

// Function: sub_003300D8
// Address: 0x3300d8 - 0x330108
void sub_003300D8_0x3300d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003300D8_0x3300d8");
#endif

    switch (ctx->pc) {
        case 0x3300f8u: goto label_3300f8;
        default: break;
    }

    ctx->pc = 0x3300d8u;

    // 0x3300d8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3300d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3300dc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3300dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3300e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3300e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3300e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3300e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3300e8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x3300ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3300ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3300f0: 0xc0c7558  jal         func_31D560
    ctx->pc = 0x3300F0u;
    SET_GPR_U32(ctx, 31, 0x3300F8u);
    ctx->pc = 0x3300F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300F0u;
    // 0x3300f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D560u, 0x3300F0u, 0x3300F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300F8u;
label_3300f8:
    // 0x3300f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3300f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3300fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3300FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300FCu;
        // 0x330100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3300FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330104u;
    // 0x330104: 0x0  nop
    ctx->pc = 0x330104u;
    // NOP
    ctx->pc = 0x330108u;
}
