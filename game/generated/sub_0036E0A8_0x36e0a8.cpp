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

// Function: sub_0036E0A8
// Address: 0x36e0a8 - 0x36e148
void sub_0036E0A8_0x36e0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E0A8_0x36e0a8");
#endif

    switch (ctx->pc) {
        case 0x36e0b8u: goto label_36e0b8;
        case 0x36e114u: goto label_36e114;
        case 0x36e138u: goto label_36e138;
        default: break;
    }

    ctx->pc = 0x36e0a8u;

    // 0x36e0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e0ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e0b0: 0xc0b7e34  jal         func_2DF8D0
    ctx->pc = 0x36E0B0u;
    SET_GPR_U32(ctx, 31, 0x36E0B8u);
    ctx->pc = 0x36E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0B0u;
    // 0x36e0b4: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF8D0u, 0x36E0B0u, 0x36E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E0B8u;
label_36e0b8:
    // 0x36e0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0BCu;
        // 0x36e0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0C4u;
    // 0x36e0c4: 0x0  nop
    ctx->pc = 0x36e0c4u;
    // NOP
    // 0x36e0c8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x36e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0CCu;
        // 0x36e0d0: 0xa0400069  sb          $zero, 0x69($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0D4u;
    // 0x36e0d4: 0x0  nop
    ctx->pc = 0x36e0d4u;
    // NOP
    // 0x36e0d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x36e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e0dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0E0u;
        // 0x36e0e4: 0xa0620069  sb          $v0, 0x69($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 105), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0E8u;
    // 0x36e0e8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x36e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36e0ec: 0x90620051  lbu         $v0, 0x51($v1)
    ctx->pc = 0x36e0ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 81)));
    // 0x36e0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E0F0u;
        // 0x36e0f4: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E0F8u;
    // 0x36e0f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e0fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e100: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x36e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x36e104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e108: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36e108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36e10c: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x36E10Cu;
    SET_GPR_U32(ctx, 31, 0x36E114u);
    ctx->pc = 0x36E110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E10Cu;
    // 0x36e110: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x36E10Cu, 0x36E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E114u;
label_36e114:
    // 0x36e114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e118: 0x3e00008  jr          $ra
    ctx->pc = 0x36E118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E118u;
        // 0x36e11c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E120u;
    // 0x36e120: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36e120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36e124: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e128: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x36e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x36e12c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e130: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x36E130u;
    SET_GPR_U32(ctx, 31, 0x36E138u);
    ctx->pc = 0x36E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E130u;
    // 0x36e134: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x36E130u, 0x36E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E138u;
label_36e138:
    // 0x36e138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e13c: 0x3e00008  jr          $ra
    ctx->pc = 0x36E13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E13Cu;
        // 0x36e140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E144u;
    // 0x36e144: 0x0  nop
    ctx->pc = 0x36e144u;
    // NOP
    ctx->pc = 0x36e148u;
}
