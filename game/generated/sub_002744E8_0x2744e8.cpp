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

// Function: sub_002744E8
// Address: 0x2744e8 - 0x274530
void sub_002744E8_0x2744e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002744E8_0x2744e8");
#endif

    ctx->pc = 0x2744e8u;

    // 0x2744e8: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x2744e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x2744ec: 0x24070028  addiu       $a3, $zero, 0x28
    ctx->pc = 0x2744ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2744f0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2744f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x2744f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2744f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2744f8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2744f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2744fc: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x2744fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x274500: 0x8f85aa78  lw          $a1, -0x5588($gp)
    ctx->pc = 0x274500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274504: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x274504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x274508: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x274508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x27450c: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x27450cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x274510: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x274510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x274514: 0x8f84aa78  lw          $a0, -0x5588($gp)
    ctx->pc = 0x274514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274518: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x274518u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x27451c: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x27451cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x274520: 0x8f83aa78  lw          $v1, -0x5588($gp)
    ctx->pc = 0x274520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x274524: 0x3e00008  jr          $ra
    ctx->pc = 0x274524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274524u;
        // 0x274528: 0xac680064  sw          $t0, 0x64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27452Cu;
    // 0x27452c: 0x0  nop
    ctx->pc = 0x27452cu;
    // NOP
    ctx->pc = 0x274530u;
}
