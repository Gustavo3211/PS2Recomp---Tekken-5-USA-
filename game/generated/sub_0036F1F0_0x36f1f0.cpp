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

// Function: sub_0036F1F0
// Address: 0x36f1f0 - 0x36f2a0
void sub_0036F1F0_0x36f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F1F0_0x36f1f0");
#endif

    switch (ctx->pc) {
        case 0x36f214u: goto label_36f214;
        case 0x36f22cu: goto label_36f22c;
        default: break;
    }

    ctx->pc = 0x36f1f0u;

    // 0x36f1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f1f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f1f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f1fc: 0x245072b0  addiu       $s0, $v0, 0x72B0
    ctx->pc = 0x36f1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29360));
    // 0x36f200: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D72B0u));
    // 0x36f204: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F204u;
    {
        const bool branch_taken_0x36f204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F204u;
        // 0x36f208: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f204) {
            ctx->pc = 0x36F22Cu;
            goto label_36f22c;
        }
    }
    ctx->pc = 0x36F20Cu;
    // 0x36f20c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F20Cu;
    SET_GPR_U32(ctx, 31, 0x36F214u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F20Cu, 0x36F214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F214u;
label_36f214:
    // 0x36f214: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f218: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f21c: 0x24a5fd60  addiu       $a1, $a1, -0x2A0
    ctx->pc = 0x36f21cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966624));
    // 0x36f220: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f224: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F224u;
    SET_GPR_U32(ctx, 31, 0x36F22Cu);
    ctx->pc = 0x36F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F224u;
    // 0x36f228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F224u, 0x36F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F22Cu;
label_36f22c:
    // 0x36f22c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f234: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f238: 0x3e00008  jr          $ra
    ctx->pc = 0x36F238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F238u;
        // 0x36f23c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F240u;
    // 0x36f240: 0x3e00008  jr          $ra
    ctx->pc = 0x36F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F240u;
        // 0x36f244: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F248u;
    // 0x36f248: 0x3e00008  jr          $ra
    ctx->pc = 0x36F248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F248u;
        // 0x36f24c: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F250u;
    // 0x36f250: 0x3e00008  jr          $ra
    ctx->pc = 0x36F250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F250u;
        // 0x36f254: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F258u;
    // 0x36f258: 0x3e00008  jr          $ra
    ctx->pc = 0x36F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F258u;
        // 0x36f25c: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F260u;
    // 0x36f260: 0x3e00008  jr          $ra
    ctx->pc = 0x36F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F260u;
        // 0x36f264: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F268u;
    // 0x36f268: 0x3e00008  jr          $ra
    ctx->pc = 0x36F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F268u;
        // 0x36f26c: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F270u;
    // 0x36f270: 0x3e00008  jr          $ra
    ctx->pc = 0x36F270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F270u;
        // 0x36f274: 0x8c82005c  lw          $v0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F278u;
    // 0x36f278: 0x3e00008  jr          $ra
    ctx->pc = 0x36F278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F278u;
        // 0x36f27c: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F280u;
    // 0x36f280: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f284: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x36f284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x36f288: 0x2442ede0  addiu       $v0, $v0, -0x1220
    ctx->pc = 0x36f288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962656));
    // 0x36f28c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x36f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x36f290: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36f290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36f294: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x36f294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x36f298: 0x3e00008  jr          $ra
    ctx->pc = 0x36F298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F298u;
        // 0x36f29c: 0xac800058  sw          $zero, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F2A0u;
}
