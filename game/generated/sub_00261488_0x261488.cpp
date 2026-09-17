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

// Function: sub_00261488
// Address: 0x261488 - 0x261568
void sub_00261488_0x261488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261488_0x261488");
#endif

    switch (ctx->pc) {
        case 0x261488u: goto label_261488;
        case 0x26148cu: goto label_26148c;
        case 0x261490u: goto label_261490;
        case 0x261494u: goto label_261494;
        case 0x261498u: goto label_261498;
        case 0x26149cu: goto label_26149c;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614a4u: goto label_2614a4;
        case 0x2614a8u: goto label_2614a8;
        case 0x2614acu: goto label_2614ac;
        case 0x2614b0u: goto label_2614b0;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614b8u: goto label_2614b8;
        case 0x2614bcu: goto label_2614bc;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614c4u: goto label_2614c4;
        case 0x2614c8u: goto label_2614c8;
        case 0x2614ccu: goto label_2614cc;
        case 0x2614d0u: goto label_2614d0;
        case 0x2614d4u: goto label_2614d4;
        case 0x2614d8u: goto label_2614d8;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e0u: goto label_2614e0;
        case 0x2614e4u: goto label_2614e4;
        case 0x2614e8u: goto label_2614e8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614f0u: goto label_2614f0;
        case 0x2614f4u: goto label_2614f4;
        case 0x2614f8u: goto label_2614f8;
        case 0x2614fcu: goto label_2614fc;
        case 0x261500u: goto label_261500;
        case 0x261504u: goto label_261504;
        case 0x261508u: goto label_261508;
        case 0x26150cu: goto label_26150c;
        case 0x261510u: goto label_261510;
        case 0x261514u: goto label_261514;
        case 0x261518u: goto label_261518;
        case 0x26151cu: goto label_26151c;
        case 0x261520u: goto label_261520;
        case 0x261524u: goto label_261524;
        case 0x261528u: goto label_261528;
        case 0x26152cu: goto label_26152c;
        case 0x261530u: goto label_261530;
        case 0x261534u: goto label_261534;
        case 0x261538u: goto label_261538;
        case 0x26153cu: goto label_26153c;
        case 0x261540u: goto label_261540;
        case 0x261544u: goto label_261544;
        case 0x261548u: goto label_261548;
        case 0x26154cu: goto label_26154c;
        case 0x261550u: goto label_261550;
        case 0x261554u: goto label_261554;
        case 0x261558u: goto label_261558;
        case 0x26155cu: goto label_26155c;
        case 0x261560u: goto label_261560;
        case 0x261564u: goto label_261564;
        default: break;
    }

    ctx->pc = 0x261488u;

label_261488:
    // 0x261488: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x261488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26148c:
    // 0x26148c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_261490:
    // 0x261490: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x261490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_261494:
    // 0x261494: 0x245023b0  addiu       $s0, $v0, 0x23B0
    ctx->pc = 0x261494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
label_261498:
    // 0x261498: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x261498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_26149c:
    // 0x26149c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26149cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2614a0:
    // 0x2614a0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2614a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2614a4:
    // 0x2614a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2614a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2614a8:
    // 0x2614a8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2614a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2614ac:
    // 0x2614ac: 0x26020058  addiu       $v0, $s0, 0x58
    ctx->pc = 0x2614acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2614b0:
    // 0x2614b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2614b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2614b4:
    // 0x2614b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2614b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2614b8:
    // 0x2614b8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2614bc:
    if (ctx->pc == 0x2614BCu) {
        ctx->pc = 0x2614BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614B8u;
        // 0x2614bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614C0u;
        goto label_2614c0;
    }
    ctx->pc = 0x2614B8u;
    {
        const bool branch_taken_0x2614b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2614BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614B8u;
        // 0x2614bc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614b8) {
            ctx->pc = 0x261550u;
            goto label_261550;
        }
    }
    ctx->pc = 0x2614C0u;
label_2614c0:
    // 0x2614c0: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_2614c4:
    // 0x2614c4: 0xc097f3a  jal         func_25FCE8
label_2614c8:
    if (ctx->pc == 0x2614C8u) {
        ctx->pc = 0x2614C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614C4u;
        // 0x2614c8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614CCu;
        goto label_2614cc;
    }
    ctx->pc = 0x2614C4u;
    SET_GPR_U32(ctx, 31, 0x2614CCu);
    ctx->pc = 0x2614C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614C4u;
    // 0x2614c8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCE8u, 0x2614C4u, 0x2614CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614CCu;
label_2614cc:
    // 0x2614cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2614ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2614d0:
    // 0x2614d0: 0xc098d2c  jal         func_2634B0
label_2614d4:
    if (ctx->pc == 0x2614D4u) {
        ctx->pc = 0x2614D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614D0u;
        // 0x2614d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614D8u;
        goto label_2614d8;
    }
    ctx->pc = 0x2614D0u;
    SET_GPR_U32(ctx, 31, 0x2614D8u);
    ctx->pc = 0x2614D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614D0u;
    // 0x2614d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2634B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2634B0u, 0x2614D0u, 0x2614D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614D8u;
label_2614d8:
    // 0x2614d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2614d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2614dc:
    // 0x2614dc: 0xc098d2c  jal         func_2634B0
label_2614e0:
    if (ctx->pc == 0x2614E0u) {
        ctx->pc = 0x2614E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614DCu;
        // 0x2614e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614E4u;
        goto label_2614e4;
    }
    ctx->pc = 0x2614DCu;
    SET_GPR_U32(ctx, 31, 0x2614E4u);
    ctx->pc = 0x2614E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614DCu;
    // 0x2614e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2634B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2634B0u, 0x2614DCu, 0x2614E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614E4u;
label_2614e4:
    // 0x2614e4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2614e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2614e8:
    // 0x2614e8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2614e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2614ec:
    // 0x2614ec: 0xc097fdc  jal         func_25FF70
label_2614f0:
    if (ctx->pc == 0x2614F0u) {
        ctx->pc = 0x2614F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614ECu;
        // 0x2614f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614F4u;
        goto label_2614f4;
    }
    ctx->pc = 0x2614ECu;
    SET_GPR_U32(ctx, 31, 0x2614F4u);
    ctx->pc = 0x2614F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2614ECu;
    // 0x2614f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FF70u, 0x2614ECu, 0x2614F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2614F4u;
label_2614f4:
    // 0x2614f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2614f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2614f8:
    // 0x2614f8: 0x8624001a  lh          $a0, 0x1A($s1)
    ctx->pc = 0x2614f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_2614fc:
    // 0x2614fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2614fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261500:
    // 0x261500: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
label_261504:
    if (ctx->pc == 0x261504u) {
        ctx->pc = 0x261504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261500u;
        // 0x261504: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261508u;
        goto label_261508;
    }
    ctx->pc = 0x261500u;
    {
        const bool branch_taken_0x261500 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x261504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261500u;
        // 0x261504: 0x438c0  sll         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261500) {
            ctx->pc = 0x261530u;
            goto label_261530;
        }
    }
    ctx->pc = 0x261508u;
label_261508:
    // 0x261508: 0x8622001c  lh          $v0, 0x1C($s1)
    ctx->pc = 0x261508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_26150c:
    // 0x26150c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_261510:
    // 0x261510: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261514:
    // 0x261514: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_261518:
    // 0x261518: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x261518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_26151c:
    // 0x26151c: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x26151cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_261520:
    // 0x261520: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x261520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261524:
    // 0x261524: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x261524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261528:
    // 0x261528: 0x10000002  b           . + 4 + (0x2 << 2)
label_26152c:
    if (ctx->pc == 0x26152Cu) {
        ctx->pc = 0x26152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261528u;
        // 0x26152c: 0x8fa70054  lw          $a3, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261530u;
        goto label_261530;
    }
    ctx->pc = 0x261528u;
    {
        const bool branch_taken_0x261528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261528u;
        // 0x26152c: 0x8fa70054  lw          $a3, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261528) {
            ctx->pc = 0x261534u;
            goto label_261534;
        }
    }
    ctx->pc = 0x261530u;
label_261530:
    // 0x261530: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_261534:
    // 0x261534: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x261534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_261538:
    // 0x261538: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_26153c:
    if (ctx->pc == 0x26153Cu) {
        ctx->pc = 0x26153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261538u;
        // 0x26153c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261540u;
        goto label_261540;
    }
    ctx->pc = 0x261538u;
    {
        const bool branch_taken_0x261538 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x26153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261538u;
        // 0x26153c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261538) {
            ctx->pc = 0x261548u;
            goto label_261548;
        }
    }
    ctx->pc = 0x261540u;
label_261540:
    // 0x261540: 0x87a20050  lh          $v0, 0x50($sp)
    ctx->pc = 0x261540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
label_261544:
    // 0x261544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_261548:
    // 0x261548: 0xe0f809  jalr        $a3
label_26154c:
    if (ctx->pc == 0x26154Cu) {
        ctx->pc = 0x26154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261548u;
        // 0x26154c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261550u;
        goto label_261550;
    }
    ctx->pc = 0x261548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x261550u);
        ctx->pc = 0x26154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261548u;
        // 0x26154c: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261548u, 0x261550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261550u;
label_261550:
    // 0x261550: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x261550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_261554:
    // 0x261554: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x261554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_261558:
    // 0x261558: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x261558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26155c:
    // 0x26155c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x26155cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_261560:
    // 0x261560: 0x3e00008  jr          $ra
label_261564:
    if (ctx->pc == 0x261564u) {
        ctx->pc = 0x261564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261560u;
        // 0x261564: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261568u;
        goto label_fallthrough_0x261560;
    }
    ctx->pc = 0x261560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261560u;
        // 0x261564: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261560:
    ctx->pc = 0x261568u;
}
