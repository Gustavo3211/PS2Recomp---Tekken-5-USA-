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

// Function: sub_00297398
// Address: 0x297398 - 0x297548
void sub_00297398_0x297398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297398_0x297398");
#endif

    switch (ctx->pc) {
        case 0x297408u: goto label_297408;
        case 0x297448u: goto label_297448;
        case 0x297488u: goto label_297488;
        default: break;
    }

    ctx->pc = 0x297398u;

    // 0x297398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x297398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29739c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2973a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2973a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2973a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2973a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973a8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2973a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2973ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2973acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2973b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2973b4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2973b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2973b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2973b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2973bc: 0x2448bc00  addiu       $t0, $v0, -0x4400
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949888));
    // 0x2973c0: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2973c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2973c4: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2973c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2973c8: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x2973c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2973cc: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x2973ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2973d0: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x2973d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2973d4: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x2973d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2973d8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2973d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973dc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2973dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973e0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x2973e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973e4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x2973e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973e8: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x2973e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973ec: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x2973ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973f0: 0x6903001f  ldl         $v1, 0x1F($t0)
    ctx->pc = 0x2973f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2973f4: 0x6d030018  ldr         $v1, 0x18($t0)
    ctx->pc = 0x2973f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2973f8: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2973f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2973fc: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2973fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x297400: 0xc0a609a  jal         func_298268
    ctx->pc = 0x297400u;
    SET_GPR_U32(ctx, 31, 0x297408u);
    ctx->pc = 0x297404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297400u;
    // 0x297404: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298268u, 0x297400u, 0x297408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297408u;
label_297408:
    // 0x297408: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x297408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x29740c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29740cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297410: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x297410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x297414: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x297414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297418: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x297418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29741c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29741cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297420: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x297420u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x297424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x297424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297428: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x297428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x29742c: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29742Cu;
    {
        const bool branch_taken_0x29742c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x297430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29742Cu;
        // 0x297430: 0x44400b  movn        $t0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29742c) {
            ctx->pc = 0x297480u;
            goto label_297480;
        }
    }
    ctx->pc = 0x297434u;
    // 0x297434: 0x260a0008  addiu       $t2, $s0, 0x8
    ctx->pc = 0x297434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x297438: 0x240befff  addiu       $t3, $zero, -0x1001
    ctx->pc = 0x297438u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29743c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x29743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297440: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x297440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x297444: 0x0  nop
    ctx->pc = 0x297444u;
    // NOP
label_297448:
    // 0x297448: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x297448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29744c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x29744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x297450: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297450u;
    {
        const bool branch_taken_0x297450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x297454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297450u;
        // 0x297454: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297450) {
            ctx->pc = 0x297468u;
            goto label_297468;
        }
    }
    ctx->pc = 0x297458u;
    // 0x297458: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x297458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29745c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x29745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x297460: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x297460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x297464: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x297464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_297468:
    // 0x297468: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x297468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29746c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x29746Cu;
    {
        const bool branch_taken_0x29746c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29746c) {
            ctx->pc = 0x297470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29746Cu;
            // 0x297470: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297448;
        }
    }
    ctx->pc = 0x297474u;
    // 0x297474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297474u;
    {
        const bool branch_taken_0x297474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297474u;
        // 0x297478: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297474) {
            ctx->pc = 0x297488u;
            goto label_297488;
        }
    }
    ctx->pc = 0x29747Cu;
    // 0x29747c: 0x0  nop
    ctx->pc = 0x29747cu;
    // NOP
label_297480:
    // 0x297480: 0x260a0008  addiu       $t2, $s0, 0x8
    ctx->pc = 0x297480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x297484: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x297484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_297488:
    // 0x297488: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x297488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x29748c: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x29748cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x297490: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x297490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x297494: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x297494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x297498: 0x2810  mfhi        $a1
    ctx->pc = 0x297498u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x29749c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x29749cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2974a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2974a4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2974A4u;
    {
        const bool branch_taken_0x2974a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974A4u;
        // 0x2974a8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974a4) {
            ctx->pc = 0x2974F0u;
            goto label_2974f0;
        }
    }
    ctx->pc = 0x2974ACu;
    // 0x2974ac: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2974ACu;
    {
        const bool branch_taken_0x2974ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2974ac) {
            ctx->pc = 0x2974B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2974ACu;
            // 0x2974b0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2974F4u;
            goto label_2974f4;
        }
    }
    ctx->pc = 0x2974B4u;
    // 0x2974b4: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2974B4u;
    {
        const bool branch_taken_0x2974b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2974b4) {
            ctx->pc = 0x2974B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2974B4u;
            // 0x2974b8: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2974E4u;
            goto label_2974e4;
        }
    }
    ctx->pc = 0x2974BCu;
    // 0x2974bc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2974BCu;
    {
        const bool branch_taken_0x2974bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2974bc) {
            ctx->pc = 0x2974C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2974BCu;
            // 0x2974c0: 0x8c820080  lw          $v0, 0x80($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2974E4u;
            goto label_2974e4;
        }
    }
    ctx->pc = 0x2974C4u;
    // 0x2974c4: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2974C4u;
    {
        const bool branch_taken_0x2974c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974C4u;
        // 0x2974c8: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974c4) {
            ctx->pc = 0x2974E0u;
            goto label_2974e0;
        }
    }
    ctx->pc = 0x2974CCu;
    // 0x2974cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2974ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2974d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2974d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2974d4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2974d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2974d8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2974D8u;
    {
        const bool branch_taken_0x2974d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2974DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974D8u;
        // 0x2974dc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974d8) {
            ctx->pc = 0x2974F4u;
            goto label_2974f4;
        }
    }
    ctx->pc = 0x2974E0u;
label_2974e0:
    // 0x2974e0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2974e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_2974e4:
    // 0x2974e4: 0xac860078  sw          $a2, 0x78($a0)
    ctx->pc = 0x2974e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
    // 0x2974e8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2974e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2974ec: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2974ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2974f0:
    // 0x2974f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2974f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2974f4:
    // 0x2974f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2974f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2974f8: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x2974f8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2974fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2974fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x297500: 0x1012  mflo        $v0
    ctx->pc = 0x297500u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x297504: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297504u;
    {
        const bool branch_taken_0x297504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x297508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297504u;
        // 0x297508: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297504) {
            ctx->pc = 0x297520u;
            goto label_297520;
        }
    }
    ctx->pc = 0x29750Cu;
    // 0x29750c: 0x1c40ffde  bgtz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x29750Cu;
    {
        const bool branch_taken_0x29750c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x297510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29750Cu;
        // 0x297510: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29750c) {
            ctx->pc = 0x297488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297488;
        }
    }
    ctx->pc = 0x297514u;
    // 0x297514: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297514u;
    {
        const bool branch_taken_0x297514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297514u;
        // 0x297518: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297514) {
            ctx->pc = 0x297534u;
            goto label_297534;
        }
    }
    ctx->pc = 0x29751Cu;
    // 0x29751c: 0x0  nop
    ctx->pc = 0x29751cu;
    // NOP
label_297520:
    // 0x297520: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x297520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x297524: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x297524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x297528: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x297528u;
    {
        const bool branch_taken_0x297528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297528u;
        // 0x29752c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297528) {
            ctx->pc = 0x297488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297488;
        }
    }
    ctx->pc = 0x297530u;
    // 0x297530: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_297534:
    // 0x297534: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x297534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297538: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x297538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29753c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x29753cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297540: 0x3e00008  jr          $ra
    ctx->pc = 0x297540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297540u;
        // 0x297544: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297548u;
}
