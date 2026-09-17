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

// Function: sub_002150C0
// Address: 0x2150c0 - 0x2154d8
void sub_002150C0_0x2150c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002150C0_0x2150c0");
#endif

    switch (ctx->pc) {
        case 0x215134u: goto label_215134;
        case 0x2154a0u: goto label_2154a0;
        default: break;
    }

    ctx->pc = 0x2150c0u;

    // 0x2150c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2150c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2150c4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2150c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150c8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2150c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2150cc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2150ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2150d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2150d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2150d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2150d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2150d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2150dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2150dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2150e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2150e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2150e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2150e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2150e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2150e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2150ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2150ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2150f0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2150f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2150f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2150f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2150f8: 0x27c30050  addiu       $v1, $fp, 0x50
    ctx->pc = 0x2150f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    // 0x2150fc: 0x2442d638  addiu       $v0, $v0, -0x29C8
    ctx->pc = 0x2150fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956600));
    // 0x215100: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x215100u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x215104: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x215104u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x215108: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x215108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x21510c: 0x24e758f0  addiu       $a3, $a3, 0x58F0
    ctx->pc = 0x21510cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22768));
    // 0x215110: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x215110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x215114: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x215114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x215118: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x215118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x21511c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x21511cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x215120: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x215120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x215124: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x215124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215128: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x215128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x21512c: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x21512Cu;
    SET_GPR_U32(ctx, 31, 0x215134u);
    ctx->pc = 0x215130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21512Cu;
    // 0x215130: 0xafc70038  sw          $a3, 0x38($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 56), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x21512Cu, 0x215134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215134u;
label_215134:
    // 0x215134: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x215134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x215138: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x215138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x21513c: 0x24472a30  addiu       $a3, $v0, 0x2A30
    ctx->pc = 0x21513cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x215140: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x215140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x215144: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x215144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x215148: 0xb3c4005f  sdl         $a0, 0x5F($fp)
    ctx->pc = 0x215148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21514c: 0xb7c40058  sdr         $a0, 0x58($fp)
    ctx->pc = 0x21514cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215150: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x215154: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x215154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x215158: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x215158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x21515c: 0x246b2a38  addiu       $t3, $v1, 0x2A38
    ctx->pc = 0x21515cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 10808));
    // 0x215160: 0x69680007  ldl         $t0, 0x7($t3)
    ctx->pc = 0x215160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x215164: 0x6d680000  ldr         $t0, 0x0($t3)
    ctx->pc = 0x215164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x215168: 0xb3c80067  sdl         $t0, 0x67($fp)
    ctx->pc = 0x215168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21516c: 0xb7c80060  sdr         $t0, 0x60($fp)
    ctx->pc = 0x21516cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215170: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x215170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x215174: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x215174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x215178: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x215178u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x21517c: 0x24982a40  addiu       $t8, $a0, 0x2A40
    ctx->pc = 0x21517cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x215180: 0x6b0c0007  ldl         $t4, 0x7($t8)
    ctx->pc = 0x215180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x215184: 0x6f0c0000  ldr         $t4, 0x0($t8)
    ctx->pc = 0x215184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x215188: 0xb3cc006f  sdl         $t4, 0x6F($fp)
    ctx->pc = 0x215188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21518c: 0xb7cc0068  sdr         $t4, 0x68($fp)
    ctx->pc = 0x21518cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215190: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x215190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x215194: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x215194u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x215198: 0x3c110015  lui         $s1, 0x15
    ctx->pc = 0x215198u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    // 0x21519c: 0x244c2a48  addiu       $t4, $v0, 0x2A48
    ctx->pc = 0x21519cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 10824));
    // 0x2151a0: 0x69890007  ldl         $t1, 0x7($t4)
    ctx->pc = 0x2151a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2151a4: 0x6d890000  ldr         $t1, 0x0($t4)
    ctx->pc = 0x2151a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2151a8: 0xb3c90077  sdl         $t1, 0x77($fp)
    ctx->pc = 0x2151a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151ac: 0xb7c90070  sdr         $t1, 0x70($fp)
    ctx->pc = 0x2151acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151b0: 0x3c180015  lui         $t8, 0x15
    ctx->pc = 0x2151b0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)21 << 16));
    // 0x2151b4: 0x3c190015  lui         $t9, 0x15
    ctx->pc = 0x2151b4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)21 << 16));
    // 0x2151b8: 0x3c150015  lui         $s5, 0x15
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)21 << 16));
    // 0x2151bc: 0x24aa2a50  addiu       $t2, $a1, 0x2A50
    ctx->pc = 0x2151bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 10832));
    // 0x2151c0: 0x694e0007  ldl         $t6, 0x7($t2)
    ctx->pc = 0x2151c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x2151c4: 0x6d4e0000  ldr         $t6, 0x0($t2)
    ctx->pc = 0x2151c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x2151c8: 0xb3ce007f  sdl         $t6, 0x7F($fp)
    ctx->pc = 0x2151c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151cc: 0xb7ce0078  sdr         $t6, 0x78($fp)
    ctx->pc = 0x2151ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151d0: 0x3c160015  lui         $s6, 0x15
    ctx->pc = 0x2151d0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)21 << 16));
    // 0x2151d4: 0x3c170015  lui         $s7, 0x15
    ctx->pc = 0x2151d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)21 << 16));
    // 0x2151d8: 0x3c120015  lui         $s2, 0x15
    ctx->pc = 0x2151d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)21 << 16));
    // 0x2151dc: 0x24c22a58  addiu       $v0, $a2, 0x2A58
    ctx->pc = 0x2151dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 10840));
    // 0x2151e0: 0x684b0007  ldl         $t3, 0x7($v0)
    ctx->pc = 0x2151e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x2151e4: 0x6c4b0000  ldr         $t3, 0x0($v0)
    ctx->pc = 0x2151e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x2151e8: 0xb3cb0087  sdl         $t3, 0x87($fp)
    ctx->pc = 0x2151e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151ec: 0xb7cb0080  sdr         $t3, 0x80($fp)
    ctx->pc = 0x2151ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2151f0: 0x3c0e0015  lui         $t6, 0x15
    ctx->pc = 0x2151f0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)21 << 16));
    // 0x2151f4: 0x3c130015  lui         $s3, 0x15
    ctx->pc = 0x2151f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)21 << 16));
    // 0x2151f8: 0x3c140015  lui         $s4, 0x15
    ctx->pc = 0x2151f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)21 << 16));
    // 0x2151fc: 0x246a2a60  addiu       $t2, $v1, 0x2A60
    ctx->pc = 0x2151fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 10848));
    // 0x215200: 0x69450007  ldl         $a1, 0x7($t2)
    ctx->pc = 0x215200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215204: 0x6d450000  ldr         $a1, 0x0($t2)
    ctx->pc = 0x215204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x215208: 0xb3c5008f  sdl         $a1, 0x8F($fp)
    ctx->pc = 0x215208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21520c: 0xb7c50088  sdr         $a1, 0x88($fp)
    ctx->pc = 0x21520cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215210: 0x3c0a0015  lui         $t2, 0x15
    ctx->pc = 0x215210u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21 << 16));
    // 0x215214: 0x3c0f0015  lui         $t7, 0x15
    ctx->pc = 0x215214u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)21 << 16));
    // 0x215218: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x215218u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x21521c: 0x24e32a68  addiu       $v1, $a3, 0x2A68
    ctx->pc = 0x21521cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 10856));
    // 0x215220: 0x686b0007  ldl         $t3, 0x7($v1)
    ctx->pc = 0x215220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x215224: 0x6c6b0000  ldr         $t3, 0x0($v1)
    ctx->pc = 0x215224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x215228: 0xb3cb0097  sdl         $t3, 0x97($fp)
    ctx->pc = 0x215228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21522c: 0xb7cb0090  sdr         $t3, 0x90($fp)
    ctx->pc = 0x21522cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215230: 0x3c0b0015  lui         $t3, 0x15
    ctx->pc = 0x215230u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21 << 16));
    // 0x215234: 0x3c0c0015  lui         $t4, 0x15
    ctx->pc = 0x215234u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)21 << 16));
    // 0x215238: 0x3c0d0015  lui         $t5, 0x15
    ctx->pc = 0x215238u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)21 << 16));
    // 0x21523c: 0x25092a70  addiu       $t1, $t0, 0x2A70
    ctx->pc = 0x21523cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 10864));
    // 0x215240: 0x69250007  ldl         $a1, 0x7($t1)
    ctx->pc = 0x215240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215244: 0x6d250000  ldr         $a1, 0x0($t1)
    ctx->pc = 0x215244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x215248: 0xb3c5009f  sdl         $a1, 0x9F($fp)
    ctx->pc = 0x215248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21524c: 0xb7c50098  sdr         $a1, 0x98($fp)
    ctx->pc = 0x21524cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215250: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x215254: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x215254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x215258: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x215258u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x21525c: 0x24862a78  addiu       $a2, $a0, 0x2A78
    ctx->pc = 0x21525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 10872));
    // 0x215260: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x215260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x215264: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x215264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215268: 0xb3c200a7  sdl         $v0, 0xA7($fp)
    ctx->pc = 0x215268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21526c: 0xb7c200a0  sdr         $v0, 0xA0($fp)
    ctx->pc = 0x21526cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215270: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x215270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x215274: 0x26252a80  addiu       $a1, $s1, 0x2A80
    ctx->pc = 0x215274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10880));
    // 0x215278: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x215278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21527c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x21527cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215280: 0xb3c200af  sdl         $v0, 0xAF($fp)
    ctx->pc = 0x215280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215284: 0xb7c200a8  sdr         $v0, 0xA8($fp)
    ctx->pc = 0x215284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215288: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x215288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x21528c: 0x27052a88  addiu       $a1, $t8, 0x2A88
    ctx->pc = 0x21528cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), 10888));
    // 0x215290: 0x68b10007  ldl         $s1, 0x7($a1)
    ctx->pc = 0x215290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x215294: 0x6cb10000  ldr         $s1, 0x0($a1)
    ctx->pc = 0x215294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x215298: 0xb3d100b7  sdl         $s1, 0xB7($fp)
    ctx->pc = 0x215298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21529c: 0xb7d100b0  sdr         $s1, 0xB0($fp)
    ctx->pc = 0x21529cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152a0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x2152a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x2152a4: 0x27232a90  addiu       $v1, $t9, 0x2A90
    ctx->pc = 0x2152a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), 10896));
    // 0x2152a8: 0x68710007  ldl         $s1, 0x7($v1)
    ctx->pc = 0x2152a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2152ac: 0x6c710000  ldr         $s1, 0x0($v1)
    ctx->pc = 0x2152acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2152b0: 0xb3d100bf  sdl         $s1, 0xBF($fp)
    ctx->pc = 0x2152b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152b4: 0xb7d100b8  sdr         $s1, 0xB8($fp)
    ctx->pc = 0x2152b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152b8: 0x24a32a98  addiu       $v1, $a1, 0x2A98
    ctx->pc = 0x2152b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10904));
    // 0x2152bc: 0x68710007  ldl         $s1, 0x7($v1)
    ctx->pc = 0x2152bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x2152c0: 0x6c710000  ldr         $s1, 0x0($v1)
    ctx->pc = 0x2152c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x2152c4: 0xb3d100c7  sdl         $s1, 0xC7($fp)
    ctx->pc = 0x2152c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152c8: 0xb7d100c0  sdr         $s1, 0xC0($fp)
    ctx->pc = 0x2152c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152cc: 0x26a22aa0  addiu       $v0, $s5, 0x2AA0
    ctx->pc = 0x2152ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 10912));
    // 0x2152d0: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x2152d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2152d4: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x2152d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2152d8: 0xb3c500cf  sdl         $a1, 0xCF($fp)
    ctx->pc = 0x2152d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152dc: 0xb7c500c8  sdr         $a1, 0xC8($fp)
    ctx->pc = 0x2152dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152e0: 0x26d82aa8  addiu       $t8, $s6, 0x2AA8
    ctx->pc = 0x2152e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 22), 10920));
    // 0x2152e4: 0x6b030007  ldl         $v1, 0x7($t8)
    ctx->pc = 0x2152e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2152e8: 0x6f030000  ldr         $v1, 0x0($t8)
    ctx->pc = 0x2152e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2152ec: 0xb3c300d7  sdl         $v1, 0xD7($fp)
    ctx->pc = 0x2152ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152f0: 0xb7c300d0  sdr         $v1, 0xD0($fp)
    ctx->pc = 0x2152f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2152f4: 0x26f12ab0  addiu       $s1, $s7, 0x2AB0
    ctx->pc = 0x2152f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 10928));
    // 0x2152f8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2152f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2152fc: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2152fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215300: 0xb3c200df  sdl         $v0, 0xDF($fp)
    ctx->pc = 0x215300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215304: 0xb7c200d8  sdr         $v0, 0xD8($fp)
    ctx->pc = 0x215304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215308: 0x26452ab8  addiu       $a1, $s2, 0x2AB8
    ctx->pc = 0x215308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 10936));
    // 0x21530c: 0x68b80007  ldl         $t8, 0x7($a1)
    ctx->pc = 0x21530cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
    // 0x215310: 0x6cb80000  ldr         $t8, 0x0($a1)
    ctx->pc = 0x215310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem >> shift)); }
    // 0x215314: 0xb3d800e7  sdl         $t8, 0xE7($fp)
    ctx->pc = 0x215314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215318: 0xb7d800e0  sdr         $t8, 0xE0($fp)
    ctx->pc = 0x215318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 24); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21531c: 0x26632ac0  addiu       $v1, $s3, 0x2AC0
    ctx->pc = 0x21531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 10944));
    // 0x215320: 0x68710007  ldl         $s1, 0x7($v1)
    ctx->pc = 0x215320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x215324: 0x6c710000  ldr         $s1, 0x0($v1)
    ctx->pc = 0x215324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x215328: 0xb3d100ef  sdl         $s1, 0xEF($fp)
    ctx->pc = 0x215328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21532c: 0xb7d100e8  sdr         $s1, 0xE8($fp)
    ctx->pc = 0x21532cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215330: 0x26822ac8  addiu       $v0, $s4, 0x2AC8
    ctx->pc = 0x215330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 10952));
    // 0x215334: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x215334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215338: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x215338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21533c: 0xb3c500f7  sdl         $a1, 0xF7($fp)
    ctx->pc = 0x21533cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215340: 0xb7c500f0  sdr         $a1, 0xF0($fp)
    ctx->pc = 0x215340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215344: 0x25d82ad0  addiu       $t8, $t6, 0x2AD0
    ctx->pc = 0x215344u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 10960));
    // 0x215348: 0x6b030007  ldl         $v1, 0x7($t8)
    ctx->pc = 0x215348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21534c: 0x6f030000  ldr         $v1, 0x0($t8)
    ctx->pc = 0x21534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x215350: 0xb3c300ff  sdl         $v1, 0xFF($fp)
    ctx->pc = 0x215350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215354: 0xb7c300f8  sdr         $v1, 0xF8($fp)
    ctx->pc = 0x215354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215358: 0x25ee2ad8  addiu       $t6, $t7, 0x2AD8
    ctx->pc = 0x215358u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 10968));
    // 0x21535c: 0x69c20007  ldl         $v0, 0x7($t6)
    ctx->pc = 0x21535cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x215360: 0x6dc20000  ldr         $v0, 0x0($t6)
    ctx->pc = 0x215360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215364: 0xb3c20107  sdl         $v0, 0x107($fp)
    ctx->pc = 0x215364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215368: 0xb7c20100  sdr         $v0, 0x100($fp)
    ctx->pc = 0x215368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21536c: 0x26032ae0  addiu       $v1, $s0, 0x2AE0
    ctx->pc = 0x21536cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 10976));
    // 0x215370: 0x68710007  ldl         $s1, 0x7($v1)
    ctx->pc = 0x215370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x215374: 0x6c710000  ldr         $s1, 0x0($v1)
    ctx->pc = 0x215374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x215378: 0xb3d1010f  sdl         $s1, 0x10F($fp)
    ctx->pc = 0x215378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21537c: 0xb7d10108  sdr         $s1, 0x108($fp)
    ctx->pc = 0x21537cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215380: 0x25782ae8  addiu       $t8, $t3, 0x2AE8
    ctx->pc = 0x215380u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 10984));
    // 0x215384: 0x6b050007  ldl         $a1, 0x7($t8)
    ctx->pc = 0x215384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215388: 0x6f050000  ldr         $a1, 0x0($t8)
    ctx->pc = 0x215388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21538c: 0xb3c50117  sdl         $a1, 0x117($fp)
    ctx->pc = 0x21538cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215390: 0xb7c50110  sdr         $a1, 0x110($fp)
    ctx->pc = 0x215390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215394: 0x258b2af0  addiu       $t3, $t4, 0x2AF0
    ctx->pc = 0x215394u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 10992));
    // 0x215398: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x215398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21539c: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x21539cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2153a0: 0xb3c2011f  sdl         $v0, 0x11F($fp)
    ctx->pc = 0x2153a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153a4: 0xb7c20118  sdr         $v0, 0x118($fp)
    ctx->pc = 0x2153a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153a8: 0x25b82af8  addiu       $t8, $t5, 0x2AF8
    ctx->pc = 0x2153a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 13), 11000));
    // 0x2153ac: 0x6b0c0007  ldl         $t4, 0x7($t8)
    ctx->pc = 0x2153acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2153b0: 0x6f0c0000  ldr         $t4, 0x0($t8)
    ctx->pc = 0x2153b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2153b4: 0xb3cc0127  sdl         $t4, 0x127($fp)
    ctx->pc = 0x2153b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153b8: 0xb7cc0120  sdr         $t4, 0x120($fp)
    ctx->pc = 0x2153b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153bc: 0x252b2b00  addiu       $t3, $t1, 0x2B00
    ctx->pc = 0x2153bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 11008));
    // 0x2153c0: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x2153c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2153c4: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x2153c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2153c8: 0xb3c2012f  sdl         $v0, 0x12F($fp)
    ctx->pc = 0x2153c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153cc: 0xb7c20128  sdr         $v0, 0x128($fp)
    ctx->pc = 0x2153ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153d0: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x2153d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x2153d4: 0x25182b08  addiu       $t8, $t0, 0x2B08
    ctx->pc = 0x2153d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 11016));
    // 0x2153d8: 0x6b0c0007  ldl         $t4, 0x7($t8)
    ctx->pc = 0x2153d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x2153dc: 0x6f0c0000  ldr         $t4, 0x0($t8)
    ctx->pc = 0x2153dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x2153e0: 0xb3cc0137  sdl         $t4, 0x137($fp)
    ctx->pc = 0x2153e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153e4: 0xb7cc0130  sdr         $t4, 0x130($fp)
    ctx->pc = 0x2153e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153e8: 0x25482b10  addiu       $t0, $t2, 0x2B10
    ctx->pc = 0x2153e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 11024));
    // 0x2153ec: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x2153ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2153f0: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x2153f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2153f4: 0xb3c2013f  sdl         $v0, 0x13F($fp)
    ctx->pc = 0x2153f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153f8: 0xb7c20138  sdr         $v0, 0x138($fp)
    ctx->pc = 0x2153f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2153fc: 0x252e2b18  addiu       $t6, $t1, 0x2B18
    ctx->pc = 0x2153fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 11032));
    // 0x215400: 0x69ca0007  ldl         $t2, 0x7($t6)
    ctx->pc = 0x215400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x215404: 0x6dca0000  ldr         $t2, 0x0($t6)
    ctx->pc = 0x215404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x215408: 0xb3ca0147  sdl         $t2, 0x147($fp)
    ctx->pc = 0x215408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21540c: 0xb7ca0140  sdr         $t2, 0x140($fp)
    ctx->pc = 0x21540cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215410: 0x3c0a0015  lui         $t2, 0x15
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)21 << 16));
    // 0x215414: 0x24c32b20  addiu       $v1, $a2, 0x2B20
    ctx->pc = 0x215414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 11040));
    // 0x215418: 0x68710007  ldl         $s1, 0x7($v1)
    ctx->pc = 0x215418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x21541c: 0x6c710000  ldr         $s1, 0x0($v1)
    ctx->pc = 0x21541cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x215420: 0xb3d1014f  sdl         $s1, 0x14F($fp)
    ctx->pc = 0x215420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215424: 0xb7d10148  sdr         $s1, 0x148($fp)
    ctx->pc = 0x215424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215428: 0x3c180015  lui         $t8, 0x15
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)21 << 16));
    // 0x21542c: 0x24e92b28  addiu       $t1, $a3, 0x2B28
    ctx->pc = 0x21542cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 11048));
    // 0x215430: 0x69250007  ldl         $a1, 0x7($t1)
    ctx->pc = 0x215430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x215434: 0x6d250000  ldr         $a1, 0x0($t1)
    ctx->pc = 0x215434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x215438: 0xb3c50157  sdl         $a1, 0x157($fp)
    ctx->pc = 0x215438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21543c: 0xb7c50150  sdr         $a1, 0x150($fp)
    ctx->pc = 0x21543cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215440: 0x25512b30  addiu       $s1, $t2, 0x2B30
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 11056));
    // 0x215444: 0x6a2b0007  ldl         $t3, 0x7($s1)
    ctx->pc = 0x215444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x215448: 0x6e2b0000  ldr         $t3, 0x0($s1)
    ctx->pc = 0x215448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x21544c: 0xb3cb015f  sdl         $t3, 0x15F($fp)
    ctx->pc = 0x21544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215450: 0xb7cb0158  sdr         $t3, 0x158($fp)
    ctx->pc = 0x215450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215454: 0x27062b38  addiu       $a2, $t8, 0x2B38
    ctx->pc = 0x215454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 24), 11064));
    // 0x215458: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x215458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21545c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x21545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x215460: 0xb3c20167  sdl         $v0, 0x167($fp)
    ctx->pc = 0x215460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215464: 0xb7c20160  sdr         $v0, 0x160($fp)
    ctx->pc = 0x215464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215468: 0x248a2b40  addiu       $t2, $a0, 0x2B40
    ctx->pc = 0x215468u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 11072));
    // 0x21546c: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x21546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x215470: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x215470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x215474: 0xb3c7016f  sdl         $a3, 0x16F($fp)
    ctx->pc = 0x215474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x215478: 0xb7c70168  sdr         $a3, 0x168($fp)
    ctx->pc = 0x215478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21547c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21547Cu;
    {
        const bool branch_taken_0x21547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21547Cu;
        // 0x215480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21547c) {
            ctx->pc = 0x2154A0u;
            goto label_2154a0;
        }
    }
    ctx->pc = 0x215484u;
    // 0x215484: 0x0  nop
    ctx->pc = 0x215484u;
    // NOP
    // 0x215488: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x215488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21548c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x21548cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x215490: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x215490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x215494: 0x2484fb34  addiu       $a0, $a0, -0x4CC
    ctx->pc = 0x215494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966068));
    // 0x215498: 0xc048b90  jal         func_122E40
    ctx->pc = 0x215498u;
    SET_GPR_U32(ctx, 31, 0x2154A0u);
    ctx->pc = 0x21549Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215498u;
    // 0x21549c: 0xafc20008  sw          $v0, 0x8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x215498u, 0x2154A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2154A0u;
label_2154a0:
    // 0x2154a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2154a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2154a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2154a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2154a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2154a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2154ac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2154acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2154b0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2154b0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2154b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2154b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2154b8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2154b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2154bc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2154bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2154c0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2154c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2154c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2154C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154C4u;
        // 0x2154c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2154C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2154CCu;
    // 0x2154cc: 0x0  nop
    ctx->pc = 0x2154ccu;
    // NOP
    // 0x2154d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2154D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2154D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2154D0u;
        // 0x2154d4: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2154D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2154D8u;
}
