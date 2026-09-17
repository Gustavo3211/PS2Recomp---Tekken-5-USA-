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

// Function: sub_0036A148
// Address: 0x36a148 - 0x36a1c0
void sub_0036A148_0x36a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A148_0x36a148");
#endif

    switch (ctx->pc) {
        case 0x36a16cu: goto label_36a16c;
        case 0x36a184u: goto label_36a184;
        default: break;
    }

    ctx->pc = 0x36a148u;

    // 0x36a148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a14c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a154: 0x24506ca8  addiu       $s0, $v0, 0x6CA8
    ctx->pc = 0x36a154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27816));
    // 0x36a158: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6CA8u));
    // 0x36a15c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A15Cu;
    {
        const bool branch_taken_0x36a15c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A15Cu;
        // 0x36a160: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a15c) {
            ctx->pc = 0x36A184u;
            goto label_36a184;
        }
    }
    ctx->pc = 0x36A164u;
    // 0x36a164: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36A164u;
    SET_GPR_U32(ctx, 31, 0x36A16Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36A164u, 0x36A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A16Cu;
label_36a16c:
    // 0x36a16c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a170: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36a170u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36a174: 0x24a50678  addiu       $a1, $a1, 0x678
    ctx->pc = 0x36a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1656));
    // 0x36a178: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36a17c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A17Cu;
    SET_GPR_U32(ctx, 31, 0x36A184u);
    ctx->pc = 0x36A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A17Cu;
    // 0x36a180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A17Cu, 0x36A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A184u;
label_36a184:
    // 0x36a184: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a18c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a190: 0x3e00008  jr          $ra
    ctx->pc = 0x36A190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A190u;
        // 0x36a194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A198u;
    // 0x36a198: 0x3e00008  jr          $ra
    ctx->pc = 0x36A198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A198u;
        // 0x36a19c: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1A0u;
    // 0x36a1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1A0u;
        // 0x36a1a4: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1A8u;
    // 0x36a1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1A8u;
        // 0x36a1ac: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1B0u;
    // 0x36a1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1B0u;
        // 0x36a1b4: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1B8u;
    // 0x36a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A1B8u;
        // 0x36a1bc: 0xac850070  sw          $a1, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A1C0u;
}
