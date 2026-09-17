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

// Function: sub_002B2918
// Address: 0x2b2918 - 0x2b2968
void sub_002B2918_0x2b2918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2918_0x2b2918");
#endif

    switch (ctx->pc) {
        case 0x2b2940u: goto label_2b2940;
        case 0x2b2950u: goto label_2b2950;
        default: break;
    }

    ctx->pc = 0x2b2918u;

    // 0x2b2918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b291c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b2920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b2924: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b2924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b2928: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x2b2928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2b292c: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b2930: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2930u;
    {
        const bool branch_taken_0x2b2930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2930u;
        // 0x2b2934: 0x8cb00008  lw          $s0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2930) {
            ctx->pc = 0x2B2948u;
            goto label_2b2948;
        }
    }
    ctx->pc = 0x2B2938u;
    // 0x2b2938: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B2938u;
    SET_GPR_U32(ctx, 31, 0x2B2940u);
    ctx->pc = 0x2B293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2938u;
    // 0x2b293c: 0x24a40010  addiu       $a0, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B2938u, 0x2B2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2940u;
label_2b2940:
    // 0x2b2940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2940u;
    {
        const bool branch_taken_0x2b2940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2940u;
        // 0x2b2944: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2940) {
            ctx->pc = 0x2B2954u;
            goto label_2b2954;
        }
    }
    ctx->pc = 0x2B2948u;
label_2b2948:
    // 0x2b2948: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x2B2948u;
    SET_GPR_U32(ctx, 31, 0x2B2950u);
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x2B2948u, 0x2B2950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2950u;
label_2b2950:
    // 0x2b2950: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2b2950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_2b2954:
    // 0x2b2954: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b2954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b295c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B295Cu;
        // 0x2b2960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2964u;
    // 0x2b2964: 0x0  nop
    ctx->pc = 0x2b2964u;
    // NOP
    ctx->pc = 0x2b2968u;
}
