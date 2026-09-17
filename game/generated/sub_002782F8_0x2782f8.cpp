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

// Function: sub_002782F8
// Address: 0x2782f8 - 0x278660
void sub_002782F8_0x2782f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002782F8_0x2782f8");
#endif

    switch (ctx->pc) {
        case 0x278310u: goto label_278310;
        case 0x278330u: goto label_278330;
        case 0x278394u: goto label_278394;
        case 0x2783f4u: goto label_2783f4;
        case 0x278410u: goto label_278410;
        case 0x278448u: goto label_278448;
        case 0x2784acu: goto label_2784ac;
        case 0x278520u: goto label_278520;
        case 0x278578u: goto label_278578;
        case 0x278590u: goto label_278590;
        case 0x278608u: goto label_278608;
        case 0x27864cu: goto label_27864c;
        default: break;
    }

    ctx->pc = 0x2782f8u;

    // 0x2782f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2782f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2782fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2782fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278308: 0xc0404f6  jal         func_1013D8
    ctx->pc = 0x278308u;
    SET_GPR_U32(ctx, 31, 0x278310u);
    ctx->pc = 0x27830Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278308u;
    // 0x27830c: 0x3c100017  lui         $s0, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1013D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1013D8u, 0x278308u, 0x278310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278310u;
label_278310:
    // 0x278310: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x278310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278314: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x278314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x278318: 0xe41025  or          $v0, $a3, $a0
    ctx->pc = 0x278318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x27831c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27831cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278320: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x278320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x278324: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x278324u;
    {
        const bool branch_taken_0x278324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278324u;
        // 0x278328: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278324) {
            ctx->pc = 0x278390u;
            goto label_278390;
        }
    }
    ctx->pc = 0x27832Cu;
    // 0x27832c: 0x24e206a0  addiu       $v0, $a3, 0x6A0
    ctx->pc = 0x27832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1696));
label_278330:
    // 0x278330: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x278330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x278334: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x278334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x278338: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x278338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27833c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x27833cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x278340: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x278340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x278344: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x278344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x278348: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x278348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27834c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27834cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x278350: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x278350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278354: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x278354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278358: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x278358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27835c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x27835cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278360: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x278360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278364: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x278364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278368: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x278368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27836c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x27836cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278370: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x278374: 0x0  nop
    ctx->pc = 0x278374u;
    // NOP
    // 0x278378: 0x0  nop
    ctx->pc = 0x278378u;
    // NOP
    // 0x27837c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27837Cu;
    {
        const bool branch_taken_0x27837c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x278380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27837Cu;
        // 0x278380: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27837c) {
            ctx->pc = 0x278330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278330;
        }
    }
    ctx->pc = 0x278384u;
    // 0x278384: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x278384u;
    {
        const bool branch_taken_0x278384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278384) {
            ctx->pc = 0x2783C8u;
            goto label_2783c8;
        }
    }
    ctx->pc = 0x27838Cu;
    // 0x27838c: 0x0  nop
    ctx->pc = 0x27838cu;
    // NOP
label_278390:
    // 0x278390: 0x24e206a0  addiu       $v0, $a3, 0x6A0
    ctx->pc = 0x278390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1696));
label_278394:
    // 0x278394: 0xdc6a0000  ld          $t2, 0x0($v1)
    ctx->pc = 0x278394u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278398: 0xdc6d0008  ld          $t5, 0x8($v1)
    ctx->pc = 0x278398u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27839c: 0xdc6e0010  ld          $t6, 0x10($v1)
    ctx->pc = 0x27839cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2783a0: 0xdc650018  ld          $a1, 0x18($v1)
    ctx->pc = 0x2783a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2783a4: 0xfc8a0000  sd          $t2, 0x0($a0)
    ctx->pc = 0x2783a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 10));
    // 0x2783a8: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x2783a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x2783ac: 0xfc8e0010  sd          $t6, 0x10($a0)
    ctx->pc = 0x2783acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 14));
    // 0x2783b0: 0xfc850018  sd          $a1, 0x18($a0)
    ctx->pc = 0x2783b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 5));
    // 0x2783b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2783b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2783b8: 0x0  nop
    ctx->pc = 0x2783b8u;
    // NOP
    // 0x2783bc: 0x0  nop
    ctx->pc = 0x2783bcu;
    // NOP
    // 0x2783c0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2783C0u;
    {
        const bool branch_taken_0x2783c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2783C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2783C0u;
        // 0x2783c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2783c0) {
            ctx->pc = 0x278394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278394;
        }
    }
    ctx->pc = 0x2783C8u;
label_2783c8:
    // 0x2783c8: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2783c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2783cc: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2783ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2783d0: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2783d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2783d4: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2783d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2783d8: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x2783d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2783dc: 0xb0860007  sdl         $a2, 0x7($a0)
    ctx->pc = 0x2783dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2783e0: 0xb4860000  sdr         $a2, 0x0($a0)
    ctx->pc = 0x2783e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2783e4: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x2783e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2783e8: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x2783e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2783ec: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x2783ECu;
    SET_GPR_U32(ctx, 31, 0x2783F4u);
    ctx->pc = 0x2783F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783ECu;
    // 0x2783f0: 0xac880010  sw          $t0, 0x10($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x2783ECu, 0x2783F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783F4u;
label_2783f4:
    // 0x2783f4: 0x260301c0  addiu       $v1, $s0, 0x1C0
    ctx->pc = 0x2783f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x2783f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2783f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2783fc: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x2783fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x278400: 0x5200090  bltz        $t1, . + 4 + (0x90 << 2)
    ctx->pc = 0x278400u;
    {
        const bool branch_taken_0x278400 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x278400) {
            ctx->pc = 0x278644u;
            goto label_278644;
        }
    }
    ctx->pc = 0x278408u;
    // 0x278408: 0x246c000c  addiu       $t4, $v1, 0xC
    ctx->pc = 0x278408u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x27840c: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x27840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_278410:
    // 0x278410: 0x958c0  sll         $t3, $t1, 3
    ctx->pc = 0x278410u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x278414: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x278414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x278418: 0x8f85ca68  lw          $a1, -0x3598($gp)
    ctx->pc = 0x278418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x27841c: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x27841cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x278420: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x278424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x278428: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x278428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x27842c: 0x2243821  addu        $a3, $s1, $a0
    ctx->pc = 0x27842cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278430: 0x24460070  addiu       $a2, $v0, 0x70
    ctx->pc = 0x278430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x278434: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x278434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x278438: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x278438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27843c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x27843Cu;
    {
        const bool branch_taken_0x27843c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27843Cu;
        // 0x278440: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27843c) {
            ctx->pc = 0x2784A8u;
            goto label_2784a8;
        }
    }
    ctx->pc = 0x278444u;
    // 0x278444: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x278444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_278448:
    // 0x278448: 0x688d0007  ldl         $t5, 0x7($a0)
    ctx->pc = 0x278448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x27844c: 0x6c8d0000  ldr         $t5, 0x0($a0)
    ctx->pc = 0x27844cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x278450: 0x688e000f  ldl         $t6, 0xF($a0)
    ctx->pc = 0x278450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x278454: 0x6c8e0008  ldr         $t6, 0x8($a0)
    ctx->pc = 0x278454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x278458: 0x68830017  ldl         $v1, 0x17($a0)
    ctx->pc = 0x278458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x27845c: 0x6c830010  ldr         $v1, 0x10($a0)
    ctx->pc = 0x27845cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x278460: 0x6885001f  ldl         $a1, 0x1F($a0)
    ctx->pc = 0x278460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x278464: 0x6c850018  ldr         $a1, 0x18($a0)
    ctx->pc = 0x278464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x278468: 0xb0cd0007  sdl         $t5, 0x7($a2)
    ctx->pc = 0x278468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27846c: 0xb4cd0000  sdr         $t5, 0x0($a2)
    ctx->pc = 0x27846cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278470: 0xb0ce000f  sdl         $t6, 0xF($a2)
    ctx->pc = 0x278470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278474: 0xb4ce0008  sdr         $t6, 0x8($a2)
    ctx->pc = 0x278474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278478: 0xb0c30017  sdl         $v1, 0x17($a2)
    ctx->pc = 0x278478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27847c: 0xb4c30010  sdr         $v1, 0x10($a2)
    ctx->pc = 0x27847cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278480: 0xb0c5001f  sdl         $a1, 0x1F($a2)
    ctx->pc = 0x278480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278484: 0xb4c50018  sdr         $a1, 0x18($a2)
    ctx->pc = 0x278484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278488: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x278488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27848c: 0x0  nop
    ctx->pc = 0x27848cu;
    // NOP
    // 0x278490: 0x0  nop
    ctx->pc = 0x278490u;
    // NOP
    // 0x278494: 0x1482ffec  bne         $a0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x278494u;
    {
        const bool branch_taken_0x278494 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x278498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278494u;
        // 0x278498: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278494) {
            ctx->pc = 0x278448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278448;
        }
    }
    ctx->pc = 0x27849Cu;
    // 0x27849c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27849Cu;
    {
        const bool branch_taken_0x27849c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27849c) {
            ctx->pc = 0x2784E0u;
            goto label_2784e0;
        }
    }
    ctx->pc = 0x2784A4u;
    // 0x2784a4: 0x0  nop
    ctx->pc = 0x2784a4u;
    // NOP
label_2784a8:
    // 0x2784a8: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x2784a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_2784ac:
    // 0x2784ac: 0xdc880000  ld          $t0, 0x0($a0)
    ctx->pc = 0x2784acu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2784b0: 0xdc8a0008  ld          $t2, 0x8($a0)
    ctx->pc = 0x2784b0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2784b4: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x2784b4u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2784b8: 0xdc8e0018  ld          $t6, 0x18($a0)
    ctx->pc = 0x2784b8u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2784bc: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x2784bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x2784c0: 0xfcca0008  sd          $t2, 0x8($a2)
    ctx->pc = 0x2784c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 10));
    // 0x2784c4: 0xfccd0010  sd          $t5, 0x10($a2)
    ctx->pc = 0x2784c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 13));
    // 0x2784c8: 0xfcce0018  sd          $t6, 0x18($a2)
    ctx->pc = 0x2784c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 14));
    // 0x2784cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2784ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2784d0: 0x0  nop
    ctx->pc = 0x2784d0u;
    // NOP
    // 0x2784d4: 0x0  nop
    ctx->pc = 0x2784d4u;
    // NOP
    // 0x2784d8: 0x1482fff4  bne         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2784D8u;
    {
        const bool branch_taken_0x2784d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2784DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784D8u;
        // 0x2784dc: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784d8) {
            ctx->pc = 0x2784ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2784ac;
        }
    }
    ctx->pc = 0x2784E0u;
label_2784e0:
    // 0x2784e0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x2784e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2784e4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x2784e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2784e8: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x2784e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2784ec: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x2784ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2784f0: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2784f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784f4: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2784f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784f8: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x2784f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2784fc: 0x1691823  subu        $v1, $t3, $t1
    ctx->pc = 0x2784fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x278500: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x278500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x278504: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x278504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278508: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x278508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x27850c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x27850cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x278510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278514: 0x25180  sll         $t2, $v0, 6
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x278518: 0x34100  sll         $t0, $v1, 4
    ctx->pc = 0x278518u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27851c: 0x0  nop
    ctx->pc = 0x27851cu;
    // NOP
label_278520:
    // 0x278520: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x278520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x278524: 0x8f83ca64  lw          $v1, -0x359C($gp)
    ctx->pc = 0x278524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953572)));
    // 0x278528: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x278528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27852c: 0x8f85ca68  lw          $a1, -0x3598($gp)
    ctx->pc = 0x27852cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x278530: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x278534: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x278534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x278538: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x278538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27853c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x27853cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x278540: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x278540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x278544: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x278544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x278548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27854c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x27854cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x278550: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x278550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x278554: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x278554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x278558: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x278558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27855c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27855Cu;
    {
        const bool branch_taken_0x27855c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27855Cu;
        // 0x278560: 0xac8300c4  sw          $v1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27855c) {
            ctx->pc = 0x278520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278520;
        }
    }
    ctx->pc = 0x278564u;
    // 0x278564: 0x8f88ca68  lw          $t0, -0x3598($gp)
    ctx->pc = 0x278564u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x278568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x278568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27856c: 0x1695023  subu        $t2, $t3, $t1
    ctx->pc = 0x27856cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x278570: 0x1461021  addu        $v0, $t2, $a2
    ctx->pc = 0x278570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x278574: 0x0  nop
    ctx->pc = 0x278574u;
    // NOP
label_278578:
    // 0x278578: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x278578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x27857c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x27857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x278580: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x278580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x278584: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x278584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x278588: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x278588u;
    {
        const bool branch_taken_0x278588 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278588u;
        // 0x27858c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278588) {
            ctx->pc = 0x2785C4u;
            goto label_2785c4;
        }
    }
    ctx->pc = 0x278590u;
label_278590:
    // 0x278590: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x278590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x278594: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x278594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x278598: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x278598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x27859c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2785a0: 0x88ed0003  lwl         $t5, 0x3($a3)
    ctx->pc = 0x2785a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x2785a4: 0x98ed0000  lwr         $t5, 0x0($a3)
    ctx->pc = 0x2785a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x2785a8: 0xa84d0003  swl         $t5, 0x3($v0)
    ctx->pc = 0x2785a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2785ac: 0xb84d0000  swr         $t5, 0x0($v0)
    ctx->pc = 0x2785acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2785b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2785b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2785b4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2785b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2785b8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2785B8u;
    {
        const bool branch_taken_0x2785b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2785BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785B8u;
        // 0x2785bc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785b8) {
            ctx->pc = 0x278590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278590;
        }
    }
    ctx->pc = 0x2785C0u;
    // 0x2785c0: 0x8f88ca68  lw          $t0, -0x3598($gp)
    ctx->pc = 0x2785c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
label_2785c4:
    // 0x2785c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2785c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2785c8: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2785c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2785cc: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2785CCu;
    {
        const bool branch_taken_0x2785cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2785D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785CCu;
        // 0x2785d0: 0x1461021  addu        $v0, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785cc) {
            ctx->pc = 0x278578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278578;
        }
    }
    ctx->pc = 0x2785D4u;
    // 0x2785d4: 0x8f83ca6c  lw          $v1, -0x3594($gp)
    ctx->pc = 0x2785d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953580)));
    // 0x2785d8: 0x1692823  subu        $a1, $t3, $t1
    ctx->pc = 0x2785d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x2785dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2785dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2785e0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2785e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2785e4: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x2785e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2785e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2785e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2785ec: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x2785ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x2785f0: 0x8f82ca68  lw          $v0, -0x3598($gp)
    ctx->pc = 0x2785f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953576)));
    // 0x2785f4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2785f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2785f8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x2785f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x2785fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2785fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x278600: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278600u;
    {
        const bool branch_taken_0x278600 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x278604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278600u;
        // 0x278604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278600) {
            ctx->pc = 0x278638u;
            goto label_278638;
        }
    }
    ctx->pc = 0x278608u;
label_278608:
    // 0x278608: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x278608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27860c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x27860cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x278610: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x278610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x278614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278618: 0x68ea0007  ldl         $t2, 0x7($a3)
    ctx->pc = 0x278618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x27861c: 0x6cea0000  ldr         $t2, 0x0($a3)
    ctx->pc = 0x27861cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x278620: 0xb04a0007  sdl         $t2, 0x7($v0)
    ctx->pc = 0x278620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278624: 0xb44a0000  sdr         $t2, 0x0($v0)
    ctx->pc = 0x278624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x278628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27862c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x27862cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x278630: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278630u;
    {
        const bool branch_taken_0x278630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278630u;
        // 0x278634: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278630) {
            ctx->pc = 0x278608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278608;
        }
    }
    ctx->pc = 0x278638u;
label_278638:
    // 0x278638: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x278638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x27863c: 0x521ff74  bgez        $t1, . + 4 + (-0x8C << 2)
    ctx->pc = 0x27863Cu;
    {
        const bool branch_taken_0x27863c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x278640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27863Cu;
        // 0x278640: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27863c) {
            ctx->pc = 0x278410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278410;
        }
    }
    ctx->pc = 0x278644u;
label_278644:
    // 0x278644: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x278644u;
    SET_GPR_U32(ctx, 31, 0x27864Cu);
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x278644u, 0x27864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27864Cu;
label_27864c:
    // 0x27864c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27864cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x278654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278658: 0x3e00008  jr          $ra
    ctx->pc = 0x278658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278658u;
        // 0x27865c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278660u;
}
