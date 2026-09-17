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

// Function: sub_002DE680
// Address: 0x2de680 - 0x2de6e8
void sub_002DE680_0x2de680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE680_0x2de680");
#endif

    switch (ctx->pc) {
        case 0x2de698u: goto label_2de698;
        case 0x2de6b8u: goto label_2de6b8;
        default: break;
    }

    ctx->pc = 0x2de680u;

    // 0x2de680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de68c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2de68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2de690: 0xc0b798e  jal         func_2DE638
    ctx->pc = 0x2DE690u;
    SET_GPR_U32(ctx, 31, 0x2DE698u);
    ctx->pc = 0x2DE694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE690u;
    // 0x2de694: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE638u, 0x2DE690u, 0x2DE698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE698u;
label_2de698:
    // 0x2de698: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2de698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2de69c: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2de69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2de6a0: 0x2442f898  addiu       $v0, $v0, -0x768
    ctx->pc = 0x2de6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965400));
    // 0x2de6a4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2de6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2de6a8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2de6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2de6ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2de6acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de6b0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2de6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2de6b4: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x2de6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2de6b8:
    // 0x2de6b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de6bc: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2de6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2de6c0: 0x28620130  slti        $v0, $v1, 0x130
    ctx->pc = 0x2de6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)304) ? 1 : 0);
    // 0x2de6c4: 0x0  nop
    ctx->pc = 0x2de6c4u;
    // NOP
    // 0x2de6c8: 0x0  nop
    ctx->pc = 0x2de6c8u;
    // NOP
    // 0x2de6cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DE6CCu;
    {
        const bool branch_taken_0x2de6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6CCu;
        // 0x2de6d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de6cc) {
            ctx->pc = 0x2DE6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de6b8;
        }
    }
    ctx->pc = 0x2DE6D4u;
    // 0x2de6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de6d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2de6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE6DCu;
        // 0x2de6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE6E4u;
    // 0x2de6e4: 0x0  nop
    ctx->pc = 0x2de6e4u;
    // NOP
    ctx->pc = 0x2de6e8u;
}
