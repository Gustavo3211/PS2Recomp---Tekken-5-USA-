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

// Function: sub_0036A5B8
// Address: 0x36a5b8 - 0x36a608
void sub_0036A5B8_0x36a5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A5B8_0x36a5b8");
#endif

    switch (ctx->pc) {
        case 0x36a5dcu: goto label_36a5dc;
        case 0x36a5f0u: goto label_36a5f0;
        default: break;
    }

    ctx->pc = 0x36a5b8u;

    // 0x36a5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a5bc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a5c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a5c4: 0x24506d08  addiu       $s0, $v0, 0x6D08
    ctx->pc = 0x36a5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27912));
    // 0x36a5c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D08u));
    // 0x36a5cc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A5CCu;
    {
        const bool branch_taken_0x36a5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5CCu;
        // 0x36a5d0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a5cc) {
            ctx->pc = 0x36A5F0u;
            goto label_36a5f0;
        }
    }
    ctx->pc = 0x36A5D4u;
    // 0x36a5d4: 0xc0da950  jal         func_36A540
    ctx->pc = 0x36A5D4u;
    SET_GPR_U32(ctx, 31, 0x36A5DCu);
    ctx->pc = 0x36A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A540u, 0x36A5D4u, 0x36A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5DCu;
label_36a5dc:
    // 0x36a5dc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a5e0: 0x24a52710  addiu       $a1, $a1, 0x2710
    ctx->pc = 0x36a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10000));
    // 0x36a5e4: 0x2786cc70  addiu       $a2, $gp, -0x3390
    ctx->pc = 0x36a5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954096));
    // 0x36a5e8: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A5E8u;
    SET_GPR_U32(ctx, 31, 0x36A5F0u);
    ctx->pc = 0x36A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5E8u;
    // 0x36a5ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A5E8u, 0x36A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5F0u;
label_36a5f0:
    // 0x36a5f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a5f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a5f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x36A5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A5FCu;
        // 0x36a600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A604u;
    // 0x36a604: 0x0  nop
    ctx->pc = 0x36a604u;
    // NOP
    ctx->pc = 0x36a608u;
}
