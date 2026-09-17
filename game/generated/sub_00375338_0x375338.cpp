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

// Function: sub_00375338
// Address: 0x375338 - 0x3753e8
void sub_00375338_0x375338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375338_0x375338");
#endif

    switch (ctx->pc) {
        case 0x375338u: goto label_375338;
        case 0x37533cu: goto label_37533c;
        case 0x375340u: goto label_375340;
        case 0x375344u: goto label_375344;
        case 0x375348u: goto label_375348;
        case 0x37534cu: goto label_37534c;
        case 0x375350u: goto label_375350;
        case 0x375354u: goto label_375354;
        case 0x375358u: goto label_375358;
        case 0x37535cu: goto label_37535c;
        case 0x375360u: goto label_375360;
        case 0x375364u: goto label_375364;
        case 0x375368u: goto label_375368;
        case 0x37536cu: goto label_37536c;
        case 0x375370u: goto label_375370;
        case 0x375374u: goto label_375374;
        case 0x375378u: goto label_375378;
        case 0x37537cu: goto label_37537c;
        case 0x375380u: goto label_375380;
        case 0x375384u: goto label_375384;
        case 0x375388u: goto label_375388;
        case 0x37538cu: goto label_37538c;
        case 0x375390u: goto label_375390;
        case 0x375394u: goto label_375394;
        case 0x375398u: goto label_375398;
        case 0x37539cu: goto label_37539c;
        case 0x3753a0u: goto label_3753a0;
        case 0x3753a4u: goto label_3753a4;
        case 0x3753a8u: goto label_3753a8;
        case 0x3753acu: goto label_3753ac;
        case 0x3753b0u: goto label_3753b0;
        case 0x3753b4u: goto label_3753b4;
        case 0x3753b8u: goto label_3753b8;
        case 0x3753bcu: goto label_3753bc;
        case 0x3753c0u: goto label_3753c0;
        case 0x3753c4u: goto label_3753c4;
        case 0x3753c8u: goto label_3753c8;
        case 0x3753ccu: goto label_3753cc;
        case 0x3753d0u: goto label_3753d0;
        case 0x3753d4u: goto label_3753d4;
        case 0x3753d8u: goto label_3753d8;
        case 0x3753dcu: goto label_3753dc;
        case 0x3753e0u: goto label_3753e0;
        case 0x3753e4u: goto label_3753e4;
        default: break;
    }

    ctx->pc = 0x375338u;

label_375338:
    // 0x375338: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_37533c:
    // 0x37533c: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x37533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_375340:
    // 0x375340: 0x3e00008  jr          $ra
label_375344:
    if (ctx->pc == 0x375344u) {
        ctx->pc = 0x375344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375340u;
        // 0x375344: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375348u;
        goto label_375348;
    }
    ctx->pc = 0x375340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375340u;
        // 0x375344: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375348u;
label_375348:
    // 0x375348: 0x3e00008  jr          $ra
label_37534c:
    if (ctx->pc == 0x37534Cu) {
        ctx->pc = 0x375350u;
        goto label_375350;
    }
    ctx->pc = 0x375348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375350u;
label_375350:
    // 0x375350: 0x3e00008  jr          $ra
label_375354:
    if (ctx->pc == 0x375354u) {
        ctx->pc = 0x375358u;
        goto label_375358;
    }
    ctx->pc = 0x375350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375358u;
label_375358:
    // 0x375358: 0x3e00008  jr          $ra
label_37535c:
    if (ctx->pc == 0x37535Cu) {
        ctx->pc = 0x375360u;
        goto label_375360;
    }
    ctx->pc = 0x375358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375360u;
label_375360:
    // 0x375360: 0x3e00008  jr          $ra
label_375364:
    if (ctx->pc == 0x375364u) {
        ctx->pc = 0x375364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375360u;
        // 0x375364: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375368u;
        goto label_375368;
    }
    ctx->pc = 0x375360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375360u;
        // 0x375364: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375368u;
label_375368:
    // 0x375368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_37536c:
    // 0x37536c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_375370:
    // 0x375370: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x375370u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_375374:
    // 0x375374: 0x2610f0c0  addiu       $s0, $s0, -0xF40
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963392));
label_375378:
    // 0x375378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x375378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_37537c:
    // 0x37537c: 0xc0d0b24  jal         func_342C90
label_375380:
    if (ctx->pc == 0x375380u) {
        ctx->pc = 0x375380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37537Cu;
        // 0x375380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375384u;
        goto label_375384;
    }
    ctx->pc = 0x37537Cu;
    SET_GPR_U32(ctx, 31, 0x375384u);
    ctx->pc = 0x375380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37537Cu;
    // 0x375380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x37537Cu, 0x375384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375384u;
label_375384:
    // 0x375384: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x375384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_375388:
    // 0x375388: 0x24631fa0  addiu       $v1, $v1, 0x1FA0
    ctx->pc = 0x375388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8096));
label_37538c:
    // 0x37538c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37538cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_375390:
    // 0x375390: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x375390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_375394:
    // 0x375394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x375394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375398:
    // 0x375398: 0x3e00008  jr          $ra
label_37539c:
    if (ctx->pc == 0x37539Cu) {
        ctx->pc = 0x37539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375398u;
        // 0x37539c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3753A0u;
        goto label_3753a0;
    }
    ctx->pc = 0x375398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375398u;
        // 0x37539c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3753A0u;
label_3753a0:
    // 0x3753a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3753a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3753a4:
    // 0x3753a4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3753a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3753a8:
    // 0x3753a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3753a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3753ac:
    // 0x3753ac: 0x2484f0c0  addiu       $a0, $a0, -0xF40
    ctx->pc = 0x3753acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
label_3753b0:
    // 0x3753b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3753b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3753b4:
    // 0x3753b4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x3753b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3753b8:
    // 0x3753b8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3753b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3753bc:
    // 0x3753bc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x3753bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3753c0:
    // 0x3753c0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x3753c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3753c4:
    // 0x3753c4: 0xc0f809  jalr        $a2
label_3753c8:
    if (ctx->pc == 0x3753C8u) {
        ctx->pc = 0x3753C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753C4u;
        // 0x3753c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3753CCu;
        goto label_3753cc;
    }
    ctx->pc = 0x3753C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3753CCu);
        ctx->pc = 0x3753C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753C4u;
        // 0x3753c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3753C4u, 0x3753CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3753CCu;
label_3753cc:
    // 0x3753cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3753ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3753d0:
    // 0x3753d0: 0x3e00008  jr          $ra
label_3753d4:
    if (ctx->pc == 0x3753D4u) {
        ctx->pc = 0x3753D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753D0u;
        // 0x3753d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3753D8u;
        goto label_3753d8;
    }
    ctx->pc = 0x3753D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3753D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753D0u;
        // 0x3753d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3753D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3753D8u;
label_3753d8:
    // 0x3753d8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3753d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_3753dc:
    // 0x3753dc: 0x3e00008  jr          $ra
label_3753e0:
    if (ctx->pc == 0x3753E0u) {
        ctx->pc = 0x3753E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753DCu;
        // 0x3753e0: 0x2442f0c0  addiu       $v0, $v0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3753E4u;
        goto label_3753e4;
    }
    ctx->pc = 0x3753DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3753E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3753DCu;
        // 0x3753e0: 0x2442f0c0  addiu       $v0, $v0, -0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3753DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3753E4u;
label_3753e4:
    // 0x3753e4: 0x0  nop
    ctx->pc = 0x3753e4u;
    // NOP
    ctx->pc = 0x3753e8u;
}
