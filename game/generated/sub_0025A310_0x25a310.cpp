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

// Function: sub_0025A310
// Address: 0x25a310 - 0x25ac40
void sub_0025A310_0x25a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A310_0x25a310");
#endif

    switch (ctx->pc) {
        case 0x25a3bcu: goto label_25a3bc;
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a500u: goto label_25a500;
        case 0x25a508u: goto label_25a508;
        case 0x25a520u: goto label_25a520;
        case 0x25a5a0u: goto label_25a5a0;
        case 0x25a728u: goto label_25a728;
        case 0x25a7a8u: goto label_25a7a8;
        case 0x25a7d0u: goto label_25a7d0;
        case 0x25a858u: goto label_25a858;
        case 0x25a890u: goto label_25a890;
        case 0x25aa18u: goto label_25aa18;
        case 0x25aa98u: goto label_25aa98;
        case 0x25aac0u: goto label_25aac0;
        default: break;
    }

    ctx->pc = 0x25a310u;

    // 0x25a310: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x25a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x25a314: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x25a314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x25a318: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25a318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a31c: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x25a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x25a320: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x25a320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x25a324: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x25a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x25a328: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25a328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a32c: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x25a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x25a330: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x25a330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a334: 0xffb50118  sd          $s5, 0x118($sp)
    ctx->pc = 0x25a334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 21));
    // 0x25a338: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x25a338u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a33c: 0xffb60120  sd          $s6, 0x120($sp)
    ctx->pc = 0x25a33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 22));
    // 0x25a340: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x25a340u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a344: 0xffb70128  sd          $s7, 0x128($sp)
    ctx->pc = 0x25a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 23));
    // 0x25a348: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x25a348u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a34c: 0xffb40110  sd          $s4, 0x110($sp)
    ctx->pc = 0x25a34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 20));
    // 0x25a350: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x25a350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a354: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x25a354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
    // 0x25a358: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x25a358u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x25a35c: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x25a35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x25a360: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x25a360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x25a364: 0x962e0000  lhu         $t6, 0x0($s1)
    ctx->pc = 0x25a364u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25a368: 0x82340002  lb          $s4, 0x2($s1)
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25a36c: 0x823e0003  lb          $fp, 0x3($s1)
    ctx->pc = 0x25a36cu;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x25a370: 0x4e102a  slt         $v0, $v0, $t6
    ctx->pc = 0x25a370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x25a374: 0x8a230009  lwl         $v1, 0x9($s1)
    ctx->pc = 0x25a374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 9); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x25a378: 0x9a230006  lwr         $v1, 0x6($s1)
    ctx->pc = 0x25a378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 6); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x25a37c: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x25a37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a380: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x25a380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a384: 0x25c3ffff  addiu       $v1, $t6, -0x1
    ctx->pc = 0x25a384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x25a388: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x25a388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x25a38c: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x25a38cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x25a390: 0x8a29000d  lwl         $t1, 0xD($s1)
    ctx->pc = 0x25a390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x25a394: 0x9a29000a  lwr         $t1, 0xA($s1)
    ctx->pc = 0x25a394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x25a398: 0xaba90007  swl         $t1, 0x7($sp)
    ctx->pc = 0x25a398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a39c: 0xbba90004  swr         $t1, 0x4($sp)
    ctx->pc = 0x25a39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a3a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3a4: 0x8a270011  lwl         $a3, 0x11($s1)
    ctx->pc = 0x25a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 17); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x25a3a8: 0x9a27000e  lwr         $a3, 0xE($s1)
    ctx->pc = 0x25a3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 14); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x25a3ac: 0xaba7001b  swl         $a3, 0x1B($sp)
    ctx->pc = 0x25a3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a3b0: 0xbba70018  swr         $a3, 0x18($sp)
    ctx->pc = 0x25a3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a3b4: 0xc04a151  jal         func_128544
    ctx->pc = 0x25A3B4u;
    SET_GPR_U32(ctx, 31, 0x25A3BCu);
    ctx->pc = 0x25A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A3B4u;
    // 0x25a3b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x25A3B4u, 0x25A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A3BCu;
label_25a3bc:
    // 0x25a3bc: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x25a3bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
    // 0x25a3c0: 0x1ae0003e  blez        $s7, . + 4 + (0x3E << 2)
    ctx->pc = 0x25A3C0u;
    {
        const bool branch_taken_0x25a3c0 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x25A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3C0u;
        // 0x25a3c4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3c0) {
            ctx->pc = 0x25A4BCu;
            goto label_25a4bc;
        }
    }
    ctx->pc = 0x25A3C8u;
    // 0x25a3c8: 0xc7838ae4  lwc1        $f3, -0x751C($gp)
    ctx->pc = 0x25a3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25a3cc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x25a3ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a3d0: 0x240bffbc  addiu       $t3, $zero, -0x44
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x25a3d4: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x25a3d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25a3d8:
    // 0x25a3d8: 0x24c1004  sllv        $v0, $t4, $s2
    ctx->pc = 0x25a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 18) & 0x1F));
    // 0x25a3dc: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x25a3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x25a3e0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x25A3E0u;
    {
        const bool branch_taken_0x25a3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3E0u;
        // 0x25a3e4: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3e0) {
            ctx->pc = 0x25A488u;
            goto label_25a488;
        }
    }
    ctx->pc = 0x25A3E8u;
    // 0x25a3e8: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x25a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x25a3ec: 0x1434021  addu        $t0, $t2, $v1
    ctx->pc = 0x25a3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x25a3f0: 0x8a240003  lwl         $a0, 0x3($s1)
    ctx->pc = 0x25a3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x25a3f4: 0x9a240000  lwr         $a0, 0x0($s1)
    ctx->pc = 0x25a3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x25a3f8: 0x82250004  lb          $a1, 0x4($s1)
    ctx->pc = 0x25a3f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25a3fc: 0x82260005  lb          $a2, 0x5($s1)
    ctx->pc = 0x25a3fcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x25a400: 0xa8440023  swl         $a0, 0x23($v0)
    ctx->pc = 0x25a400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a404: 0xb8440020  swr         $a0, 0x20($v0)
    ctx->pc = 0x25a404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a408: 0xa0450024  sb          $a1, 0x24($v0)
    ctx->pc = 0x25a408u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 5));
    // 0x25a40c: 0xa0460025  sb          $a2, 0x25($v0)
    ctx->pc = 0x25a40cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 6));
    // 0x25a410: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x25a410u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x25a414: 0x24660004  addiu       $a2, $v1, 0x4
    ctx->pc = 0x25a414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x25a418: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x25a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x25a41c: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x25a41cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25a420: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x25a424: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x25a424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x25a428: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x25a428u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a42c: 0x2871007  srav        $v0, $a3, $s4
    ctx->pc = 0x25a42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 20) & 0x1F));
    // 0x25a430: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x25a430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25a434: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x25a434u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a438: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x25a438u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a43c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25a43cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25a440: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x25a440u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a444: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25a444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25a448: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x25a448u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a44c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x25a44cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25a450: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x25a450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25a454: 0x2821007  srav        $v0, $v0, $s4
    ctx->pc = 0x25a454u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25a458: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x25a458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25a45c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x25a45cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a460: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x25a460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x25a464: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x25a464u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x25a468: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x25a468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25a46c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x25a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x25a470: 0x2821007  srav        $v0, $v0, $s4
    ctx->pc = 0x25a470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25a474: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x25a474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x25a478: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x25a478u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a47c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25A47Cu;
    {
        const bool branch_taken_0x25a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A47Cu;
        // 0x25a480: 0xe5220000  swc1        $f2, 0x0($t1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a47c) {
            ctx->pc = 0x25A4ACu;
            goto label_25a4ac;
        }
    }
    ctx->pc = 0x25A484u;
    // 0x25a484: 0x0  nop
    ctx->pc = 0x25a484u;
    // NOP
label_25a488:
    // 0x25a488: 0x6a280007  ldl         $t0, 0x7($s1)
    ctx->pc = 0x25a488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x25a48c: 0x6e280000  ldr         $t0, 0x0($s1)
    ctx->pc = 0x25a48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x25a490: 0x8a22000b  lwl         $v0, 0xB($s1)
    ctx->pc = 0x25a490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x25a494: 0x9a220008  lwr         $v0, 0x8($s1)
    ctx->pc = 0x25a494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x25a498: 0xb1280007  sdl         $t0, 0x7($t1)
    ctx->pc = 0x25a498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a49c: 0xb5280000  sdr         $t0, 0x0($t1)
    ctx->pc = 0x25a49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a4a0: 0xa922000b  swl         $v0, 0xB($t1)
    ctx->pc = 0x25a4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a4a4: 0xb9220008  swr         $v0, 0x8($t1)
    ctx->pc = 0x25a4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a4a8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x25a4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_25a4ac:
    // 0x25a4ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25a4acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25a4b0: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x25a4b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25a4b4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x25A4B4u;
    {
        const bool branch_taken_0x25a4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4B4u;
        // 0x25a4b8: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4b4) {
            ctx->pc = 0x25A3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a3d8;
        }
    }
    ctx->pc = 0x25A4BCu;
label_25a4bc:
    // 0x25a4bc: 0x120001d3  beqz        $s0, . + 4 + (0x1D3 << 2)
    ctx->pc = 0x25A4BCu;
    {
        const bool branch_taken_0x25a4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4BCu;
        // 0x25a4c0: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4bc) {
            ctx->pc = 0x25AC0Cu;
            goto label_25ac0c;
        }
    }
    ctx->pc = 0x25A4C4u;
    // 0x25a4c4: 0x26d100ae  addiu       $s1, $s6, 0xAE
    ctx->pc = 0x25a4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 174));
    // 0x25a4c8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x25a4c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x25a4cc: 0x3046000f  andi        $a2, $v0, 0xF
    ctx->pc = 0x25a4ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x25a4d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a4d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x25a4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x25a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25a4dc: 0x88650003  lwl         $a1, 0x3($v1)
    ctx->pc = 0x25a4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x25a4e0: 0x98650000  lwr         $a1, 0x0($v1)
    ctx->pc = 0x25a4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x25a4e4: 0xaba500e3  swl         $a1, 0xE3($sp)
    ctx->pc = 0x25a4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 227); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a4e8: 0xbba500e0  swr         $a1, 0xE0($sp)
    ctx->pc = 0x25a4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x25a4ec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x25a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x25a4f0: 0x1ae001c6  blez        $s7, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x25A4F0u;
    {
        const bool branch_taken_0x25a4f0 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x25A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4F0u;
        // 0x25a4f4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4f0) {
            ctx->pc = 0x25AC0Cu;
            goto label_25ac0c;
        }
    }
    ctx->pc = 0x25A4F8u;
    // 0x25a4f8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x25a4f8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4fc: 0x0  nop
    ctx->pc = 0x25a4fcu;
    // NOP
label_25a500:
    // 0x25a500: 0x127880  sll         $t7, $s2, 2
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25a504: 0x0  nop
    ctx->pc = 0x25a504u;
    // NOP
label_25a508:
    // 0x25a508: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x25a508u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a50c: 0xaf91aa24  sw          $s1, -0x55DC($gp)
    ctx->pc = 0x25a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945316), GPR_U32(ctx, 17));
    // 0x25a510: 0xaf80ca10  sw          $zero, -0x35F0($gp)
    ctx->pc = 0x25a510u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 0));
    // 0x25a514: 0x180582d  daddu       $t3, $t4, $zero
    ctx->pc = 0x25a514u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25A518u;
    {
        const bool branch_taken_0x25a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A518u;
        // 0x25a51c: 0xaf80aa28  sw          $zero, -0x55D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a518) {
            ctx->pc = 0x25A528u;
            goto label_25a528;
        }
    }
    ctx->pc = 0x25A520u;
label_25a520:
    // 0x25a520: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25a520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25a524: 0x0  nop
    ctx->pc = 0x25a524u;
    // NOP
label_25a528:
    // 0x25a528: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25a528u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25a52c: 0x8f84aa24  lw          $a0, -0x55DC($gp)
    ctx->pc = 0x25a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25a530: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25a530u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25a534: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x25a538: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25a538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a53c: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x25a53cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a540: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25a540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a544: 0x29440006  slti        $a0, $t2, 0x6
    ctx->pc = 0x25a544u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x25a548: 0x2787aa24  addiu       $a3, $gp, -0x55DC
    ctx->pc = 0x25a548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945316));
    // 0x25a54c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a550: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x25a550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    // 0x25a554: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x25a554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x25a558: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x25A558u;
    {
        const bool branch_taken_0x25a558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A558u;
        // 0x25a55c: 0x160682d  daddu       $t5, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a558) {
            ctx->pc = 0x25A520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a520;
        }
    }
    ctx->pc = 0x25A560u;
    // 0x25a560: 0x2543fffa  addiu       $v1, $t2, -0x6
    ctx->pc = 0x25a560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967290));
    // 0x25a564: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25a564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a568: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x25a568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a56c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x25a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x25a570: 0x1f92021  addu        $a0, $t7, $t9
    ctx->pc = 0x25a570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x25a574: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25a574u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x25a578: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x25a578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25a57c: 0x6d1806  srlv        $v1, $t5, $v1
    ctx->pc = 0x25a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 3) & 0x1F));
    // 0x25a580: 0x29450004  slti        $a1, $t2, 0x4
    ctx->pc = 0x25a580u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a584: 0x1a25824  and         $t3, $t5, $v0
    ctx->pc = 0x25a584u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
    // 0x25a588: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x25a588u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a58c: 0x2648021  addu        $s0, $s3, $a0
    ctx->pc = 0x25a58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x25a590: 0xa780aa2c  sh          $zero, -0x55D4($gp)
    ctx->pc = 0x25a590u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294945324), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a594: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x25A594u;
    {
        const bool branch_taken_0x25a594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A594u;
        // 0x25a598: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a594) {
            ctx->pc = 0x25A5D4u;
            goto label_25a5d4;
        }
    }
    ctx->pc = 0x25A59Cu;
    // 0x25a59c: 0x0  nop
    ctx->pc = 0x25a59cu;
    // NOP
label_25a5a0:
    // 0x25a5a0: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25a5a0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25a5a4: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25a5a8: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25a5ac: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x25a5acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x25a5b0: 0x8f84aa24  lw          $a0, -0x55DC($gp)
    ctx->pc = 0x25a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25a5b4: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x25a5b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x25a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x25a5bc: 0x29450004  slti        $a1, $t2, 0x4
    ctx->pc = 0x25a5bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a5c0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x25a5c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a5c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a5c8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x25a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x25a5cc: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A5CCu;
    {
        const bool branch_taken_0x25a5cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5CCu;
        // 0x25a5d0: 0x1635825  or          $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5cc) {
            ctx->pc = 0x25A5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a5a0;
        }
    }
    ctx->pc = 0x25A5D4u;
label_25a5d4:
    // 0x25a5d4: 0x2584fffc  addiu       $a0, $t4, -0x4
    ctx->pc = 0x25a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x25a5d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a5dc: 0x8b1806  srlv        $v1, $t3, $a0
    ctx->pc = 0x25a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x25a5e0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x25a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x25a5e4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25a5e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x25a5e8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a5ec: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x25a5ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x25a5f0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x25a5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x25a5f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x25a5f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5f8: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x25a5f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a5fc: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x25A5FCu;
    {
        const bool branch_taken_0x25a5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5FCu;
        // 0x25a600: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5fc) {
            ctx->pc = 0x25A798u;
            goto label_25a798;
        }
    }
    ctx->pc = 0x25A604u;
    // 0x25a604: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25a604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a608: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25a608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25a60c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a610: 0x8c632510  lw          $v1, 0x2510($v1)
    ctx->pc = 0x25a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9488)));
    // 0x25a614: 0x600008  jr          $v1
    ctx->pc = 0x25A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A620u: goto label_25a620;
            case 0x25A630u: goto label_25a630;
            case 0x25A640u: goto label_25a640;
            case 0x25A650u: goto label_25a650;
            case 0x25A660u: goto label_25a660;
            case 0x25A670u: goto label_25a670;
            case 0x25A680u: goto label_25a680;
            case 0x25A690u: goto label_25a690;
            case 0x25A6A0u: goto label_25a6a0;
            case 0x25A6B0u: goto label_25a6b0;
            case 0x25A6C0u: goto label_25a6c0;
            case 0x25A6D0u: goto label_25a6d0;
            case 0x25A6E0u: goto label_25a6e0;
            case 0x25A6F0u: goto label_25a6f0;
            case 0x25A700u: goto label_25a700;
            case 0x25A710u: goto label_25a710;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A614u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A61Cu;
    // 0x25a61c: 0x0  nop
    ctx->pc = 0x25a61cu;
    // NOP
label_25a620:
    // 0x25a620: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a624: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x25A624u;
    {
        const bool branch_taken_0x25a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A624u;
        // 0x25a628: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a624) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A62Cu;
    // 0x25a62c: 0x0  nop
    ctx->pc = 0x25a62cu;
    // NOP
label_25a630:
    // 0x25a630: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25a630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a634: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x25A634u;
    {
        const bool branch_taken_0x25a634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A634u;
        // 0x25a638: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a634) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A63Cu;
    // 0x25a63c: 0x0  nop
    ctx->pc = 0x25a63cu;
    // NOP
label_25a640:
    // 0x25a640: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25a640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a644: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x25A644u;
    {
        const bool branch_taken_0x25a644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A644u;
        // 0x25a648: 0x2409fffc  addiu       $t1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a644) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A64Cu;
    // 0x25a64c: 0x0  nop
    ctx->pc = 0x25a64cu;
    // NOP
label_25a650:
    // 0x25a650: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x25a650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a654: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25A654u;
    {
        const bool branch_taken_0x25a654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A654u;
        // 0x25a658: 0x24090005  addiu       $t1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a654) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A65Cu;
    // 0x25a65c: 0x0  nop
    ctx->pc = 0x25a65cu;
    // NOP
label_25a660:
    // 0x25a660: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a664: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x25A664u;
    {
        const bool branch_taken_0x25a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A664u;
        // 0x25a668: 0x2409ffec  addiu       $t1, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a664) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A66Cu;
    // 0x25a66c: 0x0  nop
    ctx->pc = 0x25a66cu;
    // NOP
label_25a670:
    // 0x25a670: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x25a670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25a674: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x25A674u;
    {
        const bool branch_taken_0x25a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A674u;
        // 0x25a678: 0x24090015  addiu       $t1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a674) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A67Cu;
    // 0x25a67c: 0x0  nop
    ctx->pc = 0x25a67cu;
    // NOP
label_25a680:
    // 0x25a680: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x25a680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25a684: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25A684u;
    {
        const bool branch_taken_0x25a684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A684u;
        // 0x25a688: 0x2409ffac  addiu       $t1, $zero, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a684) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A68Cu;
    // 0x25a68c: 0x0  nop
    ctx->pc = 0x25a68cu;
    // NOP
label_25a690:
    // 0x25a690: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x25a690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25a694: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x25A694u;
    {
        const bool branch_taken_0x25a694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A694u;
        // 0x25a698: 0x24090055  addiu       $t1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a694) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A69Cu;
    // 0x25a69c: 0x0  nop
    ctx->pc = 0x25a69cu;
    // NOP
label_25a6a0:
    // 0x25a6a0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x25a6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25a6a4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25A6A4u;
    {
        const bool branch_taken_0x25a6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6A4u;
        // 0x25a6a8: 0x2409feac  addiu       $t1, $zero, -0x154 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6a4) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A6ACu;
    // 0x25a6ac: 0x0  nop
    ctx->pc = 0x25a6acu;
    // NOP
label_25a6b0:
    // 0x25a6b0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25a6b4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25A6B4u;
    {
        const bool branch_taken_0x25a6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6B4u;
        // 0x25a6b8: 0x24090155  addiu       $t1, $zero, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6b4) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A6BCu;
    // 0x25a6bc: 0x0  nop
    ctx->pc = 0x25a6bcu;
    // NOP
label_25a6c0:
    // 0x25a6c0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x25a6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25a6c4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x25A6C4u;
    {
        const bool branch_taken_0x25a6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6C4u;
        // 0x25a6c8: 0x2409faac  addiu       $t1, $zero, -0x554 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6c4) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A6CCu;
    // 0x25a6cc: 0x0  nop
    ctx->pc = 0x25a6ccu;
    // NOP
label_25a6d0:
    // 0x25a6d0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25a6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25a6d4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25A6D4u;
    {
        const bool branch_taken_0x25a6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6D4u;
        // 0x25a6d8: 0x24090555  addiu       $t1, $zero, 0x555 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6d4) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A6DCu;
    // 0x25a6dc: 0x0  nop
    ctx->pc = 0x25a6dcu;
    // NOP
label_25a6e0:
    // 0x25a6e0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25a6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25a6e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25A6E4u;
    {
        const bool branch_taken_0x25a6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6E4u;
        // 0x25a6e8: 0x2409eaac  addiu       $t1, $zero, -0x1554 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6e4) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A6ECu;
    // 0x25a6ec: 0x0  nop
    ctx->pc = 0x25a6ecu;
    // NOP
label_25a6f0:
    // 0x25a6f0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x25a6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25a6f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25A6F4u;
    {
        const bool branch_taken_0x25a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A6F4u;
        // 0x25a6f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a6f4) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A6FCu;
    // 0x25a6fc: 0x0  nop
    ctx->pc = 0x25a6fcu;
    // NOP
label_25a700:
    // 0x25a700: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x25a700u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x25a704: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25A704u;
    {
        const bool branch_taken_0x25a704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A704u;
        // 0x25a708: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a704) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A70Cu;
    // 0x25a70c: 0x0  nop
    ctx->pc = 0x25a70cu;
    // NOP
label_25a710:
    // 0x25a710: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x25a710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a714: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x25a714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a718: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A718u;
    {
        const bool branch_taken_0x25a718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A718u;
        // 0x25a71c: 0x2582fffc  addiu       $v0, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a718) {
            ctx->pc = 0x25A760u;
            goto label_25a760;
        }
    }
    ctx->pc = 0x25A720u;
    // 0x25a720: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25a720u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25a724: 0x2788aa24  addiu       $t0, $gp, -0x55DC
    ctx->pc = 0x25a724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945316));
label_25a728:
    // 0x25a728: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25a728u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25a72c: 0x8f83aa24  lw          $v1, -0x55DC($gp)
    ctx->pc = 0x25a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25a730: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25a730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25a734: 0x24ec0008  addiu       $t4, $a3, 0x8
    ctx->pc = 0x25a734u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25a738: 0x29850004  slti        $a1, $t4, 0x4
    ctx->pc = 0x25a738u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a73c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x25a73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a740: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x25a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25a744: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25a744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a748: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a74c: 0xaf8caa28  sw          $t4, -0x55D8($gp)
    ctx->pc = 0x25a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 12));
    // 0x25a750: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x25a750u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x25a754: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A754u;
    {
        const bool branch_taken_0x25a754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A754u;
        // 0x25a758: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a754) {
            ctx->pc = 0x25A728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a728;
        }
    }
    ctx->pc = 0x25A75Cu;
    // 0x25a75c: 0x2582fffc  addiu       $v0, $t4, -0x4
    ctx->pc = 0x25a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_25a760:
    // 0x25a760: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a764: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x25a764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x25a768: 0x4b2006  srlv        $a0, $t3, $v0
    ctx->pc = 0x25a768u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x25a76c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x25a76cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x25a770: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x25a770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a774: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x25a774u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x25a778: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25a778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25a77c: 0xa784aa2c  sh          $a0, -0x55D4($gp)
    ctx->pc = 0x25a77cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294945324), (uint16_t)GPR_U32(ctx, 4));
    // 0x25a780: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x25a780u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a784: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x25a784u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a788: 0x8f88ca08  lw          $t0, -0x35F8($gp)
    ctx->pc = 0x25a788u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953480)));
    // 0x25a78c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25A78Cu;
    {
        const bool branch_taken_0x25a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A78Cu;
        // 0x25a790: 0x8f89ca0c  lw          $t1, -0x35F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a78c) {
            ctx->pc = 0x25A7A8u;
            goto label_25a7a8;
        }
    }
    ctx->pc = 0x25A794u;
    // 0x25a794: 0x0  nop
    ctx->pc = 0x25a794u;
    // NOP
label_25a798:
    // 0x25a798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a79c: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25a7a0: 0xc049dc0  jal         func_127700
    ctx->pc = 0x25A7A0u;
    SET_GPR_U32(ctx, 31, 0x25A7A8u);
    ctx->pc = 0x25A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7A0u;
    // 0x25a7a4: 0xaf8dca10  sw          $t5, -0x35F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127700u, 0x25A7A0u, 0x25A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7A8u;
label_25a7a8:
    // 0x25a7a8: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25A7A8u;
    {
        const bool branch_taken_0x25a7a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7A8u;
        // 0x25a7ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7a8) {
            ctx->pc = 0x25A834u;
            goto label_25a834;
        }
    }
    ctx->pc = 0x25A7B0u;
    // 0x25a7b0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x25a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x25a7b4: 0x1102001f  beq         $t0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25A7B4u;
    {
        const bool branch_taken_0x25a7b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7B4u;
        // 0x25a7b8: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7b4) {
            ctx->pc = 0x25A834u;
            goto label_25a834;
        }
    }
    ctx->pc = 0x25A7BCu;
    // 0x25a7bc: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x25a7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25a7c0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25A7C0u;
    {
        const bool branch_taken_0x25a7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7C0u;
        // 0x25a7c4: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7c0) {
            ctx->pc = 0x25A804u;
            goto label_25a804;
        }
    }
    ctx->pc = 0x25A7C8u;
    // 0x25a7c8: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25a7cc: 0x278aaa24  addiu       $t2, $gp, -0x55DC
    ctx->pc = 0x25a7ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945316));
label_25a7d0:
    // 0x25a7d0: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25a7d0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25a7d4: 0x8f83aa24  lw          $v1, -0x55DC($gp)
    ctx->pc = 0x25a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25a7d8: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25a7dc: 0x24ec0008  addiu       $t4, $a3, 0x8
    ctx->pc = 0x25a7dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25a7e0: 0x188282a  slt         $a1, $t4, $t0
    ctx->pc = 0x25a7e0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25a7e4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x25a7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7e8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x25a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25a7ec: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25a7ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a7f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a7f4: 0xaf8caa28  sw          $t4, -0x55D8($gp)
    ctx->pc = 0x25a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 12));
    // 0x25a7f8: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x25a7f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x25a7fc: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A7FCu;
    {
        const bool branch_taken_0x25a7fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7FCu;
        // 0x25a800: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a7fc) {
            ctx->pc = 0x25A7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a7d0;
        }
    }
    ctx->pc = 0x25A804u;
label_25a804:
    // 0x25a804: 0x1881023  subu        $v0, $t4, $t0
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x25a808: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a80c: 0x4b2006  srlv        $a0, $t3, $v0
    ctx->pc = 0x25a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x25a810: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x25a810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x25a814: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x25a814u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x25a818: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25a818u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25a81c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x25a81cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x25a820: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x25a820u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a824: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x25a828: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x25a828u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a82c: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x25a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x25a830: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x25a830u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_25a834:
    // 0x25a834: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x25a834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25a838: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x25a838u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a83c: 0xaf88ca08  sw          $t0, -0x35F8($gp)
    ctx->pc = 0x25a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953480), GPR_U32(ctx, 8));
    // 0x25a840: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x25a840u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a844: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x25a844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x25a848: 0xaf89ca0c  sw          $t1, -0x35F4($gp)
    ctx->pc = 0x25a848u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953484), GPR_U32(ctx, 9));
    // 0x25a84c: 0x10c000c3  beqz        $a2, . + 4 + (0xC3 << 2)
    ctx->pc = 0x25A84Cu;
    {
        const bool branch_taken_0x25a84c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A84Cu;
        // 0x25a850: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a84c) {
            ctx->pc = 0x25AB5Cu;
            goto label_25ab5c;
        }
    }
    ctx->pc = 0x25A854u;
    // 0x25a854: 0x0  nop
    ctx->pc = 0x25a854u;
    // NOP
label_25a858:
    // 0x25a858: 0x9782aa2c  lhu         $v0, -0x55D4($gp)
    ctx->pc = 0x25a858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294945324)));
    // 0x25a85c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A85Cu;
    {
        const bool branch_taken_0x25a85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A85Cu;
        // 0x25a860: 0x8f88ca08  lw          $t0, -0x35F8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a85c) {
            ctx->pc = 0x25A878u;
            goto label_25a878;
        }
    }
    ctx->pc = 0x25A864u;
    // 0x25a864: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x25a864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25a868: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x25a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x25a86c: 0xa782aa2c  sh          $v0, -0x55D4($gp)
    ctx->pc = 0x25a86cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294945324), (uint16_t)GPR_U32(ctx, 2));
    // 0x25a870: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x25A870u;
    {
        const bool branch_taken_0x25a870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A870u;
        // 0x25a874: 0x8f87ca0c  lw          $a3, -0x35F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a870) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A878u;
label_25a878:
    // 0x25a878: 0x29820004  slti        $v0, $t4, 0x4
    ctx->pc = 0x25a878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a87c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A87Cu;
    {
        const bool branch_taken_0x25a87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A87Cu;
        // 0x25a880: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a87c) {
            ctx->pc = 0x25A8C4u;
            goto label_25a8c4;
        }
    }
    ctx->pc = 0x25A884u;
    // 0x25a884: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25a884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25a888: 0x2788aa24  addiu       $t0, $gp, -0x55DC
    ctx->pc = 0x25a888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945316));
    // 0x25a88c: 0x0  nop
    ctx->pc = 0x25a88cu;
    // NOP
label_25a890:
    // 0x25a890: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25a890u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25a894: 0x8f83aa24  lw          $v1, -0x55DC($gp)
    ctx->pc = 0x25a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25a898: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25a898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25a89c: 0x24ec0008  addiu       $t4, $a3, 0x8
    ctx->pc = 0x25a89cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25a8a0: 0x29850004  slti        $a1, $t4, 0x4
    ctx->pc = 0x25a8a0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25a8a4: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x25a8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8a8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x25a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25a8ac: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25a8acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25a8b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25a8b4: 0xaf8caa28  sw          $t4, -0x55D8($gp)
    ctx->pc = 0x25a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 12));
    // 0x25a8b8: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x25a8b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x25a8bc: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25A8BCu;
    {
        const bool branch_taken_0x25a8bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8BCu;
        // 0x25a8c0: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8bc) {
            ctx->pc = 0x25A890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a890;
        }
    }
    ctx->pc = 0x25A8C4u;
label_25a8c4:
    // 0x25a8c4: 0x2584fffc  addiu       $a0, $t4, -0x4
    ctx->pc = 0x25a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
    // 0x25a8c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x25a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25a8cc: 0x8b1806  srlv        $v1, $t3, $a0
    ctx->pc = 0x25a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x25a8d0: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x25a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x25a8d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25a8d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x25a8d8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a8dc: 0x1625824  and         $t3, $t3, $v0
    ctx->pc = 0x25a8dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 2));
    // 0x25a8e0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x25a8e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x25a8e4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x25a8e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8e8: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x25a8e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a8ec: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x25A8ECu;
    {
        const bool branch_taken_0x25a8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8ECu;
        // 0x25a8f0: 0x140602d  daddu       $t4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8ec) {
            ctx->pc = 0x25AA88u;
            goto label_25aa88;
        }
    }
    ctx->pc = 0x25A8F4u;
    // 0x25a8f4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25a8f8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x25a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x25a8fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a900: 0x8c632550  lw          $v1, 0x2550($v1)
    ctx->pc = 0x25a900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9552)));
    // 0x25a904: 0x600008  jr          $v1
    ctx->pc = 0x25A904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25A910u: goto label_25a910;
            case 0x25A920u: goto label_25a920;
            case 0x25A930u: goto label_25a930;
            case 0x25A940u: goto label_25a940;
            case 0x25A950u: goto label_25a950;
            case 0x25A960u: goto label_25a960;
            case 0x25A970u: goto label_25a970;
            case 0x25A980u: goto label_25a980;
            case 0x25A990u: goto label_25a990;
            case 0x25A9A0u: goto label_25a9a0;
            case 0x25A9B0u: goto label_25a9b0;
            case 0x25A9C0u: goto label_25a9c0;
            case 0x25A9D0u: goto label_25a9d0;
            case 0x25A9E0u: goto label_25a9e0;
            case 0x25A9F0u: goto label_25a9f0;
            case 0x25AA00u: goto label_25aa00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A904u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A90Cu;
    // 0x25a90c: 0x0  nop
    ctx->pc = 0x25a90cu;
    // NOP
label_25a910:
    // 0x25a910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25a910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a914: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x25A914u;
    {
        const bool branch_taken_0x25a914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A914u;
        // 0x25a918: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a914) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A91Cu;
    // 0x25a91c: 0x0  nop
    ctx->pc = 0x25a91cu;
    // NOP
label_25a920:
    // 0x25a920: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25a920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a924: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x25A924u;
    {
        const bool branch_taken_0x25a924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A924u;
        // 0x25a928: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a924) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A92Cu;
    // 0x25a92c: 0x0  nop
    ctx->pc = 0x25a92cu;
    // NOP
label_25a930:
    // 0x25a930: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x25a930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a934: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x25A934u;
    {
        const bool branch_taken_0x25a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A934u;
        // 0x25a938: 0x2407fffc  addiu       $a3, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a934) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A93Cu;
    // 0x25a93c: 0x0  nop
    ctx->pc = 0x25a93cu;
    // NOP
label_25a940:
    // 0x25a940: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a944: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x25A944u;
    {
        const bool branch_taken_0x25a944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A944u;
        // 0x25a948: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a944) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A94Cu;
    // 0x25a94c: 0x0  nop
    ctx->pc = 0x25a94cu;
    // NOP
label_25a950:
    // 0x25a950: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a954: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x25A954u;
    {
        const bool branch_taken_0x25a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A954u;
        // 0x25a958: 0x2407ffec  addiu       $a3, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a954) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A95Cu;
    // 0x25a95c: 0x0  nop
    ctx->pc = 0x25a95cu;
    // NOP
label_25a960:
    // 0x25a960: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x25a960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25a964: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x25A964u;
    {
        const bool branch_taken_0x25a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A964u;
        // 0x25a968: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a964) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A96Cu;
    // 0x25a96c: 0x0  nop
    ctx->pc = 0x25a96cu;
    // NOP
label_25a970:
    // 0x25a970: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x25a970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x25a974: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25A974u;
    {
        const bool branch_taken_0x25a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A974u;
        // 0x25a978: 0x2407ffac  addiu       $a3, $zero, -0x54 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a974) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A97Cu;
    // 0x25a97c: 0x0  nop
    ctx->pc = 0x25a97cu;
    // NOP
label_25a980:
    // 0x25a980: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x25a980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25a984: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x25A984u;
    {
        const bool branch_taken_0x25a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A984u;
        // 0x25a988: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a984) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A98Cu;
    // 0x25a98c: 0x0  nop
    ctx->pc = 0x25a98cu;
    // NOP
label_25a990:
    // 0x25a990: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x25a990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x25a994: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x25A994u;
    {
        const bool branch_taken_0x25a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A994u;
        // 0x25a998: 0x2407feac  addiu       $a3, $zero, -0x154 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a994) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A99Cu;
    // 0x25a99c: 0x0  nop
    ctx->pc = 0x25a99cu;
    // NOP
label_25a9a0:
    // 0x25a9a0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x25a9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25a9a4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25A9A4u;
    {
        const bool branch_taken_0x25a9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9A4u;
        // 0x25a9a8: 0x24070155  addiu       $a3, $zero, 0x155 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9a4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9ACu;
    // 0x25a9ac: 0x0  nop
    ctx->pc = 0x25a9acu;
    // NOP
label_25a9b0:
    // 0x25a9b0: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x25a9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25a9b4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x25A9B4u;
    {
        const bool branch_taken_0x25a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9B4u;
        // 0x25a9b8: 0x2407faac  addiu       $a3, $zero, -0x554 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965932));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9b4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9BCu;
    // 0x25a9bc: 0x0  nop
    ctx->pc = 0x25a9bcu;
    // NOP
label_25a9c0:
    // 0x25a9c0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25a9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25a9c4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x25A9C4u;
    {
        const bool branch_taken_0x25a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9C4u;
        // 0x25a9c8: 0x24070555  addiu       $a3, $zero, 0x555 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9c4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9CCu;
    // 0x25a9cc: 0x0  nop
    ctx->pc = 0x25a9ccu;
    // NOP
label_25a9d0:
    // 0x25a9d0: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x25a9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25a9d4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x25A9D4u;
    {
        const bool branch_taken_0x25a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9D4u;
        // 0x25a9d8: 0x2407eaac  addiu       $a3, $zero, -0x1554 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294961836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9d4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9DCu;
    // 0x25a9dc: 0x0  nop
    ctx->pc = 0x25a9dcu;
    // NOP
label_25a9e0:
    // 0x25a9e0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x25a9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x25a9e4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x25A9E4u;
    {
        const bool branch_taken_0x25a9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9E4u;
        // 0x25a9e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9e4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9ECu;
    // 0x25a9ec: 0x0  nop
    ctx->pc = 0x25a9ecu;
    // NOP
label_25a9f0:
    // 0x25a9f0: 0x24080063  addiu       $t0, $zero, 0x63
    ctx->pc = 0x25a9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x25a9f4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x25A9F4u;
    {
        const bool branch_taken_0x25a9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A9F4u;
        // 0x25a9f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9f4) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25A9FCu;
    // 0x25a9fc: 0x0  nop
    ctx->pc = 0x25a9fcu;
    // NOP
label_25aa00:
    // 0x25aa00: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x25aa00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa04: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x25aa04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25aa08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25AA08u;
    {
        const bool branch_taken_0x25aa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA08u;
        // 0x25aa0c: 0x2582fffc  addiu       $v0, $t4, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa08) {
            ctx->pc = 0x25AA50u;
            goto label_25aa50;
        }
    }
    ctx->pc = 0x25AA10u;
    // 0x25aa10: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25aa14: 0x2788aa24  addiu       $t0, $gp, -0x55DC
    ctx->pc = 0x25aa14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945316));
label_25aa18:
    // 0x25aa18: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25aa18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25aa1c: 0x8f83aa24  lw          $v1, -0x55DC($gp)
    ctx->pc = 0x25aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25aa20: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25aa24: 0x24ec0008  addiu       $t4, $a3, 0x8
    ctx->pc = 0x25aa24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x25aa28: 0x29850004  slti        $a1, $t4, 0x4
    ctx->pc = 0x25aa28u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x25aa2c: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x25aa2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x25aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x25aa34: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25aa34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25aa38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25aa3c: 0xaf8caa28  sw          $t4, -0x55D8($gp)
    ctx->pc = 0x25aa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 12));
    // 0x25aa40: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x25aa40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x25aa44: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25AA44u;
    {
        const bool branch_taken_0x25aa44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA44u;
        // 0x25aa48: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa44) {
            ctx->pc = 0x25AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aa18;
        }
    }
    ctx->pc = 0x25AA4Cu;
    // 0x25aa4c: 0x2582fffc  addiu       $v0, $t4, -0x4
    ctx->pc = 0x25aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967292));
label_25aa50:
    // 0x25aa50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25aa54: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x25aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x25aa58: 0x4b2006  srlv        $a0, $t3, $v0
    ctx->pc = 0x25aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x25aa5c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x25aa5cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x25aa60: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x25aa60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa64: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x25aa64u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x25aa68: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x25aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x25aa6c: 0xa784aa2c  sh          $a0, -0x55D4($gp)
    ctx->pc = 0x25aa6cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294945324), (uint16_t)GPR_U32(ctx, 4));
    // 0x25aa70: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x25aa70u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa74: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x25aa74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa78: 0x8f88ca08  lw          $t0, -0x35F8($gp)
    ctx->pc = 0x25aa78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953480)));
    // 0x25aa7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25AA7Cu;
    {
        const bool branch_taken_0x25aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA7Cu;
        // 0x25aa80: 0x8f87ca0c  lw          $a3, -0x35F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa7c) {
            ctx->pc = 0x25AA98u;
            goto label_25aa98;
        }
    }
    ctx->pc = 0x25AA84u;
    // 0x25aa84: 0x0  nop
    ctx->pc = 0x25aa84u;
    // NOP
label_25aa88:
    // 0x25aa88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aa8c: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25aa8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25aa90: 0xc049dc0  jal         func_127700
    ctx->pc = 0x25AA90u;
    SET_GPR_U32(ctx, 31, 0x25AA98u);
    ctx->pc = 0x25AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AA90u;
    // 0x25aa94: 0xaf8dca10  sw          $t5, -0x35F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127700u, 0x25AA90u, 0x25AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AA98u;
label_25aa98:
    // 0x25aa98: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x25AA98u;
    {
        const bool branch_taken_0x25aa98 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AA98u;
        // 0x25aa9c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa98) {
            ctx->pc = 0x25AB24u;
            goto label_25ab24;
        }
    }
    ctx->pc = 0x25AAA0u;
    // 0x25aaa0: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x25aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x25aaa4: 0x1102001f  beq         $t0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25AAA4u;
    {
        const bool branch_taken_0x25aaa4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAA4u;
        // 0x25aaa8: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaa4) {
            ctx->pc = 0x25AB24u;
            goto label_25ab24;
        }
    }
    ctx->pc = 0x25AAACu;
    // 0x25aaac: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x25aaacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25aab0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AAB0u;
    {
        const bool branch_taken_0x25aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAB0u;
        // 0x25aab4: 0x180482d  daddu       $t1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aab0) {
            ctx->pc = 0x25AAF4u;
            goto label_25aaf4;
        }
    }
    ctx->pc = 0x25AAB8u;
    // 0x25aab8: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25aabc: 0x278aaa24  addiu       $t2, $gp, -0x55DC
    ctx->pc = 0x25aabcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945316));
label_25aac0:
    // 0x25aac0: 0xb5a00  sll         $t3, $t3, 8
    ctx->pc = 0x25aac0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 8));
    // 0x25aac4: 0x8f83aa24  lw          $v1, -0x55DC($gp)
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945316)));
    // 0x25aac8: 0xaf8bca10  sw          $t3, -0x35F0($gp)
    ctx->pc = 0x25aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 11));
    // 0x25aacc: 0x252c0008  addiu       $t4, $t1, 0x8
    ctx->pc = 0x25aaccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x25aad0: 0x188282a  slt         $a1, $t4, $t0
    ctx->pc = 0x25aad0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x25aad4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x25aad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aad8: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x25aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x25aadc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x25aadcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25aae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25aae4: 0xaf8caa28  sw          $t4, -0x55D8($gp)
    ctx->pc = 0x25aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 12));
    // 0x25aae8: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x25aae8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
    // 0x25aaec: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x25AAECu;
    {
        const bool branch_taken_0x25aaec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAECu;
        // 0x25aaf0: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaec) {
            ctx->pc = 0x25AAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25aac0;
        }
    }
    ctx->pc = 0x25AAF4u;
label_25aaf4:
    // 0x25aaf4: 0x1881023  subu        $v0, $t4, $t0
    ctx->pc = 0x25aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x25aaf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25aafc: 0x4b2006  srlv        $a0, $t3, $v0
    ctx->pc = 0x25aafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x25ab00: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x25ab04: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x25ab04u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x25ab08: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x25ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x25ab0c: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x25ab0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x25ab10: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x25ab10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab14: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x25ab14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x25ab18: 0x160682d  daddu       $t5, $t3, $zero
    ctx->pc = 0x25ab18u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab1c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x25ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x25ab20: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x25ab20u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_25ab24:
    // 0x25ab24: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x25ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x25ab28: 0xaf88ca08  sw          $t0, -0x35F8($gp)
    ctx->pc = 0x25ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953480), GPR_U32(ctx, 8));
    // 0x25ab2c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25AB2Cu;
    {
        const bool branch_taken_0x25ab2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB2Cu;
        // 0x25ab30: 0xaf87ca0c  sw          $a3, -0x35F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953484), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab2c) {
            ctx->pc = 0x25AB5Cu;
            goto label_25ab5c;
        }
    }
    ctx->pc = 0x25AB34u;
    // 0x25ab34: 0x1f91021  addu        $v0, $t7, $t9
    ctx->pc = 0x25ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x25ab38: 0x304c021  addu        $t8, $t8, $a0
    ctx->pc = 0x25ab38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x25ab3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25ab40: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x25ab40u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x25ab44: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25ab48: 0x1c6202a  slt         $a0, $t6, $a2
    ctx->pc = 0x25ab48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25ab4c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x25ab4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ab50: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x25ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x25ab54: 0x1480ff40  bnez        $a0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x25AB54u;
    {
        const bool branch_taken_0x25ab54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB54u;
        // 0x25ab58: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab54) {
            ctx->pc = 0x25A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a858;
        }
    }
    ctx->pc = 0x25AB5Cu;
label_25ab5c:
    // 0x25ab5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ab60: 0x2403ffbc  addiu       $v1, $zero, -0x44
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x25ab64: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x25ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x25ab68: 0xaf8aaa28  sw          $t2, -0x55D8($gp)
    ctx->pc = 0x25ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945320), GPR_U32(ctx, 10));
    // 0x25ab6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25ab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25ab70: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x25AB70u;
    {
        const bool branch_taken_0x25ab70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AB70u;
        // 0x25ab74: 0xaf8dca10  sw          $t5, -0x35F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953488), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab70) {
            ctx->pc = 0x25ABB0u;
            goto label_25abb0;
        }
    }
    ctx->pc = 0x25AB78u;
    // 0x25ab78: 0x1f92021  addu        $a0, $t7, $t9
    ctx->pc = 0x25ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x25ab7c: 0xc7818ae8  lwc1        $f1, -0x7518($gp)
    ctx->pc = 0x25ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ab80: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x25ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25ab84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25ab88: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x25ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x25ab8c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x25ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x25ab90: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x25ab90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25ab94: 0x2821004  sllv        $v0, $v0, $s4
    ctx->pc = 0x25ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
    // 0x25ab98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ab9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ab9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25aba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25aba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25aba4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25ABA4u;
    {
        const bool branch_taken_0x25aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABA4u;
        // 0x25aba8: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aba4) {
            ctx->pc = 0x25ABECu;
            goto label_25abec;
        }
    }
    ctx->pc = 0x25ABACu;
    // 0x25abac: 0x0  nop
    ctx->pc = 0x25abacu;
    // NOP
label_25abb0:
    // 0x25abb0: 0x1f92021  addu        $a0, $t7, $t9
    ctx->pc = 0x25abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x25abb4: 0x3af1821  addu        $v1, $sp, $t7
    ctx->pc = 0x25abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 15)));
    // 0x25abb8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x25abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x25abbc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x25abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25abc0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x25abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x25abc4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25abc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25abc8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x25abc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25abcc: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x25abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x25abd0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x25abd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25abd4: 0x3c31804  sllv        $v1, $v1, $fp
    ctx->pc = 0x25abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 30) & 0x1F));
    // 0x25abd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25abd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25abdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25abdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25abe0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x25abe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x25abe4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x25abe4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25abe8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x25abe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_25abec:
    // 0x25abec: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x25abecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x25abf0: 0x2b220003  slti        $v0, $t9, 0x3
    ctx->pc = 0x25abf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x25abf4: 0x1440fe44  bnez        $v0, . + 4 + (-0x1BC << 2)
    ctx->pc = 0x25ABF4u;
    {
        const bool branch_taken_0x25abf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25ABF4u;
        // 0x25abf8: 0x2368821  addu        $s1, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abf4) {
            ctx->pc = 0x25A508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a508;
        }
    }
    ctx->pc = 0x25ABFCu;
    // 0x25abfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x25abfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x25ac00: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x25ac00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25ac04: 0x5440fe3e  bnel        $v0, $zero, . + 4 + (-0x1C2 << 2)
    ctx->pc = 0x25AC04u;
    {
        const bool branch_taken_0x25ac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ac04) {
            ctx->pc = 0x25AC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25AC04u;
            // 0x25ac08: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a500;
        }
    }
    ctx->pc = 0x25AC0Cu;
label_25ac0c:
    // 0x25ac0c: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x25ac0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x25ac10: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x25ac10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x25ac14: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x25ac14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25ac18: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x25ac18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x25ac1c: 0xdfb40110  ld          $s4, 0x110($sp)
    ctx->pc = 0x25ac1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x25ac20: 0xdfb50118  ld          $s5, 0x118($sp)
    ctx->pc = 0x25ac20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x25ac24: 0xdfb60120  ld          $s6, 0x120($sp)
    ctx->pc = 0x25ac24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x25ac28: 0xdfb70128  ld          $s7, 0x128($sp)
    ctx->pc = 0x25ac28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x25ac2c: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x25ac2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x25ac30: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x25ac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25ac34: 0x3e00008  jr          $ra
    ctx->pc = 0x25AC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AC34u;
        // 0x25ac38: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AC3Cu;
    // 0x25ac3c: 0x0  nop
    ctx->pc = 0x25ac3cu;
    // NOP
    ctx->pc = 0x25ac40u;
}
