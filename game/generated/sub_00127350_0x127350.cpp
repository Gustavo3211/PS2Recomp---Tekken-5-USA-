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

// Function: sub_00127350
// Address: 0x127350 - 0x127470
void sub_00127350_0x127350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127350_0x127350");
#endif

    ctx->pc = 0x127350u;

    // 0x127350: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x127350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x127354: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x127354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127358: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x127358u;
    {
        const bool branch_taken_0x127358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127358) {
            ctx->pc = 0x127370u;
            goto label_127370;
        }
    }
    ctx->pc = 0x127360u;
    // 0x127360: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x127360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x127364: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x127364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x127368: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x127368u;
    {
        const bool branch_taken_0x127368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127368) {
            ctx->pc = 0x12736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127368u;
            // 0x12736c: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x127378u;
            goto label_127378;
        }
    }
    ctx->pc = 0x127370u;
label_127370:
    // 0x127370: 0x3e00008  jr          $ra
    ctx->pc = 0x127370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127370u;
        // 0x127374: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127378u;
label_127378:
    // 0x127378: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x127378u;
    {
        const bool branch_taken_0x127378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127378u;
        // 0x12737c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x127378) {
            ctx->pc = 0x127398u;
            goto label_127398;
        }
    }
    ctx->pc = 0x127380u;
    // 0x127380: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x127380u;
    {
        const bool branch_taken_0x127380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127380) {
            ctx->pc = 0x127384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127380u;
            // 0x127384: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1273ECu;
            goto label_1273ec;
        }
    }
    ctx->pc = 0x127388u;
    // 0x127388: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x127388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12738c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x12738cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x127390: 0x3e00008  jr          $ra
    ctx->pc = 0x127390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127390u;
        // 0x127394: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127398u;
label_127398:
    // 0x127398: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x127398u;
    {
        const bool branch_taken_0x127398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127398) {
            ctx->pc = 0x12739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127398u;
            // 0x12739c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1273B8u;
            goto label_1273b8;
        }
    }
    ctx->pc = 0x1273A0u;
    // 0x1273a0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1273a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1273a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1273a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1273a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1273a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1273ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1273B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273ACu;
        // 0x1273b0: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1273ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1273B4u;
    // 0x1273b4: 0x0  nop
    ctx->pc = 0x1273b4u;
    // NOP
label_1273b8:
    // 0x1273b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1273B8u;
    {
        const bool branch_taken_0x1273b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1273b8) {
            ctx->pc = 0x1273BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1273B8u;
            // 0x1273bc: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1273E0u;
            goto label_1273e0;
        }
    }
    ctx->pc = 0x1273C0u;
    // 0x1273c0: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x1273c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1273c4: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1273C4u;
    {
        const bool branch_taken_0x1273c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1273C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273C4u;
        // 0x1273c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1273c4) {
            ctx->pc = 0x127468u;
            goto label_127468;
        }
    }
    ctx->pc = 0x1273CCu;
    // 0x1273cc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1273ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1273d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1273d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1273d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1273d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1273D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1273DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273D8u;
        // 0x1273dc: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1273D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1273E0u;
label_1273e0:
    // 0x1273e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1273E0u;
    {
        const bool branch_taken_0x1273e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1273e0) {
            ctx->pc = 0x1273E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1273E0u;
            // 0x1273e4: 0x8c870004  lw          $a3, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127400u;
            goto label_127400;
        }
    }
    ctx->pc = 0x1273E8u;
    // 0x1273e8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1273e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1273ec:
    // 0x1273ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1273ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1273f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1273f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1273f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1273F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1273F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1273F4u;
        // 0x1273f8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1273F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1273FCu;
    // 0x1273fc: 0x0  nop
    ctx->pc = 0x1273fcu;
    // NOP
label_127400:
    // 0x127400: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x127400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x127404: 0x14e2000f  bne         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x127404u;
    {
        const bool branch_taken_0x127404 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x127408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127404u;
        // 0x127408: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127404) {
            ctx->pc = 0x127444u;
            goto label_127444;
        }
    }
    ctx->pc = 0x12740Cu;
    // 0x12740c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x12740cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x127410: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x127410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x127414: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x127414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x127418: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x127418u;
    {
        const bool branch_taken_0x127418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127418) {
            ctx->pc = 0x12741Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127418u;
            // 0x12741c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127444u;
            goto label_127444;
        }
    }
    ctx->pc = 0x127420u;
    // 0x127420: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x127420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x127424: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x127424u;
    {
        const bool branch_taken_0x127424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127424u;
        // 0x127428: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127424) {
            ctx->pc = 0x12745Cu;
            goto label_12745c;
        }
    }
    ctx->pc = 0x12742Cu;
    // 0x12742c: 0xdc830010  ld          $v1, 0x10($a0)
    ctx->pc = 0x12742cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x127430: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x127430u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x127434: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x127434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x127438: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x127438u;
    {
        const bool branch_taken_0x127438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127438) {
            ctx->pc = 0x12743Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127438u;
            // 0x12743c: 0x64102b  sltu        $v0, $v1, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x127450u;
            goto label_127450;
        }
    }
    ctx->pc = 0x127440u;
    // 0x127440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x127440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_127444:
    // 0x127444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x127444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x127448: 0x3e00008  jr          $ra
    ctx->pc = 0x127448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127448u;
        // 0x12744c: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127450u;
label_127450:
    // 0x127450: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x127450u;
    {
        const bool branch_taken_0x127450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127450) {
            ctx->pc = 0x127454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127450u;
            // 0x127454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127468u;
            goto label_127468;
        }
    }
    ctx->pc = 0x127458u;
    // 0x127458: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x127458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12745c:
    // 0x12745c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127460: 0x3e00008  jr          $ra
    ctx->pc = 0x127460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127460u;
        // 0x127464: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127468u;
label_127468:
    // 0x127468: 0x3e00008  jr          $ra
    ctx->pc = 0x127468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127470u;
}
