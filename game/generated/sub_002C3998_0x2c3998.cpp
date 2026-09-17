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

// Function: sub_002C3998
// Address: 0x2c3998 - 0x2c39f8
void sub_002C3998_0x2c3998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3998_0x2c3998");
#endif

    switch (ctx->pc) {
        case 0x2c39b8u: goto label_2c39b8;
        case 0x2c39c0u: goto label_2c39c0;
        case 0x2c39ccu: goto label_2c39cc;
        default: break;
    }

    ctx->pc = 0x2c3998u;

    // 0x2c3998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c399c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c39a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c39a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c39a4: 0x8c5088d8  lw          $s0, -0x7728($v0)
    ctx->pc = 0x2c39a4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A88D8u));
    // 0x2c39a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c39ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c39acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C39B0u;
    {
        const bool branch_taken_0x2c39b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39B0u;
        // 0x2c39b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39b0) {
            ctx->pc = 0x2C39C4u;
            goto label_2c39c4;
        }
    }
    ctx->pc = 0x2C39B8u;
label_2c39b8:
    // 0x2c39b8: 0xc0b0df8  jal         func_2C37E0
    ctx->pc = 0x2C39B8u;
    SET_GPR_U32(ctx, 31, 0x2C39C0u);
    ctx->pc = 0x2C39BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39B8u;
    // 0x2c39bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C37E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C37E0u, 0x2C39B8u, 0x2C39C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39C0u;
label_2c39c0:
    // 0x2c39c0: 0x261008d0  addiu       $s0, $s0, 0x8D0
    ctx->pc = 0x2c39c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
label_2c39c4:
    // 0x2c39c4: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x2C39C4u;
    SET_GPR_U32(ctx, 31, 0x2C39CCu);
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x2C39C4u, 0x2C39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39CCu;
label_2c39cc:
    // 0x2c39cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c39ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2c39d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c39d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c39d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C39D8u;
    {
        const bool branch_taken_0x2c39d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C39DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39D8u;
        // 0x2c39dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39d8) {
            ctx->pc = 0x2C39B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c39b8;
        }
    }
    ctx->pc = 0x2C39E0u;
    // 0x2c39e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c39e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c39e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c39e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c39e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c39e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c39ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2C39ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39ECu;
        // 0x2c39f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C39ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C39F4u;
    // 0x2c39f4: 0x0  nop
    ctx->pc = 0x2c39f4u;
    // NOP
    ctx->pc = 0x2c39f8u;
}
