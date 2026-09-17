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

// Function: sub_002D44E8
// Address: 0x2d44e8 - 0x2d45b8
void sub_002D44E8_0x2d44e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D44E8_0x2d44e8");
#endif

    switch (ctx->pc) {
        case 0x2d44e8u: goto label_2d44e8;
        case 0x2d44ecu: goto label_2d44ec;
        case 0x2d44f0u: goto label_2d44f0;
        case 0x2d44f4u: goto label_2d44f4;
        case 0x2d44f8u: goto label_2d44f8;
        case 0x2d44fcu: goto label_2d44fc;
        case 0x2d4500u: goto label_2d4500;
        case 0x2d4504u: goto label_2d4504;
        case 0x2d4508u: goto label_2d4508;
        case 0x2d450cu: goto label_2d450c;
        case 0x2d4510u: goto label_2d4510;
        case 0x2d4514u: goto label_2d4514;
        case 0x2d4518u: goto label_2d4518;
        case 0x2d451cu: goto label_2d451c;
        case 0x2d4520u: goto label_2d4520;
        case 0x2d4524u: goto label_2d4524;
        case 0x2d4528u: goto label_2d4528;
        case 0x2d452cu: goto label_2d452c;
        case 0x2d4530u: goto label_2d4530;
        case 0x2d4534u: goto label_2d4534;
        case 0x2d4538u: goto label_2d4538;
        case 0x2d453cu: goto label_2d453c;
        case 0x2d4540u: goto label_2d4540;
        case 0x2d4544u: goto label_2d4544;
        case 0x2d4548u: goto label_2d4548;
        case 0x2d454cu: goto label_2d454c;
        case 0x2d4550u: goto label_2d4550;
        case 0x2d4554u: goto label_2d4554;
        case 0x2d4558u: goto label_2d4558;
        case 0x2d455cu: goto label_2d455c;
        case 0x2d4560u: goto label_2d4560;
        case 0x2d4564u: goto label_2d4564;
        case 0x2d4568u: goto label_2d4568;
        case 0x2d456cu: goto label_2d456c;
        case 0x2d4570u: goto label_2d4570;
        case 0x2d4574u: goto label_2d4574;
        case 0x2d4578u: goto label_2d4578;
        case 0x2d457cu: goto label_2d457c;
        case 0x2d4580u: goto label_2d4580;
        case 0x2d4584u: goto label_2d4584;
        case 0x2d4588u: goto label_2d4588;
        case 0x2d458cu: goto label_2d458c;
        case 0x2d4590u: goto label_2d4590;
        case 0x2d4594u: goto label_2d4594;
        case 0x2d4598u: goto label_2d4598;
        case 0x2d459cu: goto label_2d459c;
        case 0x2d45a0u: goto label_2d45a0;
        case 0x2d45a4u: goto label_2d45a4;
        case 0x2d45a8u: goto label_2d45a8;
        case 0x2d45acu: goto label_2d45ac;
        case 0x2d45b0u: goto label_2d45b0;
        case 0x2d45b4u: goto label_2d45b4;
        default: break;
    }

    ctx->pc = 0x2d44e8u;

label_2d44e8:
    // 0x2d44e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d44e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2d44ec:
    // 0x2d44ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d44ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d44f0:
    // 0x2d44f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d44f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2d44f4:
    // 0x2d44f4: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2d44f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_2d44f8:
    // 0x2d44f8: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_2d44fc:
    if (ctx->pc == 0x2D44FCu) {
        ctx->pc = 0x2D44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D44F8u;
        // 0x2d44fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4500u;
        goto label_2d4500;
    }
    ctx->pc = 0x2D44F8u;
    {
        const bool branch_taken_0x2d44f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d44f8) {
            ctx->pc = 0x2D44FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D44F8u;
            // 0x2d44fc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D45B0u;
            goto label_2d45b0;
        }
    }
    ctx->pc = 0x2D4500u;
label_2d4500:
    // 0x2d4500: 0x84a400ae  lh          $a0, 0xAE($a1)
    ctx->pc = 0x2d4500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 174)));
label_2d4504:
    // 0x2d4504: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
label_2d4508:
    if (ctx->pc == 0x2D4508u) {
        ctx->pc = 0x2D4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4504u;
        // 0x2d4508: 0x94a600ae  lhu         $a2, 0xAE($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 174)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D450Cu;
        goto label_2d450c;
    }
    ctx->pc = 0x2D4504u;
    {
        const bool branch_taken_0x2d4504 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4504u;
        // 0x2d4508: 0x94a600ae  lhu         $a2, 0xAE($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 174)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4504) {
            ctx->pc = 0x2D4548u;
            goto label_2d4548;
        }
    }
    ctx->pc = 0x2D450Cu;
label_2d450c:
    // 0x2d450c: 0x84a300b0  lh          $v1, 0xB0($a1)
    ctx->pc = 0x2d450cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 176)));
label_2d4510:
    // 0x2d4510: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2d4510u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2d4514:
    // 0x2d4514: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2d4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2d4518:
    // 0x2d4518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d451c:
    // 0x2d451c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d451cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d4520:
    // 0x2d4520: 0x6843ffff  ldl         $v1, -0x1($v0)
    ctx->pc = 0x2d4520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2d4524:
    // 0x2d4524: 0x6c43fff8  ldr         $v1, -0x8($v0)
    ctx->pc = 0x2d4524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2d4528:
    // 0x2d4528: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2d4528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d452c:
    // 0x2d452c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2d452cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4530:
    // 0x2d4530: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d4530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d4534:
    // 0x2d4534: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2d4538:
    if (ctx->pc == 0x2D4538u) {
        ctx->pc = 0x2D4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4534u;
        // 0x2d4538: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D453Cu;
        goto label_2d453c;
    }
    ctx->pc = 0x2D4534u;
    {
        const bool branch_taken_0x2d4534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4534u;
        // 0x2d4538: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4534) {
            ctx->pc = 0x2D4554u;
            goto label_2d4554;
        }
    }
    ctx->pc = 0x2D453Cu;
label_2d453c:
    // 0x2d453c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2d4540:
    if (ctx->pc == 0x2D4540u) {
        ctx->pc = 0x2D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D453Cu;
        // 0x2d4540: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4544u;
        goto label_2d4544;
    }
    ctx->pc = 0x2D453Cu;
    {
        const bool branch_taken_0x2d453c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D453Cu;
        // 0x2d4540: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d453c) {
            ctx->pc = 0x2D45B0u;
            goto label_2d45b0;
        }
    }
    ctx->pc = 0x2D4544u;
label_2d4544:
    // 0x2d4544: 0x0  nop
    ctx->pc = 0x2d4544u;
    // NOP
label_2d4548:
    // 0x2d4548: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x2d4548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_2d454c:
    // 0x2d454c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2d4550:
    if (ctx->pc == 0x2D4550u) {
        ctx->pc = 0x2D4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D454Cu;
        // 0x2d4550: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4554u;
        goto label_2d4554;
    }
    ctx->pc = 0x2D454Cu;
    {
        const bool branch_taken_0x2d454c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D454Cu;
        // 0x2d4550: 0x61400  sll         $v0, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d454c) {
            ctx->pc = 0x2D45ACu;
            goto label_2d45ac;
        }
    }
    ctx->pc = 0x2D4554u;
label_2d4554:
    // 0x2d4554: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2d4554u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_2d4558:
    // 0x2d4558: 0x4c0000b  bltz        $a2, . + 4 + (0xB << 2)
label_2d455c:
    if (ctx->pc == 0x2D455Cu) {
        ctx->pc = 0x2D455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4558u;
        // 0x2d455c: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4560u;
        goto label_2d4560;
    }
    ctx->pc = 0x2D4558u;
    {
        const bool branch_taken_0x2d4558 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2D455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4558u;
        // 0x2d455c: 0x620c0  sll         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4558) {
            ctx->pc = 0x2D4588u;
            goto label_2d4588;
        }
    }
    ctx->pc = 0x2D4560u;
label_2d4560:
    // 0x2d4560: 0x84a200b0  lh          $v0, 0xB0($a1)
    ctx->pc = 0x2d4560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 176)));
label_2d4564:
    // 0x2d4564: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2d4564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2d4568:
    // 0x2d4568: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d456c:
    // 0x2d456c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2d4570:
    // 0x2d4570: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2d4570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2d4574:
    // 0x2d4574: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2d4574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2d4578:
    // 0x2d4578: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2d4578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d457c:
    // 0x2d457c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2d457cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d4580:
    // 0x2d4580: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d4584:
    if (ctx->pc == 0x2D4584u) {
        ctx->pc = 0x2D4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4580u;
        // 0x2d4584: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4588u;
        goto label_2d4588;
    }
    ctx->pc = 0x2D4580u;
    {
        const bool branch_taken_0x2d4580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4580u;
        // 0x2d4584: 0x8fa70014  lw          $a3, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4580) {
            ctx->pc = 0x2D458Cu;
            goto label_2d458c;
        }
    }
    ctx->pc = 0x2D4588u;
label_2d4588:
    // 0x2d4588: 0x8ca700b0  lw          $a3, 0xB0($a1)
    ctx->pc = 0x2d4588u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
label_2d458c:
    // 0x2d458c: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
label_2d4590:
    if (ctx->pc == 0x2D4590u) {
        ctx->pc = 0x2D4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D458Cu;
        // 0x2d4590: 0x84a300ac  lh          $v1, 0xAC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D4594u;
        goto label_2d4594;
    }
    ctx->pc = 0x2D458Cu;
    {
        const bool branch_taken_0x2d458c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2D4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D458Cu;
        // 0x2d4590: 0x84a300ac  lh          $v1, 0xAC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d458c) {
            ctx->pc = 0x2D45A0u;
            goto label_2d45a0;
        }
    }
    ctx->pc = 0x2D4594u;
label_2d4594:
    // 0x2d4594: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x2d4594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_2d4598:
    // 0x2d4598: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d459c:
    if (ctx->pc == 0x2D459Cu) {
        ctx->pc = 0x2D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4598u;
        // 0x2d459c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45A0u;
        goto label_2d45a0;
    }
    ctx->pc = 0x2D4598u;
    {
        const bool branch_taken_0x2d4598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4598u;
        // 0x2d459c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4598) {
            ctx->pc = 0x2D45A4u;
            goto label_2d45a4;
        }
    }
    ctx->pc = 0x2D45A0u;
label_2d45a0:
    // 0x2d45a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2d45a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2d45a4:
    // 0x2d45a4: 0xe0f809  jalr        $a3
label_2d45a8:
    if (ctx->pc == 0x2D45A8u) {
        ctx->pc = 0x2D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45A4u;
        // 0x2d45a8: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45ACu;
        goto label_2d45ac;
    }
    ctx->pc = 0x2D45A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2D45ACu);
        ctx->pc = 0x2D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45A4u;
        // 0x2d45a8: 0xa22021  addu        $a0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D45A4u, 0x2D45ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D45ACu;
label_2d45ac:
    // 0x2d45ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d45acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d45b0:
    // 0x2d45b0: 0x3e00008  jr          $ra
label_2d45b4:
    if (ctx->pc == 0x2D45B4u) {
        ctx->pc = 0x2D45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45B0u;
        // 0x2d45b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D45B8u;
        goto label_fallthrough_0x2d45b0;
    }
    ctx->pc = 0x2D45B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D45B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45B0u;
        // 0x2d45b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D45B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d45b0:
    ctx->pc = 0x2D45B8u;
}
