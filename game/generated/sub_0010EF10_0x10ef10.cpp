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

// Function: sub_0010EF10
// Address: 0x10ef10 - 0x10eff0
void sub_0010EF10_0x10ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF10_0x10ef10");
#endif

    switch (ctx->pc) {
        case 0x10ef28u: goto label_10ef28;
        case 0x10ef30u: goto label_10ef30;
        case 0x10ef88u: goto label_10ef88;
        case 0x10ef98u: goto label_10ef98;
        case 0x10efa8u: goto label_10efa8;
        case 0x10efb8u: goto label_10efb8;
        case 0x10efc0u: goto label_10efc0;
        case 0x10efc8u: goto label_10efc8;
        case 0x10efd8u: goto label_10efd8;
        case 0x10efe0u: goto label_10efe0;
        case 0x10efe8u: goto label_10efe8;
        default: break;
    }

    ctx->pc = 0x10ef10u;

    // 0x10ef10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ef14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ef18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ef1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ef20: 0xc043a86  jal         func_10EA18
    ctx->pc = 0x10EF20u;
    SET_GPR_U32(ctx, 31, 0x10EF28u);
    ctx->pc = 0x10EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF20u;
    // 0x10ef24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA18u, 0x10EF20u, 0x10EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF28u;
label_10ef28:
    // 0x10ef28: 0xc043ab4  jal         func_10EAD0
    ctx->pc = 0x10EF28u;
    SET_GPR_U32(ctx, 31, 0x10EF30u);
    ctx->pc = 0x10EF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF28u;
    // 0x10ef2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAD0u, 0x10EF28u, 0x10EF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EF30u;
label_10ef30:
    // 0x10ef30: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x10ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x10ef34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef38: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x10ef38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10ef3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ef3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ef40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ef40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ef44: 0x2442fde4  addiu       $v0, $v0, -0x21C
    ctx->pc = 0x10ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966756));
    // 0x10ef48: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x10ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10ef4c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ef4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef50: 0x8043b9e  j           func_10EE78
    ctx->pc = 0x10EF50u;
    ctx->pc = 0x10EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF50u;
    // 0x10ef54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE78u, 0x10EF50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x10EF58u;
    // 0x10ef58: 0x0  nop
    ctx->pc = 0x10ef58u;
    // NOP
    // 0x10ef5c: 0x0  nop
    ctx->pc = 0x10ef5cu;
    // NOP
    // 0x10ef60: 0x0  nop
    ctx->pc = 0x10ef60u;
    // NOP
    // 0x10ef64: 0x0  nop
    ctx->pc = 0x10ef64u;
    // NOP
    // 0x10ef68: 0x0  nop
    ctx->pc = 0x10ef68u;
    // NOP
    // 0x10ef6c: 0x0  nop
    ctx->pc = 0x10ef6cu;
    // NOP
    // 0x10ef70: 0x0  nop
    ctx->pc = 0x10ef70u;
    // NOP
    // 0x10ef74: 0x0  nop
    ctx->pc = 0x10ef74u;
    // NOP
    // 0x10ef78: 0x0  nop
    ctx->pc = 0x10ef78u;
    // NOP
    // 0x10ef7c: 0x0  nop
    ctx->pc = 0x10ef7cu;
    // NOP
    // 0x10ef80: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x10ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x10ef84: 0xc  syscall     0
    ctx->pc = 0x10ef84u;
    ctx->pc = 0x10EF88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10ef88:
    // 0x10ef88: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EF90u;
    // 0x10ef90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ef94: 0xc  syscall     0
    ctx->pc = 0x10ef94u;
    ctx->pc = 0x10EF98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10ef98:
    // 0x10ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFA0u;
    // 0x10efa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10efa4: 0xc  syscall     0
    ctx->pc = 0x10efa4u;
    ctx->pc = 0x10EFA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10efa8:
    // 0x10efa8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFB0u;
    // 0x10efb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10efb4: 0xc  syscall     0
    ctx->pc = 0x10efb4u;
    ctx->pc = 0x10EFB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10efb8:
    // 0x10efb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFC0u;
label_10efc0:
    // 0x10efc0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10efc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10efc4: 0xc  syscall     0
    ctx->pc = 0x10efc4u;
    ctx->pc = 0x10EFC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10efc8:
    // 0x10efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFD0u;
    // 0x10efd0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10efd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10efd4: 0xc  syscall     0
    ctx->pc = 0x10efd4u;
    ctx->pc = 0x10EFD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10efd8:
    // 0x10efd8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFE0u;
label_10efe0:
    // 0x10efe0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10efe4: 0xc  syscall     0
    ctx->pc = 0x10efe4u;
    ctx->pc = 0x10EFE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_10efe8:
    // 0x10efe8: 0x3e00008  jr          $ra
    ctx->pc = 0x10EFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EFE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EFF0u;
}
