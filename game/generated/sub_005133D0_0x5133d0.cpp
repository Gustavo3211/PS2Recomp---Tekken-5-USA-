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

// Function: sub_005133D0
// Address: 0x5133d0 - 0x5134b0
void sub_005133D0_0x5133d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005133D0_0x5133d0");
#endif

    switch (ctx->pc) {
        case 0x5133e4u: goto label_5133e4;
        case 0x513458u: goto label_513458;
        case 0x51346cu: goto label_51346c;
        case 0x513484u: goto label_513484;
        case 0x513498u: goto label_513498;
        default: break;
    }

    ctx->pc = 0x5133d0u;

    // 0x5133d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5133d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5133d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5133d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5133d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x5133d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x5133dc: 0xc12a142  jal         func_4A8508
    ctx->pc = 0x5133DCu;
    SET_GPR_U32(ctx, 31, 0x5133E4u);
    ctx->pc = 0x5133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5133DCu;
    // 0x5133e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8508u, 0x5133DCu, 0x5133E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5133E4u;
label_5133e4:
    // 0x5133e4: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x5133e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x5133e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x5133e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5133ec: 0x30c6c000  andi        $a2, $a2, 0xC000
    ctx->pc = 0x5133ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)49152);
    // 0x5133f0: 0x32033ffe  andi        $v1, $s0, 0x3FFE
    ctx->pc = 0x5133f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16382);
    // 0x5133f4: 0x63343  sra         $a2, $a2, 13
    ctx->pc = 0x5133f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 13));
    // 0x5133f8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x5133f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x5133fc: 0x30c60007  andi        $a2, $a2, 0x7
    ctx->pc = 0x5133fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x513400: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x513400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x513404: 0x3604ffff  ori         $a0, $s0, 0xFFFF
    ctx->pc = 0x513404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x513408: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x513408u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51340c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x51340cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x513410: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x513410u;
    {
        const bool branch_taken_0x513410 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x513414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513410u;
        // 0x513414: 0x838024  and         $s0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513410) {
            ctx->pc = 0x513460u;
            goto label_513460;
        }
    }
    ctx->pc = 0x513418u;
    // 0x513418: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x513418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x51341c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x51341Cu;
    {
        const bool branch_taken_0x51341c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x513420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51341Cu;
        // 0x513420: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51341c) {
            ctx->pc = 0x513438u;
            goto label_513438;
        }
    }
    ctx->pc = 0x513424u;
    // 0x513424: 0x50e0000a  beql        $a3, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x513424u;
    {
        const bool branch_taken_0x513424 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x513424) {
            ctx->pc = 0x513428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x513424u;
            // 0x513428: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x513450u;
            goto label_513450;
        }
    }
    ctx->pc = 0x51342Cu;
    // 0x51342c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x51342Cu;
    {
        const bool branch_taken_0x51342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51342Cu;
        // 0x513430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51342c) {
            ctx->pc = 0x5134A0u;
            goto label_5134a0;
        }
    }
    ctx->pc = 0x513434u;
    // 0x513434: 0x0  nop
    ctx->pc = 0x513434u;
    // NOP
label_513438:
    // 0x513438: 0x10e2000f  beq         $a3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x513438u;
    {
        const bool branch_taken_0x513438 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x51343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513438u;
        // 0x51343c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513438) {
            ctx->pc = 0x513478u;
            goto label_513478;
        }
    }
    ctx->pc = 0x513440u;
    // 0x513440: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x513440u;
    {
        const bool branch_taken_0x513440 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x513444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513440u;
        // 0x513444: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513440) {
            ctx->pc = 0x513490u;
            goto label_513490;
        }
    }
    ctx->pc = 0x513448u;
    // 0x513448: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x513448u;
    {
        const bool branch_taken_0x513448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513448u;
        // 0x51344c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513448) {
            ctx->pc = 0x5134A0u;
            goto label_5134a0;
        }
    }
    ctx->pc = 0x513450u;
label_513450:
    // 0x513450: 0xc144cae  jal         func_5132B8
    ctx->pc = 0x513450u;
    SET_GPR_U32(ctx, 31, 0x513458u);
    ctx->pc = 0x513454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513450u;
    // 0x513454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5132B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5132B8u, 0x513450u, 0x513458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513458u;
label_513458:
    // 0x513458: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x513458u;
    {
        const bool branch_taken_0x513458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513458u;
        // 0x51345c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513458) {
            ctx->pc = 0x51349Cu;
            goto label_51349c;
        }
    }
    ctx->pc = 0x513460u;
label_513460:
    // 0x513460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x513460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x513464: 0xc144cbe  jal         func_5132F8
    ctx->pc = 0x513464u;
    SET_GPR_U32(ctx, 31, 0x51346Cu);
    ctx->pc = 0x513468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513464u;
    // 0x513468: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5132F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5132F8u, 0x513464u, 0x51346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x51346Cu;
label_51346c:
    // 0x51346c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x51346Cu;
    {
        const bool branch_taken_0x51346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x51346Cu;
        // 0x513470: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51346c) {
            ctx->pc = 0x51349Cu;
            goto label_51349c;
        }
    }
    ctx->pc = 0x513474u;
    // 0x513474: 0x0  nop
    ctx->pc = 0x513474u;
    // NOP
label_513478:
    // 0x513478: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x513478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51347c: 0xc144cd0  jal         func_513340
    ctx->pc = 0x51347Cu;
    SET_GPR_U32(ctx, 31, 0x513484u);
    ctx->pc = 0x513480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x51347Cu;
    // 0x513480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513340u, 0x51347Cu, 0x513484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513484u;
label_513484:
    // 0x513484: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x513484u;
    {
        const bool branch_taken_0x513484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513484u;
        // 0x513488: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513484) {
            ctx->pc = 0x51349Cu;
            goto label_51349c;
        }
    }
    ctx->pc = 0x51348Cu;
    // 0x51348c: 0x0  nop
    ctx->pc = 0x51348cu;
    // NOP
label_513490:
    // 0x513490: 0xc144ce2  jal         func_513388
    ctx->pc = 0x513490u;
    SET_GPR_U32(ctx, 31, 0x513498u);
    ctx->pc = 0x513494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x513490u;
    // 0x513494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513388u, 0x513490u, 0x513498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x513498u;
label_513498:
    // 0x513498: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x513498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51349c:
    // 0x51349c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x51349cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5134a0:
    // 0x5134a0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x5134a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5134a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x5134a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5134a8: 0x3e00008  jr          $ra
    ctx->pc = 0x5134A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5134ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5134A8u;
        // 0x5134ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5134A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5134B0u;
}
