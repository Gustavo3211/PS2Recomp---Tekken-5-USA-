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

// Function: sub_002ED480
// Address: 0x2ed480 - 0x2ed668
void sub_002ED480_0x2ed480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED480_0x2ed480");
#endif

    switch (ctx->pc) {
        case 0x2ed54cu: goto label_2ed54c;
        case 0x2ed554u: goto label_2ed554;
        case 0x2ed610u: goto label_2ed610;
        case 0x2ed618u: goto label_2ed618;
        case 0x2ed620u: goto label_2ed620;
        case 0x2ed630u: goto label_2ed630;
        case 0x2ed644u: goto label_2ed644;
        default: break;
    }

    ctx->pc = 0x2ed480u;

    // 0x2ed480: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2ed480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2ed484: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2ed484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x2ed488: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2ed488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2ed48c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x2ed48cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ed490: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ed490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2ed494: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2ed494u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ed498: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2ed498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2ed49c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x2ed49cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ed4a0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2ed4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2ed4a4: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x2ed4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x2ed4a8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2ed4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2ed4ac: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ed4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ed4b0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ed4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ed4b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ed4b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4b8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ed4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ed4bc: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2ed4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ed4c0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2ed4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2ed4c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2ed4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed4c8: 0x244a4a78  addiu       $t2, $v0, 0x4A78
    ctx->pc = 0x2ed4c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 19064));
    // 0x2ed4cc: 0x89470003  lwl         $a3, 0x3($t2)
    ctx->pc = 0x2ed4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x2ed4d0: 0x99470000  lwr         $a3, 0x0($t2)
    ctx->pc = 0x2ed4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x2ed4d4: 0xaba70003  swl         $a3, 0x3($sp)
    ctx->pc = 0x2ed4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ed4d8: 0xbba70000  swr         $a3, 0x0($sp)
    ctx->pc = 0x2ed4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ed4dc: 0x24694a80  addiu       $t1, $v1, 0x4A80
    ctx->pc = 0x2ed4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 19072));
    // 0x2ed4e0: 0x89220003  lwl         $v0, 0x3($t1)
    ctx->pc = 0x2ed4e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2ed4e4: 0x99220000  lwr         $v0, 0x0($t1)
    ctx->pc = 0x2ed4e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2ed4e8: 0xaa820003  swl         $v0, 0x3($s4)
    ctx->pc = 0x2ed4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ed4ec: 0xba820000  swr         $v0, 0x0($s4)
    ctx->pc = 0x2ed4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ed4f0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x2ed4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x2ed4f4: 0x24a84a88  addiu       $t0, $a1, 0x4A88
    ctx->pc = 0x2ed4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 19080));
    // 0x2ed4f8: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x2ed4f8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x154A88u));
    // 0x2ed4fc: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x2ed4fcu;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x154A89u));
    // 0x2ed500: 0xa2aa0000  sb          $t2, 0x0($s5)
    ctx->pc = 0x2ed500u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ed504: 0xa2a30001  sb          $v1, 0x1($s5)
    ctx->pc = 0x2ed504u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed50c: 0x24c44a90  addiu       $a0, $a2, 0x4A90
    ctx->pc = 0x2ed50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 19088));
    // 0x2ed510: 0x88890003  lwl         $t1, 0x3($a0)
    ctx->pc = 0x2ed510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x2ed514: 0x98890000  lwr         $t1, 0x0($a0)
    ctx->pc = 0x2ed514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x2ed518: 0xaa690003  swl         $t1, 0x3($s3)
    ctx->pc = 0x2ed518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ed51c: 0xba690000  swr         $t1, 0x0($s3)
    ctx->pc = 0x2ed51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2ed520: 0xafbd0050  sw          $sp, 0x50($sp)
    ctx->pc = 0x2ed520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 29));
    // 0x2ed524: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2ed524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2ed528: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2ed528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2ed52c: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x2ed52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2ed530: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x2ed530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2ed534: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x2ed534u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2ed538: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x2ed538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed53c: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x2ed53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ed540: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x2ed540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
    // 0x2ed544: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2ED544u;
    SET_GPR_U32(ctx, 31, 0x2ED54Cu);
    ctx->pc = 0x2ED548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED544u;
    // 0x2ed548: 0x244437e0  addiu       $a0, $v0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2ED544u, 0x2ED54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED54Cu;
label_2ed54c:
    // 0x2ed54c: 0xc0b7630  jal         func_2DD8C0
    ctx->pc = 0x2ED54Cu;
    SET_GPR_U32(ctx, 31, 0x2ED554u);
    ctx->pc = 0x2ED550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED54Cu;
    // 0x2ed550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD8C0u, 0x2ED54Cu, 0x2ED554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED554u;
label_2ed554:
    // 0x2ed554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED554u;
    {
        const bool branch_taken_0x2ed554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED554u;
        // 0x2ed558: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed554) {
            ctx->pc = 0x2ED568u;
            goto label_2ed568;
        }
    }
    ctx->pc = 0x2ED55Cu;
    // 0x2ed55c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2ED55Cu;
    {
        const bool branch_taken_0x2ed55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED55Cu;
        // 0x2ed560: 0xafb40044  sw          $s4, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed55c) {
            ctx->pc = 0x2ED57Cu;
            goto label_2ed57c;
        }
    }
    ctx->pc = 0x2ED564u;
    // 0x2ed564: 0x0  nop
    ctx->pc = 0x2ed564u;
    // NOP
label_2ed568:
    // 0x2ed568: 0x8c43f5e4  lw          $v1, -0xA1C($v0)
    ctx->pc = 0x2ed568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964708)));
    // 0x2ed56c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2ed56cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed570: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED570u;
    {
        const bool branch_taken_0x2ed570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed570) {
            ctx->pc = 0x2ED574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED570u;
            // 0x2ed574: 0x8e240064  lw          $a0, 0x64($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED584u;
            goto label_2ed584;
        }
    }
    ctx->pc = 0x2ED578u;
    // 0x2ed578: 0xafb50044  sw          $s5, 0x44($sp)
    ctx->pc = 0x2ed578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 21));
label_2ed57c:
    // 0x2ed57c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2ed57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed580: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x2ed580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2ed584:
    // 0x2ed584: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2ed584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ed588: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2ED588u;
    {
        const bool branch_taken_0x2ed588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED588u;
        // 0x2ed58c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed588) {
            ctx->pc = 0x2ED618u;
            goto label_2ed618;
        }
    }
    ctx->pc = 0x2ED590u;
    // 0x2ed590: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ed590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ed594: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ed594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ed598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ed598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ed59c: 0x8c630830  lw          $v1, 0x830($v1)
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2096)));
    // 0x2ed5a0: 0x600008  jr          $v1
    ctx->pc = 0x2ED5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ED5A8u: goto label_2ed5a8;
            case 0x2ED5B0u: goto label_2ed5b0;
            case 0x2ED5B8u: goto label_2ed5b8;
            case 0x2ED5C0u: goto label_2ed5c0;
            case 0x2ED5D8u: goto label_2ed5d8;
            case 0x2ED600u: goto label_2ed600;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED5A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2ED5A8u;
label_2ed5a8:
    // 0x2ed5a8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2ED5A8u;
    {
        const bool branch_taken_0x2ed5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5A8u;
        // 0x2ed5ac: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5a8) {
            ctx->pc = 0x2ED604u;
            goto label_2ed604;
        }
    }
    ctx->pc = 0x2ED5B0u;
label_2ed5b0:
    // 0x2ed5b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2ED5B0u;
    {
        const bool branch_taken_0x2ed5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5B0u;
        // 0x2ed5b4: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5b0) {
            ctx->pc = 0x2ED604u;
            goto label_2ed604;
        }
    }
    ctx->pc = 0x2ED5B8u;
label_2ed5b8:
    // 0x2ed5b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ED5B8u;
    {
        const bool branch_taken_0x2ed5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5B8u;
        // 0x2ed5bc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5b8) {
            ctx->pc = 0x2ED604u;
            goto label_2ed604;
        }
    }
    ctx->pc = 0x2ED5C0u;
label_2ed5c0:
    // 0x2ed5c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ed5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ed5c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ed5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ed5c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ed5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ed5cc: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x2ed5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2ed5d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED5D0u;
    {
        const bool branch_taken_0x2ed5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5D0u;
        // 0x2ed5d4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5d0) {
            ctx->pc = 0x2ED5ECu;
            goto label_2ed5ec;
        }
    }
    ctx->pc = 0x2ED5D8u;
label_2ed5d8:
    // 0x2ed5d8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ed5dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ed5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ed5e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ed5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ed5e4: 0x24030073  addiu       $v1, $zero, 0x73
    ctx->pc = 0x2ed5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2ed5e8: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x2ed5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_2ed5ec:
    // 0x2ed5ec: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x2ed5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ed5f0: 0xa3a40032  sb          $a0, 0x32($sp)
    ctx->pc = 0x2ed5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ed5f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED5F4u;
    {
        const bool branch_taken_0x2ed5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5F4u;
        // 0x2ed5f8: 0xac530000  sw          $s3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5f4) {
            ctx->pc = 0x2ED608u;
            goto label_2ed608;
        }
    }
    ctx->pc = 0x2ED5FCu;
    // 0x2ed5fc: 0x0  nop
    ctx->pc = 0x2ed5fcu;
    // NOP
label_2ed600:
    // 0x2ed600: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2ed600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2ed604:
    // 0x2ed604: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x2ed604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_2ed608:
    // 0x2ed608: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED608u;
    {
        const bool branch_taken_0x2ed608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED608u;
        // 0x2ed60c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed608) {
            ctx->pc = 0x2ED618u;
            goto label_2ed618;
        }
    }
    ctx->pc = 0x2ED610u;
label_2ed610:
    // 0x2ed610: 0xc044106  jal         func_110418
    ctx->pc = 0x2ED610u;
    SET_GPR_U32(ctx, 31, 0x2ED618u);
    ctx->pc = 0x2ED614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED610u;
    // 0x2ed614: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0x2ED610u, 0x2ED618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED618u;
label_2ed618:
    // 0x2ed618: 0xc047274  jal         func_11C9D0
    ctx->pc = 0x2ED618u;
    SET_GPR_U32(ctx, 31, 0x2ED620u);
    ctx->pc = 0x2ED61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED618u;
    // 0x2ed61c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C9D0u, 0x2ED618u, 0x2ED620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED620u;
label_2ed620:
    // 0x2ed620: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2ED620u;
    {
        const bool branch_taken_0x2ed620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2ed620) {
            ctx->pc = 0x2ED610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed610;
        }
    }
    ctx->pc = 0x2ED628u;
    // 0x2ed628: 0xc044892  jal         func_112248
    ctx->pc = 0x2ED628u;
    SET_GPR_U32(ctx, 31, 0x2ED630u);
    ctx->pc = 0x112248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112248u, 0x2ED628u, 0x2ED630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED630u;
label_2ed630:
    // 0x2ed630: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2ed630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2ed634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ed634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed638: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ed638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed63c: 0xc046406  jal         func_119018
    ctx->pc = 0x2ED63Cu;
    SET_GPR_U32(ctx, 31, 0x2ED644u);
    ctx->pc = 0x2ED640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED63Cu;
    // 0x2ed640: 0x24840810  addiu       $a0, $a0, 0x810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119018u, 0x2ED63Cu, 0x2ED644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED644u;
label_2ed644:
    // 0x2ed644: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2ed644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed648: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2ed648u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ed64c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2ed64cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed650: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2ed650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2ed654: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2ed654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed658: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2ed658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2ed65c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2ed65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ed660: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED660u;
        // 0x2ed664: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED668u;
}
