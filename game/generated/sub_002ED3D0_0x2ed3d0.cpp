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

// Function: sub_002ED3D0
// Address: 0x2ed3d0 - 0x2ed438
void sub_002ED3D0_0x2ed3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED3D0_0x2ed3d0");
#endif

    switch (ctx->pc) {
        case 0x2ed3e4u: goto label_2ed3e4;
        case 0x2ed3f4u: goto label_2ed3f4;
        case 0x2ed404u: goto label_2ed404;
        case 0x2ed41cu: goto label_2ed41c;
        default: break;
    }

    ctx->pc = 0x2ed3d0u;

    // 0x2ed3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ed3d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ed3dc: 0xc090306  jal         func_240C18
    ctx->pc = 0x2ED3DCu;
    SET_GPR_U32(ctx, 31, 0x2ED3E4u);
    ctx->pc = 0x2ED3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED3DCu;
    // 0x2ed3e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C18u, 0x2ED3DCu, 0x2ED3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3E4u;
label_2ed3e4:
    // 0x2ed3e4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED3E4u;
    {
        const bool branch_taken_0x2ed3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3e4) {
            ctx->pc = 0x2ED3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3E4u;
            // 0x2ed3e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED424u;
            goto label_2ed424;
        }
    }
    ctx->pc = 0x2ED3ECu;
    // 0x2ed3ec: 0xc089662  jal         func_225988
    ctx->pc = 0x2ED3ECu;
    SET_GPR_U32(ctx, 31, 0x2ED3F4u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x2ED3ECu, 0x2ED3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED3F4u;
label_2ed3f4:
    // 0x2ed3f4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2ED3F4u;
    {
        const bool branch_taken_0x2ed3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed3f4) {
            ctx->pc = 0x2ED3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED3F4u;
            // 0x2ed3f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED424u;
            goto label_2ed424;
        }
    }
    ctx->pc = 0x2ED3FCu;
    // 0x2ed3fc: 0xc092196  jal         func_248658
    ctx->pc = 0x2ED3FCu;
    SET_GPR_U32(ctx, 31, 0x2ED404u);
    ctx->pc = 0x248658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248658u, 0x2ED3FCu, 0x2ED404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED404u;
label_2ed404:
    // 0x2ed404: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ed404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ed408: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ed408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed40c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED40Cu;
    {
        const bool branch_taken_0x2ed40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED40Cu;
        // 0x2ed410: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed40c) {
            ctx->pc = 0x2ED420u;
            goto label_2ed420;
        }
    }
    ctx->pc = 0x2ED414u;
    // 0x2ed414: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED414u;
    SET_GPR_U32(ctx, 31, 0x2ED41Cu);
    ctx->pc = 0x2ED418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED414u;
    // 0x2ed418: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED414u, 0x2ED41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED41Cu;
label_2ed41c:
    // 0x2ed41c: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2ed41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_2ed420:
    // 0x2ed420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ed420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed424:
    // 0x2ed424: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed428: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ed42c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED42Cu;
        // 0x2ed430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED434u;
    // 0x2ed434: 0x0  nop
    ctx->pc = 0x2ed434u;
    // NOP
    ctx->pc = 0x2ed438u;
}
