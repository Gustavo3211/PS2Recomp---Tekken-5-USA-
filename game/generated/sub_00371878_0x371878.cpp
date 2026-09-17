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

// Function: sub_00371878
// Address: 0x371878 - 0x3719d0
void sub_00371878_0x371878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371878_0x371878");
#endif

    switch (ctx->pc) {
        case 0x37189cu: goto label_37189c;
        case 0x3718b4u: goto label_3718b4;
        case 0x3719a4u: goto label_3719a4;
        default: break;
    }

    ctx->pc = 0x371878u;

    // 0x371878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37187c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37187cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371884: 0x24507570  addiu       $s0, $v0, 0x7570
    ctx->pc = 0x371884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30064));
    // 0x371888: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7570u));
    // 0x37188c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37188Cu;
    {
        const bool branch_taken_0x37188c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37188Cu;
        // 0x371890: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37188c) {
            ctx->pc = 0x3718B4u;
            goto label_3718b4;
        }
    }
    ctx->pc = 0x371894u;
    // 0x371894: 0xc0dc47c  jal         func_3711F0
    ctx->pc = 0x371894u;
    SET_GPR_U32(ctx, 31, 0x37189Cu);
    ctx->pc = 0x3711F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3711F0u, 0x371894u, 0x37189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37189Cu;
label_37189c:
    // 0x37189c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37189cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3718a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x3718a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x3718a4: 0x24a50ce8  addiu       $a1, $a1, 0xCE8
    ctx->pc = 0x3718a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3304));
    // 0x3718a8: 0x24c67530  addiu       $a2, $a2, 0x7530
    ctx->pc = 0x3718a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30000));
    // 0x3718ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3718ACu;
    SET_GPR_U32(ctx, 31, 0x3718B4u);
    ctx->pc = 0x3718B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718ACu;
    // 0x3718b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3718ACu, 0x3718B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3718B4u;
label_3718b4:
    // 0x3718b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3718b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3718b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3718bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3718bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3718c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3718C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3718C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718C0u;
        // 0x3718c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3718C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3718C8u;
    // 0x3718c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3718C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3718CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718C8u;
        // 0x3718cc: 0x8c820110  lw          $v0, 0x110($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3718C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3718D0u;
    // 0x3718d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3718d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3718d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3718D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3718D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718D4u;
        // 0x3718d8: 0xac820110  sw          $v0, 0x110($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3718D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3718DCu;
    // 0x3718dc: 0x0  nop
    ctx->pc = 0x3718dcu;
    // NOP
    // 0x3718e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3718E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3718E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3718E0u;
        // 0x3718e4: 0xac800110  sw          $zero, 0x110($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3718E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3718E8u;
    // 0x3718e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3718e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3718ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3718ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3718f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3718f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3718f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3718f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3718f8: 0x80bb984  j           func_2EE610
    ctx->pc = 0x3718F8u;
    ctx->pc = 0x3718FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3718F8u;
    // 0x3718fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE610u, 0x3718F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371900u;
    // 0x371900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371904: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37190c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37190cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371910: 0x80bb984  j           func_2EE610
    ctx->pc = 0x371910u;
    ctx->pc = 0x371914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371910u;
    // 0x371914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE610u, 0x371910u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x371918u;
    // 0x371918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37191c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37191cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x371924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371928: 0x80bb97c  j           func_2EE5F0
    ctx->pc = 0x371928u;
    ctx->pc = 0x37192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371928u;
    // 0x37192c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    sub_002EE5F0_0x2ee5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x371930u;
    // 0x371930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371934: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x371938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37193c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37193cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371940: 0x80bb97c  j           func_2EE5F0
    ctx->pc = 0x371940u;
    ctx->pc = 0x371944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371940u;
    // 0x371944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    sub_002EE5F0_0x2ee5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x371948u;
    // 0x371948: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x371948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37194c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x37194cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x371950: 0x248300fc  addiu       $v1, $a0, 0xFC
    ctx->pc = 0x371950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x371954: 0x24420810  addiu       $v0, $v0, 0x810
    ctx->pc = 0x371954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2064));
    // 0x371958: 0x248500e8  addiu       $a1, $a0, 0xE8
    ctx->pc = 0x371958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x37195c: 0x248700f0  addiu       $a3, $a0, 0xF0
    ctx->pc = 0x37195cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x371960: 0x24c60428  addiu       $a2, $a2, 0x428
    ctx->pc = 0x371960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1064));
    // 0x371964: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x371964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371968: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x371968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37196c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x37196cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x371970: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x371970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x371974: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x371974u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x371978: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x371978u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x37197c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x37197cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x371980: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x371980u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x371984: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x371984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x371988: 0x3e00008  jr          $ra
    ctx->pc = 0x371988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37198Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371988u;
        // 0x37198c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371990u;
    // 0x371990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371998: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x371998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37199c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x37199Cu;
    SET_GPR_U32(ctx, 31, 0x3719A4u);
    ctx->pc = 0x3719A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37199Cu;
    // 0x3719a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x37199Cu, 0x3719A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719A4u;
label_3719a4:
    // 0x3719a4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3719a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3719a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3719a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3719ac: 0x24630428  addiu       $v1, $v1, 0x428
    ctx->pc = 0x3719acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1064));
    // 0x3719b0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x3719b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x3719b4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3719b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3719b8: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x3719b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x3719bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3719bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3719c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3719c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3719c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3719C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3719C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3719C4u;
        // 0x3719c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3719C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3719CCu;
    // 0x3719cc: 0x0  nop
    ctx->pc = 0x3719ccu;
    // NOP
    ctx->pc = 0x3719d0u;
}
