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

// Function: sub_00127620
// Address: 0x127620 - 0x1276f0
void sub_00127620_0x127620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127620_0x127620");
#endif

    switch (ctx->pc) {
        case 0x127620u: goto label_127620;
        case 0x127624u: goto label_127624;
        case 0x127628u: goto label_127628;
        case 0x12762cu: goto label_12762c;
        case 0x127630u: goto label_127630;
        case 0x127634u: goto label_127634;
        case 0x127638u: goto label_127638;
        case 0x12763cu: goto label_12763c;
        case 0x127640u: goto label_127640;
        case 0x127644u: goto label_127644;
        case 0x127648u: goto label_127648;
        case 0x12764cu: goto label_12764c;
        case 0x127650u: goto label_127650;
        case 0x127654u: goto label_127654;
        case 0x127658u: goto label_127658;
        case 0x12765cu: goto label_12765c;
        case 0x127660u: goto label_127660;
        case 0x127664u: goto label_127664;
        case 0x127668u: goto label_127668;
        case 0x12766cu: goto label_12766c;
        case 0x127670u: goto label_127670;
        case 0x127674u: goto label_127674;
        case 0x127678u: goto label_127678;
        case 0x12767cu: goto label_12767c;
        case 0x127680u: goto label_127680;
        case 0x127684u: goto label_127684;
        case 0x127688u: goto label_127688;
        case 0x12768cu: goto label_12768c;
        case 0x127690u: goto label_127690;
        case 0x127694u: goto label_127694;
        case 0x127698u: goto label_127698;
        case 0x12769cu: goto label_12769c;
        case 0x1276a0u: goto label_1276a0;
        case 0x1276a4u: goto label_1276a4;
        case 0x1276a8u: goto label_1276a8;
        case 0x1276acu: goto label_1276ac;
        case 0x1276b0u: goto label_1276b0;
        case 0x1276b4u: goto label_1276b4;
        case 0x1276b8u: goto label_1276b8;
        case 0x1276bcu: goto label_1276bc;
        case 0x1276c0u: goto label_1276c0;
        case 0x1276c4u: goto label_1276c4;
        case 0x1276c8u: goto label_1276c8;
        case 0x1276ccu: goto label_1276cc;
        case 0x1276d0u: goto label_1276d0;
        case 0x1276d4u: goto label_1276d4;
        case 0x1276d8u: goto label_1276d8;
        case 0x1276dcu: goto label_1276dc;
        case 0x1276e0u: goto label_1276e0;
        case 0x1276e4u: goto label_1276e4;
        case 0x1276e8u: goto label_1276e8;
        case 0x1276ecu: goto label_1276ec;
        default: break;
    }

    ctx->pc = 0x127620u;

label_127620:
    // 0x127620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x127620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_127624:
    // 0x127624: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_127628:
    // 0x127628: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x127628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12762c:
    // 0x12762c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_127630:
    // 0x127630: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x127630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_127634:
    // 0x127634: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_127638:
    // 0x127638: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x127638u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12763c:
    // 0x12763c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_127640:
    // 0x127640: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x127640u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_127644:
    // 0x127644: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x127644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_127648:
    // 0x127648: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x127648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12764c:
    // 0x12764c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_127650:
    // 0x127650: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x127650u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_127654:
    // 0x127654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_127658:
    // 0x127658: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12765c:
    // 0x12765c: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
label_127660:
    if (ctx->pc == 0x127660u) {
        ctx->pc = 0x127660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12765Cu;
        // 0x127660: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127664u;
        goto label_127664;
    }
    ctx->pc = 0x12765Cu;
    {
        const bool branch_taken_0x12765c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x127660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12765Cu;
        // 0x127660: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12765c) {
            ctx->pc = 0x1276BCu;
            goto label_1276bc;
        }
    }
    ctx->pc = 0x127664u;
label_127664:
    // 0x127664: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
label_127668:
    if (ctx->pc == 0x127668u) {
        ctx->pc = 0x127668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127664u;
        // 0x127668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12766Cu;
        goto label_12766c;
    }
    ctx->pc = 0x127664u;
    {
        const bool branch_taken_0x127664 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x127668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127664u;
        // 0x127668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127664) {
            ctx->pc = 0x1276C0u;
            goto label_1276c0;
        }
    }
    ctx->pc = 0x12766Cu;
label_12766c:
    // 0x12766c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_127670:
    if (ctx->pc == 0x127670u) {
        ctx->pc = 0x127670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12766Cu;
        // 0x127670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127674u;
        goto label_127674;
    }
    ctx->pc = 0x12766Cu;
    {
        const bool branch_taken_0x12766c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x127670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12766Cu;
        // 0x127670: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12766c) {
            ctx->pc = 0x1276C4u;
            goto label_1276c4;
        }
    }
    ctx->pc = 0x127674u;
label_127674:
    // 0x127674: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x127674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_127678:
    // 0x127678: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x127678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12767c:
    // 0x12767c: 0x28842  srl         $s1, $v0, 1
    ctx->pc = 0x12767cu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_127680:
    // 0x127680: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x127680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_127684:
    // 0x127684: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x127684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_127688:
    // 0x127688: 0x2a0f809  jalr        $s5
label_12768c:
    if (ctx->pc == 0x12768Cu) {
        ctx->pc = 0x12768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127688u;
        // 0x12768c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127690u;
        goto label_127690;
    }
    ctx->pc = 0x127688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x127690u);
        ctx->pc = 0x12768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127688u;
        // 0x12768c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127688u, 0x127690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127690u;
label_127690:
    // 0x127690: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x127690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127694:
    // 0x127694: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_127698:
    if (ctx->pc == 0x127698u) {
        ctx->pc = 0x127698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127694u;
        // 0x127698: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12769Cu;
        goto label_12769c;
    }
    ctx->pc = 0x127694u;
    {
        const bool branch_taken_0x127694 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x127698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127694u;
        // 0x127698: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127694) {
            ctx->pc = 0x1276A8u;
            goto label_1276a8;
        }
    }
    ctx->pc = 0x12769Cu;
label_12769c:
    // 0x12769c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1276a0:
    if (ctx->pc == 0x1276A0u) {
        ctx->pc = 0x1276A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12769Cu;
        // 0x1276a0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276A4u;
        goto label_1276a4;
    }
    ctx->pc = 0x12769Cu;
    {
        const bool branch_taken_0x12769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1276A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12769Cu;
        // 0x1276a0: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12769c) {
            ctx->pc = 0x1276B0u;
            goto label_1276b0;
        }
    }
    ctx->pc = 0x1276A4u;
label_1276a4:
    // 0x1276a4: 0x0  nop
    ctx->pc = 0x1276a4u;
    // NOP
label_1276a8:
    // 0x1276a8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1276ac:
    if (ctx->pc == 0x1276ACu) {
        ctx->pc = 0x1276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276A8u;
        // 0x1276ac: 0x26340001  addiu       $s4, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276B0u;
        goto label_1276b0;
    }
    ctx->pc = 0x1276A8u;
    {
        const bool branch_taken_0x1276a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1276ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276A8u;
        // 0x1276ac: 0x26340001  addiu       $s4, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276a8) {
            ctx->pc = 0x1276C0u;
            goto label_1276c0;
        }
    }
    ctx->pc = 0x1276B0u;
label_1276b0:
    // 0x1276b0: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1276b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_1276b4:
    // 0x1276b4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_1276b8:
    if (ctx->pc == 0x1276B8u) {
        ctx->pc = 0x1276B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276B4u;
        // 0x1276b8: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276BCu;
        goto label_1276bc;
    }
    ctx->pc = 0x1276B4u;
    {
        const bool branch_taken_0x1276b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1276B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276B4u;
        // 0x1276b8: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1276b4) {
            ctx->pc = 0x127678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127678;
        }
    }
    ctx->pc = 0x1276BCu;
label_1276bc:
    // 0x1276bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1276bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1276c0:
    // 0x1276c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1276c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1276c4:
    // 0x1276c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1276c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1276c8:
    // 0x1276c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1276c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1276cc:
    // 0x1276cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1276ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1276d0:
    // 0x1276d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1276d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1276d4:
    // 0x1276d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1276d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1276d8:
    // 0x1276d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1276d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1276dc:
    // 0x1276dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1276dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1276e0:
    // 0x1276e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1276e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1276e4:
    // 0x1276e4: 0x3e00008  jr          $ra
label_1276e8:
    if (ctx->pc == 0x1276E8u) {
        ctx->pc = 0x1276E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E4u;
        // 0x1276e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1276ECu;
        goto label_1276ec;
    }
    ctx->pc = 0x1276E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1276E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1276E4u;
        // 0x1276e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1276E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1276ECu;
label_1276ec:
    // 0x1276ec: 0x0  nop
    ctx->pc = 0x1276ecu;
    // NOP
    ctx->pc = 0x1276f0u;
}
