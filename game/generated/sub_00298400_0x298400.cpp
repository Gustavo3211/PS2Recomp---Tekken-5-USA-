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

// Function: sub_00298400
// Address: 0x298400 - 0x2984b0
void sub_00298400_0x298400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298400_0x298400");
#endif

    switch (ctx->pc) {
        case 0x298420u: goto label_298420;
        case 0x298448u: goto label_298448;
        case 0x298480u: goto label_298480;
        default: break;
    }

    ctx->pc = 0x298400u;

    // 0x298400: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x298400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x298404: 0x8c627654  lw          $v0, 0x7654($v1)
    ctx->pc = 0x298404u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x177654u));
    // 0x298408: 0x3e00008  jr          $ra
    ctx->pc = 0x298408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298408u;
        // 0x29840c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298410u;
    // 0x298410: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298414: 0x248201b0  addiu       $v0, $a0, 0x1B0
    ctx->pc = 0x298414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x298418: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x298418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29841c: 0x0  nop
    ctx->pc = 0x29841cu;
    // NOP
label_298420:
    // 0x298420: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x298420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298424: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x298424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x298428: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x298428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x29842c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29842cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x298430: 0x0  nop
    ctx->pc = 0x298430u;
    // NOP
    // 0x298434: 0x1467fffa  bne         $v1, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298434u;
    {
        const bool branch_taken_0x298434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x298438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298434u;
        // 0x298438: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298434) {
            ctx->pc = 0x298420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298420;
        }
    }
    ctx->pc = 0x29843Cu;
    // 0x29843c: 0x248401c0  addiu       $a0, $a0, 0x1C0
    ctx->pc = 0x29843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x298440: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x298440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298444: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x298444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298448:
    // 0x298448: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x298448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29844c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x29844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x298450: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298454: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x298454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x298458: 0x0  nop
    ctx->pc = 0x298458u;
    // NOP
    // 0x29845c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29845Cu;
    {
        const bool branch_taken_0x29845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x298460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29845Cu;
        // 0x298460: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29845c) {
            ctx->pc = 0x298448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298448;
        }
    }
    ctx->pc = 0x298464u;
    // 0x298464: 0x3e00008  jr          $ra
    ctx->pc = 0x298464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29846Cu;
    // 0x29846c: 0x0  nop
    ctx->pc = 0x29846cu;
    // NOP
    // 0x298470: 0x248401d0  addiu       $a0, $a0, 0x1D0
    ctx->pc = 0x298470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x298474: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x298474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298478: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x298478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29847c: 0x0  nop
    ctx->pc = 0x29847cu;
    // NOP
label_298480:
    // 0x298480: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x298480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298484: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x298484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x298488: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29848c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x29848cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x298490: 0x0  nop
    ctx->pc = 0x298490u;
    // NOP
    // 0x298494: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298494u;
    {
        const bool branch_taken_0x298494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x298498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298494u;
        // 0x298498: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298494) {
            ctx->pc = 0x298480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298480;
        }
    }
    ctx->pc = 0x29849Cu;
    // 0x29849c: 0x3e00008  jr          $ra
    ctx->pc = 0x29849Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29849Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2984A4u;
    // 0x2984a4: 0x0  nop
    ctx->pc = 0x2984a4u;
    // NOP
    // 0x2984a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2984A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2984ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2984A8u;
        // 0x2984ac: 0xc4800210  lwc1        $f0, 0x210($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2984A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2984B0u;
}
