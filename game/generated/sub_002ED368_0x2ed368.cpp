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

// Function: sub_002ED368
// Address: 0x2ed368 - 0x2ed3d0
void sub_002ED368_0x2ed368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED368_0x2ed368");
#endif

    switch (ctx->pc) {
        case 0x2ed380u: goto label_2ed380;
        case 0x2ed3b4u: goto label_2ed3b4;
        case 0x2ed3bcu: goto label_2ed3bc;
        case 0x2ed3c4u: goto label_2ed3c4;
        default: break;
    }

    ctx->pc = 0x2ed368u;

    // 0x2ed368: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ed368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ed36c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed378: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED378u;
    SET_GPR_U32(ctx, 31, 0x2ED380u);
    ctx->pc = 0x2ED37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED378u;
    // 0x2ed37c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED378u, 0x2ED380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED380u;
label_2ed380:
    // 0x2ed380: 0x24460058  addiu       $a2, $v0, 0x58
    ctx->pc = 0x2ed380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2ed384: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ed384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ed388: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED388u;
    {
        const bool branch_taken_0x2ed388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED388u;
        // 0x2ed38c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed388) {
            ctx->pc = 0x2ED3A0u;
            goto label_2ed3a0;
        }
    }
    ctx->pc = 0x2ED390u;
    // 0x2ed390: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ed390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ed394: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2ed394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2ed398: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED398u;
    {
        const bool branch_taken_0x2ed398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ed398) {
            ctx->pc = 0x2ED3ACu;
            goto label_2ed3ac;
        }
    }
    ctx->pc = 0x2ED3A0u;
label_2ed3a0:
    // 0x2ed3a0: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2ed3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2ed3a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ed3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed3a8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ed3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2ed3ac:
    // 0x2ed3ac: 0xc0902c4  jal         func_240B10
    ctx->pc = 0x2ED3ACu;
    SET_GPR_U32(ctx, 31, 0x2ED3B4u);
    ctx->pc = 0x240B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240B10u, 0x2ED3ACu, 0x2ED3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3B4u;
label_2ed3b4:
    // 0x2ed3b4: 0xc0896ca  jal         func_225B28
    ctx->pc = 0x2ED3B4u;
    SET_GPR_U32(ctx, 31, 0x2ED3BCu);
    ctx->pc = 0x225B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225B28u, 0x2ED3B4u, 0x2ED3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3BCu;
label_2ed3bc:
    // 0x2ed3bc: 0xc09218a  jal         func_248628
    ctx->pc = 0x2ED3BCu;
    SET_GPR_U32(ctx, 31, 0x2ED3C4u);
    ctx->pc = 0x248628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248628u, 0x2ED3BCu, 0x2ED3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3C4u;
label_2ed3c4:
    // 0x2ed3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED3C8u;
        // 0x2ed3cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED3D0u;
}
