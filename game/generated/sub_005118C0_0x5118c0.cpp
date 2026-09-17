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

// Function: sub_005118C0
// Address: 0x5118c0 - 0x511918
void sub_005118C0_0x5118c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005118C0_0x5118c0");
#endif

    ctx->pc = 0x5118c0u;

    // 0x5118c0: 0x24860120  addiu       $a2, $a0, 0x120
    ctx->pc = 0x5118c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x5118c4: 0x2488011c  addiu       $t0, $a0, 0x11C
    ctx->pc = 0x5118c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x5118c8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x5118c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5118cc: 0x2489011a  addiu       $t1, $a0, 0x11A
    ctx->pc = 0x5118ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 282));
    // 0x5118d0: 0x2487011e  addiu       $a3, $a0, 0x11E
    ctx->pc = 0x5118d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 286));
    // 0x5118d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x5118d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x5118d8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x5118d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5118dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x5118DCu;
    {
        const bool branch_taken_0x5118dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5118E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5118DCu;
        // 0x5118e0: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5118dc) {
            ctx->pc = 0x511904u;
            goto label_511904;
        }
    }
    ctx->pc = 0x5118E4u;
    // 0x5118e4: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x5118e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5118e8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x5118e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5118ec: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x5118ecu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x5118f0: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x5118f0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x5118f4: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x5118f4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x5118f8: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x5118f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5118fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x5118fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x511900: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x511900u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
label_511904:
    // 0x511904: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x511904u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x511908: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x511908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x51190c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x51190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x511910: 0x3e00008  jr          $ra
    ctx->pc = 0x511910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x511914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x511910u;
        // 0x511914: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x511910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x511918u;
}
