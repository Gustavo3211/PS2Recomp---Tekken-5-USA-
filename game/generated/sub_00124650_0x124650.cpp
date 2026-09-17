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

// Function: sub_00124650
// Address: 0x124650 - 0x124760
void sub_00124650_0x124650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124650_0x124650");
#endif

    switch (ctx->pc) {
        case 0x124684u: goto label_124684;
        case 0x124698u: goto label_124698;
        case 0x1246ccu: goto label_1246cc;
        case 0x1246e0u: goto label_1246e0;
        case 0x124704u: goto label_124704;
        case 0x124710u: goto label_124710;
        case 0x12473cu: goto label_12473c;
        default: break;
    }

    ctx->pc = 0x124650u;

    // 0x124650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124654: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x124654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x124658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x124658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12465c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x124660: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x124660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x124664: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x124664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124668: 0x24a5f220  addiu       $a1, $a1, -0xDE0
    ctx->pc = 0x124668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
    // 0x12466c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12466cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124670: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x124670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x124674: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x124674u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x124678: 0x2484000d  addiu       $a0, $a0, 0xD
    ctx->pc = 0x124678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
    // 0x12467c: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x12467Cu;
    SET_GPR_U32(ctx, 31, 0x124684u);
    ctx->pc = 0x124680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12467Cu;
    // 0x124680: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x12467Cu, 0x124684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124684u;
label_124684:
    // 0x124684: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x124684u;
    {
        const bool branch_taken_0x124684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124684u;
        // 0x124688: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124684) {
            ctx->pc = 0x1246B8u;
            goto label_1246b8;
        }
    }
    ctx->pc = 0x12468Cu;
    // 0x12468c: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x12468cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x124690: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x124690u;
    SET_GPR_U32(ctx, 31, 0x124698u);
    ctx->pc = 0x124694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124690u;
    // 0x124694: 0x2605f228  addiu       $a1, $s0, -0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x124690u, 0x124698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124698u;
label_124698:
    // 0x124698: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124698u;
    {
        const bool branch_taken_0x124698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124698u;
        // 0x12469c: 0x2403007a  addiu       $v1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124698) {
            ctx->pc = 0x1246C0u;
            goto label_1246c0;
        }
    }
    ctx->pc = 0x1246A0u;
    // 0x1246a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1246a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1246a4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1246a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1246a8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1246A8u;
    {
        const bool branch_taken_0x1246a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1246ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246A8u;
        // 0x1246ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246a8) {
            ctx->pc = 0x1246C4u;
            goto label_1246c4;
        }
    }
    ctx->pc = 0x1246B0u;
    // 0x1246b0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1246B0u;
    {
        const bool branch_taken_0x1246b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246B0u;
        // 0x1246b4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246b0) {
            ctx->pc = 0x12474Cu;
            goto label_12474c;
        }
    }
    ctx->pc = 0x1246B8u;
label_1246b8:
    // 0x1246b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1246B8u;
    {
        const bool branch_taken_0x1246b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1246B8u;
        // 0x1246bc: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246b8) {
            ctx->pc = 0x1246C4u;
            goto label_1246c4;
        }
    }
    ctx->pc = 0x1246C0u;
label_1246c0:
    // 0x1246c0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1246c4:
    // 0x1246c4: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x1246C4u;
    SET_GPR_U32(ctx, 31, 0x1246CCu);
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x1246C4u, 0x1246CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246CCu;
label_1246cc:
    // 0x1246cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1246ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1246d0: 0x2605f228  addiu       $a1, $s0, -0xDD8
    ctx->pc = 0x1246d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963752));
    // 0x1246d4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1246d8: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x1246D8u;
    SET_GPR_U32(ctx, 31, 0x1246E0u);
    ctx->pc = 0x1246DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246D8u;
    // 0x1246dc: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x1246D8u, 0x1246E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1246E0u;
label_1246e0:
    // 0x1246e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1246E0u;
    {
        const bool branch_taken_0x1246e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1246e0) {
            ctx->pc = 0x1246E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1246E0u;
            // 0x1246e4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1246F8u;
            goto label_1246f8;
        }
    }
    ctx->pc = 0x1246E8u;
    // 0x1246e8: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1246e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1246ec: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1246ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1246f0: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x1246f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1246f4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1246f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1246f8:
    // 0x1246f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1246f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1246fc: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x1246FCu;
    SET_GPR_U32(ctx, 31, 0x124704u);
    ctx->pc = 0x124700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1246FCu;
    // 0x124700: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x1246FCu, 0x124704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124704u;
label_124704:
    // 0x124704: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x124708: 0xc048e50  jal         func_123940
    ctx->pc = 0x124708u;
    SET_GPR_U32(ctx, 31, 0x124710u);
    ctx->pc = 0x12470Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124708u;
    // 0x12470c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123940u, 0x124708u, 0x124710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124710u;
label_124710:
    // 0x124710: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x124710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124718: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x124718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x12471c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x12471cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x124720: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x124720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x124724: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x124724u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x124728: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124728u;
    {
        const bool branch_taken_0x124728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x12472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124728u;
        // 0x12472c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124728) {
            ctx->pc = 0x124744u;
            goto label_124744;
        }
    }
    ctx->pc = 0x124730u;
    // 0x124730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124734: 0xc048e3e  jal         func_1238F8
    ctx->pc = 0x124734u;
    SET_GPR_U32(ctx, 31, 0x12473Cu);
    ctx->pc = 0x124738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124734u;
    // 0x124738: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1238F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1238F8u, 0x124734u, 0x12473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12473Cu;
label_12473c:
    // 0x12473c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124740: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x124740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_124744:
    // 0x124744: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x124744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124748: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x124748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12474c:
    // 0x12474c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12474cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124750: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x124750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124754: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124758: 0x3e00008  jr          $ra
    ctx->pc = 0x124758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124758u;
        // 0x12475c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124760u;
}
