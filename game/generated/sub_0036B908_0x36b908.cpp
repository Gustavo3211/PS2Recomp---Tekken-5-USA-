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

// Function: sub_0036B908
// Address: 0x36b908 - 0x36b968
void sub_0036B908_0x36b908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B908_0x36b908");
#endif

    switch (ctx->pc) {
        case 0x36b92cu: goto label_36b92c;
        case 0x36b944u: goto label_36b944;
        default: break;
    }

    ctx->pc = 0x36b908u;

    // 0x36b908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b90c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b914: 0x24506ea8  addiu       $s0, $v0, 0x6EA8
    ctx->pc = 0x36b914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28328));
    // 0x36b918: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b918u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6EA8u));
    // 0x36b91c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B91Cu;
    {
        const bool branch_taken_0x36b91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B91Cu;
        // 0x36b920: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b91c) {
            ctx->pc = 0x36B944u;
            goto label_36b944;
        }
    }
    ctx->pc = 0x36B924u;
    // 0x36b924: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36B924u;
    SET_GPR_U32(ctx, 31, 0x36B92Cu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36B924u, 0x36B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B92Cu;
label_36b92c:
    // 0x36b92c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b930: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b934: 0x24a5bbc0  addiu       $a1, $a1, -0x4440
    ctx->pc = 0x36b934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949824));
    // 0x36b938: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36b938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36b93c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B93Cu;
    SET_GPR_U32(ctx, 31, 0x36B944u);
    ctx->pc = 0x36B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B93Cu;
    // 0x36b940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B93Cu, 0x36B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B944u;
label_36b944:
    // 0x36b944: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b94c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b94cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b950: 0x3e00008  jr          $ra
    ctx->pc = 0x36B950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B950u;
        // 0x36b954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B958u;
    // 0x36b958: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x36b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x36b95c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x36b95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x36b960: 0x3e00008  jr          $ra
    ctx->pc = 0x36B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B960u;
        // 0x36b964: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B968u;
}
