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

// Function: sub_002B37F0
// Address: 0x2b37f0 - 0x2b3830
void sub_002B37F0_0x2b37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B37F0_0x2b37f0");
#endif

    switch (ctx->pc) {
        case 0x2b380cu: goto label_2b380c;
        case 0x2b3820u: goto label_2b3820;
        default: break;
    }

    ctx->pc = 0x2b37f0u;

    // 0x2b37f0: 0x8f82cadc  lw          $v0, -0x3524($gp)
    ctx->pc = 0x2b37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953692)));
    // 0x2b37f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b37f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b37f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b37f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b37fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B37FCu;
    {
        const bool branch_taken_0x2b37fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B37FCu;
        // 0x2b3800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b37fc) {
            ctx->pc = 0x2B380Cu;
            goto label_2b380c;
        }
    }
    ctx->pc = 0x2B3804u;
    // 0x2b3804: 0xc0ade50  jal         func_2B7940
    ctx->pc = 0x2B3804u;
    SET_GPR_U32(ctx, 31, 0x2B380Cu);
    ctx->pc = 0x2B3808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3804u;
    // 0x2b3808: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7940u, 0x2B3804u, 0x2B380Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B380Cu;
label_2b380c:
    // 0x2b380c: 0x8f84cae0  lw          $a0, -0x3520($gp)
    ctx->pc = 0x2b380cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953696)));
    // 0x2b3810: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3810u;
    {
        const bool branch_taken_0x2b3810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3810u;
        // 0x2b3814: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3810) {
            ctx->pc = 0x2B3824u;
            goto label_2b3824;
        }
    }
    ctx->pc = 0x2B3818u;
    // 0x2b3818: 0xc0ade50  jal         func_2B7940
    ctx->pc = 0x2B3818u;
    SET_GPR_U32(ctx, 31, 0x2B3820u);
    ctx->pc = 0x2B381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3818u;
    // 0x2b381c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7940u, 0x2B3818u, 0x2B3820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3820u;
label_2b3820:
    // 0x2b3820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3824:
    // 0x2b3824: 0xa380baa0  sb          $zero, -0x4560($gp)
    ctx->pc = 0x2b3824u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949536), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3828: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3828u;
        // 0x2b382c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3830u;
}
