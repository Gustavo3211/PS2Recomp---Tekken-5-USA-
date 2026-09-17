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

// Function: sub_00291978
// Address: 0x291978 - 0x2919c8
void sub_00291978_0x291978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291978_0x291978");
#endif

    switch (ctx->pc) {
        case 0x291990u: goto label_291990;
        case 0x291998u: goto label_291998;
        case 0x2919a0u: goto label_2919a0;
        case 0x2919a8u: goto label_2919a8;
        case 0x2919b4u: goto label_2919b4;
        default: break;
    }

    ctx->pc = 0x291978u;

    // 0x291978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29197c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29197cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x291980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291984: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x291984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x291988: 0xc08b882  jal         func_22E208
    ctx->pc = 0x291988u;
    SET_GPR_U32(ctx, 31, 0x291990u);
    ctx->pc = 0x29198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291988u;
    // 0x29198c: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x291988u, 0x291990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291990u;
label_291990:
    // 0x291990: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x291990u;
    SET_GPR_U32(ctx, 31, 0x291998u);
    ctx->pc = 0x291994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291990u;
    // 0x291994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x291990u, 0x291998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291998u;
label_291998:
    // 0x291998: 0xc0a3c18  jal         func_28F060
    ctx->pc = 0x291998u;
    SET_GPR_U32(ctx, 31, 0x2919A0u);
    ctx->pc = 0x29199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291998u;
    // 0x29199c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F060u, 0x291998u, 0x2919A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919A0u;
label_2919a0:
    // 0x2919a0: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2919A0u;
    SET_GPR_U32(ctx, 31, 0x2919A8u);
    ctx->pc = 0x2919A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919A0u;
    // 0x2919a4: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2919A0u, 0x2919A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919A8u;
label_2919a8:
    // 0x2919a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2919a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2919ac: 0xc0a59fc  jal         func_2967F0
    ctx->pc = 0x2919ACu;
    SET_GPR_U32(ctx, 31, 0x2919B4u);
    ctx->pc = 0x2919B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2919ACu;
    // 0x2919b0: 0x2484bf20  addiu       $a0, $a0, -0x40E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2967F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2967F0u, 0x2919ACu, 0x2919B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2919B4u;
label_2919b4:
    // 0x2919b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2919b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2919b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2919b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2919bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2919BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2919C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2919BCu;
        // 0x2919c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2919BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2919C4u;
    // 0x2919c4: 0x0  nop
    ctx->pc = 0x2919c4u;
    // NOP
    ctx->pc = 0x2919c8u;
}
