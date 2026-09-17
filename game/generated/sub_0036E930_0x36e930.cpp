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

// Function: sub_0036E930
// Address: 0x36e930 - 0x36e9c0
void sub_0036E930_0x36e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E930_0x36e930");
#endif

    switch (ctx->pc) {
        case 0x36e954u: goto label_36e954;
        case 0x36e96cu: goto label_36e96c;
        default: break;
    }

    ctx->pc = 0x36e930u;

    // 0x36e930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e934: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e938: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e93c: 0x24507270  addiu       $s0, $v0, 0x7270
    ctx->pc = 0x36e93cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29296));
    // 0x36e940: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7270u));
    // 0x36e944: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E944u;
    {
        const bool branch_taken_0x36e944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E944u;
        // 0x36e948: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e944) {
            ctx->pc = 0x36E96Cu;
            goto label_36e96c;
        }
    }
    ctx->pc = 0x36E94Cu;
    // 0x36e94c: 0xc0dbc5a  jal         func_36F168
    ctx->pc = 0x36E94Cu;
    SET_GPR_U32(ctx, 31, 0x36E954u);
    ctx->pc = 0x36F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F168u, 0x36E94Cu, 0x36E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E954u;
label_36e954:
    // 0x36e954: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e958: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36e958u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36e95c: 0x24a5fc60  addiu       $a1, $a1, -0x3A0
    ctx->pc = 0x36e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966368));
    // 0x36e960: 0x24c67250  addiu       $a2, $a2, 0x7250
    ctx->pc = 0x36e960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29264));
    // 0x36e964: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E964u;
    SET_GPR_U32(ctx, 31, 0x36E96Cu);
    ctx->pc = 0x36E968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E964u;
    // 0x36e968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E964u, 0x36E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E96Cu;
label_36e96c:
    // 0x36e96c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e96cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e978: 0x3e00008  jr          $ra
    ctx->pc = 0x36E978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E978u;
        // 0x36e97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E980u;
    // 0x36e980: 0x3e00008  jr          $ra
    ctx->pc = 0x36E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E980u;
        // 0x36e984: 0x8c820070  lw          $v0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E988u;
    // 0x36e988: 0x3e00008  jr          $ra
    ctx->pc = 0x36E988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E988u;
        // 0x36e98c: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E990u;
    // 0x36e990: 0x3e00008  jr          $ra
    ctx->pc = 0x36E990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E990u;
        // 0x36e994: 0x8c820074  lw          $v0, 0x74($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E998u;
    // 0x36e998: 0x3e00008  jr          $ra
    ctx->pc = 0x36E998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E998u;
        // 0x36e99c: 0x8c820078  lw          $v0, 0x78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E9A0u;
    // 0x36e9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9A0u;
        // 0x36e9a4: 0x8c82007c  lw          $v0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E9A8u;
    // 0x36e9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9A8u;
        // 0x36e9ac: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E9B0u;
    // 0x36e9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36E9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9B0u;
        // 0x36e9b4: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E9B8u;
    // 0x36e9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x36E9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E9B8u;
        // 0x36e9bc: 0x24820088  addiu       $v0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E9C0u;
}
