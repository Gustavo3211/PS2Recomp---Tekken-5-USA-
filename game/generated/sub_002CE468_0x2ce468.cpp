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

// Function: sub_002CE468
// Address: 0x2ce468 - 0x2ce578
void sub_002CE468_0x2ce468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE468_0x2ce468");
#endif

    switch (ctx->pc) {
        case 0x2ce47cu: goto label_2ce47c;
        case 0x2ce4ecu: goto label_2ce4ec;
        default: break;
    }

    ctx->pc = 0x2ce468u;

    // 0x2ce468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce470: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ce470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ce474: 0xc0b2782  jal         func_2C9E08
    ctx->pc = 0x2CE474u;
    SET_GPR_U32(ctx, 31, 0x2CE47Cu);
    ctx->pc = 0x2CE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE474u;
    // 0x2ce478: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E08u, 0x2CE474u, 0x2CE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE47Cu;
label_2ce47c:
    // 0x2ce47c: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x2ce47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x2ce480: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2ce480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ce484: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x2ce484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2ce488: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x2ce488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2ce48c: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x2ce48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ce490: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x2ce490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ce494: 0x88470013  lwl         $a3, 0x13($v0)
    ctx->pc = 0x2ce494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2ce498: 0x98470010  lwr         $a3, 0x10($v0)
    ctx->pc = 0x2ce498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2ce49c: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x2ce49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce4a0: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x2ce4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce4a4: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x2ce4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce4a8: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x2ce4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ce4ac: 0xa8a70013  swl         $a3, 0x13($a1)
    ctx->pc = 0x2ce4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ce4b0: 0xb8a70010  swr         $a3, 0x10($a1)
    ctx->pc = 0x2ce4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ce4b4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ce4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ce4b8: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2ce4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2ce4bc: 0x8203006f  lb          $v1, 0x6F($s0)
    ctx->pc = 0x2ce4bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 111)));
    // 0x2ce4c0: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x2ce4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce4c4: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x2ce4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce4c8: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2ce4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2ce4cc: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2ce4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2ce4d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE4D0u;
    {
        const bool branch_taken_0x2ce4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4D0u;
        // 0x2ce4d4: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4d0) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CE4D8u;
    // 0x2ce4d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE4D8u;
    {
        const bool branch_taken_0x2ce4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4D8u;
        // 0x2ce4dc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4d8) {
            ctx->pc = 0x2CE4E8u;
            goto label_2ce4e8;
        }
    }
    ctx->pc = 0x2CE4E0u;
    // 0x2ce4e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CE4E0u;
    {
        const bool branch_taken_0x2ce4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4E0u;
        // 0x2ce4e4: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4e0) {
            ctx->pc = 0x2CE520u;
            goto label_2ce520;
        }
    }
    ctx->pc = 0x2CE4E8u;
label_2ce4e8:
    // 0x2ce4e8: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x2ce4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_2ce4ec:
    // 0x2ce4ec: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2ce4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ce4f0: 0x901821  addu        $v1, $a0, $s0
    ctx->pc = 0x2ce4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ce4f4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CE4F4u;
    {
        const bool branch_taken_0x2ce4f4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE4F4u;
        // 0x2ce4f8: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce4f4) {
            ctx->pc = 0x2CE520u;
            goto label_2ce520;
        }
    }
    ctx->pc = 0x2CE4FCu;
    // 0x2ce4fc: 0x8063005b  lb          $v1, 0x5B($v1)
    ctx->pc = 0x2ce4fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 91)));
    // 0x2ce500: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ce500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ce504: 0x0  nop
    ctx->pc = 0x2ce504u;
    // NOP
    // 0x2ce508: 0x5062fff8  beql        $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CE508u;
    {
        const bool branch_taken_0x2ce508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ce508) {
            ctx->pc = 0x2CE50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE508u;
            // 0x2ce50c: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce4ec;
        }
    }
    ctx->pc = 0x2CE510u;
    // 0x2ce510: 0x0  nop
    ctx->pc = 0x2ce510u;
    // NOP
    // 0x2ce514: 0x5060fff5  beql        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CE514u;
    {
        const bool branch_taken_0x2ce514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce514) {
            ctx->pc = 0x2CE518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE514u;
            // 0x2ce518: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce4ec;
        }
    }
    ctx->pc = 0x2CE51Cu;
    // 0x2ce51c: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x2ce51cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_2ce520:
    // 0x2ce520: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2ce520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2ce524: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x2ce524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2ce528: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE528u;
    {
        const bool branch_taken_0x2ce528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE528u;
        // 0x2ce52c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce528) {
            ctx->pc = 0x2CE538u;
            goto label_2ce538;
        }
    }
    ctx->pc = 0x2CE530u;
    // 0x2ce530: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2ce530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ce534: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2ce534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2ce538:
    // 0x2ce538: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CE538u;
    {
        const bool branch_taken_0x2ce538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE538u;
        // 0x2ce53c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce538) {
            ctx->pc = 0x2CE560u;
            goto label_2ce560;
        }
    }
    ctx->pc = 0x2CE540u;
    // 0x2ce540: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2ce540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ce544: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2ce544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ce548: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE548u;
    {
        const bool branch_taken_0x2ce548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE548u;
        // 0x2ce54c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce548) {
            ctx->pc = 0x2CE560u;
            goto label_2ce560;
        }
    }
    ctx->pc = 0x2CE550u;
    // 0x2ce550: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE550u;
    {
        const bool branch_taken_0x2ce550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE550u;
        // 0x2ce554: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce550) {
            ctx->pc = 0x2CE55Cu;
            goto label_2ce55c;
        }
    }
    ctx->pc = 0x2CE558u;
    // 0x2ce558: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2ce558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2ce55c:
    // 0x2ce55c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ce55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ce560:
    // 0x2ce560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ce560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce564: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ce564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ce568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce56c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE56Cu;
        // 0x2ce570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE574u;
    // 0x2ce574: 0x0  nop
    ctx->pc = 0x2ce574u;
    // NOP
    ctx->pc = 0x2ce578u;
}
