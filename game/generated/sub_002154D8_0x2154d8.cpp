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

// Function: sub_002154D8
// Address: 0x2154d8 - 0x2155b0
void sub_002154D8_0x2154d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002154D8_0x2154d8");
#endif

    switch (ctx->pc) {
        case 0x2154d8u: goto label_2154d8;
        case 0x2154dcu: goto label_2154dc;
        case 0x2154e0u: goto label_2154e0;
        case 0x2154e4u: goto label_2154e4;
        case 0x2154e8u: goto label_2154e8;
        case 0x2154ecu: goto label_2154ec;
        case 0x2154f0u: goto label_2154f0;
        case 0x2154f4u: goto label_2154f4;
        case 0x2154f8u: goto label_2154f8;
        case 0x2154fcu: goto label_2154fc;
        case 0x215500u: goto label_215500;
        case 0x215504u: goto label_215504;
        case 0x215508u: goto label_215508;
        case 0x21550cu: goto label_21550c;
        case 0x215510u: goto label_215510;
        case 0x215514u: goto label_215514;
        case 0x215518u: goto label_215518;
        case 0x21551cu: goto label_21551c;
        case 0x215520u: goto label_215520;
        case 0x215524u: goto label_215524;
        case 0x215528u: goto label_215528;
        case 0x21552cu: goto label_21552c;
        case 0x215530u: goto label_215530;
        case 0x215534u: goto label_215534;
        case 0x215538u: goto label_215538;
        case 0x21553cu: goto label_21553c;
        case 0x215540u: goto label_215540;
        case 0x215544u: goto label_215544;
        case 0x215548u: goto label_215548;
        case 0x21554cu: goto label_21554c;
        case 0x215550u: goto label_215550;
        case 0x215554u: goto label_215554;
        case 0x215558u: goto label_215558;
        case 0x21555cu: goto label_21555c;
        case 0x215560u: goto label_215560;
        case 0x215564u: goto label_215564;
        case 0x215568u: goto label_215568;
        case 0x21556cu: goto label_21556c;
        case 0x215570u: goto label_215570;
        case 0x215574u: goto label_215574;
        case 0x215578u: goto label_215578;
        case 0x21557cu: goto label_21557c;
        case 0x215580u: goto label_215580;
        case 0x215584u: goto label_215584;
        case 0x215588u: goto label_215588;
        case 0x21558cu: goto label_21558c;
        case 0x215590u: goto label_215590;
        case 0x215594u: goto label_215594;
        case 0x215598u: goto label_215598;
        case 0x21559cu: goto label_21559c;
        case 0x2155a0u: goto label_2155a0;
        case 0x2155a4u: goto label_2155a4;
        case 0x2155a8u: goto label_2155a8;
        case 0x2155acu: goto label_2155ac;
        default: break;
    }

    ctx->pc = 0x2154d8u;

label_2154d8:
    // 0x2154d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2154d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2154dc:
    // 0x2154dc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2154dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_2154e0:
    // 0x2154e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2154e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2154e4:
    // 0x2154e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2154e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2154e8:
    // 0x2154e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2154e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2154ec:
    // 0x2154ec: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2154ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2154f0:
    // 0x2154f0: 0x34430080  ori         $v1, $v0, 0x80
    ctx->pc = 0x2154f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2154f4:
    // 0x2154f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2154f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2154f8:
    // 0x2154f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2154fc:
    if (ctx->pc == 0x2154FCu) {
        ctx->pc = 0x2154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F8u;
        // 0x2154fc: 0x24a583c0  addiu       $a1, $a1, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215500u;
        goto label_215500;
    }
    ctx->pc = 0x2154F8u;
    {
        const bool branch_taken_0x2154f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154F8u;
        // 0x2154fc: 0x24a583c0  addiu       $a1, $a1, -0x7C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f8) {
            ctx->pc = 0x215510u;
            goto label_215510;
        }
    }
    ctx->pc = 0x215500u;
label_215500:
    // 0x215500: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x215500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_215504:
    // 0x215504: 0x10000004  b           . + 4 + (0x4 << 2)
label_215508:
    if (ctx->pc == 0x215508u) {
        ctx->pc = 0x215508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215504u;
        // 0x215508: 0x8c468868  lw          $a2, -0x7798($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21550Cu;
        goto label_21550c;
    }
    ctx->pc = 0x215504u;
    {
        const bool branch_taken_0x215504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215504u;
        // 0x215508: 0x8c468868  lw          $a2, -0x7798($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215504) {
            ctx->pc = 0x215518u;
            goto label_215518;
        }
    }
    ctx->pc = 0x21550Cu;
label_21550c:
    // 0x21550c: 0x0  nop
    ctx->pc = 0x21550cu;
    // NOP
label_215510:
    // 0x215510: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x215510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_215514:
    // 0x215514: 0x8c46886c  lw          $a2, -0x7794($v0)
    ctx->pc = 0x215514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936684)));
label_215518:
    // 0x215518: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x215518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_21551c:
    // 0x21551c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x21551cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_215520:
    // 0x215520: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x215520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_215524:
    // 0x215524: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x215524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_215528:
    // 0x215528: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x215528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21552c:
    // 0x21552c: 0x8444000a  lh          $a0, 0xA($v0)
    ctx->pc = 0x21552cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_215530:
    // 0x215530: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
label_215534:
    if (ctx->pc == 0x215534u) {
        ctx->pc = 0x215534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215530u;
        // 0x215534: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215538u;
        goto label_215538;
    }
    ctx->pc = 0x215530u;
    {
        const bool branch_taken_0x215530 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x215534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215530u;
        // 0x215534: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215530) {
            ctx->pc = 0x215560u;
            goto label_215560;
        }
    }
    ctx->pc = 0x215538u;
label_215538:
    // 0x215538: 0x8442000c  lh          $v0, 0xC($v0)
    ctx->pc = 0x215538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_21553c:
    // 0x21553c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_215540:
    // 0x215540: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215544:
    // 0x215544: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x215544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_215548:
    // 0x215548: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x215548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_21554c:
    // 0x21554c: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x21554cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_215550:
    // 0x215550: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x215550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_215554:
    // 0x215554: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x215554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_215558:
    // 0x215558: 0x10000002  b           . + 4 + (0x2 << 2)
label_21555c:
    if (ctx->pc == 0x21555Cu) {
        ctx->pc = 0x21555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215558u;
        // 0x21555c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215560u;
        goto label_215560;
    }
    ctx->pc = 0x215558u;
    {
        const bool branch_taken_0x215558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215558u;
        // 0x21555c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215558) {
            ctx->pc = 0x215564u;
            goto label_215564;
        }
    }
    ctx->pc = 0x215560u;
label_215560:
    // 0x215560: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x215560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_215564:
    // 0x215564: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x215564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_215568:
    // 0x215568: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x215568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21556c:
    // 0x21556c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_215570:
    if (ctx->pc == 0x215570u) {
        ctx->pc = 0x215570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21556Cu;
        // 0x215570: 0x84430058  lh          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215574u;
        goto label_215574;
    }
    ctx->pc = 0x21556Cu;
    {
        const bool branch_taken_0x21556c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x215570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21556Cu;
        // 0x215570: 0x84430058  lh          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21556c) {
            ctx->pc = 0x215580u;
            goto label_215580;
        }
    }
    ctx->pc = 0x215574u;
label_215574:
    // 0x215574: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x215574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_215578:
    // 0x215578: 0x10000002  b           . + 4 + (0x2 << 2)
label_21557c:
    if (ctx->pc == 0x21557Cu) {
        ctx->pc = 0x21557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215578u;
        // 0x21557c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215580u;
        goto label_215580;
    }
    ctx->pc = 0x215578u;
    {
        const bool branch_taken_0x215578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215578u;
        // 0x21557c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215578) {
            ctx->pc = 0x215584u;
            goto label_215584;
        }
    }
    ctx->pc = 0x215580u;
label_215580:
    // 0x215580: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x215580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_215584:
    // 0x215584: 0xe0f809  jalr        $a3
label_215588:
    if (ctx->pc == 0x215588u) {
        ctx->pc = 0x215588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215584u;
        // 0x215588: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21558Cu;
        goto label_21558c;
    }
    ctx->pc = 0x215584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x21558Cu);
        ctx->pc = 0x215588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215584u;
        // 0x215588: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215584u, 0x21558Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21558Cu;
label_21558c:
    // 0x21558c: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_215590:
    // 0x215590: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_215594:
    // 0x215594: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x215594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_215598:
    // 0x215598: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x215598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21559c:
    // 0x21559c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x21559cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2155a0:
    // 0x2155a0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2155a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_2155a4:
    // 0x2155a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2155a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2155a8:
    // 0x2155a8: 0x3e00008  jr          $ra
label_2155ac:
    if (ctx->pc == 0x2155ACu) {
        ctx->pc = 0x2155ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155A8u;
        // 0x2155ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2155B0u;
        goto label_fallthrough_0x2155a8;
    }
    ctx->pc = 0x2155A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2155ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2155A8u;
        // 0x2155ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2155A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2155a8:
    ctx->pc = 0x2155B0u;
}
