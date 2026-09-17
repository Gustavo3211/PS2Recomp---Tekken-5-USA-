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

// Function: sub_001FB4F0
// Address: 0x1fb4f0 - 0x1fbe08
void sub_001FB4F0_0x1fb4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB4F0_0x1fb4f0");
#endif

    switch (ctx->pc) {
        case 0x1fb5c8u: goto label_1fb5c8;
        case 0x1fb7acu: goto label_1fb7ac;
        case 0x1fb7c0u: goto label_1fb7c0;
        case 0x1fb7d4u: goto label_1fb7d4;
        case 0x1fb7e8u: goto label_1fb7e8;
        case 0x1fb814u: goto label_1fb814;
        case 0x1fb828u: goto label_1fb828;
        default: break;
    }

    ctx->pc = 0x1fb4f0u;

    // 0x1fb4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fb4f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb4f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fb4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb4fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb504: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fb504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fb508: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb50c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fb510: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fb510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fb514: 0x8603022c  lh          $v1, 0x22C($s0)
    ctx->pc = 0x1fb514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1fb518: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FB518u;
    {
        const bool branch_taken_0x1fb518 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1FB51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB518u;
        // 0x1fb51c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb518) {
            ctx->pc = 0x1FB590u;
            goto label_1fb590;
        }
    }
    ctx->pc = 0x1FB520u;
    // 0x1fb520: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fb520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb524: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB524u;
    {
        const bool branch_taken_0x1fb524 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fb524) {
            ctx->pc = 0x1FB528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB524u;
            // 0x1fb528: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB52Cu;
            goto label_1fb52c;
        }
    }
    ctx->pc = 0x1FB52Cu;
label_1fb52c:
    // 0x1fb52c: 0xac8300ac  sw          $v1, 0xAC($a0)
    ctx->pc = 0x1fb52cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
    // 0x1fb530: 0x86020228  lh          $v0, 0x228($s0)
    ctx->pc = 0x1fb530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1fb534: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb538: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB538u;
    {
        const bool branch_taken_0x1fb538 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fb538) {
            ctx->pc = 0x1FB53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB538u;
            // 0x1fb53c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB540u;
            goto label_1fb540;
        }
    }
    ctx->pc = 0x1FB540u;
label_1fb540:
    // 0x1fb540: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1fb540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1fb544: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fb544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb548: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x1fb548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1fb54c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FB54Cu;
    {
        const bool branch_taken_0x1fb54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb54c) {
            ctx->pc = 0x1FB550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB54Cu;
            // 0x1fb550: 0xaca200b8  sw          $v0, 0xB8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB5B4u;
            goto label_1fb5b4;
        }
    }
    ctx->pc = 0x1FB554u;
    // 0x1fb554: 0x8603022c  lh          $v1, 0x22C($s0)
    ctx->pc = 0x1fb554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 556)));
    // 0x1fb558: 0x86040228  lh          $a0, 0x228($s0)
    ctx->pc = 0x1fb558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1fb55c: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB55Cu;
    {
        const bool branch_taken_0x1fb55c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1fb55c) {
            ctx->pc = 0x1FB560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB55Cu;
            // 0x1fb560: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB564u;
            goto label_1fb564;
        }
    }
    ctx->pc = 0x1FB564u;
label_1fb564:
    // 0x1fb564: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1fb564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1fb568: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB568u;
    {
        const bool branch_taken_0x1fb568 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1fb568) {
            ctx->pc = 0x1FB56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB568u;
            // 0x1fb56c: 0x42023  negu        $a0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB570u;
            goto label_1fb570;
        }
    }
    ctx->pc = 0x1FB570u;
label_1fb570:
    // 0x1fb570: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fb574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb57c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fb580: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1fb580u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fb584: 0x1012  mflo        $v0
    ctx->pc = 0x1fb584u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fb588: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FB588u;
    {
        const bool branch_taken_0x1fb588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB588u;
        // 0x1fb58c: 0xaca200b8  sw          $v0, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb588) {
            ctx->pc = 0x1FB5B4u;
            goto label_1fb5b4;
        }
    }
    ctx->pc = 0x1FB590u;
label_1fb590:
    // 0x1fb590: 0x9202020d  lbu         $v0, 0x20D($s0)
    ctx->pc = 0x1fb590u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 525)));
    // 0x1fb594: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FB594u;
    {
        const bool branch_taken_0x1fb594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB594u;
        // 0x1fb598: 0x8f8397c8  lw          $v1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb594) {
            ctx->pc = 0x1FB5BCu;
            goto label_1fb5bc;
        }
    }
    ctx->pc = 0x1FB59Cu;
    // 0x1fb59c: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x1fb59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fb5a0: 0xac6000ac  sw          $zero, 0xAC($v1)
    ctx->pc = 0x1fb5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 0));
    // 0x1fb5a4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb5a8: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1fb5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x1fb5ac: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb5b0: 0xac6400b8  sw          $a0, 0xB8($v1)
    ctx->pc = 0x1fb5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 4));
label_1fb5b4:
    // 0x1fb5b4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb5b8: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x1fb5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
label_1fb5bc:
    // 0x1fb5bc: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb5c0: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1FB5C0u;
    SET_GPR_U32(ctx, 31, 0x1FB5C8u);
    ctx->pc = 0x1FB5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB5C0u;
    // 0x1fb5c4: 0xac4000b4  sw          $zero, 0xB4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x1FB5C0u, 0x1FB5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB5C8u;
label_1fb5c8:
    // 0x1fb5c8: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1FB5C8u;
    {
        const bool branch_taken_0x1fb5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb5c8) {
            ctx->pc = 0x1FB5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB5C8u;
            // 0x1fb5cc: 0x922201f7  lbu         $v0, 0x1F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB69Cu;
            goto label_1fb69c;
        }
    }
    ctx->pc = 0x1FB5D0u;
    // 0x1fb5d0: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x1fb5d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1fb5d4: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1fb5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1fb5d8: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb5dc: 0x34e7869f  ori         $a3, $a3, 0x869F
    ctx->pc = 0x1fb5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)34463);
    // 0x1fb5e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fb5e4: 0x8625022a  lh          $a1, 0x22A($s1)
    ctx->pc = 0x1fb5e4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 554)));
    // 0x1fb5e8: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1fb5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1fb5ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1fb5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fb5f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb5f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fb5f8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1fb5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1fb5fc: 0x9623003c  lhu         $v1, 0x3C($s1)
    ctx->pc = 0x1fb5fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1fb600: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fb600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fb604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fb608: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1fb608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1fb60c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1fb60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fb610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fb610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb614: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x1fb614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB618u;
    {
        const bool branch_taken_0x1fb618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb618) {
            ctx->pc = 0x1FB628u;
            goto label_1fb628;
        }
    }
    ctx->pc = 0x1FB620u;
    // 0x1fb620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB620u;
    {
        const bool branch_taken_0x1fb620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB620u;
        // 0x1fb624: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb620) {
            ctx->pc = 0x1FB634u;
            goto label_1fb634;
        }
    }
    ctx->pc = 0x1FB628u;
label_1fb628:
    // 0x1fb628: 0x4830004  bgezl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB628u;
    {
        const bool branch_taken_0x1fb628 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1fb628) {
            ctx->pc = 0x1FB62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB628u;
            // 0x1fb62c: 0x9603003c  lhu         $v1, 0x3C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB63Cu;
            goto label_1fb63c;
        }
    }
    ctx->pc = 0x1FB630u;
    // 0x1fb630: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fb630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1fb634:
    // 0x1fb634: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fb634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb638: 0x9603003c  lhu         $v1, 0x3C($s0)
    ctx->pc = 0x1fb638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
label_1fb63c:
    // 0x1fb63c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1fb63cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1fb640: 0x8604022a  lh          $a0, 0x22A($s0)
    ctx->pc = 0x1fb640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fb644: 0x34a5869f  ori         $a1, $a1, 0x869F
    ctx->pc = 0x1fb644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34463);
    // 0x1fb648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fb648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fb64c: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1fb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1fb650: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1fb650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fb654: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fb654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb658: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fb658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fb65c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fb65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fb660: 0x9604003c  lhu         $a0, 0x3C($s0)
    ctx->pc = 0x1fb660u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fb664: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb668: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1fb668u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1fb66c: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x1fb66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1fb670: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1fb670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fb674: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1fb674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb678: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x1fb678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb67c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB67Cu;
    {
        const bool branch_taken_0x1fb67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb67c) {
            ctx->pc = 0x1FB690u;
            goto label_1fb690;
        }
    }
    ctx->pc = 0x1FB684u;
    // 0x1fb684: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB684u;
    {
        const bool branch_taken_0x1fb684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB684u;
        // 0x1fb688: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb684) {
            ctx->pc = 0x1FB698u;
            goto label_1fb698;
        }
    }
    ctx->pc = 0x1FB68Cu;
    // 0x1fb68c: 0x0  nop
    ctx->pc = 0x1fb68cu;
    // NOP
label_1fb690:
    // 0x1fb690: 0x4820001  bltzl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB690u;
    {
        const bool branch_taken_0x1fb690 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1fb690) {
            ctx->pc = 0x1FB694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB690u;
            // 0x1fb694: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB698u;
            goto label_1fb698;
        }
    }
    ctx->pc = 0x1FB698u;
label_1fb698:
    // 0x1fb698: 0x922201f7  lbu         $v0, 0x1F7($s1)
    ctx->pc = 0x1fb698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
label_1fb69c:
    // 0x1fb69c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1FB69Cu;
    {
        const bool branch_taken_0x1fb69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb69c) {
            ctx->pc = 0x1FB6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB69Cu;
            // 0x1fb6a0: 0x8e2600c4  lw          $a2, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB6D8u;
            goto label_1fb6d8;
        }
    }
    ctx->pc = 0x1FB6A4u;
    // 0x1fb6a4: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x1fb6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1fb6a8: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB6A8u;
    {
        const bool branch_taken_0x1fb6a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A8u;
        // 0x1fb6ac: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6a8) {
            ctx->pc = 0x1FB6C8u;
            goto label_1fb6c8;
        }
    }
    ctx->pc = 0x1FB6B0u;
    // 0x1fb6b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb6b4: 0xac44006c  sw          $a0, 0x6C($v0)
    ctx->pc = 0x1fb6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 4));
    // 0x1fb6b8: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb6bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB6BCu;
    {
        const bool branch_taken_0x1fb6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6BCu;
        // 0x1fb6c0: 0xac640090  sw          $a0, 0x90($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6bc) {
            ctx->pc = 0x1FB6D4u;
            goto label_1fb6d4;
        }
    }
    ctx->pc = 0x1FB6C4u;
    // 0x1fb6c4: 0x0  nop
    ctx->pc = 0x1fb6c4u;
    // NOP
label_1fb6c8:
    // 0x1fb6c8: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x1fb6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x1fb6cc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb6d0: 0xac600090  sw          $zero, 0x90($v1)
    ctx->pc = 0x1fb6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
label_1fb6d4:
    // 0x1fb6d4: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1fb6d8:
    // 0x1fb6d8: 0x96230158  lhu         $v1, 0x158($s1)
    ctx->pc = 0x1fb6d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1fb6dc: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x1fb6dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1fb6e0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FB6E0u;
    {
        const bool branch_taken_0x1fb6e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb6e0) {
            ctx->pc = 0x1FB6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB6E0u;
            // 0x1fb6e4: 0x92230190  lbu         $v1, 0x190($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB70Cu;
            goto label_1fb70c;
        }
    }
    ctx->pc = 0x1FB6E8u;
    // 0x1fb6e8: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x1fb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1fb6ec: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fb6f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb6f4: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1fb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1fb6f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fb6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb6fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb700: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FB700u;
    {
        const bool branch_taken_0x1fb700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb700) {
            ctx->pc = 0x1FB704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB700u;
            // 0x1fb704: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB764u;
            goto label_1fb764;
        }
    }
    ctx->pc = 0x1FB708u;
    // 0x1fb708: 0x92230190  lbu         $v1, 0x190($s1)
    ctx->pc = 0x1fb708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 400)));
label_1fb70c:
    // 0x1fb70c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fb710: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB710u;
    {
        const bool branch_taken_0x1fb710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb710) {
            ctx->pc = 0x1FB714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB710u;
            // 0x1fb714: 0x9202020c  lbu         $v0, 0x20C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB728u;
            goto label_1fb728;
        }
    }
    ctx->pc = 0x1FB718u;
    // 0x1fb718: 0x922201f7  lbu         $v0, 0x1F7($s1)
    ctx->pc = 0x1fb718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 503)));
    // 0x1fb71c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB71Cu;
    {
        const bool branch_taken_0x1fb71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb71c) {
            ctx->pc = 0x1FB720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB71Cu;
            // 0x1fb720: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB764u;
            goto label_1fb764;
        }
    }
    ctx->pc = 0x1FB724u;
    // 0x1fb724: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x1fb724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
label_1fb728:
    // 0x1fb728: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB728u;
    {
        const bool branch_taken_0x1fb728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb728) {
            ctx->pc = 0x1FB72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB728u;
            // 0x1fb72c: 0x8cc2003c  lw          $v0, 0x3C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB744u;
            goto label_1fb744;
        }
    }
    ctx->pc = 0x1FB730u;
    // 0x1fb730: 0x86020096  lh          $v0, 0x96($s0)
    ctx->pc = 0x1fb730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fb734: 0x86030182  lh          $v1, 0x182($s0)
    ctx->pc = 0x1fb734u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 386)));
    // 0x1fb738: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1fb738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fb73c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FB73Cu;
    {
        const bool branch_taken_0x1fb73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB73Cu;
        // 0x1fb740: 0x8cc2003c  lw          $v0, 0x3C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb73c) {
            ctx->pc = 0x1FB788u;
            goto label_1fb788;
        }
    }
    ctx->pc = 0x1FB744u;
label_1fb744:
    // 0x1fb744: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fb744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fb748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb74c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1fb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1fb750: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fb750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb754: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb758: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1FB758u;
    {
        const bool branch_taken_0x1fb758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB758u;
        // 0x1fb75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb758) {
            ctx->pc = 0x1FB80Cu;
            goto label_1fb80c;
        }
    }
    ctx->pc = 0x1FB760u;
    // 0x1fb760: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1fb760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1fb764:
    // 0x1fb764: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fb768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb76c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1fb76cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1fb770: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fb774: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fb774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb778: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb77c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FB77Cu;
    {
        const bool branch_taken_0x1fb77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB77Cu;
        // 0x1fb780: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb77c) {
            ctx->pc = 0x1FB838u;
            goto label_1fb838;
        }
    }
    ctx->pc = 0x1FB784u;
    // 0x1fb784: 0x8cc2003c  lw          $v0, 0x3C($a2)
    ctx->pc = 0x1fb784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_1fb788:
    // 0x1fb788: 0x3c120fff  lui         $s2, 0xFFF
    ctx->pc = 0x1fb788u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4095 << 16));
    // 0x1fb78c: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x1fb78cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x1fb790: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x1fb790u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
    // 0x1fb794: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1fb794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1fb798: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1fb798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1fb79c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB79Cu;
    {
        const bool branch_taken_0x1fb79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB79Cu;
        // 0x1fb7a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb79c) {
            ctx->pc = 0x1FB80Cu;
            goto label_1fb80c;
        }
    }
    ctx->pc = 0x1FB7A4u;
    // 0x1fb7a4: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FB7A4u;
    SET_GPR_U32(ctx, 31, 0x1FB7ACu);
    ctx->pc = 0x1FB7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7A4u;
    // 0x1fb7a8: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FB7A4u, 0x1FB7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7ACu;
label_1fb7ac:
    // 0x1fb7ac: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb7b0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FB7B0u;
    {
        const bool branch_taken_0x1fb7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B0u;
        // 0x1fb7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7b0) {
            ctx->pc = 0x1FB834u;
            goto label_1fb834;
        }
    }
    ctx->pc = 0x1FB7B8u;
    // 0x1fb7b8: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FB7B8u;
    SET_GPR_U32(ctx, 31, 0x1FB7C0u);
    ctx->pc = 0x1FB7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7B8u;
    // 0x1fb7bc: 0x34058002  ori         $a1, $zero, 0x8002 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FB7B8u, 0x1FB7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7C0u;
label_1fb7c0:
    // 0x1fb7c0: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb7c4: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB7C4u;
    {
        const bool branch_taken_0x1fb7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7C4u;
        // 0x1fb7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7c4) {
            ctx->pc = 0x1FB834u;
            goto label_1fb834;
        }
    }
    ctx->pc = 0x1FB7CCu;
    // 0x1fb7cc: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FB7CCu;
    SET_GPR_U32(ctx, 31, 0x1FB7D4u);
    ctx->pc = 0x1FB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7CCu;
    // 0x1fb7d0: 0x34058004  ori         $a1, $zero, 0x8004 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FB7CCu, 0x1FB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7D4u;
label_1fb7d4:
    // 0x1fb7d4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb7d8: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FB7D8u;
    {
        const bool branch_taken_0x1fb7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7D8u;
        // 0x1fb7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7d8) {
            ctx->pc = 0x1FB834u;
            goto label_1fb834;
        }
    }
    ctx->pc = 0x1FB7E0u;
    // 0x1fb7e0: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FB7E0u;
    SET_GPR_U32(ctx, 31, 0x1FB7E8u);
    ctx->pc = 0x1FB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7E0u;
    // 0x1fb7e4: 0x34058009  ori         $a1, $zero, 0x8009 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FB7E0u, 0x1FB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7E8u;
label_1fb7e8:
    // 0x1fb7e8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb7ec: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FB7ECu;
    {
        const bool branch_taken_0x1fb7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7ECu;
        // 0x1fb7f0: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7ec) {
            ctx->pc = 0x1FB838u;
            goto label_1fb838;
        }
    }
    ctx->pc = 0x1FB7F4u;
    // 0x1fb7f4: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1fb7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1fb7f8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fb7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1fb7fc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x1fb7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x1fb800: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x1fb800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x1fb804: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB804u;
    {
        const bool branch_taken_0x1fb804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB804u;
        // 0x1fb808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb804) {
            ctx->pc = 0x1FB844u;
            goto label_1fb844;
        }
    }
    ctx->pc = 0x1FB80Cu;
label_1fb80c:
    // 0x1fb80c: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FB80Cu;
    SET_GPR_U32(ctx, 31, 0x1FB814u);
    ctx->pc = 0x1FB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB80Cu;
    // 0x1fb810: 0x34058007  ori         $a1, $zero, 0x8007 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FB80Cu, 0x1FB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB814u;
label_1fb814:
    // 0x1fb814: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb818: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB818u;
    {
        const bool branch_taken_0x1fb818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB818u;
        // 0x1fb81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb818) {
            ctx->pc = 0x1FB834u;
            goto label_1fb834;
        }
    }
    ctx->pc = 0x1FB820u;
    // 0x1fb820: 0xc09905e  jal         func_264178
    ctx->pc = 0x1FB820u;
    SET_GPR_U32(ctx, 31, 0x1FB828u);
    ctx->pc = 0x1FB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB820u;
    // 0x1fb824: 0x3405800a  ori         $a1, $zero, 0x800A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32778);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x1FB820u, 0x1FB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB828u;
label_1fb828:
    // 0x1fb828: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb82c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB82Cu;
    {
        const bool branch_taken_0x1fb82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fb82c) {
            ctx->pc = 0x1FB830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB82Cu;
            // 0x1fb830: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB848u;
            goto label_1fb848;
        }
    }
    ctx->pc = 0x1FB834u;
label_1fb834:
    // 0x1fb834: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fb838:
    // 0x1fb838: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1fb838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x1fb83c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb840: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x1fb840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
label_1fb844:
    // 0x1fb844: 0x922201f0  lbu         $v0, 0x1F0($s1)
    ctx->pc = 0x1fb844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
label_1fb848:
    // 0x1fb848: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB848u;
    {
        const bool branch_taken_0x1fb848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB848u;
        // 0x1fb84c: 0x8f8397c8  lw          $v1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb848) {
            ctx->pc = 0x1FB858u;
            goto label_1fb858;
        }
    }
    ctx->pc = 0x1FB850u;
    // 0x1fb850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb854: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x1fb854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_1fb858:
    // 0x1fb858: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fb858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb85c: 0x920301ef  lbu         $v1, 0x1EF($s0)
    ctx->pc = 0x1fb85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 495)));
    // 0x1fb860: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x1fb860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1fb864: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1fb864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb868: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB868u;
    {
        const bool branch_taken_0x1fb868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB868u;
        // 0x1fb86c: 0x2502b  sltu        $t2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb868) {
            ctx->pc = 0x1FB88Cu;
            goto label_1fb88c;
        }
    }
    ctx->pc = 0x1FB870u;
    // 0x1fb870: 0xde020188  ld          $v0, 0x188($s0)
    ctx->pc = 0x1fb870u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 392)));
    // 0x1fb874: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1fb874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1fb878: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x1fb878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x1fb87c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1fb87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fb880: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fb880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb884: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB884u;
    {
        const bool branch_taken_0x1fb884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb884) {
            ctx->pc = 0x1FB8A4u;
            goto label_1fb8a4;
        }
    }
    ctx->pc = 0x1FB88Cu;
label_1fb88c:
    // 0x1fb88c: 0x9202020c  lbu         $v0, 0x20C($s0)
    ctx->pc = 0x1fb88cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x1fb890: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB890u;
    {
        const bool branch_taken_0x1fb890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb890) {
            ctx->pc = 0x1FB8A4u;
            goto label_1fb8a4;
        }
    }
    ctx->pc = 0x1FB898u;
    // 0x1fb898: 0x86030096  lh          $v1, 0x96($s0)
    ctx->pc = 0x1fb898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x1fb89c: 0x86020182  lh          $v0, 0x182($s0)
    ctx->pc = 0x1fb89cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 386)));
    // 0x1fb8a0: 0x62a02a  slt         $s4, $v1, $v0
    ctx->pc = 0x1fb8a0u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1fb8a4:
    // 0x1fb8a4: 0x55400004  bnel        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB8A4u;
    {
        const bool branch_taken_0x1fb8a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb8a4) {
            ctx->pc = 0x1FB8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8A4u;
            // 0x1fb8a8: 0x9604022a  lhu         $a0, 0x22A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB8B8u;
            goto label_1fb8b8;
        }
    }
    ctx->pc = 0x1FB8ACu;
    // 0x1fb8ac: 0x52800076  beql        $s4, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x1FB8ACu;
    {
        const bool branch_taken_0x1fb8ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb8ac) {
            ctx->pc = 0x1FB8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8ACu;
            // 0x1fb8b0: 0x86230148  lh          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBA88u;
            goto label_1fba88;
        }
    }
    ctx->pc = 0x1FB8B4u;
    // 0x1fb8b4: 0x9604022a  lhu         $a0, 0x22A($s0)
    ctx->pc = 0x1fb8b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fb8b8:
    // 0x1fb8b8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1fb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fb8bc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB8BCu;
    {
        const bool branch_taken_0x1fb8bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB8BCu;
        // 0x1fb8c0: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb8bc) {
            ctx->pc = 0x1FB8D0u;
            goto label_1fb8d0;
        }
    }
    ctx->pc = 0x1FB8C4u;
    // 0x1fb8c4: 0x9202020d  lbu         $v0, 0x20D($s0)
    ctx->pc = 0x1fb8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 525)));
    // 0x1fb8c8: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1FB8C8u;
    {
        const bool branch_taken_0x1fb8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb8c8) {
            ctx->pc = 0x1FB8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8C8u;
            // 0x1fb8cc: 0x86250148  lh          $a1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBA18u;
            goto label_1fba18;
        }
    }
    ctx->pc = 0x1FB8D0u;
label_1fb8d0:
    // 0x1fb8d0: 0x920201ee  lbu         $v0, 0x1EE($s0)
    ctx->pc = 0x1fb8d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
    // 0x1fb8d4: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x1FB8D4u;
    {
        const bool branch_taken_0x1fb8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb8d4) {
            ctx->pc = 0x1FB8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8D4u;
            // 0x1fb8d8: 0x86250148  lh          $a1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBA18u;
            goto label_1fba18;
        }
    }
    ctx->pc = 0x1FB8DCu;
    // 0x1fb8dc: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x1fb8dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fb8e0: 0x4430014  bgezl       $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FB8E0u;
    {
        const bool branch_taken_0x1fb8e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fb8e0) {
            ctx->pc = 0x1FB8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8E0u;
            // 0x1fb8e4: 0x8d220064  lw          $v0, 0x64($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB934u;
            goto label_1fb934;
        }
    }
    ctx->pc = 0x1FB8E8u;
    // 0x1fb8e8: 0x8d22006c  lw          $v0, 0x6C($t1)
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 108)));
    // 0x1fb8ec: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB8ECu;
    {
        const bool branch_taken_0x1fb8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb8ec) {
            ctx->pc = 0x1FB8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB8ECu;
            // 0x1fb8f0: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB910u;
            goto label_1fb910;
        }
    }
    ctx->pc = 0x1FB8F4u;
    // 0x1fb8f4: 0x8d220064  lw          $v0, 0x64($t1)
    ctx->pc = 0x1fb8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x1fb8f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb8fc: 0xad220064  sw          $v0, 0x64($t1)
    ctx->pc = 0x1fb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 2));
    // 0x1fb900: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fb900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb904: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FB904u;
    {
        const bool branch_taken_0x1fb904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB904u;
        // 0x1fb908: 0xac60006c  sw          $zero, 0x6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb904) {
            ctx->pc = 0x1FB93Cu;
            goto label_1fb93c;
        }
    }
    ctx->pc = 0x1FB90Cu;
    // 0x1fb90c: 0x0  nop
    ctx->pc = 0x1fb90cu;
    // NOP
label_1fb910:
    // 0x1fb910: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fb910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fb914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb918: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1fb918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1fb91c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fb920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fb920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fb924: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb928: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB928u;
    {
        const bool branch_taken_0x1fb928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB928u;
        // 0x1fb92c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb928) {
            ctx->pc = 0x1FB948u;
            goto label_1fb948;
        }
    }
    ctx->pc = 0x1FB930u;
    // 0x1fb930: 0x8d220064  lw          $v0, 0x64($t1)
    ctx->pc = 0x1fb930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 100)));
label_1fb934:
    // 0x1fb934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb938: 0xad220064  sw          $v0, 0x64($t1)
    ctx->pc = 0x1fb938u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 2));
label_1fb93c:
    // 0x1fb93c: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fb93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb940: 0x9607022a  lhu         $a3, 0x22A($s0)
    ctx->pc = 0x1fb940u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fb944: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1fb944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1fb948:
    // 0x1fb948: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x1fb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x1fb94c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1fb94cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1fb950: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FB950u;
    {
        const bool branch_taken_0x1fb950 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fb950) {
            ctx->pc = 0x1FB954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB950u;
            // 0x1fb954: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB958u;
            goto label_1fb958;
        }
    }
    ctx->pc = 0x1FB958u;
label_1fb958:
    // 0x1fb958: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fb958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb95c: 0xacc30068  sw          $v1, 0x68($a2)
    ctx->pc = 0x1fb95cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 3));
    // 0x1fb960: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fb960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb964: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1fb964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb968: 0x8ce20064  lw          $v0, 0x64($a3)
    ctx->pc = 0x1fb968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
    // 0x1fb96c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1fb96cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fb970: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FB970u;
    {
        const bool branch_taken_0x1fb970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb970) {
            ctx->pc = 0x1FB974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB970u;
            // 0x1fb974: 0x8ce30064  lw          $v1, 0x64($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9E0u;
            goto label_1fb9e0;
        }
    }
    ctx->pc = 0x1FB978u;
    // 0x1fb978: 0x86220148  lh          $v0, 0x148($s1)
    ctx->pc = 0x1fb978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1fb97c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB97Cu;
    {
        const bool branch_taken_0x1fb97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb97c) {
            ctx->pc = 0x1FB980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB97Cu;
            // 0x1fb980: 0x8e2300c4  lw          $v1, 0xC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB994u;
            goto label_1fb994;
        }
    }
    ctx->pc = 0x1FB984u;
    // 0x1fb984: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x1fb984u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fb988: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FB988u;
    {
        const bool branch_taken_0x1fb988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb988) {
            ctx->pc = 0x1FB98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB988u;
            // 0x1fb98c: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9D0u;
            goto label_1fb9d0;
        }
    }
    ctx->pc = 0x1FB990u;
    // 0x1fb990: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x1fb990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1fb994:
    // 0x1fb994: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x1fb994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x1fb998: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1fb998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1fb99c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x1fb99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x1fb9a0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1fb9a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb9a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1fb9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1fb9ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB9ACu;
    {
        const bool branch_taken_0x1fb9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9ac) {
            ctx->pc = 0x1FB9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB9ACu;
            // 0x1fb9b0: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9D0u;
            goto label_1fb9d0;
        }
    }
    ctx->pc = 0x1FB9B4u;
    // 0x1fb9b4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1fb9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1fb9b8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1fb9bc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fb9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fb9c0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1fb9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1fb9c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB9C4u;
    {
        const bool branch_taken_0x1fb9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9c4) {
            ctx->pc = 0x1FB9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB9C4u;
            // 0x1fb9c8: 0x8ce30064  lw          $v1, 0x64($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9E0u;
            goto label_1fb9e0;
        }
    }
    ctx->pc = 0x1FB9CCu;
    // 0x1fb9cc: 0x920201b5  lbu         $v0, 0x1B5($s0)
    ctx->pc = 0x1fb9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
label_1fb9d0:
    // 0x1fb9d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB9D0u;
    {
        const bool branch_taken_0x1fb9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb9d0) {
            ctx->pc = 0x1FB9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB9D0u;
            // 0x1fb9d4: 0x8ce30064  lw          $v1, 0x64($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB9E0u;
            goto label_1fb9e0;
        }
    }
    ctx->pc = 0x1FB9D8u;
    // 0x1fb9d8: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1FB9D8u;
    {
        const bool branch_taken_0x1fb9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9D8u;
        // 0x1fb9dc: 0xace00078  sw          $zero, 0x78($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9d8) {
            ctx->pc = 0x1FBB3Cu;
            goto label_1fbb3c;
        }
    }
    ctx->pc = 0x1FB9E0u;
label_1fb9e0:
    // 0x1fb9e0: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1fb9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fb9e4: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1fb9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1fb9e8: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1fb9ec: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x1fb9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fb9f0: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1fb9f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1fb9f4: 0xace30074  sw          $v1, 0x74($a3)
    ctx->pc = 0x1fb9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 3));
    // 0x1fb9f8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb9fc: 0xac450078  sw          $a1, 0x78($v0)
    ctx->pc = 0x1fb9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 5));
    // 0x1fba00: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fba04: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1fba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1fba08: 0x284303e8  slti        $v1, $v0, 0x3E8
    ctx->pc = 0x1fba08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1fba0c: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1fba0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1fba10: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1FBA10u;
    {
        const bool branch_taken_0x1fba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA10u;
        // 0x1fba14: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba10) {
            ctx->pc = 0x1FBB3Cu;
            goto label_1fbb3c;
        }
    }
    ctx->pc = 0x1FBA18u;
label_1fba18:
    // 0x1fba18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fba1c: 0x54a20049  bnel        $a1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1FBA1Cu;
    {
        const bool branch_taken_0x1fba1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fba1c) {
            ctx->pc = 0x1FBA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA1Cu;
            // 0x1fba20: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBA24u;
    // 0x1fba24: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x1fba24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fba28: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fba2c: 0x54620045  bnel        $v1, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1FBA2Cu;
    {
        const bool branch_taken_0x1fba2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fba2c) {
            ctx->pc = 0x1FBA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA2Cu;
            // 0x1fba30: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBA34u;
    // 0x1fba34: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1fba38: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1FBA38u;
    {
        const bool branch_taken_0x1fba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba38) {
            ctx->pc = 0x1FBA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA38u;
            // 0x1fba3c: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBA40u;
    // 0x1fba40: 0x8602009e  lh          $v0, 0x9E($s0)
    ctx->pc = 0x1fba40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
    // 0x1fba44: 0x5445003f  bnel        $v0, $a1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FBA44u;
    {
        const bool branch_taken_0x1fba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fba44) {
            ctx->pc = 0x1FBA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA44u;
            // 0x1fba48: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBA4Cu;
    // 0x1fba4c: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1fba50: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fba50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fba54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fba54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fba58: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x1fba5c: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fba60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fba64: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fba68: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1FBA68u;
    {
        const bool branch_taken_0x1fba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fba68) {
            ctx->pc = 0x1FBA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA68u;
            // 0x1fba6c: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBA70u;
    // 0x1fba70: 0xad200074  sw          $zero, 0x74($t1)
    ctx->pc = 0x1fba70u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 0));
    // 0x1fba74: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fba74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fba78: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x1fba78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x1fba7c: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fba80: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1FBA80u;
    {
        const bool branch_taken_0x1fba80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA80u;
        // 0x1fba84: 0xac60007c  sw          $zero, 0x7C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba80) {
            ctx->pc = 0x1FBB3Cu;
            goto label_1fbb3c;
        }
    }
    ctx->pc = 0x1FBA88u;
label_1fba88:
    // 0x1fba88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fba8c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBA8Cu;
    {
        const bool branch_taken_0x1fba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fba8c) {
            ctx->pc = 0x1FBA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA8Cu;
            // 0x1fba90: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBAA8u;
            goto label_1fbaa8;
        }
    }
    ctx->pc = 0x1FBA94u;
    // 0x1fba94: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x1fba94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fba98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fba98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fba9c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBA9Cu;
    {
        const bool branch_taken_0x1fba9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fba9c) {
            ctx->pc = 0x1FBAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBA9Cu;
            // 0x1fbaa0: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBAB4u;
            goto label_1fbab4;
        }
    }
    ctx->pc = 0x1FBAA4u;
    // 0x1fbaa4: 0x920201b5  lbu         $v0, 0x1B5($s0)
    ctx->pc = 0x1fbaa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
label_1fbaa8:
    // 0x1fbaa8: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1FBAA8u;
    {
        const bool branch_taken_0x1fbaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbaa8) {
            ctx->pc = 0x1FBAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBAA8u;
            // 0x1fbaac: 0xad200064  sw          $zero, 0x64($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB34u;
            goto label_1fbb34;
        }
    }
    ctx->pc = 0x1FBAB0u;
    // 0x1fbab0: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbab0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fbab4:
    // 0x1fbab4: 0x5840001c  blezl       $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FBAB4u;
    {
        const bool branch_taken_0x1fbab4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fbab4) {
            ctx->pc = 0x1FBAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBAB4u;
            // 0x1fbab8: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB28u;
            goto label_1fbb28;
        }
    }
    ctx->pc = 0x1FBABCu;
    // 0x1fbabc: 0x8d220064  lw          $v0, 0x64($t1)
    ctx->pc = 0x1fbabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 100)));
    // 0x1fbac0: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fbac4: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x1fbac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1fbac8: 0x240803e7  addiu       $t0, $zero, 0x3E7
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1fbacc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbad0: 0xad220064  sw          $v0, 0x64($t1)
    ctx->pc = 0x1fbad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 2));
    // 0x1fbad4: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fbad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbad8: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fbadc: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x1fbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1fbae0: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FBAE0u;
    {
        const bool branch_taken_0x1fbae0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fbae0) {
            ctx->pc = 0x1FBAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBAE0u;
            // 0x1fbae4: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBAE8u;
            goto label_1fbae8;
        }
    }
    ctx->pc = 0x1FBAE8u;
label_1fbae8:
    // 0x1fbae8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fbaec: 0xaca30068  sw          $v1, 0x68($a1)
    ctx->pc = 0x1fbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 3));
    // 0x1fbaf0: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbaf4: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x1fbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1fbaf8: 0x28430064  slti        $v1, $v0, 0x64
    ctx->pc = 0x1fbaf8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fbafc: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x1fbafcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1fbb00: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x1fbb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x1fbb04: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbb08: 0xac670078  sw          $a3, 0x78($v1)
    ctx->pc = 0x1fbb08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 7));
    // 0x1fbb0c: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fbb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbb10: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x1fbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1fbb14: 0x284303e8  slti        $v1, $v0, 0x3E8
    ctx->pc = 0x1fbb14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1fbb18: 0x103100a  movz        $v0, $t0, $v1
    ctx->pc = 0x1fbb18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x1fbb1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBB1Cu;
    {
        const bool branch_taken_0x1fbb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB1Cu;
        // 0x1fbb20: 0xac82007c  sw          $v0, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb1c) {
            ctx->pc = 0x1FBB3Cu;
            goto label_1fbb3c;
        }
    }
    ctx->pc = 0x1FBB24u;
    // 0x1fbb24: 0x0  nop
    ctx->pc = 0x1fbb24u;
    // NOP
label_1fbb28:
    // 0x1fbb28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBB28u;
    {
        const bool branch_taken_0x1fbb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb28) {
            ctx->pc = 0x1FBB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB28u;
            // 0x1fbb2c: 0x922201f0  lbu         $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBB44u;
            goto label_1fbb44;
        }
    }
    ctx->pc = 0x1FBB30u;
    // 0x1fbb30: 0xad200064  sw          $zero, 0x64($t1)
    ctx->pc = 0x1fbb30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 0));
label_1fbb34:
    // 0x1fbb34: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbb38: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x1fbb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
label_1fbb3c:
    // 0x1fbb3c: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbb40: 0x922201f0  lbu         $v0, 0x1F0($s1)
    ctx->pc = 0x1fbb40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 496)));
label_1fbb44:
    // 0x1fbb44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBB44u;
    {
        const bool branch_taken_0x1fbb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB44u;
        // 0x1fbb48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb44) {
            ctx->pc = 0x1FBB64u;
            goto label_1fbb64;
        }
    }
    ctx->pc = 0x1FBB4Cu;
    // 0x1fbb4c: 0x8622022a  lh          $v0, 0x22A($s1)
    ctx->pc = 0x1fbb4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 554)));
    // 0x1fbb50: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB50u;
    {
        const bool branch_taken_0x1fbb50 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1FBB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB50u;
        // 0x1fbb54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb50) {
            ctx->pc = 0x1FBB64u;
            goto label_1fbb64;
        }
    }
    ctx->pc = 0x1FBB58u;
    // 0x1fbb58: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbb58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fbb5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBB5Cu;
    {
        const bool branch_taken_0x1fbb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB5Cu;
        // 0x1fbb60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb5c) {
            ctx->pc = 0x1FBB6Cu;
            goto label_1fbb6c;
        }
    }
    ctx->pc = 0x1FBB64u;
label_1fbb64:
    // 0x1fbb64: 0xacc20094  sw          $v0, 0x94($a2)
    ctx->pc = 0x1fbb64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 2));
    // 0x1fbb68: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fbb6c:
    // 0x1fbb6c: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x1fbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x1fbb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fbb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb78: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB78u;
    {
        const bool branch_taken_0x1fbb78 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB78u;
        // 0x1fbb7c: 0x43500b  movn        $t2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb78) {
            ctx->pc = 0x1FBB8Cu;
            goto label_1fbb8c;
        }
    }
    ctx->pc = 0x1FBB80u;
    // 0x1fbb80: 0x9202018d  lbu         $v0, 0x18D($s0)
    ctx->pc = 0x1fbb80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 397)));
    // 0x1fbb84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBB84u;
    {
        const bool branch_taken_0x1fbb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb84) {
            ctx->pc = 0x1FBB90u;
            goto label_1fbb90;
        }
    }
    ctx->pc = 0x1FBB8Cu;
label_1fbb8c:
    // 0x1fbb8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbb90:
    // 0x1fbb90: 0x55400004  bnel        $t2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB90u;
    {
        const bool branch_taken_0x1fbb90 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb90) {
            ctx->pc = 0x1FBB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB90u;
            // 0x1fbb94: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBBA4u;
            goto label_1fbba4;
        }
    }
    ctx->pc = 0x1FBB98u;
    // 0x1fbb98: 0x50800027  beql        $a0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FBB98u;
    {
        const bool branch_taken_0x1fbb98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb98) {
            ctx->pc = 0x1FBB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBB98u;
            // 0x1fbb9c: 0x86230148  lh          $v1, 0x148($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC38u;
            goto label_1fbc38;
        }
    }
    ctx->pc = 0x1FBBA0u;
    // 0x1fbba0: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbba0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fbba4:
    // 0x1fbba4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBBA4u;
    {
        const bool branch_taken_0x1fbba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbba4) {
            ctx->pc = 0x1FBBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBBA4u;
            // 0x1fbba8: 0x920201ee  lbu         $v0, 0x1EE($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBBBCu;
            goto label_1fbbbc;
        }
    }
    ctx->pc = 0x1FBBACu;
    // 0x1fbbac: 0x9202020d  lbu         $v0, 0x20D($s0)
    ctx->pc = 0x1fbbacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 525)));
    // 0x1fbbb0: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FBBB0u;
    {
        const bool branch_taken_0x1fbbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbbb0) {
            ctx->pc = 0x1FBBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBBB0u;
            // 0x1fbbb4: 0x8cc20064  lw          $v0, 0x64($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC94u;
            goto label_1fbc94;
        }
    }
    ctx->pc = 0x1FBBB8u;
    // 0x1fbbb8: 0x920201ee  lbu         $v0, 0x1EE($s0)
    ctx->pc = 0x1fbbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
label_1fbbbc:
    // 0x1fbbbc: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FBBBCu;
    {
        const bool branch_taken_0x1fbbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbbbc) {
            ctx->pc = 0x1FBBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBBBCu;
            // 0x1fbbc0: 0x8cc20064  lw          $v0, 0x64($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC94u;
            goto label_1fbc94;
        }
    }
    ctx->pc = 0x1FBBC4u;
    // 0x1fbbc4: 0x86020148  lh          $v0, 0x148($s0)
    ctx->pc = 0x1fbbc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fbbc8: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FBBC8u;
    {
        const bool branch_taken_0x1fbbc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1fbbc8) {
            ctx->pc = 0x1FBBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBBC8u;
            // 0x1fbbcc: 0x8cc2008c  lw          $v0, 0x8C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC28u;
            goto label_1fbc28;
        }
    }
    ctx->pc = 0x1FBBD0u;
    // 0x1fbbd0: 0x8cc20090  lw          $v0, 0x90($a2)
    ctx->pc = 0x1fbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x1fbbd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FBBD4u;
    {
        const bool branch_taken_0x1fbbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbbd4) {
            ctx->pc = 0x1FBBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBBD4u;
            // 0x1fbbd8: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBBF8u;
            goto label_1fbbf8;
        }
    }
    ctx->pc = 0x1FBBDCu;
    // 0x1fbbdc: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x1fbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x1fbbe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbbe4: 0xacc2008c  sw          $v0, 0x8C($a2)
    ctx->pc = 0x1fbbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
    // 0x1fbbe8: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fbbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbbec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FBBECu;
    {
        const bool branch_taken_0x1fbbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBBECu;
        // 0x1fbbf0: 0xac600090  sw          $zero, 0x90($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbbec) {
            ctx->pc = 0x1FBC8Cu;
            goto label_1fbc8c;
        }
    }
    ctx->pc = 0x1FBBF4u;
    // 0x1fbbf4: 0x0  nop
    ctx->pc = 0x1fbbf4u;
    // NOP
label_1fbbf8:
    // 0x1fbbf8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1fbbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1fbbfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fbc00: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1fbc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1fbc04: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fbc08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fbc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fbc0c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fbc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fbc10: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FBC10u;
    {
        const bool branch_taken_0x1fbc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc10) {
            ctx->pc = 0x1FBC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC10u;
            // 0x1fbc14: 0x8cc20064  lw          $v0, 0x64($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC94u;
            goto label_1fbc94;
        }
    }
    ctx->pc = 0x1FBC18u;
    // 0x1fbc18: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x1fbc1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbc20: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FBC20u;
    {
        const bool branch_taken_0x1fbc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC20u;
        // 0x1fbc24: 0xacc2008c  sw          $v0, 0x8C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc20) {
            ctx->pc = 0x1FBC8Cu;
            goto label_1fbc8c;
        }
    }
    ctx->pc = 0x1FBC28u;
label_1fbc28:
    // 0x1fbc28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbc2c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FBC2Cu;
    {
        const bool branch_taken_0x1fbc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC2Cu;
        // 0x1fbc30: 0xacc2008c  sw          $v0, 0x8C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc2c) {
            ctx->pc = 0x1FBC8Cu;
            goto label_1fbc8c;
        }
    }
    ctx->pc = 0x1FBC34u;
    // 0x1fbc34: 0x0  nop
    ctx->pc = 0x1fbc34u;
    // NOP
label_1fbc38:
    // 0x1fbc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbc3c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBC3Cu;
    {
        const bool branch_taken_0x1fbc3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fbc3c) {
            ctx->pc = 0x1FBC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC3Cu;
            // 0x1fbc40: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC58u;
            goto label_1fbc58;
        }
    }
    ctx->pc = 0x1FBC44u;
    // 0x1fbc44: 0x86030148  lh          $v1, 0x148($s0)
    ctx->pc = 0x1fbc44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1fbc48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbc4c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBC4Cu;
    {
        const bool branch_taken_0x1fbc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fbc4c) {
            ctx->pc = 0x1FBC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC4Cu;
            // 0x1fbc50: 0x8602022a  lh          $v0, 0x22A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC64u;
            goto label_1fbc64;
        }
    }
    ctx->pc = 0x1FBC54u;
    // 0x1fbc54: 0x920201b5  lbu         $v0, 0x1B5($s0)
    ctx->pc = 0x1fbc54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
label_1fbc58:
    // 0x1fbc58: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1FBC58u;
    {
        const bool branch_taken_0x1fbc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc58) {
            ctx->pc = 0x1FBC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC58u;
            // 0x1fbc5c: 0xacc0008c  sw          $zero, 0x8C($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC8Cu;
            goto label_1fbc8c;
        }
    }
    ctx->pc = 0x1FBC60u;
    // 0x1fbc60: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
label_1fbc64:
    // 0x1fbc64: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBC64u;
    {
        const bool branch_taken_0x1fbc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc64) {
            ctx->pc = 0x1FBC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC64u;
            // 0x1fbc68: 0x920201b5  lbu         $v0, 0x1B5($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 437)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC80u;
            goto label_1fbc80;
        }
    }
    ctx->pc = 0x1FBC6Cu;
    // 0x1fbc6c: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x1fbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x1fbc70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbc74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBC74u;
    {
        const bool branch_taken_0x1fbc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC74u;
        // 0x1fbc78: 0xacc2008c  sw          $v0, 0x8C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc74) {
            ctx->pc = 0x1FBC8Cu;
            goto label_1fbc8c;
        }
    }
    ctx->pc = 0x1FBC7Cu;
    // 0x1fbc7c: 0x0  nop
    ctx->pc = 0x1fbc7cu;
    // NOP
label_1fbc80:
    // 0x1fbc80: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBC80u;
    {
        const bool branch_taken_0x1fbc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc80) {
            ctx->pc = 0x1FBC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC80u;
            // 0x1fbc84: 0x8cc20064  lw          $v0, 0x64($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBC94u;
            goto label_1fbc94;
        }
    }
    ctx->pc = 0x1FBC88u;
    // 0x1fbc88: 0xacc0008c  sw          $zero, 0x8C($a2)
    ctx->pc = 0x1fbc88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
label_1fbc8c:
    // 0x1fbc8c: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbc90: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x1fbc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_1fbc94:
    // 0x1fbc94: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1fbc94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fbc98: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBC98u;
    {
        const bool branch_taken_0x1fbc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbc98) {
            ctx->pc = 0x1FBC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBC98u;
            // 0x1fbc9c: 0x8cc2008c  lw          $v0, 0x8C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBCB0u;
            goto label_1fbcb0;
        }
    }
    ctx->pc = 0x1FBCA0u;
    // 0x1fbca0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1fbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fbca4: 0xacc20064  sw          $v0, 0x64($a2)
    ctx->pc = 0x1fbca4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 100), GPR_U32(ctx, 2));
    // 0x1fbca8: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbcac: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x1fbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
label_1fbcb0:
    // 0x1fbcb0: 0x28420064  slti        $v0, $v0, 0x64
    ctx->pc = 0x1fbcb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fbcb4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBCB4u;
    {
        const bool branch_taken_0x1fbcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbcb4) {
            ctx->pc = 0x1FBCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBCB4u;
            // 0x1fbcb8: 0x8cc20068  lw          $v0, 0x68($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBCCCu;
            goto label_1fbccc;
        }
    }
    ctx->pc = 0x1FBCBCu;
    // 0x1fbcbc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x1fbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fbcc0: 0xacc2008c  sw          $v0, 0x8C($a2)
    ctx->pc = 0x1fbcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 2));
    // 0x1fbcc4: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbcc8: 0x8cc20068  lw          $v0, 0x68($a2)
    ctx->pc = 0x1fbcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_1fbccc:
    // 0x1fbccc: 0x284203e8  slti        $v0, $v0, 0x3E8
    ctx->pc = 0x1fbcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1fbcd0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBCD0u;
    {
        const bool branch_taken_0x1fbcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbcd0) {
            ctx->pc = 0x1FBCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBCD0u;
            // 0x1fbcd4: 0x920201f2  lbu         $v0, 0x1F2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 498)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBCE8u;
            goto label_1fbce8;
        }
    }
    ctx->pc = 0x1FBCD8u;
    // 0x1fbcd8: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x1fbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1fbcdc: 0xacc20068  sw          $v0, 0x68($a2)
    ctx->pc = 0x1fbcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 2));
    // 0x1fbce0: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbce4: 0x920201f2  lbu         $v0, 0x1F2($s0)
    ctx->pc = 0x1fbce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 498)));
label_1fbce8:
    // 0x1fbce8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBCE8u;
    {
        const bool branch_taken_0x1fbce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbce8) {
            ctx->pc = 0x1FBCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBCE8u;
            // 0x1fbcec: 0x9602030a  lhu         $v0, 0x30A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 778)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBD08u;
            goto label_1fbd08;
        }
    }
    ctx->pc = 0x1FBCF0u;
    // 0x1fbcf0: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbcf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fbcf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBCF4u;
    {
        const bool branch_taken_0x1fbcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCF4u;
        // 0x1fbcf8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcf4) {
            ctx->pc = 0x1FBD04u;
            goto label_1fbd04;
        }
    }
    ctx->pc = 0x1FBCFCu;
    // 0x1fbcfc: 0xacc200a4  sw          $v0, 0xA4($a2)
    ctx->pc = 0x1fbcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 2));
    // 0x1fbd00: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fbd04:
    // 0x1fbd04: 0x9602030a  lhu         $v0, 0x30A($s0)
    ctx->pc = 0x1fbd04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 778)));
label_1fbd08:
    // 0x1fbd08: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FBD08u;
    {
        const bool branch_taken_0x1fbd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd08) {
            ctx->pc = 0x1FBD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD08u;
            // 0x1fbd0c: 0x8cc200a4  lw          $v0, 0xA4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBDB4u;
            goto label_1fbdb4;
        }
    }
    ctx->pc = 0x1FBD10u;
    // 0x1fbd10: 0x8602022a  lh          $v0, 0x22A($s0)
    ctx->pc = 0x1fbd10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 554)));
    // 0x1fbd14: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FBD14u;
    {
        const bool branch_taken_0x1fbd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD14u;
        // 0x1fbd18: 0x3c030fff  lui         $v1, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd14) {
            ctx->pc = 0x1FBDB0u;
            goto label_1fbdb0;
        }
    }
    ctx->pc = 0x1FBD1Cu;
    // 0x1fbd1c: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1fbd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x1fbd20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fbd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fbd24: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1fbd24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1fbd28: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fbd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1fbd2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fbd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fbd30: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fbd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fbd34: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FBD34u;
    {
        const bool branch_taken_0x1fbd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fbd34) {
            ctx->pc = 0x1FBD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD34u;
            // 0x1fbd38: 0x8cc200a4  lw          $v0, 0xA4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBDB4u;
            goto label_1fbdb4;
        }
    }
    ctx->pc = 0x1FBD3Cu;
    // 0x1fbd3c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1fbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1fbd40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fbd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbd44: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1fbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1fbd48: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1fbd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1fbd4c: 0xa600030a  sh          $zero, 0x30A($s0)
    ctx->pc = 0x1fbd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 778), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fbd50: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbd54: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x1fbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x1fbd58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1fbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1fbd5c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1fbd5cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fbd60: 0x1012  mflo        $v0
    ctx->pc = 0x1fbd60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fbd64: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1fbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1fbd68: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbd68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fbd6c: 0x8cc200b8  lw          $v0, 0xB8($a2)
    ctx->pc = 0x1fbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x1fbd70: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FBD70u;
    {
        const bool branch_taken_0x1fbd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD70u;
        // 0x1fbd74: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd70) {
            ctx->pc = 0x1FBDA8u;
            goto label_1fbda8;
        }
    }
    ctx->pc = 0x1FBD78u;
    // 0x1fbd78: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
    // 0x1fbd7c: 0x8cc400b0  lw          $a0, 0xB0($a2)
    ctx->pc = 0x1fbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 176)));
    // 0x1fbd80: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x1fbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1fbd84: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fbd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbd88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fbd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fbd8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fbd90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1fbd94: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x1fbd94u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fbd98: 0x1012  mflo        $v0
    ctx->pc = 0x1fbd98u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fbd9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBD9Cu;
    {
        const bool branch_taken_0x1fbd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD9Cu;
        // 0x1fbda0: 0xacc200b8  sw          $v0, 0xB8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd9c) {
            ctx->pc = 0x1FBDACu;
            goto label_1fbdac;
        }
    }
    ctx->pc = 0x1FBDA4u;
    // 0x1fbda4: 0x0  nop
    ctx->pc = 0x1fbda4u;
    // NOP
label_1fbda8:
    // 0x1fbda8: 0xacc200b8  sw          $v0, 0xB8($a2)
    ctx->pc = 0x1fbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 184), GPR_U32(ctx, 2));
label_1fbdac:
    // 0x1fbdac: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fbdb0:
    // 0x1fbdb0: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1fbdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1fbdb4:
    // 0x1fbdb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBDB4u;
    {
        const bool branch_taken_0x1fbdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDB4u;
        // 0x1fbdb8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdb4) {
            ctx->pc = 0x1FBDC4u;
            goto label_1fbdc4;
        }
    }
    ctx->pc = 0x1FBDBCu;
    // 0x1fbdbc: 0xacc200a4  sw          $v0, 0xA4($a2)
    ctx->pc = 0x1fbdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 2));
    // 0x1fbdc0: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fbdc4:
    // 0x1fbdc4: 0x8cc200a8  lw          $v0, 0xA8($a2)
    ctx->pc = 0x1fbdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 168)));
    // 0x1fbdc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBDC8u;
    {
        const bool branch_taken_0x1fbdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDC8u;
        // 0x1fbdcc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdc8) {
            ctx->pc = 0x1FBDD8u;
            goto label_1fbdd8;
        }
    }
    ctx->pc = 0x1FBDD0u;
    // 0x1fbdd0: 0xacc200a8  sw          $v0, 0xA8($a2)
    ctx->pc = 0x1fbdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 168), GPR_U32(ctx, 2));
    // 0x1fbdd4: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fbdd8:
    // 0x1fbdd8: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x1fbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1fbddc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBDDCu;
    {
        const bool branch_taken_0x1fbddc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FBDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDDCu;
        // 0x1fbde0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbddc) {
            ctx->pc = 0x1FBDECu;
            goto label_1fbdec;
        }
    }
    ctx->pc = 0x1FBDE4u;
    // 0x1fbde4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fbde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fbde8: 0xacc20078  sw          $v0, 0x78($a2)
    ctx->pc = 0x1fbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 120), GPR_U32(ctx, 2));
label_1fbdec:
    // 0x1fbdec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fbdf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fbdf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbdf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fbdf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fbdf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fbdf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbdfc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fbdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fbe00: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE00u;
        // 0x1fbe04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE08u;
}
