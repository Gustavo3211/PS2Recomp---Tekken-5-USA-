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

// Function: sub_00324678
// Address: 0x324678 - 0x324768
void sub_00324678_0x324678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324678_0x324678");
#endif

    switch (ctx->pc) {
        case 0x324678u: goto label_324678;
        case 0x32467cu: goto label_32467c;
        case 0x324680u: goto label_324680;
        case 0x324684u: goto label_324684;
        case 0x324688u: goto label_324688;
        case 0x32468cu: goto label_32468c;
        case 0x324690u: goto label_324690;
        case 0x324694u: goto label_324694;
        case 0x324698u: goto label_324698;
        case 0x32469cu: goto label_32469c;
        case 0x3246a0u: goto label_3246a0;
        case 0x3246a4u: goto label_3246a4;
        case 0x3246a8u: goto label_3246a8;
        case 0x3246acu: goto label_3246ac;
        case 0x3246b0u: goto label_3246b0;
        case 0x3246b4u: goto label_3246b4;
        case 0x3246b8u: goto label_3246b8;
        case 0x3246bcu: goto label_3246bc;
        case 0x3246c0u: goto label_3246c0;
        case 0x3246c4u: goto label_3246c4;
        case 0x3246c8u: goto label_3246c8;
        case 0x3246ccu: goto label_3246cc;
        case 0x3246d0u: goto label_3246d0;
        case 0x3246d4u: goto label_3246d4;
        case 0x3246d8u: goto label_3246d8;
        case 0x3246dcu: goto label_3246dc;
        case 0x3246e0u: goto label_3246e0;
        case 0x3246e4u: goto label_3246e4;
        case 0x3246e8u: goto label_3246e8;
        case 0x3246ecu: goto label_3246ec;
        case 0x3246f0u: goto label_3246f0;
        case 0x3246f4u: goto label_3246f4;
        case 0x3246f8u: goto label_3246f8;
        case 0x3246fcu: goto label_3246fc;
        case 0x324700u: goto label_324700;
        case 0x324704u: goto label_324704;
        case 0x324708u: goto label_324708;
        case 0x32470cu: goto label_32470c;
        case 0x324710u: goto label_324710;
        case 0x324714u: goto label_324714;
        case 0x324718u: goto label_324718;
        case 0x32471cu: goto label_32471c;
        case 0x324720u: goto label_324720;
        case 0x324724u: goto label_324724;
        case 0x324728u: goto label_324728;
        case 0x32472cu: goto label_32472c;
        case 0x324730u: goto label_324730;
        case 0x324734u: goto label_324734;
        case 0x324738u: goto label_324738;
        case 0x32473cu: goto label_32473c;
        case 0x324740u: goto label_324740;
        case 0x324744u: goto label_324744;
        case 0x324748u: goto label_324748;
        case 0x32474cu: goto label_32474c;
        case 0x324750u: goto label_324750;
        case 0x324754u: goto label_324754;
        case 0x324758u: goto label_324758;
        case 0x32475cu: goto label_32475c;
        case 0x324760u: goto label_324760;
        case 0x324764u: goto label_324764;
        default: break;
    }

    ctx->pc = 0x324678u;

label_324678:
    // 0x324678: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32467c:
    // 0x32467c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_324680:
    // 0x324680: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_324684:
    // 0x324684: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x324684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_324688:
    // 0x324688: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32468c:
    // 0x32468c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32468cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_324690:
    // 0x324690: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x324690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_324694:
    // 0x324694: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x324694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_324698:
    // 0x324698: 0xc0cb224  jal         func_32C890
label_32469c:
    if (ctx->pc == 0x32469Cu) {
        ctx->pc = 0x32469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324698u;
        // 0x32469c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246A0u;
        goto label_3246a0;
    }
    ctx->pc = 0x324698u;
    SET_GPR_U32(ctx, 31, 0x3246A0u);
    ctx->pc = 0x32469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324698u;
    // 0x32469c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x324698u, 0x3246A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246A0u;
label_3246a0:
    // 0x3246a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3246a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3246a4:
    // 0x3246a4: 0x52000029  beql        $s0, $zero, . + 4 + (0x29 << 2)
label_3246a8:
    if (ctx->pc == 0x3246A8u) {
        ctx->pc = 0x3246A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246A4u;
        // 0x3246a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246ACu;
        goto label_3246ac;
    }
    ctx->pc = 0x3246A4u;
    {
        const bool branch_taken_0x3246a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3246a4) {
            ctx->pc = 0x3246A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3246A4u;
            // 0x3246a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32474Cu;
            goto label_32474c;
        }
    }
    ctx->pc = 0x3246ACu;
label_3246ac:
    // 0x3246ac: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3246b0:
    if (ctx->pc == 0x3246B0u) {
        ctx->pc = 0x3246B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246ACu;
        // 0x3246b0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246B4u;
        goto label_3246b4;
    }
    ctx->pc = 0x3246ACu;
    {
        const bool branch_taken_0x3246ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3246B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246ACu;
        // 0x3246b0: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3246ac) {
            ctx->pc = 0x3246E0u;
            goto label_3246e0;
        }
    }
    ctx->pc = 0x3246B4u;
label_3246b4:
    // 0x3246b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3246b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3246b8:
    // 0x3246b8: 0x308200c0  andi        $v0, $a0, 0xC0
    ctx->pc = 0x3246b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)192);
label_3246bc:
    // 0x3246bc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_3246c0:
    if (ctx->pc == 0x3246C0u) {
        ctx->pc = 0x3246C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246BCu;
        // 0x3246c0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246C4u;
        goto label_3246c4;
    }
    ctx->pc = 0x3246BCu;
    {
        const bool branch_taken_0x3246bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3246bc) {
            ctx->pc = 0x3246C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3246BCu;
            // 0x3246c0: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3246D0u;
            goto label_3246d0;
        }
    }
    ctx->pc = 0x3246C4u;
label_3246c4:
    // 0x3246c4: 0x34820100  ori         $v0, $a0, 0x100
    ctx->pc = 0x3246c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_3246c8:
    // 0x3246c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3246c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3246cc:
    // 0x3246cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3246ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3246d0:
    // 0x3246d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3246d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3246d4:
    // 0x3246d4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3246d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3246d8:
    // 0x3246d8: 0x40f809  jalr        $v0
label_3246dc:
    if (ctx->pc == 0x3246DCu) {
        ctx->pc = 0x3246DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246D8u;
        // 0x3246dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246E0u;
        goto label_3246e0;
    }
    ctx->pc = 0x3246D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3246E0u);
        ctx->pc = 0x3246DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246D8u;
        // 0x3246dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3246D8u, 0x3246E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3246E0u;
label_3246e0:
    // 0x3246e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3246e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3246e4:
    // 0x3246e4: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x3246e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
label_3246e8:
    // 0x3246e8: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x3246e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3246ec:
    // 0x3246ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3246ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3246f0:
    // 0x3246f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3246f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3246f4:
    // 0x3246f4: 0xc0cb628  jal         func_32D8A0
label_3246f8:
    if (ctx->pc == 0x3246F8u) {
        ctx->pc = 0x3246F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3246F4u;
        // 0x3246f8: 0x2684f940  addiu       $a0, $s4, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3246FCu;
        goto label_3246fc;
    }
    ctx->pc = 0x3246F4u;
    SET_GPR_U32(ctx, 31, 0x3246FCu);
    ctx->pc = 0x3246F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3246F4u;
    // 0x3246f8: 0x2684f940  addiu       $a0, $s4, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8A0u, 0x3246F4u, 0x3246FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3246FCu;
label_3246fc:
    // 0x3246fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3246fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_324700:
    // 0x324700: 0x8cc200e0  lw          $v0, 0xE0($a2)
    ctx->pc = 0x324700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
label_324704:
    // 0x324704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_324708:
    if (ctx->pc == 0x324708u) {
        ctx->pc = 0x324708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324704u;
        // 0x324708: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32470Cu;
        goto label_32470c;
    }
    ctx->pc = 0x324704u;
    {
        const bool branch_taken_0x324704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324704u;
        // 0x324708: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324704) {
            ctx->pc = 0x324740u;
            goto label_324740;
        }
    }
    ctx->pc = 0x32470Cu;
label_32470c:
    // 0x32470c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x32470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_324710:
    // 0x324710: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x324710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_324714:
    // 0x324714: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x324714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_324718:
    // 0x324718: 0x50530001  beql        $v0, $s3, . + 4 + (0x1 << 2)
label_32471c:
    if (ctx->pc == 0x32471Cu) {
        ctx->pc = 0x32471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324718u;
        // 0x32471c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324720u;
        goto label_324720;
    }
    ctx->pc = 0x324718u;
    {
        const bool branch_taken_0x324718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x324718) {
            ctx->pc = 0x32471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324718u;
            // 0x32471c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324720u;
            goto label_324720;
        }
    }
    ctx->pc = 0x324720u;
label_324720:
    // 0x324720: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x324720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_324724:
    // 0x324724: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x324724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_324728:
    // 0x324728: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_32472c:
    if (ctx->pc == 0x32472Cu) {
        ctx->pc = 0x32472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324728u;
        // 0x32472c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x324730u;
        goto label_324730;
    }
    ctx->pc = 0x324728u;
    {
        const bool branch_taken_0x324728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x324728) {
            ctx->pc = 0x32472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324728u;
            // 0x32472c: 0x2a220004  slti        $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x324740u;
            goto label_324740;
        }
    }
    ctx->pc = 0x324730u;
label_324730:
    // 0x324730: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x324730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_324734:
    // 0x324734: 0x40f809  jalr        $v0
label_324738:
    if (ctx->pc == 0x324738u) {
        ctx->pc = 0x324738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324734u;
        // 0x324738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32473Cu;
        goto label_32473c;
    }
    ctx->pc = 0x324734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32473Cu);
        ctx->pc = 0x324738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324734u;
        // 0x324738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324734u, 0x32473Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32473Cu;
label_32473c:
    // 0x32473c: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x32473cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_324740:
    // 0x324740: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_324744:
    if (ctx->pc == 0x324744u) {
        ctx->pc = 0x324744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324740u;
        // 0x324744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324748u;
        goto label_324748;
    }
    ctx->pc = 0x324740u;
    {
        const bool branch_taken_0x324740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324740) {
            ctx->pc = 0x324744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324740u;
            // 0x324744: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3246F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3246f0;
        }
    }
    ctx->pc = 0x324748u;
label_324748:
    // 0x324748: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32474c:
    // 0x32474c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32474cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_324750:
    // 0x324750: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_324754:
    // 0x324754: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_324758:
    // 0x324758: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x324758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32475c:
    // 0x32475c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32475cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_324760:
    // 0x324760: 0x3e00008  jr          $ra
label_324764:
    if (ctx->pc == 0x324764u) {
        ctx->pc = 0x324764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324760u;
        // 0x324764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x324768u;
        goto label_fallthrough_0x324760;
    }
    ctx->pc = 0x324760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324760u;
        // 0x324764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x324760:
    ctx->pc = 0x324768u;
}
