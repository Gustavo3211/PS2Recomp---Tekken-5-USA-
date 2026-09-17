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

// Function: sub_002E7728
// Address: 0x2e7728 - 0x2e79a0
void sub_002E7728_0x2e7728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7728_0x2e7728");
#endif

    switch (ctx->pc) {
        case 0x2e774cu: goto label_2e774c;
        case 0x2e7764u: goto label_2e7764;
        case 0x2e77c8u: goto label_2e77c8;
        case 0x2e77d8u: goto label_2e77d8;
        case 0x2e7800u: goto label_2e7800;
        case 0x2e7820u: goto label_2e7820;
        case 0x2e783cu: goto label_2e783c;
        case 0x2e785cu: goto label_2e785c;
        case 0x2e7878u: goto label_2e7878;
        case 0x2e7898u: goto label_2e7898;
        case 0x2e78b4u: goto label_2e78b4;
        case 0x2e78c4u: goto label_2e78c4;
        case 0x2e78e4u: goto label_2e78e4;
        case 0x2e78f4u: goto label_2e78f4;
        case 0x2e7928u: goto label_2e7928;
        case 0x2e7938u: goto label_2e7938;
        case 0x2e7968u: goto label_2e7968;
        case 0x2e7988u: goto label_2e7988;
        default: break;
    }

    ctx->pc = 0x2e7728u;

    // 0x2e7728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e7728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e772c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e7730: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e7730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e7734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e7738: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e7738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e773c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e7740: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e7740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e7744: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2E7744u;
    SET_GPR_U32(ctx, 31, 0x2E774Cu);
    ctx->pc = 0x2E7748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7744u;
    // 0x2e7748: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2E7744u, 0x2E774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E774Cu;
label_2e774c:
    // 0x2e774c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e7750: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e7750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e7754: 0x2463feb0  addiu       $v1, $v1, -0x150
    ctx->pc = 0x2e7754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966960));
    // 0x2e7758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e775c: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2E775Cu;
    SET_GPR_U32(ctx, 31, 0x2E7764u);
    ctx->pc = 0x2E7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E775Cu;
    // 0x2e7760: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2E775Cu, 0x2E7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7764u;
label_2e7764:
    // 0x2e7764: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2e7764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2e7768: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e7768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e776c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E776Cu;
    {
        const bool branch_taken_0x2e776c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E776Cu;
        // 0x2e7770: 0x262500b8  addiu       $a1, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e776c) {
            ctx->pc = 0x2E7788u;
            goto label_2e7788;
        }
    }
    ctx->pc = 0x2E7774u;
    // 0x2e7774: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e7774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e7778: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e7778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e777c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2e777cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e7780: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E7780u;
    {
        const bool branch_taken_0x2e7780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7780) {
            ctx->pc = 0x2E7784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7780u;
            // 0x2e7784: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7798u;
            goto label_2e7798;
        }
    }
    ctx->pc = 0x2E7788u;
label_2e7788:
    // 0x2e7788: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e7788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e778c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e778cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7790: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e7790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2e7794: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2e7794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2e7798:
    // 0x2e7798: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x2e7798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e779c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E779Cu;
    {
        const bool branch_taken_0x2e779c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E779Cu;
        // 0x2e77a0: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e779c) {
            ctx->pc = 0x2E77B0u;
            goto label_2e77b0;
        }
    }
    ctx->pc = 0x2E77A4u;
    // 0x2e77a4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2e77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2e77a8: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E77A8u;
    {
        const bool branch_taken_0x2e77a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E77A8u;
        // 0x2e77ac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e77a8) {
            ctx->pc = 0x2E77BCu;
            goto label_2e77bc;
        }
    }
    ctx->pc = 0x2E77B0u;
label_2e77b0:
    // 0x2e77b0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2e77b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2e77b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e77b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e77b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e77bc:
    // 0x2e77bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e77bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77c0: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E77C0u;
    SET_GPR_U32(ctx, 31, 0x2E77C8u);
    ctx->pc = 0x2E77C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77C0u;
    // 0x2e77c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E77C0u, 0x2E77C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77C8u;
label_2e77c8:
    // 0x2e77c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e77c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e77ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77d0: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E77D0u;
    SET_GPR_U32(ctx, 31, 0x2E77D8u);
    ctx->pc = 0x2E77D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77D0u;
    // 0x2e77d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E77D0u, 0x2E77D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E77D8u;
label_2e77d8:
    // 0x2e77d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e77dc: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2e77dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2e77e0: 0x245305b8  addiu       $s3, $v0, 0x5B8
    ctx->pc = 0x2e77e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1464));
    // 0x2e77e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e77e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77e8: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x2e77e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x2e77ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e77ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e77f0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e77f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e77f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e77f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e77f8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E77F8u;
    SET_GPR_U32(ctx, 31, 0x2E7800u);
    ctx->pc = 0x2E77FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E77F8u;
    // 0x2e77fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E77F8u, 0x2E7800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7800u;
label_2e7800:
    // 0x2e7800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7804: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2e7804u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2e7808: 0x24e701a8  addiu       $a3, $a3, 0x1A8
    ctx->pc = 0x2e7808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 424));
    // 0x2e780c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e780cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e7810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7814: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e7814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7818: 0xc0b9d4c  jal         func_2E7530
    ctx->pc = 0x2E7818u;
    SET_GPR_U32(ctx, 31, 0x2E7820u);
    ctx->pc = 0x2E781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7818u;
    // 0x2e781c: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7530u, 0x2E7818u, 0x2E7820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7820u;
label_2e7820:
    // 0x2e7820: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2e7820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2e7824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7828: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e7828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e782c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e782cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7830: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e7830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e7834: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E7834u;
    SET_GPR_U32(ctx, 31, 0x2E783Cu);
    ctx->pc = 0x2E7838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7834u;
    // 0x2e7838: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E7834u, 0x2E783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E783Cu;
label_2e783c:
    // 0x2e783c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e783cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7840: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2e7840u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2e7844: 0x24e701f8  addiu       $a3, $a3, 0x1F8
    ctx->pc = 0x2e7844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 504));
    // 0x2e7848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e784c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e784cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7850: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e7850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7854: 0xc0b9d4c  jal         func_2E7530
    ctx->pc = 0x2E7854u;
    SET_GPR_U32(ctx, 31, 0x2E785Cu);
    ctx->pc = 0x2E7858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7854u;
    // 0x2e7858: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7530u, 0x2E7854u, 0x2E785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E785Cu;
label_2e785c:
    // 0x2e785c: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2e785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2e7860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7864: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e7864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e7868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e786c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e7870: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E7870u;
    SET_GPR_U32(ctx, 31, 0x2E7878u);
    ctx->pc = 0x2E7874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7870u;
    // 0x2e7874: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E7870u, 0x2E7878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7878u;
label_2e7878:
    // 0x2e7878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e787c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2e787cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2e7880: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e7880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7884: 0x24e70248  addiu       $a3, $a3, 0x248
    ctx->pc = 0x2e7884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 584));
    // 0x2e7888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e7888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e788c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e788cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7890: 0xc0b9d4c  jal         func_2E7530
    ctx->pc = 0x2E7890u;
    SET_GPR_U32(ctx, 31, 0x2E7898u);
    ctx->pc = 0x2E7894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7890u;
    // 0x2e7894: 0x2408000f  addiu       $t0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7530u, 0x2E7890u, 0x2E7898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7898u;
label_2e7898:
    // 0x2e7898: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2e7898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2e789c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e789cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78a0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e78a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e78a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e78a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78a8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e78ac: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E78ACu;
    SET_GPR_U32(ctx, 31, 0x2E78B4u);
    ctx->pc = 0x2E78B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78ACu;
    // 0x2e78b0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E78ACu, 0x2E78B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78B4u;
label_2e78b4:
    // 0x2e78b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e78b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e78b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e78bc: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E78BCu;
    SET_GPR_U32(ctx, 31, 0x2E78C4u);
    ctx->pc = 0x2E78C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78BCu;
    // 0x2e78c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E78BCu, 0x2E78C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78C4u;
label_2e78c4:
    // 0x2e78c4: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2e78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2e78c8: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x2e78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x2e78cc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e78d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e78d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e78d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e78d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e78dc: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E78DCu;
    SET_GPR_U32(ctx, 31, 0x2E78E4u);
    ctx->pc = 0x2E78E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78DCu;
    // 0x2e78e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E78DCu, 0x2E78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78E4u;
label_2e78e4:
    // 0x2e78e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e78e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e78e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e78ec: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E78ECu;
    SET_GPR_U32(ctx, 31, 0x2E78F4u);
    ctx->pc = 0x2E78F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78ECu;
    // 0x2e78f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E78ECu, 0x2E78F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78F4u;
label_2e78f4:
    // 0x2e78f4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e78f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e78f8: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2e78f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2e78fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e78fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7900: 0x24630428  addiu       $v1, $v1, 0x428
    ctx->pc = 0x2e7900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1064));
    // 0x2e7904: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2e7904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2e7908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e790c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e790cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e7910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7914: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2e7914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2e7918: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x2e7918u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x2e791c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e7920: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E7920u;
    SET_GPR_U32(ctx, 31, 0x2E7928u);
    ctx->pc = 0x2E7924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7920u;
    // 0x2e7924: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E7920u, 0x2E7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7928u;
label_2e7928:
    // 0x2e7928: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e792c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e792cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e7930: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2E7930u;
    SET_GPR_U32(ctx, 31, 0x2E7938u);
    ctx->pc = 0x2E7934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7930u;
    // 0x2e7934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2E7930u, 0x2E7938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7938u;
label_2e7938:
    // 0x2e7938: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e7938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e793c: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x2e793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2e7940: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x2e7940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x2e7944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7948: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e7948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e794c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e794cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e7950: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2e7950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2e7954: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2e7954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e7958: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x2e7958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2e795c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e7960: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2E7960u;
    SET_GPR_U32(ctx, 31, 0x2E7968u);
    ctx->pc = 0x2E7964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7960u;
    // 0x2e7964: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2E7960u, 0x2E7968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7968u;
label_2e7968:
    // 0x2e7968: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E7968u;
    {
        const bool branch_taken_0x2e7968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7968u;
        // 0x2e796c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7968) {
            ctx->pc = 0x2E7988u;
            goto label_2e7988;
        }
    }
    ctx->pc = 0x2E7970u;
    // 0x2e7970: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e7970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e7974: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e7974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e7978: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e7978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e797c: 0x2484055c  addiu       $a0, $a0, 0x55C
    ctx->pc = 0x2e797cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1372));
    // 0x2e7980: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E7980u;
    SET_GPR_U32(ctx, 31, 0x2E7988u);
    ctx->pc = 0x2E7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7980u;
    // 0x2e7984: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E7980u, 0x2E7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7988u;
label_2e7988:
    // 0x2e7988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e7988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e798c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e798cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7990: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e7990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e7994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e7994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7998: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7998u;
        // 0x2e799c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E79A0u;
}
