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

// Function: sub_00375070
// Address: 0x375070 - 0x375120
void sub_00375070_0x375070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375070_0x375070");
#endif

    switch (ctx->pc) {
        case 0x375070u: goto label_375070;
        case 0x375074u: goto label_375074;
        case 0x375078u: goto label_375078;
        case 0x37507cu: goto label_37507c;
        case 0x375080u: goto label_375080;
        case 0x375084u: goto label_375084;
        case 0x375088u: goto label_375088;
        case 0x37508cu: goto label_37508c;
        case 0x375090u: goto label_375090;
        case 0x375094u: goto label_375094;
        case 0x375098u: goto label_375098;
        case 0x37509cu: goto label_37509c;
        case 0x3750a0u: goto label_3750a0;
        case 0x3750a4u: goto label_3750a4;
        case 0x3750a8u: goto label_3750a8;
        case 0x3750acu: goto label_3750ac;
        case 0x3750b0u: goto label_3750b0;
        case 0x3750b4u: goto label_3750b4;
        case 0x3750b8u: goto label_3750b8;
        case 0x3750bcu: goto label_3750bc;
        case 0x3750c0u: goto label_3750c0;
        case 0x3750c4u: goto label_3750c4;
        case 0x3750c8u: goto label_3750c8;
        case 0x3750ccu: goto label_3750cc;
        case 0x3750d0u: goto label_3750d0;
        case 0x3750d4u: goto label_3750d4;
        case 0x3750d8u: goto label_3750d8;
        case 0x3750dcu: goto label_3750dc;
        case 0x3750e0u: goto label_3750e0;
        case 0x3750e4u: goto label_3750e4;
        case 0x3750e8u: goto label_3750e8;
        case 0x3750ecu: goto label_3750ec;
        case 0x3750f0u: goto label_3750f0;
        case 0x3750f4u: goto label_3750f4;
        case 0x3750f8u: goto label_3750f8;
        case 0x3750fcu: goto label_3750fc;
        case 0x375100u: goto label_375100;
        case 0x375104u: goto label_375104;
        case 0x375108u: goto label_375108;
        case 0x37510cu: goto label_37510c;
        case 0x375110u: goto label_375110;
        case 0x375114u: goto label_375114;
        case 0x375118u: goto label_375118;
        case 0x37511cu: goto label_37511c;
        default: break;
    }

    ctx->pc = 0x375070u;

label_375070:
    // 0x375070: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_375074:
    // 0x375074: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x375074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_375078:
    // 0x375078: 0x3e00008  jr          $ra
label_37507c:
    if (ctx->pc == 0x37507Cu) {
        ctx->pc = 0x37507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375078u;
        // 0x37507c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375080u;
        goto label_375080;
    }
    ctx->pc = 0x375078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375078u;
        // 0x37507c: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375080u;
label_375080:
    // 0x375080: 0x3e00008  jr          $ra
label_375084:
    if (ctx->pc == 0x375084u) {
        ctx->pc = 0x375088u;
        goto label_375088;
    }
    ctx->pc = 0x375080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375088u;
label_375088:
    // 0x375088: 0x3e00008  jr          $ra
label_37508c:
    if (ctx->pc == 0x37508Cu) {
        ctx->pc = 0x375090u;
        goto label_375090;
    }
    ctx->pc = 0x375088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375090u;
label_375090:
    // 0x375090: 0x3e00008  jr          $ra
label_375094:
    if (ctx->pc == 0x375094u) {
        ctx->pc = 0x375098u;
        goto label_375098;
    }
    ctx->pc = 0x375090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375098u;
label_375098:
    // 0x375098: 0x3e00008  jr          $ra
label_37509c:
    if (ctx->pc == 0x37509Cu) {
        ctx->pc = 0x37509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375098u;
        // 0x37509c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3750A0u;
        goto label_3750a0;
    }
    ctx->pc = 0x375098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375098u;
        // 0x37509c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3750A0u;
label_3750a0:
    // 0x3750a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3750a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3750a4:
    // 0x3750a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3750a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3750a8:
    // 0x3750a8: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3750a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_3750ac:
    // 0x3750ac: 0x2610f180  addiu       $s0, $s0, -0xE80
    ctx->pc = 0x3750acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963584));
label_3750b0:
    // 0x3750b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3750b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3750b4:
    // 0x3750b4: 0xc0d0b24  jal         func_342C90
label_3750b8:
    if (ctx->pc == 0x3750B8u) {
        ctx->pc = 0x3750B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750B4u;
        // 0x3750b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3750BCu;
        goto label_3750bc;
    }
    ctx->pc = 0x3750B4u;
    SET_GPR_U32(ctx, 31, 0x3750BCu);
    ctx->pc = 0x3750B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3750B4u;
    // 0x3750b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3750B4u, 0x3750BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3750BCu;
label_3750bc:
    // 0x3750bc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3750bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_3750c0:
    // 0x3750c0: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x3750c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
label_3750c4:
    // 0x3750c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3750c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3750c8:
    // 0x3750c8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3750c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_3750cc:
    // 0x3750cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3750ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3750d0:
    // 0x3750d0: 0x3e00008  jr          $ra
label_3750d4:
    if (ctx->pc == 0x3750D4u) {
        ctx->pc = 0x3750D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750D0u;
        // 0x3750d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3750D8u;
        goto label_3750d8;
    }
    ctx->pc = 0x3750D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3750D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750D0u;
        // 0x3750d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3750D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3750D8u;
label_3750d8:
    // 0x3750d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3750d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3750dc:
    // 0x3750dc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3750dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3750e0:
    // 0x3750e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3750e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3750e4:
    // 0x3750e4: 0x2484f180  addiu       $a0, $a0, -0xE80
    ctx->pc = 0x3750e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963584));
label_3750e8:
    // 0x3750e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3750e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3750ec:
    // 0x3750ec: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3750ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3750f0:
    // 0x3750f0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3750f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3750f4:
    // 0x3750f4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3750f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3750f8:
    // 0x3750f8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3750f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3750fc:
    // 0x3750fc: 0xc0f809  jalr        $a2
label_375100:
    if (ctx->pc == 0x375100u) {
        ctx->pc = 0x375100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750FCu;
        // 0x375100: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375104u;
        goto label_375104;
    }
    ctx->pc = 0x3750FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x375104u);
        ctx->pc = 0x375100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3750FCu;
        // 0x375100: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3750FCu, 0x375104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x375104u;
label_375104:
    // 0x375104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375108:
    // 0x375108: 0x3e00008  jr          $ra
label_37510c:
    if (ctx->pc == 0x37510Cu) {
        ctx->pc = 0x37510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375108u;
        // 0x37510c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375110u;
        goto label_375110;
    }
    ctx->pc = 0x375108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375108u;
        // 0x37510c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375110u;
label_375110:
    // 0x375110: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x375110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_375114:
    // 0x375114: 0x3e00008  jr          $ra
label_375118:
    if (ctx->pc == 0x375118u) {
        ctx->pc = 0x375118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375114u;
        // 0x375118: 0x2442f180  addiu       $v0, $v0, -0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37511Cu;
        goto label_37511c;
    }
    ctx->pc = 0x375114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375114u;
        // 0x375118: 0x2442f180  addiu       $v0, $v0, -0xE80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37511Cu;
label_37511c:
    // 0x37511c: 0x0  nop
    ctx->pc = 0x37511cu;
    // NOP
    ctx->pc = 0x375120u;
}
