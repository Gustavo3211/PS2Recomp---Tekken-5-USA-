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

// Function: sub_002E04B0
// Address: 0x2e04b0 - 0x2e05d8
void sub_002E04B0_0x2e04b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E04B0_0x2e04b0");
#endif

    switch (ctx->pc) {
        case 0x2e0578u: goto label_2e0578;
        case 0x2e059cu: goto label_2e059c;
        default: break;
    }

    ctx->pc = 0x2e04b0u;

    // 0x2e04b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e04b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e04b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2e04b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e04b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e04bc: 0x24510050  addiu       $s1, $v0, 0x50
    ctx->pc = 0x2e04bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2e04c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e04c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e04c4: 0x313200ff  andi        $s2, $t1, 0xFF
    ctx->pc = 0x2e04c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2e04c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e04c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e04cc: 0x315300ff  andi        $s3, $t2, 0xFF
    ctx->pc = 0x2e04ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x2e04d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e04d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e04d4: 0x30f400ff  andi        $s4, $a3, 0xFF
    ctx->pc = 0x2e04d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e04d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2e04d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2e04dc: 0x311500ff  andi        $s5, $t0, 0xFF
    ctx->pc = 0x2e04dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2e04e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2e04e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2e04e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e04e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04e8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2e04e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2e04ec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e04ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e04f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e04f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e04f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e04f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e04f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e04fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e04fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0500: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e0500u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0504: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2e0504u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0508: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e050c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E050Cu;
    {
        const bool branch_taken_0x2e050c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E050Cu;
        // 0x2e0510: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e050c) {
            ctx->pc = 0x2E0528u;
            goto label_2e0528;
        }
    }
    ctx->pc = 0x2E0514u;
    // 0x2e0514: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e0514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e0518: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2e0518u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e051c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2e051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2e0520: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0520u;
    {
        const bool branch_taken_0x2e0520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0520) {
            ctx->pc = 0x2E0534u;
            goto label_2e0534;
        }
    }
    ctx->pc = 0x2E0528u;
label_2e0528:
    // 0x2e0528: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e0528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e052c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e052cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0530: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e0530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2e0534:
    // 0x2e0534: 0x1160000e  beqz        $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0534u;
    {
        const bool branch_taken_0x2e0534 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0534u;
        // 0x2e0538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0534) {
            ctx->pc = 0x2E0570u;
            goto label_2e0570;
        }
    }
    ctx->pc = 0x2E053Cu;
    // 0x2e053c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e053cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0540: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e0540u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e0544: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2e0544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e0548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e054c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e054cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0550: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e0550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e0554: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e0554u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0558: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e0558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e055c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e055cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0560: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e0560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0564: 0x80b8024  j           func_2E0090
    ctx->pc = 0x2E0564u;
    ctx->pc = 0x2E0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0564u;
    // 0x2e0568: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    sub_002E0090_0x2e0090(rdram, ctx, runtime); return;
    ctx->pc = 0x2E056Cu;
    // 0x2e056c: 0x0  nop
    ctx->pc = 0x2e056cu;
    // NOP
label_2e0570:
    // 0x2e0570: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E0570u;
    SET_GPR_U32(ctx, 31, 0x2E0578u);
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E0570u, 0x2E0578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0578u;
label_2e0578:
    // 0x2e0578: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e0578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e057c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e057cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0580: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2e0580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e0584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0588: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e0588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e058c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e058cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0590: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2e0590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0594: 0xc0b7ffe  jal         func_2DFFF8
    ctx->pc = 0x2E0594u;
    SET_GPR_U32(ctx, 31, 0x2E059Cu);
    ctx->pc = 0x2E0598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0594u;
    // 0x2e0598: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFFF8u, 0x2E0594u, 0x2E059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E059Cu;
label_2e059c:
    // 0x2e059c: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2e059cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2e05a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e05a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e05a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e05a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e05a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e05a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e05ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2e05acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2e05b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e05b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e05b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e05b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e05b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e05b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e05bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2e05bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2e05c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e05c4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2e05c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e05c8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e05c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e05cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E05CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E05CCu;
        // 0x2e05d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E05CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E05D4u;
    // 0x2e05d4: 0x0  nop
    ctx->pc = 0x2e05d4u;
    // NOP
    ctx->pc = 0x2e05d8u;
}
