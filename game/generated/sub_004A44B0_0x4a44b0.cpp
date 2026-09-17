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

// Function: sub_004A44B0
// Address: 0x4a44b0 - 0x4a4590
void sub_004A44B0_0x4a44b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A44B0_0x4a44b0");
#endif

    switch (ctx->pc) {
        case 0x4a4548u: goto label_4a4548;
        case 0x4a4558u: goto label_4a4558;
        case 0x4a4568u: goto label_4a4568;
        case 0x4a4578u: goto label_4a4578;
        case 0x4a4588u: goto label_4a4588;
        default: break;
    }

    ctx->pc = 0x4a44b0u;

    // 0x4a44b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a44b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a44b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a44b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a44b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a44bc: 0x24470c08  addiu       $a3, $v0, 0xC08
    ctx->pc = 0x4a44bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
    // 0x4a44c0: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4a44c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4a44c4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a44c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a44c8: 0x84a3d694  lh          $v1, -0x296C($a1)
    ctx->pc = 0x4a44c8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D694u));
    // 0x4a44cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4a44ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a44d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C08u));
    // 0x4a44d4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x4a44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x4a44d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a44d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a44dc: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x4a44dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a44e0: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x4a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x4a44e4: 0x94a30148  lhu         $v1, 0x148($a1)
    ctx->pc = 0x4a44e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x4a44e8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4a44e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a44ec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4a44ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a44f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A44F0u;
    {
        const bool branch_taken_0x4a44f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a44f0) {
            ctx->pc = 0x4A44F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A44F0u;
            // 0x4a44f4: 0x84a2000e  lh          $v0, 0xE($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A4508u;
            goto label_4a4508;
        }
    }
    ctx->pc = 0x4A44F8u;
    // 0x4a44f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a44f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a44fc: 0x8123392  j           func_48CE48
    ctx->pc = 0x4A44FCu;
    ctx->pc = 0x4A4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A44FCu;
    // 0x4a4500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A4504u;
    // 0x4a4504: 0x0  nop
    ctx->pc = 0x4a4504u;
    // NOP
label_4a4508:
    // 0x4a4508: 0x34c3ffff  ori         $v1, $a2, 0xFFFF
    ctx->pc = 0x4a4508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a450c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a4510: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4514: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4a4514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4a4518: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4a4518u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a451c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x4a451cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4a4520: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A4520u;
    {
        const bool branch_taken_0x4a4520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4520u;
        // 0x4a4524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4520) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A4528u;
    // 0x4a4528: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4a4528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4a452c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a452cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a4530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a4530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4534: 0x8c63b1d0  lw          $v1, -0x4E30($v1)
    ctx->pc = 0x4a4534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947280)));
    // 0x4a4538: 0x600008  jr          $v1
    ctx->pc = 0x4A4538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A4540u: goto label_4a4540;
            case 0x4A4550u: goto label_4a4550;
            case 0x4A4560u: goto label_4a4560;
            case 0x4A4570u: goto label_4a4570;
            case 0x4A4580u: goto label_4a4580;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A4540u;
label_4a4540:
    // 0x4a4540: 0xc128e70  jal         func_4A39C0
    ctx->pc = 0x4A4540u;
    SET_GPR_U32(ctx, 31, 0x4A4548u);
    ctx->pc = 0x4A4544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4540u;
    // 0x4a4544: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A39C0u, 0x4A4540u, 0x4A4548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4548u;
label_4a4548:
    // 0x4a4548: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A4548u;
    {
        const bool branch_taken_0x4a4548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4548u;
        // 0x4a454c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4548) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A4550u;
label_4a4550:
    // 0x4a4550: 0xc128f86  jal         func_4A3E18
    ctx->pc = 0x4A4550u;
    SET_GPR_U32(ctx, 31, 0x4A4558u);
    ctx->pc = 0x4A4554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4550u;
    // 0x4a4554: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3E18u, 0x4A4550u, 0x4A4558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4558u;
label_4a4558:
    // 0x4a4558: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A4558u;
    {
        const bool branch_taken_0x4a4558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4558u;
        // 0x4a455c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4558) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A4560u;
label_4a4560:
    // 0x4a4560: 0xc12904c  jal         func_4A4130
    ctx->pc = 0x4A4560u;
    SET_GPR_U32(ctx, 31, 0x4A4568u);
    ctx->pc = 0x4A4564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4560u;
    // 0x4a4564: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4130u, 0x4A4560u, 0x4A4568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4568u;
label_4a4568:
    // 0x4a4568: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A4568u;
    {
        const bool branch_taken_0x4a4568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4568u;
        // 0x4a456c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4568) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A4570u;
label_4a4570:
    // 0x4a4570: 0xc129078  jal         func_4A41E0
    ctx->pc = 0x4A4570u;
    SET_GPR_U32(ctx, 31, 0x4A4578u);
    ctx->pc = 0x4A4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4570u;
    // 0x4a4574: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A41E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A41E0u, 0x4A4570u, 0x4A4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4578u;
label_4a4578:
    // 0x4a4578: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A4578u;
    {
        const bool branch_taken_0x4a4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4578u;
        // 0x4a457c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4578) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A4580u;
label_4a4580:
    // 0x4a4580: 0xc1290a0  jal         func_4A4280
    ctx->pc = 0x4A4580u;
    SET_GPR_U32(ctx, 31, 0x4A4588u);
    ctx->pc = 0x4A4584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4580u;
    // 0x4a4584: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4280u, 0x4A4580u, 0x4A4588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4588u;
label_4a4588:
    // 0x4a4588: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A4588u;
    {
        const bool branch_taken_0x4a4588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4588u;
        // 0x4a458c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4588) {
            ctx->pc = 0x4A45ACu;
            return;
        }
    }
    ctx->pc = 0x4A4590u;
}
