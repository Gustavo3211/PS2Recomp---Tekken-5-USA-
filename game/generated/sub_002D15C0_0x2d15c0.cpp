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

// Function: sub_002D15C0
// Address: 0x2d15c0 - 0x2d1618
void sub_002D15C0_0x2d15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D15C0_0x2d15c0");
#endif

    switch (ctx->pc) {
        case 0x2d15d8u: goto label_2d15d8;
        default: break;
    }

    ctx->pc = 0x2d15c0u;

    // 0x2d15c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2d15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2d15c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d15c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15c8: 0x8c43f650  lw          $v1, -0x9B0($v0)
    ctx->pc = 0x2d15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF650u));
    // 0x2d15cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d15ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d15d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d15d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d15d4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2d15d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_2d15d8:
    // 0x2d15d8: 0x851016  dsrlv       $v0, $a1, $a0
    ctx->pc = 0x2d15d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x2d15dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d15dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d15e0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2d15e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2d15e4: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x2d15e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2d15e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d15e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d15ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2d15ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2d15f0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D15F0u;
    {
        const bool branch_taken_0x2d15f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D15F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15F0u;
        // 0x2d15f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15f0) {
            ctx->pc = 0x2D15D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d15d8;
        }
    }
    ctx->pc = 0x2D15F8u;
    // 0x2d15f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2d15f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x2d15fc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2d15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d1600: 0x8ca3f604  lw          $v1, -0x9FC($a1)
    ctx->pc = 0x2d1600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF604u));
    // 0x2d1604: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d1604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d1608: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2d1608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d160c: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x2d160cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d1610: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1610u;
        // 0x2d1614: 0xc3100b  movn        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1618u;
}
