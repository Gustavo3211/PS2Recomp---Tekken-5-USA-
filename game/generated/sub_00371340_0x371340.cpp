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

// Function: sub_00371340
// Address: 0x371340 - 0x3713b0
void sub_00371340_0x371340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371340_0x371340");
#endif

    switch (ctx->pc) {
        case 0x3713a0u: goto label_3713a0;
        default: break;
    }

    ctx->pc = 0x371340u;

    // 0x371340: 0x3e00008  jr          $ra
    ctx->pc = 0x371340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371348u;
    // 0x371348: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x371348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37134c: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x37134cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x371350: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x371350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x371354: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x371354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x371358: 0x248600f0  addiu       $a2, $a0, 0xF0
    ctx->pc = 0x371358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x37135c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x37135cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371360: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x371360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x371364: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x371364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x371368: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x371368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x37136c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x37136cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x371370: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x371370u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x371374: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x371374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x371378: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x37137c: 0x3e00008  jr          $ra
    ctx->pc = 0x37137Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37137Cu;
        // 0x371380: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37137Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371384u;
    // 0x371384: 0x0  nop
    ctx->pc = 0x371384u;
    // NOP
    // 0x371388: 0x3e00008  jr          $ra
    ctx->pc = 0x371388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371388u;
        // 0x37138c: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371390u;
    // 0x371390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371398: 0xc0bb966  jal         func_2EE598
    ctx->pc = 0x371398u;
    SET_GPR_U32(ctx, 31, 0x3713A0u);
    ctx->pc = 0x37139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371398u;
    // 0x37139c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE598u, 0x371398u, 0x3713A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3713A0u;
label_3713a0:
    // 0x3713a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3713a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3713a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3713A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3713A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3713A4u;
        // 0x3713a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3713A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3713ACu;
    // 0x3713ac: 0x0  nop
    ctx->pc = 0x3713acu;
    // NOP
    ctx->pc = 0x3713b0u;
}
