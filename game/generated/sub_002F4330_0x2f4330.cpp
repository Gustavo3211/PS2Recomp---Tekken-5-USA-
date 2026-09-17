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

// Function: sub_002F4330
// Address: 0x2f4330 - 0x2f4418
void sub_002F4330_0x2f4330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4330_0x2f4330");
#endif

    switch (ctx->pc) {
        case 0x2f4330u: goto label_2f4330;
        case 0x2f4334u: goto label_2f4334;
        case 0x2f4338u: goto label_2f4338;
        case 0x2f433cu: goto label_2f433c;
        case 0x2f4340u: goto label_2f4340;
        case 0x2f4344u: goto label_2f4344;
        case 0x2f4348u: goto label_2f4348;
        case 0x2f434cu: goto label_2f434c;
        case 0x2f4350u: goto label_2f4350;
        case 0x2f4354u: goto label_2f4354;
        case 0x2f4358u: goto label_2f4358;
        case 0x2f435cu: goto label_2f435c;
        case 0x2f4360u: goto label_2f4360;
        case 0x2f4364u: goto label_2f4364;
        case 0x2f4368u: goto label_2f4368;
        case 0x2f436cu: goto label_2f436c;
        case 0x2f4370u: goto label_2f4370;
        case 0x2f4374u: goto label_2f4374;
        case 0x2f4378u: goto label_2f4378;
        case 0x2f437cu: goto label_2f437c;
        case 0x2f4380u: goto label_2f4380;
        case 0x2f4384u: goto label_2f4384;
        case 0x2f4388u: goto label_2f4388;
        case 0x2f438cu: goto label_2f438c;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f4394u: goto label_2f4394;
        case 0x2f4398u: goto label_2f4398;
        case 0x2f439cu: goto label_2f439c;
        case 0x2f43a0u: goto label_2f43a0;
        case 0x2f43a4u: goto label_2f43a4;
        case 0x2f43a8u: goto label_2f43a8;
        case 0x2f43acu: goto label_2f43ac;
        case 0x2f43b0u: goto label_2f43b0;
        case 0x2f43b4u: goto label_2f43b4;
        case 0x2f43b8u: goto label_2f43b8;
        case 0x2f43bcu: goto label_2f43bc;
        case 0x2f43c0u: goto label_2f43c0;
        case 0x2f43c4u: goto label_2f43c4;
        case 0x2f43c8u: goto label_2f43c8;
        case 0x2f43ccu: goto label_2f43cc;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f43d4u: goto label_2f43d4;
        case 0x2f43d8u: goto label_2f43d8;
        case 0x2f43dcu: goto label_2f43dc;
        case 0x2f43e0u: goto label_2f43e0;
        case 0x2f43e4u: goto label_2f43e4;
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f43ecu: goto label_2f43ec;
        case 0x2f43f0u: goto label_2f43f0;
        case 0x2f43f4u: goto label_2f43f4;
        case 0x2f43f8u: goto label_2f43f8;
        case 0x2f43fcu: goto label_2f43fc;
        case 0x2f4400u: goto label_2f4400;
        case 0x2f4404u: goto label_2f4404;
        case 0x2f4408u: goto label_2f4408;
        case 0x2f440cu: goto label_2f440c;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4414u: goto label_2f4414;
        default: break;
    }

    ctx->pc = 0x2f4330u;

label_2f4330:
    // 0x2f4330: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f4330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f4334:
    // 0x2f4334: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2f4334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2f4338:
    // 0x2f4338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f433c:
    // 0x2f433c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2f433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_2f4340:
    // 0x2f4340: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f4340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2f4344:
    // 0x2f4344: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2f4344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_2f4348:
    // 0x2f4348: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x2f4348u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f434c:
    // 0x2f434c: 0xc0bc076  jal         func_2F01D8
label_2f4350:
    if (ctx->pc == 0x2F4350u) {
        ctx->pc = 0x2F4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F434Cu;
        // 0x2f4350: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4354u;
        goto label_2f4354;
    }
    ctx->pc = 0x2F434Cu;
    SET_GPR_U32(ctx, 31, 0x2F4354u);
    ctx->pc = 0x2F4350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F434Cu;
    // 0x2f4350: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F01D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F01D8u, 0x2F434Cu, 0x2F4354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4354u;
label_2f4354:
    // 0x2f4354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4358:
    // 0x2f4358: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f4358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f435c:
    // 0x2f435c: 0xc0bcf2c  jal         func_2F3CB0
label_2f4360:
    if (ctx->pc == 0x2F4360u) {
        ctx->pc = 0x2F4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F435Cu;
        // 0x2f4360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4364u;
        goto label_2f4364;
    }
    ctx->pc = 0x2F435Cu;
    SET_GPR_U32(ctx, 31, 0x2F4364u);
    ctx->pc = 0x2F4360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F435Cu;
    // 0x2f4360: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3CB0u, 0x2F435Cu, 0x2F4364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4364u;
label_2f4364:
    // 0x2f4364: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f4368:
    // 0x2f4368: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_2f436c:
    if (ctx->pc == 0x2F436Cu) {
        ctx->pc = 0x2F436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4368u;
        // 0x2f436c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4370u;
        goto label_2f4370;
    }
    ctx->pc = 0x2F4368u;
    {
        const bool branch_taken_0x2f4368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4368) {
            ctx->pc = 0x2F436Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4368u;
            // 0x2f436c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4408u;
            goto label_2f4408;
        }
    }
    ctx->pc = 0x2F4370u;
label_2f4370:
    // 0x2f4370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4374:
    // 0x2f4374: 0x87a50002  lh          $a1, 0x2($sp)
    ctx->pc = 0x2f4374u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2f4378:
    // 0x2f4378: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
label_2f437c:
    if (ctx->pc == 0x2F437Cu) {
        ctx->pc = 0x2F437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4378u;
        // 0x2f437c: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4380u;
        goto label_2f4380;
    }
    ctx->pc = 0x2F4378u;
    {
        const bool branch_taken_0x2f4378 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F437Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4378u;
        // 0x2f437c: 0x530c0  sll         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4378) {
            ctx->pc = 0x2F43B0u;
            goto label_2f43b0;
        }
    }
    ctx->pc = 0x2F4380u;
label_2f4380:
    // 0x2f4380: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x2f4380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_2f4384:
    // 0x2f4384: 0x87a40004  lh          $a0, 0x4($sp)
    ctx->pc = 0x2f4384u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_2f4388:
    // 0x2f4388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f438c:
    // 0x2f438c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f4390:
    // 0x2f4390: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2f4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f4394:
    // 0x2f4394: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f4394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2f4398:
    // 0x2f4398: 0x6862ffff  ldl         $v0, -0x1($v1)
    ctx->pc = 0x2f4398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2f439c:
    // 0x2f439c: 0x6c62fff8  ldr         $v0, -0x8($v1)
    ctx->pc = 0x2f439cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2f43a0:
    // 0x2f43a0: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x2f43a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f43a4:
    // 0x2f43a4: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x2f43a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2f43a8:
    // 0x2f43a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2f43ac:
    if (ctx->pc == 0x2F43ACu) {
        ctx->pc = 0x2F43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43A8u;
        // 0x2f43ac: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43B0u;
        goto label_2f43b0;
    }
    ctx->pc = 0x2F43A8u;
    {
        const bool branch_taken_0x2f43a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43A8u;
        // 0x2f43ac: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43a8) {
            ctx->pc = 0x2F43B4u;
            goto label_2f43b4;
        }
    }
    ctx->pc = 0x2F43B0u;
label_2f43b0:
    // 0x2f43b0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f43b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f43b4:
    // 0x2f43b4: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x2f43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_2f43b8:
    // 0x2f43b8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_2f43bc:
    if (ctx->pc == 0x2F43BCu) {
        ctx->pc = 0x2F43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B8u;
        // 0x2f43bc: 0x87a30000  lh          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43C0u;
        goto label_2f43c0;
    }
    ctx->pc = 0x2F43B8u;
    {
        const bool branch_taken_0x2f43b8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2F43BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43B8u;
        // 0x2f43bc: 0x87a30000  lh          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43b8) {
            ctx->pc = 0x2F43D0u;
            goto label_2f43d0;
        }
    }
    ctx->pc = 0x2F43C0u;
label_2f43c0:
    // 0x2f43c0: 0x87a20030  lh          $v0, 0x30($sp)
    ctx->pc = 0x2f43c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_2f43c4:
    // 0x2f43c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f43c8:
    if (ctx->pc == 0x2F43C8u) {
        ctx->pc = 0x2F43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43C4u;
        // 0x2f43c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43CCu;
        goto label_2f43cc;
    }
    ctx->pc = 0x2F43C4u;
    {
        const bool branch_taken_0x2f43c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43C4u;
        // 0x2f43c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43c4) {
            ctx->pc = 0x2F43D4u;
            goto label_2f43d4;
        }
    }
    ctx->pc = 0x2F43CCu;
label_2f43cc:
    // 0x2f43cc: 0x0  nop
    ctx->pc = 0x2f43ccu;
    // NOP
label_2f43d0:
    // 0x2f43d0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2f43d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f43d4:
    // 0x2f43d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f43d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f43d8:
    // 0x2f43d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f43d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f43dc:
    // 0x2f43dc: 0xc0f809  jalr        $a2
label_2f43e0:
    if (ctx->pc == 0x2F43E0u) {
        ctx->pc = 0x2F43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43DCu;
        // 0x2f43e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43E4u;
        goto label_2f43e4;
    }
    ctx->pc = 0x2F43DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2F43E4u);
        ctx->pc = 0x2F43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43DCu;
        // 0x2f43e0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F43DCu, 0x2F43E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F43E4u;
label_2f43e4:
    // 0x2f43e4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2f43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2f43e8:
    // 0x2f43e8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f43e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f43ec:
    // 0x2f43ec: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x2f43ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_2f43f0:
    // 0x2f43f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2f43f4:
    if (ctx->pc == 0x2F43F4u) {
        ctx->pc = 0x2F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F0u;
        // 0x2f43f4: 0x2071021  addu        $v0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43F8u;
        goto label_2f43f8;
    }
    ctx->pc = 0x2F43F0u;
    {
        const bool branch_taken_0x2f43f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F0u;
        // 0x2f43f4: 0x2071021  addu        $v0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43f0) {
            ctx->pc = 0x2F4404u;
            goto label_2f4404;
        }
    }
    ctx->pc = 0x2F43F8u;
label_2f43f8:
    // 0x2f43f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f43fc:
    // 0x2f43fc: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_2f4400:
    if (ctx->pc == 0x2F4400u) {
        ctx->pc = 0x2F4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43FCu;
        // 0x2f4400: 0x87a50002  lh          $a1, 0x2($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4404u;
        goto label_2f4404;
    }
    ctx->pc = 0x2F43FCu;
    {
        const bool branch_taken_0x2f43fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43FCu;
        // 0x2f4400: 0x87a50002  lh          $a1, 0x2($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43fc) {
            ctx->pc = 0x2F4378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f4378;
        }
    }
    ctx->pc = 0x2F4404u;
label_2f4404:
    // 0x2f4404: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2f4404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4408:
    // 0x2f4408: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2f4408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2f440c:
    // 0x2f440c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f440cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f4410:
    // 0x2f4410: 0x3e00008  jr          $ra
label_2f4414:
    if (ctx->pc == 0x2F4414u) {
        ctx->pc = 0x2F4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4410u;
        // 0x2f4414: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4418u;
        goto label_fallthrough_0x2f4410;
    }
    ctx->pc = 0x2F4410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4410u;
        // 0x2f4414: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f4410:
    ctx->pc = 0x2F4418u;
}
