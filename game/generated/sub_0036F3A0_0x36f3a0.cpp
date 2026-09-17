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

// Function: sub_0036F3A0
// Address: 0x36f3a0 - 0x36f408
void sub_0036F3A0_0x36f3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F3A0_0x36f3a0");
#endif

    switch (ctx->pc) {
        case 0x36f3c4u: goto label_36f3c4;
        case 0x36f3f8u: goto label_36f3f8;
        default: break;
    }

    ctx->pc = 0x36f3a0u;

    // 0x36f3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36f3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36f3b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f3b4: 0x2442edb0  addiu       $v0, $v0, -0x1250
    ctx->pc = 0x36f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
    // 0x36f3b8: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x36f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x36f3bc: 0xc0c13d6  jal         func_304F58
    ctx->pc = 0x36F3BCu;
    SET_GPR_U32(ctx, 31, 0x36F3C4u);
    ctx->pc = 0x36F3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3BCu;
    // 0x36f3c0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304F58u, 0x36F3BCu, 0x36F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3C4u;
label_36f3c4:
    // 0x36f3c4: 0x260200fc  addiu       $v0, $s0, 0xFC
    ctx->pc = 0x36f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x36f3c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36f3cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36f3d0: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x36f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x36f3d4: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x36f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x36f3d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36F3D8u;
    {
        const bool branch_taken_0x36f3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F3D8u;
        // 0x36f3dc: 0xae000108  sw          $zero, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f3d8) {
            ctx->pc = 0x36F3F8u;
            goto label_36f3f8;
        }
    }
    ctx->pc = 0x36F3E0u;
    // 0x36f3e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f3e4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36f3e8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36f3ec: 0x248404d4  addiu       $a0, $a0, 0x4D4
    ctx->pc = 0x36f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1236));
    // 0x36f3f0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36F3F0u;
    SET_GPR_U32(ctx, 31, 0x36F3F8u);
    ctx->pc = 0x36F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3F0u;
    // 0x36f3f4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36F3F0u, 0x36F3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3F8u;
label_36f3f8:
    // 0x36f3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f3fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f400: 0x3e00008  jr          $ra
    ctx->pc = 0x36F400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F400u;
        // 0x36f404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F408u;
}
