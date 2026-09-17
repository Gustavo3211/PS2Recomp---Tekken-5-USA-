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

// Function: sub_003731C8
// Address: 0x3731c8 - 0x373230
void sub_003731C8_0x3731c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003731C8_0x3731c8");
#endif

    switch (ctx->pc) {
        case 0x3731ecu: goto label_3731ec;
        case 0x373204u: goto label_373204;
        default: break;
    }

    ctx->pc = 0x3731c8u;

    // 0x3731c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3731c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3731cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3731ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3731d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3731d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3731d4: 0x24507710  addiu       $s0, $v0, 0x7710
    ctx->pc = 0x3731d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x3731d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3731d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7710u));
    // 0x3731dc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3731DCu;
    {
        const bool branch_taken_0x3731dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3731E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731DCu;
        // 0x3731e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3731dc) {
            ctx->pc = 0x373204u;
            goto label_373204;
        }
    }
    ctx->pc = 0x3731E4u;
    // 0x3731e4: 0xc0dcc20  jal         func_373080
    ctx->pc = 0x3731E4u;
    SET_GPR_U32(ctx, 31, 0x3731ECu);
    ctx->pc = 0x373080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373080u, 0x3731E4u, 0x3731ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3731ECu;
label_3731ec:
    // 0x3731ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3731ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3731f0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3731f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3731f4: 0x24a51da8  addiu       $a1, $a1, 0x1DA8
    ctx->pc = 0x3731f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7592));
    // 0x3731f8: 0x24c67700  addiu       $a2, $a2, 0x7700
    ctx->pc = 0x3731f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30464));
    // 0x3731fc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3731FCu;
    SET_GPR_U32(ctx, 31, 0x373204u);
    ctx->pc = 0x373200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3731FCu;
    // 0x373200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3731FCu, 0x373204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373204u;
label_373204:
    // 0x373204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37320c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37320cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373210: 0x3e00008  jr          $ra
    ctx->pc = 0x373210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373210u;
        // 0x373214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373218u;
    // 0x373218: 0x3e00008  jr          $ra
    ctx->pc = 0x373218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373218u;
        // 0x37321c: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373220u;
    // 0x373220: 0x3e00008  jr          $ra
    ctx->pc = 0x373220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373220u;
        // 0x373224: 0xac85006c  sw          $a1, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373228u;
    // 0x373228: 0x3e00008  jr          $ra
    ctx->pc = 0x373228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37322Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373228u;
        // 0x37322c: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373230u;
}
