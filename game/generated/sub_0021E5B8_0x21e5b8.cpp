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

// Function: sub_0021E5B8
// Address: 0x21e5b8 - 0x21e600
void sub_0021E5B8_0x21e5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E5B8_0x21e5b8");
#endif

    ctx->pc = 0x21e5b8u;

    // 0x21e5b8: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x21e5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x21e5bc: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21E5BCu;
    {
        const bool branch_taken_0x21e5bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x21e5bc) {
            ctx->pc = 0x21E5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E5BCu;
            // 0x21e5c0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5F4u;
            goto label_21e5f4;
        }
    }
    ctx->pc = 0x21E5C4u;
    // 0x21e5c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e5c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x21e5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e5cc: 0x24468858  addiu       $a2, $v0, -0x77A8
    ctx->pc = 0x21e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21e5d0: 0xa71804  sllv        $v1, $a3, $a1
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x21e5d4: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x21e5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x21e5d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21e5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21e5dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E5DCu;
    {
        const bool branch_taken_0x21e5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5DCu;
        // 0x21e5e0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5dc) {
            ctx->pc = 0x21E5F4u;
            goto label_21e5f4;
        }
    }
    ctx->pc = 0x21E5E4u;
    // 0x21e5e4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x21e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21e5e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e5ec: 0x38420012  xori        $v0, $v0, 0x12
    ctx->pc = 0x21e5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)18);
    // 0x21e5f0: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x21e5f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_21e5f4:
    // 0x21e5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5F4u;
        // 0x21e5f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E5FCu;
    // 0x21e5fc: 0x0  nop
    ctx->pc = 0x21e5fcu;
    // NOP
    ctx->pc = 0x21e600u;
}
