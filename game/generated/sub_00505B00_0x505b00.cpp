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

// Function: sub_00505B00
// Address: 0x505b00 - 0x505b68
void sub_00505B00_0x505b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505B00_0x505b00");
#endif

    switch (ctx->pc) {
        case 0x505b28u: goto label_505b28;
        default: break;
    }

    ctx->pc = 0x505b00u;

    // 0x505b00: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x505b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x505b04: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x505b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x505b08: 0x2463c550  addiu       $v1, $v1, -0x3AB0
    ctx->pc = 0x505b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952272));
    // 0x505b0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x505b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC550u));
    // 0x505b10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x505b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x505b14: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x505b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x505b18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x505b18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC550u, _value); } while (0);
    // 0x505b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x505B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505B1Cu;
        // 0x505b20: 0xaca4c52c  sw          $a0, -0x3AD4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294952236), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505B24u;
    // 0x505b24: 0x0  nop
    ctx->pc = 0x505b24u;
    // NOP
label_505b28:
    // 0x505b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x505b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x505b2c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x505b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x505b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x505b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x505b34: 0x2484c534  addiu       $a0, $a0, -0x3ACC
    ctx->pc = 0x505b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952244));
    // 0x505b38: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x505b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x505b3c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x505b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC534u));
    // 0x505b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x505b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x505b44: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x505b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x505b48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x505b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x505b4c: 0x2442001a  addiu       $v0, $v0, 0x1A
    ctx->pc = 0x505b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26));
    // 0x505b50: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x505b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x505b54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x505b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x505b58: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x505b58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x505b5c: 0x8141794  j           func_505E50
    ctx->pc = 0x505B5Cu;
    ctx->pc = 0x505B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x505B5Cu;
    // 0x505b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505E50u, 0x505B5Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x505B64u;
    // 0x505b64: 0x0  nop
    ctx->pc = 0x505b64u;
    // NOP
    ctx->pc = 0x505b68u;
}
