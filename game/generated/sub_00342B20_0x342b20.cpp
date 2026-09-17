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

// Function: sub_00342B20
// Address: 0x342b20 - 0x342b80
void sub_00342B20_0x342b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342B20_0x342b20");
#endif

    switch (ctx->pc) {
        case 0x342b34u: goto label_342b34;
        case 0x342b3cu: goto label_342b3c;
        case 0x342b44u: goto label_342b44;
        case 0x342b4cu: goto label_342b4c;
        case 0x342b54u: goto label_342b54;
        case 0x342b5cu: goto label_342b5c;
        case 0x342b64u: goto label_342b64;
        case 0x342b6cu: goto label_342b6c;
        default: break;
    }

    ctx->pc = 0x342b20u;

    // 0x342b20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342b24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342b28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342b2c: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342B2Cu;
    SET_GPR_U32(ctx, 31, 0x342B34u);
    ctx->pc = 0x342B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B2Cu;
    // 0x342b30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342B2Cu, 0x342B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B34u;
label_342b34:
    // 0x342b34: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342B34u;
    SET_GPR_U32(ctx, 31, 0x342B3Cu);
    ctx->pc = 0x342B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B34u;
    // 0x342b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342B34u, 0x342B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B3Cu;
label_342b3c:
    // 0x342b3c: 0xc0d094c  jal         func_342530
    ctx->pc = 0x342B3Cu;
    SET_GPR_U32(ctx, 31, 0x342B44u);
    ctx->pc = 0x342B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B3Cu;
    // 0x342b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x342B3Cu, 0x342B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B44u;
label_342b44:
    // 0x342b44: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342B44u;
    SET_GPR_U32(ctx, 31, 0x342B4Cu);
    ctx->pc = 0x342B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B44u;
    // 0x342b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342B44u, 0x342B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B4Cu;
label_342b4c:
    // 0x342b4c: 0xc0d0964  jal         func_342590
    ctx->pc = 0x342B4Cu;
    SET_GPR_U32(ctx, 31, 0x342B54u);
    ctx->pc = 0x342B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B4Cu;
    // 0x342b50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x342B4Cu, 0x342B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B54u;
label_342b54:
    // 0x342b54: 0xc0d0970  jal         func_3425C0
    ctx->pc = 0x342B54u;
    SET_GPR_U32(ctx, 31, 0x342B5Cu);
    ctx->pc = 0x342B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B54u;
    // 0x342b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x342B54u, 0x342B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B5Cu;
label_342b5c:
    // 0x342b5c: 0xc0d09ac  jal         func_3426B0
    ctx->pc = 0x342B5Cu;
    SET_GPR_U32(ctx, 31, 0x342B64u);
    ctx->pc = 0x342B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B5Cu;
    // 0x342b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3426B0u, 0x342B5Cu, 0x342B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B64u;
label_342b64:
    // 0x342b64: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342B64u;
    SET_GPR_U32(ctx, 31, 0x342B6Cu);
    ctx->pc = 0x342B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B64u;
    // 0x342b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342B64u, 0x342B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B6Cu;
label_342b6c:
    // 0x342b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342b70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342b74: 0x3e00008  jr          $ra
    ctx->pc = 0x342B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B74u;
        // 0x342b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342B7Cu;
    // 0x342b7c: 0x0  nop
    ctx->pc = 0x342b7cu;
    // NOP
    ctx->pc = 0x342b80u;
}
