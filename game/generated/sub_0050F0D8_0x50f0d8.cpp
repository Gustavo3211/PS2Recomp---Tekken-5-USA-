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

// Function: sub_0050F0D8
// Address: 0x50f0d8 - 0x50f198
void sub_0050F0D8_0x50f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050F0D8_0x50f0d8");
#endif

    switch (ctx->pc) {
        case 0x50f0e0u: goto label_50f0e0;
        case 0x50f0e4u: goto label_50f0e4;
        case 0x50f0f0u: goto label_50f0f0;
        case 0x50f110u: goto label_50f110;
        case 0x50f120u: goto label_50f120;
        case 0x50f130u: goto label_50f130;
        case 0x50f178u: goto label_50f178;
        case 0x50f180u: goto label_50f180;
        case 0x50f188u: goto label_50f188;
        case 0x50f190u: goto label_50f190;
        default: break;
    }

    ctx->pc = 0x50f0d8u;

    // 0x50f0d8: 0xc142948  jal         func_50A520
    ctx->pc = 0x50F0D8u;
    SET_GPR_U32(ctx, 31, 0x50F0E0u);
    ctx->pc = 0x50A520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50A520u, 0x50F0D8u, 0x50F0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F0E0u;
label_50f0e0:
    // 0x50f0e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_50f0e4:
    // 0x50f0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x50F0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50F0E4u;
        // 0x50f0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F0ECu;
    // 0x50f0ec: 0x0  nop
    ctx->pc = 0x50f0ecu;
    // NOP
label_50f0f0:
    // 0x50f0f0: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50f0f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50f0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50f0f8: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x50f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50f0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50f100: 0xa4404e3e  sh          $zero, 0x4E3E($v0)
    ctx->pc = 0x50f100u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903EBEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EBEu, _value); } while (0);
    // 0x50f104: 0xa4404e32  sh          $zero, 0x4E32($v0)
    ctx->pc = 0x50f104u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x903EB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903EB2u, _value); } while (0);
    // 0x50f108: 0xc144ab8  jal         func_512AE0
    ctx->pc = 0x50F108u;
    SET_GPR_U32(ctx, 31, 0x50F110u);
    ctx->pc = 0x50F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F108u;
    // 0x50f10c: 0xa4404e38  sh          $zero, 0x4E38($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 20024), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AE0u, 0x50F108u, 0x50F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F110u;
label_50f110:
    // 0x50f110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f114: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x50f114u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x50f118: 0x8142ff0  j           func_50BFC0
    ctx->pc = 0x50F118u;
    ctx->pc = 0x50F11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F118u;
    // 0x50f11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50BFC0u, 0x50F118u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50F120u;
label_50f120:
    // 0x50f120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50f124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50f128: 0xc13e3ec  jal         func_4F8FB0
    ctx->pc = 0x50F128u;
    SET_GPR_U32(ctx, 31, 0x50F130u);
    ctx->pc = 0x4F8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F8FB0u, 0x50F128u, 0x50F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50F130u;
label_50f130:
    // 0x50f130: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x50f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50f134: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x50f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x50f138: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50f138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50f13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50f140: 0x2484f080  addiu       $a0, $a0, -0xF80
    ctx->pc = 0x50f140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50f144: 0x2406f00f  addiu       $a2, $zero, -0xFF1
    ctx->pc = 0x50f144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x50f148: 0xac834de8  sw          $v1, 0x4DE8($a0)
    ctx->pc = 0x50f148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903E68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903E68u, _value); } while (0);
    // 0x50f14c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x50f14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50f150: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x50f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x50f154: 0xac854dec  sw          $a1, 0x4DEC($a0)
    ctx->pc = 0x50f154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x903E6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903E6Cu, _value); } while (0);
    // 0x50f158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x50f158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50f15c: 0xac834df0  sw          $v1, 0x4DF0($a0)
    ctx->pc = 0x50f15cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x903E70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903E70u, _value); } while (0);
    // 0x50f160: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x50f160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x50f164: 0xa4864e04  sh          $a2, 0x4E04($a0)
    ctx->pc = 0x50f164u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x903E84u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x903E84u, _value); } while (0);
    // 0x50f168: 0xac854df4  sw          $a1, 0x4DF4($a0)
    ctx->pc = 0x50f168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x903E74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x903E74u, _value); } while (0);
    // 0x50f16c: 0x8143c3c  j           func_50F0F0
    ctx->pc = 0x50F16Cu;
    ctx->pc = 0x50F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50F16Cu;
    // 0x50f170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50F0F0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_50f0f0;
    ctx->pc = 0x50F174u;
    // 0x50f174: 0x0  nop
    ctx->pc = 0x50f174u;
    // NOP
label_50f178:
    // 0x50f178: 0x3e00008  jr          $ra
    ctx->pc = 0x50F178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F180u;
label_50f180:
    // 0x50f180: 0x3e00008  jr          $ra
    ctx->pc = 0x50F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F188u;
label_50f188:
    // 0x50f188: 0x3e00008  jr          $ra
    ctx->pc = 0x50F188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F190u;
label_50f190:
    // 0x50f190: 0x3e00008  jr          $ra
    ctx->pc = 0x50F190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50F190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50F198u;
}
