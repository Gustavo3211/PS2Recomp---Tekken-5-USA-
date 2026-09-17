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

// Function: sub_001194F8
// Address: 0x1194f8 - 0x119608
void sub_001194F8_0x1194f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001194F8_0x1194f8");
#endif

    switch (ctx->pc) {
        case 0x11950cu: goto label_11950c;
        case 0x119538u: goto label_119538;
        case 0x119554u: goto label_119554;
        case 0x11955cu: goto label_11955c;
        case 0x119564u: goto label_119564;
        case 0x119574u: goto label_119574;
        case 0x119588u: goto label_119588;
        case 0x11959cu: goto label_11959c;
        case 0x1195c8u: goto label_1195c8;
        case 0x1195e0u: goto label_1195e0;
        case 0x1195f0u: goto label_1195f0;
        default: break;
    }

    ctx->pc = 0x1194f8u;

    // 0x1194f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1194f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1194fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1194fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119500: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119504: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119504u;
    SET_GPR_U32(ctx, 31, 0x11950Cu);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119504u, 0x11950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11950Cu;
label_11950c:
    // 0x11950c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11950cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119510: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x119510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x119514: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x119514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x119518: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x119518u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x11951c: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x11951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x119520: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x119520u;
    {
        const bool branch_taken_0x119520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x119520) {
            ctx->pc = 0x119540u;
            goto label_119540;
        }
    }
    ctx->pc = 0x119528u;
    // 0x119528: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x119528u;
    {
        const bool branch_taken_0x119528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119528u;
        // 0x11952c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119528) {
            ctx->pc = 0x119578u;
            goto label_119578;
        }
    }
    ctx->pc = 0x119530u;
    // 0x119530: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x119530u;
    SET_GPR_U32(ctx, 31, 0x119538u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x119530u, 0x119538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119538u;
label_119538:
    // 0x119538: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x119538u;
    {
        const bool branch_taken_0x119538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119538u;
        // 0x11953c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119538) {
            ctx->pc = 0x119578u;
            goto label_119578;
        }
    }
    ctx->pc = 0x119540u;
label_119540:
    // 0x119540: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x119540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119544: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x119544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x119548: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x119548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x11954c: 0xc0464a6  jal         func_119298
    ctx->pc = 0x11954Cu;
    SET_GPR_U32(ctx, 31, 0x119554u);
    ctx->pc = 0x119550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11954Cu;
    // 0x119550: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x11954Cu, 0x119554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119554u;
label_119554:
    // 0x119554: 0xc0466c0  jal         func_119B00
    ctx->pc = 0x119554u;
    SET_GPR_U32(ctx, 31, 0x11955Cu);
    ctx->pc = 0x119B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B00u, 0x119554u, 0x11955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11955Cu;
label_11955c:
    // 0x11955c: 0xc046582  jal         func_119608
    ctx->pc = 0x11955Cu;
    SET_GPR_U32(ctx, 31, 0x119564u);
    ctx->pc = 0x119560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11955Cu;
    // 0x119560: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119608u, 0x11955Cu, 0x119564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119564u;
label_119564:
    // 0x119564: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119564u;
    {
        const bool branch_taken_0x119564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x119568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119564u;
        // 0x119568: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119564) {
            ctx->pc = 0x119578u;
            goto label_119578;
        }
    }
    ctx->pc = 0x11956Cu;
    // 0x11956c: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x11956Cu;
    SET_GPR_U32(ctx, 31, 0x119574u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x11956Cu, 0x119574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119574u;
label_119574:
    // 0x119574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x119574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_119578:
    // 0x119578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x119578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11957c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11957cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119580: 0x3e00008  jr          $ra
    ctx->pc = 0x119580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119580u;
        // 0x119584: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119588u;
label_119588:
    // 0x119588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11958c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119590: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x119590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x119594: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119594u;
    SET_GPR_U32(ctx, 31, 0x11959Cu);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119594u, 0x11959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11959Cu;
label_11959c:
    // 0x11959c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11959cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1195a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1195a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1195a4: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x1195a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x1195a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1195a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x1195ac: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x1195acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1195b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1195B0u;
    {
        const bool branch_taken_0x1195b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1195b0) {
            ctx->pc = 0x1195D0u;
            goto label_1195d0;
        }
    }
    ctx->pc = 0x1195B8u;
    // 0x1195b8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1195B8u;
    {
        const bool branch_taken_0x1195b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195B8u;
        // 0x1195bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195b8) {
            ctx->pc = 0x1195F4u;
            goto label_1195f4;
        }
    }
    ctx->pc = 0x1195C0u;
    // 0x1195c0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x1195C0u;
    SET_GPR_U32(ctx, 31, 0x1195C8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x1195C0u, 0x1195C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195C8u;
label_1195c8:
    // 0x1195c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1195C8u;
    {
        const bool branch_taken_0x1195c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195C8u;
        // 0x1195cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195c8) {
            ctx->pc = 0x1195F4u;
            goto label_1195f4;
        }
    }
    ctx->pc = 0x1195D0u;
label_1195d0:
    // 0x1195d0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1195d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1195d4: 0x3484f37f  ori         $a0, $a0, 0xF37F
    ctx->pc = 0x1195d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62335);
    // 0x1195d8: 0xc0464a6  jal         func_119298
    ctx->pc = 0x1195D8u;
    SET_GPR_U32(ctx, 31, 0x1195E0u);
    ctx->pc = 0x1195DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1195D8u;
    // 0x1195dc: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x1195D8u, 0x1195E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195E0u;
label_1195e0:
    // 0x1195e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1195E0u;
    {
        const bool branch_taken_0x1195e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1195E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195E0u;
        // 0x1195e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1195e0) {
            ctx->pc = 0x1195F4u;
            goto label_1195f4;
        }
    }
    ctx->pc = 0x1195E8u;
    // 0x1195e8: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x1195E8u;
    SET_GPR_U32(ctx, 31, 0x1195F0u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x1195E8u, 0x1195F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1195F0u;
label_1195f0:
    // 0x1195f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1195f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1195f4:
    // 0x1195f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1195f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1195f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1195f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1195fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1195FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1195FCu;
        // 0x119600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1195FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119604u;
    // 0x119604: 0x0  nop
    ctx->pc = 0x119604u;
    // NOP
    ctx->pc = 0x119608u;
}
