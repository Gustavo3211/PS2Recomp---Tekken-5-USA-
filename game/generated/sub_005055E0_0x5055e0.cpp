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

// Function: sub_005055E0
// Address: 0x5055e0 - 0x505628
void sub_005055E0_0x5055e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005055E0_0x5055e0");
#endif

    ctx->pc = 0x5055e0u;

    // 0x5055e0: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5055e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5055e4: 0x9066c534  lbu         $a2, -0x3ACC($v1)
    ctx->pc = 0x5055e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8EC534u));
    // 0x5055e8: 0x611fa  dsrl        $v0, $a2, 7
    ctx->pc = 0x5055e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) >> 7);
    // 0x5055ec: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x5055ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x5055f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5055F0u;
    {
        const bool branch_taken_0x5055f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5055F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5055F0u;
        // 0x5055f4: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5055f0) {
            ctx->pc = 0x505600u;
            goto label_505600;
        }
    }
    ctx->pc = 0x5055F8u;
    // 0x5055f8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x5055f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x5055fc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x5055fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_505600:
    // 0x505600: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x505600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x505604: 0x2484c540  addiu       $a0, $a0, -0x3AC0
    ctx->pc = 0x505604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952256));
    // 0x505608: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x505608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50560c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x50560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x505610: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x505610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x505614: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x505614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x505618: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x505618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50561c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50561cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505620: 0x3e00008  jr          $ra
    ctx->pc = 0x505620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505620u;
        // 0x505624: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505628u;
}
