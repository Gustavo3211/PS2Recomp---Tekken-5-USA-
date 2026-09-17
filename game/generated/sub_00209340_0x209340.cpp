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

// Function: sub_00209340
// Address: 0x209340 - 0x209428
void sub_00209340_0x209340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209340_0x209340");
#endif

    switch (ctx->pc) {
        case 0x209390u: goto label_209390;
        case 0x2093a0u: goto label_2093a0;
        case 0x2093acu: goto label_2093ac;
        case 0x2093d4u: goto label_2093d4;
        case 0x2093dcu: goto label_2093dc;
        case 0x2093f0u: goto label_2093f0;
        case 0x2093fcu: goto label_2093fc;
        case 0x209414u: goto label_209414;
        default: break;
    }

    ctx->pc = 0x209340u;

    // 0x209340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209344: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x209344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x209348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20934c: 0x248783c0  addiu       $a3, $a0, -0x7C40
    ctx->pc = 0x20934cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
    // 0x209350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209354: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20935c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20935cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209360: 0x8c468898  lw          $a2, -0x7768($v0)
    ctx->pc = 0x209360u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A8898u));
    // 0x209364: 0x90e3002d  lbu         $v1, 0x2D($a3)
    ctx->pc = 0x209364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83EDu));
    // 0x209368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x209368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20936c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x20936cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x209370: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x209370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x209374: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x209374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x209378: 0x84a20090  lh          $v0, 0x90($a1)
    ctx->pc = 0x209378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x20937c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x20937cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x209380: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209380u;
    {
        const bool branch_taken_0x209380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209380u;
        // 0x209384: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209380) {
            ctx->pc = 0x209398u;
            goto label_209398;
        }
    }
    ctx->pc = 0x209388u;
    // 0x209388: 0xc08522a  jal         func_2148A8
    ctx->pc = 0x209388u;
    SET_GPR_U32(ctx, 31, 0x209390u);
    ctx->pc = 0x20938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209388u;
    // 0x20938c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148A8u, 0x209388u, 0x209390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209390u;
label_209390:
    // 0x209390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x209390u;
    {
        const bool branch_taken_0x209390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209390u;
        // 0x209394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209390) {
            ctx->pc = 0x2093A4u;
            goto label_2093a4;
        }
    }
    ctx->pc = 0x209398u;
label_209398:
    // 0x209398: 0xc08522a  jal         func_2148A8
    ctx->pc = 0x209398u;
    SET_GPR_U32(ctx, 31, 0x2093A0u);
    ctx->pc = 0x20939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209398u;
    // 0x20939c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148A8u, 0x209398u, 0x2093A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093A0u;
label_2093a0:
    // 0x2093a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2093a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2093a4:
    // 0x2093a4: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2093A4u;
    SET_GPR_U32(ctx, 31, 0x2093ACu);
    ctx->pc = 0x2093A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093A4u;
    // 0x2093a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2093A4u, 0x2093ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093ACu;
label_2093ac:
    // 0x2093ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2093acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093b0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2093B0u;
    {
        const bool branch_taken_0x2093b0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2093B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093B0u;
        // 0x2093b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093b0) {
            ctx->pc = 0x2093C0u;
            goto label_2093c0;
        }
    }
    ctx->pc = 0x2093B8u;
    // 0x2093b8: 0xaf8098c4  sw          $zero, -0x673C($gp)
    ctx->pc = 0x2093b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940868), GPR_U32(ctx, 0));
    // 0x2093bc: 0xaf8298bc  sw          $v0, -0x6744($gp)
    ctx->pc = 0x2093bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940860), GPR_U32(ctx, 2));
label_2093c0:
    // 0x2093c0: 0x8f8298bc  lw          $v0, -0x6744($gp)
    ctx->pc = 0x2093c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940860)));
    // 0x2093c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2093C4u;
    {
        const bool branch_taken_0x2093c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2093C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093C4u;
        // 0x2093c8: 0x2610ffdf  addiu       $s0, $s0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093c4) {
            ctx->pc = 0x2093F0u;
            goto label_2093f0;
        }
    }
    ctx->pc = 0x2093CCu;
    // 0x2093cc: 0xc08999c  jal         func_226670
    ctx->pc = 0x2093CCu;
    SET_GPR_U32(ctx, 31, 0x2093D4u);
    ctx->pc = 0x2093D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093CCu;
    // 0x2093d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226670u, 0x2093CCu, 0x2093D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093D4u;
label_2093d4:
    // 0x2093d4: 0xc0404ee  jal         func_1013B8
    ctx->pc = 0x2093D4u;
    SET_GPR_U32(ctx, 31, 0x2093DCu);
    ctx->pc = 0x1013B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013B8u, 0x2093D4u, 0x2093DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093DCu;
label_2093dc:
    // 0x2093dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2093dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093e0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2093e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093e4: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x2093e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2093e8: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2093E8u;
    SET_GPR_U32(ctx, 31, 0x2093F0u);
    ctx->pc = 0x2093ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093E8u;
    // 0x2093ec: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2093E8u, 0x2093F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093F0u;
label_2093f0:
    // 0x2093f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2093f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2093f4: 0xc085238  jal         func_2148E0
    ctx->pc = 0x2093F4u;
    SET_GPR_U32(ctx, 31, 0x2093FCu);
    ctx->pc = 0x2093F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2093F4u;
    // 0x2093f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x2093F4u, 0x2093FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2093FCu;
label_2093fc:
    // 0x2093fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2093FCu;
    {
        const bool branch_taken_0x2093fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x209400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093FCu;
        // 0x209400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2093fc) {
            ctx->pc = 0x209414u;
            goto label_209414;
        }
    }
    ctx->pc = 0x209404u;
    // 0x209404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209408: 0xaf8098b8  sw          $zero, -0x6748($gp)
    ctx->pc = 0x209408u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940856), GPR_U32(ctx, 0));
    // 0x20940c: 0xc0b679c  jal         func_2D9E70
    ctx->pc = 0x20940Cu;
    SET_GPR_U32(ctx, 31, 0x209414u);
    ctx->pc = 0x209410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20940Cu;
    // 0x209410: 0xaf8298b0  sw          $v0, -0x6750($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9E70u, 0x20940Cu, 0x209414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209414u;
label_209414:
    // 0x209414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20941c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20941cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209420: 0x3e00008  jr          $ra
    ctx->pc = 0x209420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209420u;
        // 0x209424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209428u;
}
