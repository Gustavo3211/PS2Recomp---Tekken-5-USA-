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

// Function: sub_0036C438
// Address: 0x36c438 - 0x36c4b0
void sub_0036C438_0x36c438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C438_0x36c438");
#endif

    switch (ctx->pc) {
        case 0x36c45cu: goto label_36c45c;
        case 0x36c474u: goto label_36c474;
        default: break;
    }

    ctx->pc = 0x36c438u;

    // 0x36c438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c43c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c444: 0x24506f28  addiu       $s0, $v0, 0x6F28
    ctx->pc = 0x36c444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28456));
    // 0x36c448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F28u));
    // 0x36c44c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C44Cu;
    {
        const bool branch_taken_0x36c44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C44Cu;
        // 0x36c450: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c44c) {
            ctx->pc = 0x36C474u;
            goto label_36c474;
        }
    }
    ctx->pc = 0x36C454u;
    // 0x36c454: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36C454u;
    SET_GPR_U32(ctx, 31, 0x36C45Cu);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36C454u, 0x36C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C45Cu;
label_36c45c:
    // 0x36c45c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c460: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c464: 0x24a5c620  addiu       $a1, $a1, -0x39E0
    ctx->pc = 0x36c464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952480));
    // 0x36c468: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36c46c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C46Cu;
    SET_GPR_U32(ctx, 31, 0x36C474u);
    ctx->pc = 0x36C470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C46Cu;
    // 0x36c470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C46Cu, 0x36C474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C474u;
label_36c474:
    // 0x36c474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c47c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c480: 0x3e00008  jr          $ra
    ctx->pc = 0x36C480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C480u;
        // 0x36c484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C488u;
    // 0x36c488: 0x3e00008  jr          $ra
    ctx->pc = 0x36C488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C488u;
        // 0x36c48c: 0xac850164  sw          $a1, 0x164($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C490u;
    // 0x36c490: 0x3e00008  jr          $ra
    ctx->pc = 0x36C490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C490u;
        // 0x36c494: 0x8c820164  lw          $v0, 0x164($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C498u;
    // 0x36c498: 0x3e00008  jr          $ra
    ctx->pc = 0x36C498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C498u;
        // 0x36c49c: 0xac85015c  sw          $a1, 0x15C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C4A0u;
    // 0x36c4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36C4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4A0u;
        // 0x36c4a4: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C4A8u;
    // 0x36c4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C4A8u;
        // 0x36c4ac: 0x8c820150  lw          $v0, 0x150($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C4B0u;
}
