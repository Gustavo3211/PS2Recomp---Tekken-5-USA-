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

// Function: sub_00118A10
// Address: 0x118a10 - 0x118a80
void sub_00118A10_0x118a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118A10_0x118a10");
#endif

    switch (ctx->pc) {
        case 0x118a4cu: goto label_118a4c;
        case 0x118a5cu: goto label_118a5c;
        default: break;
    }

    ctx->pc = 0x118a10u;

    // 0x118a10: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x118a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x118a14: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x118a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x118a18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x118a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x118a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x118a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x118a20: 0x2442e4a0  addiu       $v0, $v0, -0x1B60
    ctx->pc = 0x118a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960288));
    // 0x118a24: 0x24a5e4b0  addiu       $a1, $a1, -0x1B50
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960304));
    // 0x118a28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x118a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x118a2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x118a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118a30: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x118a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x118a34: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x118a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x118a38: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x118a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x118a3c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x118a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x118a40: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x118a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x118a44: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x118A44u;
    SET_GPR_U32(ctx, 31, 0x118A4Cu);
    ctx->pc = 0x118A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A44u;
    // 0x118a48: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x118A44u, 0x118A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A4Cu;
label_118a4c:
    // 0x118a4c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x118a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x118a50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x118a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x118a54: 0xc043ce8  jal         func_10F3A0
    ctx->pc = 0x118A54u;
    SET_GPR_U32(ctx, 31, 0x118A5Cu);
    ctx->pc = 0x118A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118A54u;
    // 0x118a58: 0xac6211d0  sw          $v0, 0x11D0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3A0u, 0x118A54u, 0x118A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118A5Cu;
label_118a5c:
    // 0x118a5c: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x118a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x118a60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x118a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118a64: 0xac6211d4  sw          $v0, 0x11D4($v1)
    ctx->pc = 0x118a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1311D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1311D4u, _value); } while (0);
    // 0x118a68: 0x3e00008  jr          $ra
    ctx->pc = 0x118A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A68u;
        // 0x118a6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A70u;
    // 0x118a70: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x118a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x118a74: 0x3e00008  jr          $ra
    ctx->pc = 0x118A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118A74u;
        // 0x118a78: 0x8c6211d4  lw          $v0, 0x11D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4564)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118A7Cu;
    // 0x118a7c: 0x0  nop
    ctx->pc = 0x118a7cu;
    // NOP
    ctx->pc = 0x118a80u;
}
