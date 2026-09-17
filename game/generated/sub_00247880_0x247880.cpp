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

// Function: sub_00247880
// Address: 0x247880 - 0x2478b0
void sub_00247880_0x247880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247880_0x247880");
#endif

    ctx->pc = 0x247880u;

    // 0x247880: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x247880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x247884: 0x2c85001e  sltiu       $a1, $a0, 0x1E
    ctx->pc = 0x247884u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x247888: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x247888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24788c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24788Cu;
    {
        const bool branch_taken_0x24788c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x247890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24788Cu;
        // 0x247890: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24788c) {
            ctx->pc = 0x2478A4u;
            goto label_2478a4;
        }
    }
    ctx->pc = 0x247894u;
    // 0x247894: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x247894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x247898: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x247898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x24789c: 0x2421f5c0  addiu       $at, $at, -0xA40
    ctx->pc = 0x24789cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294964672));
    // 0x2478a0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x2478a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2478a4:
    // 0x2478a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2478A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2478A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2478ACu;
    // 0x2478ac: 0x0  nop
    ctx->pc = 0x2478acu;
    // NOP
    ctx->pc = 0x2478b0u;
}
