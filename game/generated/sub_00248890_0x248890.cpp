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

// Function: sub_00248890
// Address: 0x248890 - 0x2488d0
void sub_00248890_0x248890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248890_0x248890");
#endif

    ctx->pc = 0x248890u;

    // 0x248890: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x248890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x248894: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x248894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x248898: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x248898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24889c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x24889cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2488a0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2488a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2488a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2488a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2488a8: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x2488a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x2488ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2488acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2488b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2488b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2488b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2488b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2488b8: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2488b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2488bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2488bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2488c0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2488c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2488c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2488C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2488C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488C4u;
        // 0x2488c8: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2488C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2488CCu;
    // 0x2488cc: 0x0  nop
    ctx->pc = 0x2488ccu;
    // NOP
    ctx->pc = 0x2488d0u;
}
