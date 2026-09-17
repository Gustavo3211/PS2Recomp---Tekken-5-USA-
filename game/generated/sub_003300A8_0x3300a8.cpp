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

// Function: sub_003300A8
// Address: 0x3300a8 - 0x3300d8
void sub_003300A8_0x3300a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003300A8_0x3300a8");
#endif

    switch (ctx->pc) {
        case 0x3300c8u: goto label_3300c8;
        default: break;
    }

    ctx->pc = 0x3300a8u;

    // 0x3300a8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3300a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3300ac: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3300acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3300b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3300b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3300b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3300b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3300b8: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x3300b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x3300bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3300bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3300c0: 0xc0c7550  jal         func_31D540
    ctx->pc = 0x3300C0u;
    SET_GPR_U32(ctx, 31, 0x3300C8u);
    ctx->pc = 0x3300C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3300C0u;
    // 0x3300c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D540u, 0x3300C0u, 0x3300C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3300C8u;
label_3300c8:
    // 0x3300c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3300c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3300cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3300CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3300D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3300CCu;
        // 0x3300d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3300CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3300D4u;
    // 0x3300d4: 0x0  nop
    ctx->pc = 0x3300d4u;
    // NOP
    ctx->pc = 0x3300d8u;
}
