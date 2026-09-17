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

// Function: sub_00344B48
// Address: 0x344b48 - 0x344b90
void sub_00344B48_0x344b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344B48_0x344b48");
#endif

    switch (ctx->pc) {
        case 0x344b68u: goto label_344b68;
        case 0x344b7cu: goto label_344b7c;
        default: break;
    }

    ctx->pc = 0x344b48u;

    // 0x344b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344b4c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x344b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x344b50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344b54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344b60: 0xc0cb170  jal         func_32C5C0
    ctx->pc = 0x344B60u;
    SET_GPR_U32(ctx, 31, 0x344B68u);
    ctx->pc = 0x344B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B60u;
    // 0x344b64: 0x24440730  addiu       $a0, $v0, 0x730 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5C0u, 0x344B60u, 0x344B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B68u;
label_344b68:
    // 0x344b68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x344b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x344b6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x344b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b70: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344b70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344b74: 0xc042f56  jal         func_10BD58
    ctx->pc = 0x344B74u;
    SET_GPR_U32(ctx, 31, 0x344B7Cu);
    ctx->pc = 0x344B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B74u;
    // 0x344b78: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BD58u, 0x344B74u, 0x344B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B7Cu;
label_344b7c:
    // 0x344b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344b80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344b84: 0x3e00008  jr          $ra
    ctx->pc = 0x344B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B84u;
        // 0x344b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B8Cu;
    // 0x344b8c: 0x0  nop
    ctx->pc = 0x344b8cu;
    // NOP
    ctx->pc = 0x344b90u;
}
