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

// Function: sub_00371778
// Address: 0x371778 - 0x371840
void sub_00371778_0x371778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371778_0x371778");
#endif

    switch (ctx->pc) {
        case 0x37179cu: goto label_37179c;
        case 0x3717b4u: goto label_3717b4;
        case 0x371824u: goto label_371824;
        default: break;
    }

    ctx->pc = 0x371778u;

    // 0x371778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37177c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371784: 0x24507500  addiu       $s0, $v0, 0x7500
    ctx->pc = 0x371784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29952));
    // 0x371788: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371788u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7500u));
    // 0x37178c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37178Cu;
    {
        const bool branch_taken_0x37178c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37178Cu;
        // 0x371790: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37178c) {
            ctx->pc = 0x3717B4u;
            goto label_3717b4;
        }
    }
    ctx->pc = 0x371794u;
    // 0x371794: 0xc0dc51e  jal         func_371478
    ctx->pc = 0x371794u;
    SET_GPR_U32(ctx, 31, 0x37179Cu);
    ctx->pc = 0x371478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371478u, 0x371794u, 0x37179Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37179Cu;
label_37179c:
    // 0x37179c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37179cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3717a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3717a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3717a4: 0x24a50cd0  addiu       $a1, $a1, 0xCD0
    ctx->pc = 0x3717a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3280));
    // 0x3717a8: 0x24c67520  addiu       $a2, $a2, 0x7520
    ctx->pc = 0x3717a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29984));
    // 0x3717ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3717ACu;
    SET_GPR_U32(ctx, 31, 0x3717B4u);
    ctx->pc = 0x3717B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3717ACu;
    // 0x3717b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3717ACu, 0x3717B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3717B4u;
label_3717b4:
    // 0x3717b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3717b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3717b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3717b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3717bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3717bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3717c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3717C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3717C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3717C0u;
        // 0x3717c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3717C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3717C8u;
    // 0x3717c8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3717c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3717cc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x3717ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x3717d0: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x3717d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x3717d4: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x3717d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x3717d8: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x3717d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x3717dc: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x3717dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x3717e0: 0x24c604f0  addiu       $a2, $a2, 0x4F0
    ctx->pc = 0x3717e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1264));
    // 0x3717e4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3717e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3717e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3717e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3717ec: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3717ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x3717f0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3717f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x3717f4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3717f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3717f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3717f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x3717fc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x3717fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x371800: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371804: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371808: 0x3e00008  jr          $ra
    ctx->pc = 0x371808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371808u;
        // 0x37180c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371810u;
    // 0x371810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37181c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x37181Cu;
    SET_GPR_U32(ctx, 31, 0x371824u);
    ctx->pc = 0x371820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37181Cu;
    // 0x371820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x37181Cu, 0x371824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371824u;
label_371824:
    // 0x371824: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x371824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x371828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37182c: 0x246304f0  addiu       $v1, $v1, 0x4F0
    ctx->pc = 0x37182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1264));
    // 0x371830: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x371830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x371834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371838: 0x3e00008  jr          $ra
    ctx->pc = 0x371838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371838u;
        // 0x37183c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371840u;
}
