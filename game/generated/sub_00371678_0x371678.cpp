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

// Function: sub_00371678
// Address: 0x371678 - 0x371740
void sub_00371678_0x371678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371678_0x371678");
#endif

    switch (ctx->pc) {
        case 0x37169cu: goto label_37169c;
        case 0x3716b4u: goto label_3716b4;
        case 0x371724u: goto label_371724;
        default: break;
    }

    ctx->pc = 0x371678u;

    // 0x371678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37167c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37167cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371684: 0x24507580  addiu       $s0, $v0, 0x7580
    ctx->pc = 0x371684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30080));
    // 0x371688: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7580u));
    // 0x37168c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37168Cu;
    {
        const bool branch_taken_0x37168c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37168Cu;
        // 0x371690: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37168c) {
            ctx->pc = 0x3716B4u;
            goto label_3716b4;
        }
    }
    ctx->pc = 0x371694u;
    // 0x371694: 0xc0dc51e  jal         func_371478
    ctx->pc = 0x371694u;
    SET_GPR_U32(ctx, 31, 0x37169Cu);
    ctx->pc = 0x371478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371478u, 0x371694u, 0x37169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37169Cu;
label_37169c:
    // 0x37169c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37169cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3716a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3716a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3716a4: 0x24a50cb8  addiu       $a1, $a1, 0xCB8
    ctx->pc = 0x3716a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3256));
    // 0x3716a8: 0x24c67520  addiu       $a2, $a2, 0x7520
    ctx->pc = 0x3716a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29984));
    // 0x3716ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3716ACu;
    SET_GPR_U32(ctx, 31, 0x3716B4u);
    ctx->pc = 0x3716B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3716ACu;
    // 0x3716b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3716ACu, 0x3716B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3716B4u;
label_3716b4:
    // 0x3716b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3716b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3716b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3716b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3716bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3716bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3716c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3716C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3716C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3716C0u;
        // 0x3716c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3716C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3716C8u;
    // 0x3716c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3716c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3716cc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3716ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3716d0: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x3716d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x3716d4: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x3716d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x3716d8: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x3716d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x3716dc: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x3716dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3716e0: 0x24c605b8  addiu       $a2, $a2, 0x5B8
    ctx->pc = 0x3716e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1464));
    // 0x3716e4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3716e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3716e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3716e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3716ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3716ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3716f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3716f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3716f4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3716f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3716f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3716f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3716fc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3716fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x371700: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371704: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371708: 0x3e00008  jr          $ra
    ctx->pc = 0x371708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371708u;
        // 0x37170c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371710u;
    // 0x371710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371718: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37171c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x37171Cu;
    SET_GPR_U32(ctx, 31, 0x371724u);
    ctx->pc = 0x371720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37171Cu;
    // 0x371720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x37171Cu, 0x371724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371724u;
label_371724:
    // 0x371724: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x371724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x371728: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37172c: 0x246305b8  addiu       $v1, $v1, 0x5B8
    ctx->pc = 0x37172cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1464));
    // 0x371730: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x371730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x371734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371738: 0x3e00008  jr          $ra
    ctx->pc = 0x371738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371738u;
        // 0x37173c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371740u;
}
