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

// Function: sub_005056B8
// Address: 0x5056b8 - 0x505750
void sub_005056B8_0x5056b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005056B8_0x5056b8");
#endif

    ctx->pc = 0x5056b8u;

    // 0x5056b8: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x5056b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x5056bc: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x5056bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x5056c0: 0x24e7c52c  addiu       $a3, $a3, -0x3AD4
    ctx->pc = 0x5056c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952236));
    // 0x5056c4: 0x254ac544  addiu       $t2, $t2, -0x3ABC
    ctx->pc = 0x5056c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952260));
    // 0x5056c8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x5056c8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x5056cc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x5056ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x5056d0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x5056d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC544u));
    // 0x5056d4: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5056d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5056d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x5056d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5056dc: 0x24a5c540  addiu       $a1, $a1, -0x3AC0
    ctx->pc = 0x5056dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952256));
    // 0x5056e0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x5056e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x5056e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x5056e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC540u));
    // 0x5056e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5056e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5056ec: 0x24c80002  addiu       $t0, $a2, 0x2
    ctx->pc = 0x5056ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x5056f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x5056f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5056f4: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x5056f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x5056f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5056f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x5056fc: 0x24cb0004  addiu       $t3, $a2, 0x4
    ctx->pc = 0x5056fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x505700: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x505700u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x505704: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x505704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x505708: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x505708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50570c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50570cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x505710: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x505710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x505714: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x505714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505718: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x505718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x50571c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50571cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x505720: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x505720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x505724: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x505724u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x505728: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x505728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x50572c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50572cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505730: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x505730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x505734: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x505734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x505738: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x505738u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x50573c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x50573cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x505740: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x505740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x505744: 0x3e00008  jr          $ra
    ctx->pc = 0x505744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505744u;
        // 0x505748: 0xad440000  sw          $a0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50574Cu;
    // 0x50574c: 0x0  nop
    ctx->pc = 0x50574cu;
    // NOP
    ctx->pc = 0x505750u;
}
