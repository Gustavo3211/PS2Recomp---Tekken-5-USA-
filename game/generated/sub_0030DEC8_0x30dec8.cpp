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

// Function: sub_0030DEC8
// Address: 0x30dec8 - 0x30df40
void sub_0030DEC8_0x30dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DEC8_0x30dec8");
#endif

    switch (ctx->pc) {
        case 0x30dee0u: goto label_30dee0;
        case 0x30dee8u: goto label_30dee8;
        default: break;
    }

    ctx->pc = 0x30dec8u;

    // 0x30dec8: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x30dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    // 0x30decc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30deccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ded0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x30ded0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ded4: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x30ded4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x30ded8: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x30ded8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30dedc: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x30dedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_30dee0:
    // 0x30dee0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x30dee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dee4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x30dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_30dee8:
    // 0x30dee8: 0x24620be0  addiu       $v0, $v1, 0xBE0
    ctx->pc = 0x30dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3040));
    // 0x30deec: 0xfc600bd8  sd          $zero, 0xBD8($v1)
    ctx->pc = 0x30deecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 3032), GPR_U64(ctx, 0));
    // 0x30def0: 0xfc600bd0  sd          $zero, 0xBD0($v1)
    ctx->pc = 0x30def0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 3024), GPR_U64(ctx, 0));
    // 0x30def4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30def4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30def8: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x30def8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x30defc: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x30defcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x30df00: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x30df00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x30df04: 0x24620bf0  addiu       $v0, $v1, 0xBF0
    ctx->pc = 0x30df04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3056));
    // 0x30df08: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30df08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30df0c: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x30df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x30df10: 0x24620c00  addiu       $v0, $v1, 0xC00
    ctx->pc = 0x30df10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x30df14: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30df14u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30df18: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x30df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x30df1c: 0x4a1fff2  bgez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x30DF1Cu;
    {
        const bool branch_taken_0x30df1c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF1Cu;
        // 0x30df20: 0xfc400008  sd          $zero, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df1c) {
            ctx->pc = 0x30DEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dee8;
        }
    }
    ctx->pc = 0x30DF24u;
    // 0x30df24: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x30df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30df28: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x30df28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30df2c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x30DF2Cu;
    {
        const bool branch_taken_0x30df2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DF2Cu;
        // 0x30df30: 0x248422c0  addiu       $a0, $a0, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30df2c) {
            ctx->pc = 0x30DEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dee0;
        }
    }
    ctx->pc = 0x30DF34u;
    // 0x30df34: 0x3e00008  jr          $ra
    ctx->pc = 0x30DF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DF3Cu;
    // 0x30df3c: 0x0  nop
    ctx->pc = 0x30df3cu;
    // NOP
    ctx->pc = 0x30df40u;
}
