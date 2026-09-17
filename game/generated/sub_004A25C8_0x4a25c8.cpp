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

// Function: sub_004A25C8
// Address: 0x4a25c8 - 0x4a2620
void sub_004A25C8_0x4a25c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A25C8_0x4a25c8");
#endif

    ctx->pc = 0x4a25c8u;

    // 0x4a25c8: 0x24850124  addiu       $a1, $a0, 0x124
    ctx->pc = 0x4a25c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4a25cc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a25ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a25d0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a25d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a25d4: 0x24870138  addiu       $a3, $a0, 0x138
    ctx->pc = 0x4a25d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
    // 0x4a25d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a25dc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x4a25dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4a25e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a25e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a25e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a25e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a25ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a25ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a25f0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x4a25f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a25f4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a25f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a25f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A25F8u;
    {
        const bool branch_taken_0x4a25f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A25F8u;
        // 0x4a25fc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a25f8) {
            ctx->pc = 0x4A2618u;
            goto label_4a2618;
        }
    }
    ctx->pc = 0x4A2600u;
    // 0x4a2600: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a2600u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2604: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a2608: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4a2608u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a260c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a260cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a2610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a2614: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4a2614u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_4a2618:
    // 0x4a2618: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2620u;
}
