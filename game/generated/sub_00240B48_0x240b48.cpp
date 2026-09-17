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

// Function: sub_00240B48
// Address: 0x240b48 - 0x240ba0
void sub_00240B48_0x240b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240B48_0x240b48");
#endif

    switch (ctx->pc) {
        case 0x240b70u: goto label_240b70;
        case 0x240b84u: goto label_240b84;
        default: break;
    }

    ctx->pc = 0x240b48u;

    // 0x240b48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240b4c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x240b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240b54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x240b58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x240b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b5c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x240b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x240b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240b64: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x240b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x240b68: 0xc0d2fed  jal         func_34BFB4
    ctx->pc = 0x240B68u;
    SET_GPR_U32(ctx, 31, 0x240B70u);
    ctx->pc = 0x240B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B68u;
    // 0x240b6c: 0x8c500094  lw          $s0, 0x94($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFB4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFB4u, 0x240B68u, 0x240B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B70u;
label_240b70:
    // 0x240b70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x240b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x240b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b7c: 0xc08fd44  jal         func_23F510
    ctx->pc = 0x240B7Cu;
    SET_GPR_U32(ctx, 31, 0x240B84u);
    ctx->pc = 0x240B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240B7Cu;
    // 0x240b80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F510u, 0x240B7Cu, 0x240B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240B84u;
label_240b84:
    // 0x240b84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x240b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240b88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240b88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240b8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240b8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240b90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240b90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240b94: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x240b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240b98: 0x3e00008  jr          $ra
    ctx->pc = 0x240B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B98u;
        // 0x240b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240BA0u;
}
