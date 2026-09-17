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

// Function: sub_002E44A0
// Address: 0x2e44a0 - 0x2e4618
void sub_002E44A0_0x2e44a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E44A0_0x2e44a0");
#endif

    switch (ctx->pc) {
        case 0x2e4500u: goto label_2e4500;
        case 0x2e452cu: goto label_2e452c;
        case 0x2e4548u: goto label_2e4548;
        case 0x2e4578u: goto label_2e4578;
        case 0x2e45b4u: goto label_2e45b4;
        case 0x2e45e8u: goto label_2e45e8;
        default: break;
    }

    ctx->pc = 0x2e44a0u;

label_2e44a0:
    // 0x2e44a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e44a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e44a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e44a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e44a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e44a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2e44acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2e44b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e44b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2e44b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2e44b8: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x2e44b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44bc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2e44bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2e44c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e44c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44c4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2e44c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2e44c8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e44c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44cc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2e44ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2e44d0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2e44d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44d4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2e44d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2e44d8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2e44d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44dc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2e44dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2e44e0: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2e44e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e44e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e44e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e44e8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2e44e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2e44ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e44f0: 0x2442edb0  addiu       $v0, $v0, -0x1250
    ctx->pc = 0x2e44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
    // 0x2e44f4: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x2e44f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2e44f8: 0xc0c13d6  jal         func_304F58
    ctx->pc = 0x2E44F8u;
    SET_GPR_U32(ctx, 31, 0x2E4500u);
    ctx->pc = 0x2E44FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E44F8u;
    // 0x2e44fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304F58u, 0x2E44F8u, 0x2E4500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4500u;
label_2e4500:
    // 0x2e4500: 0x261200fc  addiu       $s2, $s0, 0xFC
    ctx->pc = 0x2e4500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    // 0x2e4504: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e4504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2e4508: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2E4508u;
    {
        const bool branch_taken_0x2e4508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4508u;
        // 0x2e450c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4508) {
            ctx->pc = 0x2E4598u;
            goto label_2e4598;
        }
    }
    ctx->pc = 0x2E4510u;
    // 0x2e4510: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e4510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4514: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2e4514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4518: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2e4518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e451c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e451cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4520: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4524: 0xc0b9186  jal         func_2E4618
    ctx->pc = 0x2E4524u;
    SET_GPR_U32(ctx, 31, 0x2E452Cu);
    ctx->pc = 0x2E4528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4524u;
    // 0x2e4528: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4618u, 0x2E4524u, 0x2E452Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E452Cu;
label_2e452c:
    // 0x2e452c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e452cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e4530: 0x2442fd10  addiu       $v0, $v0, -0x2F0
    ctx->pc = 0x2e4530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x2e4534: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E4534u;
    {
        const bool branch_taken_0x2e4534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4534u;
        // 0x2e4538: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4534) {
            ctx->pc = 0x2E4588u;
            goto label_2e4588;
        }
    }
    ctx->pc = 0x2E453Cu;
    // 0x2e453c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e453cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4540: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E4540u;
    SET_GPR_U32(ctx, 31, 0x2E4548u);
    ctx->pc = 0x2E4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4540u;
    // 0x2e4544: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E4540u, 0x2E4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4548u;
label_2e4548:
    // 0x2e4548: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e454c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4550: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4554: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e4554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4558: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2e4558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e455c: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x2e455cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e4564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4568: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e456c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e456cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4570: 0xc0b9128  jal         func_2E44A0
    ctx->pc = 0x2E4570u;
    SET_GPR_U32(ctx, 31, 0x2E4578u);
    ctx->pc = 0x2E4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4570u;
    // 0x2e4574: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E44A0u;
    goto label_2e44a0;
    ctx->pc = 0x2E4578u;
label_2e4578:
    // 0x2e4578: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2e4578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2e457c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2e457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2e4580: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2E4580u;
    {
        const bool branch_taken_0x2e4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4580u;
        // 0x2e4584: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4580) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E4588u;
label_2e4588:
    // 0x2e4588: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2e4588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2e458c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e4590: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2E4590u;
    {
        const bool branch_taken_0x2e4590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4590u;
        // 0x2e4594: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4590) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E4598u;
label_2e4598:
    // 0x2e4598: 0x8fa90060  lw          $t1, 0x60($sp)
    ctx->pc = 0x2e4598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e459c: 0x26850001  addiu       $a1, $s4, 0x1
    ctx->pc = 0x2e459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e45a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e45a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45a4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e45a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45a8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2e45a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e45ac: 0xc0b9186  jal         func_2E4618
    ctx->pc = 0x2E45ACu;
    SET_GPR_U32(ctx, 31, 0x2E45B4u);
    ctx->pc = 0x2E45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45ACu;
    // 0x2e45b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4618u, 0x2E45ACu, 0x2E45B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45B4u;
label_2e45b4:
    // 0x2e45b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e45b8: 0x2442fd20  addiu       $v0, $v0, -0x2E0
    ctx->pc = 0x2e45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x2e45bc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e45bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e45c0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2e45c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2e45c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2e45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e45c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E45C8u;
    {
        const bool branch_taken_0x2e45c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E45CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E45C8u;
        // 0x2e45cc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e45c8) {
            ctx->pc = 0x2E45E8u;
            goto label_2e45e8;
        }
    }
    ctx->pc = 0x2E45D0u;
    // 0x2e45d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e45d4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e45d8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e45dc: 0x248404b4  addiu       $a0, $a0, 0x4B4
    ctx->pc = 0x2e45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1204));
    // 0x2e45e0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E45E0u;
    SET_GPR_U32(ctx, 31, 0x2E45E8u);
    ctx->pc = 0x2E45E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E45E0u;
    // 0x2e45e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E45E0u, 0x2E45E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E45E8u;
label_2e45e8:
    // 0x2e45e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e45e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e45ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2e45ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e45f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2e45f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e45f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2e45f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e45f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2e45f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e45fc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2e45fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e4600: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2e4600u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4604: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2e4604u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e4608: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2e4608u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e460c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2e460cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e4610: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4610u;
        // 0x2e4614: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4618u;
}
