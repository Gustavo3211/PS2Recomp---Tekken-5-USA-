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

// Function: sub_00360328
// Address: 0x360328 - 0x360358
void sub_00360328_0x360328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360328_0x360328");
#endif

    ctx->pc = 0x360328u;

    // 0x360328: 0x9782c7ec  lhu         $v0, -0x3814($gp)
    ctx->pc = 0x360328u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294952940)));
    // 0x36032c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x36032cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x360330: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x360330u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x360334: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x360334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x360338: 0x32380  sll         $a0, $v1, 14
    ctx->pc = 0x360338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x36033c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x36033cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x360340: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x360340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x360344: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x360344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x360348: 0xa782c7ec  sh          $v0, -0x3814($gp)
    ctx->pc = 0x360348u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294952940), (uint16_t)GPR_U32(ctx, 2));
    // 0x36034c: 0x3e00008  jr          $ra
    ctx->pc = 0x36034Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36034Cu;
        // 0x360350: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36034Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360354u;
    // 0x360354: 0x0  nop
    ctx->pc = 0x360354u;
    // NOP
    ctx->pc = 0x360358u;
}
