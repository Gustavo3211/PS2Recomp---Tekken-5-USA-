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

// Function: sub_001304F0
// Address: 0x1304f0 - 0x130558
void sub_001304F0_0x1304f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001304F0_0x1304f0");
#endif

    switch (ctx->pc) {
        case 0x130514u: goto label_130514;
        case 0x13052cu: goto label_13052c;
        default: break;
    }

    ctx->pc = 0x1304f0u;

    // 0x1304f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1304f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1304f4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1304f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1304f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1304f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1304fc: 0x245000b0  addiu       $s0, $v0, 0xB0
    ctx->pc = 0x1304fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x130500: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1F00B0u));
    // 0x130504: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x130504u;
    {
        const bool branch_taken_0x130504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130504u;
        // 0x130508: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130504) {
            ctx->pc = 0x13052Cu;
            goto label_13052c;
        }
    }
    ctx->pc = 0x13050Cu;
    // 0x13050c: 0xc04c0da  jal         func_130368
    ctx->pc = 0x13050Cu;
    SET_GPR_U32(ctx, 31, 0x130514u);
    ctx->pc = 0x130368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130368u, 0x13050Cu, 0x130514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130514u;
label_130514:
    // 0x130514: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130518: 0x3c06001f  lui         $a2, 0x1F
    ctx->pc = 0x130518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)31 << 16));
    // 0x13051c: 0x24a5f338  addiu       $a1, $a1, -0xCC8
    ctx->pc = 0x13051cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964024));
    // 0x130520: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x130520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x130524: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x130524u;
    SET_GPR_U32(ctx, 31, 0x13052Cu);
    ctx->pc = 0x130528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130524u;
    // 0x130528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x130524u, 0x13052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13052Cu;
label_13052c:
    // 0x13052c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13052cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130538: 0x3e00008  jr          $ra
    ctx->pc = 0x130538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130538u;
        // 0x13053c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130540u;
    // 0x130540: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x130544: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x130544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x130548: 0x24634bc8  addiu       $v1, $v1, 0x4BC8
    ctx->pc = 0x130548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19400));
    // 0x13054c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x13054cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x130550: 0x3e00008  jr          $ra
    ctx->pc = 0x130550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130550u;
        // 0x130554: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130558u;
}
