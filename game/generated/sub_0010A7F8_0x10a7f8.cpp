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

// Function: sub_0010A7F8
// Address: 0x10a7f8 - 0x10a9c8
void sub_0010A7F8_0x10a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A7F8_0x10a7f8");
#endif

    switch (ctx->pc) {
        case 0x10a7f8u: goto label_10a7f8;
        case 0x10a7fcu: goto label_10a7fc;
        case 0x10a800u: goto label_10a800;
        case 0x10a804u: goto label_10a804;
        case 0x10a808u: goto label_10a808;
        case 0x10a80cu: goto label_10a80c;
        case 0x10a810u: goto label_10a810;
        case 0x10a814u: goto label_10a814;
        case 0x10a818u: goto label_10a818;
        case 0x10a81cu: goto label_10a81c;
        case 0x10a820u: goto label_10a820;
        case 0x10a824u: goto label_10a824;
        case 0x10a828u: goto label_10a828;
        case 0x10a82cu: goto label_10a82c;
        case 0x10a830u: goto label_10a830;
        case 0x10a834u: goto label_10a834;
        case 0x10a838u: goto label_10a838;
        case 0x10a83cu: goto label_10a83c;
        case 0x10a840u: goto label_10a840;
        case 0x10a844u: goto label_10a844;
        case 0x10a848u: goto label_10a848;
        case 0x10a84cu: goto label_10a84c;
        case 0x10a850u: goto label_10a850;
        case 0x10a854u: goto label_10a854;
        case 0x10a858u: goto label_10a858;
        case 0x10a85cu: goto label_10a85c;
        case 0x10a860u: goto label_10a860;
        case 0x10a864u: goto label_10a864;
        case 0x10a868u: goto label_10a868;
        case 0x10a86cu: goto label_10a86c;
        case 0x10a870u: goto label_10a870;
        case 0x10a874u: goto label_10a874;
        case 0x10a878u: goto label_10a878;
        case 0x10a87cu: goto label_10a87c;
        case 0x10a880u: goto label_10a880;
        case 0x10a884u: goto label_10a884;
        case 0x10a888u: goto label_10a888;
        case 0x10a88cu: goto label_10a88c;
        case 0x10a890u: goto label_10a890;
        case 0x10a894u: goto label_10a894;
        case 0x10a898u: goto label_10a898;
        case 0x10a89cu: goto label_10a89c;
        case 0x10a8a0u: goto label_10a8a0;
        case 0x10a8a4u: goto label_10a8a4;
        case 0x10a8a8u: goto label_10a8a8;
        case 0x10a8acu: goto label_10a8ac;
        case 0x10a8b0u: goto label_10a8b0;
        case 0x10a8b4u: goto label_10a8b4;
        case 0x10a8b8u: goto label_10a8b8;
        case 0x10a8bcu: goto label_10a8bc;
        case 0x10a8c0u: goto label_10a8c0;
        case 0x10a8c4u: goto label_10a8c4;
        case 0x10a8c8u: goto label_10a8c8;
        case 0x10a8ccu: goto label_10a8cc;
        case 0x10a8d0u: goto label_10a8d0;
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a8d8u: goto label_10a8d8;
        case 0x10a8dcu: goto label_10a8dc;
        case 0x10a8e0u: goto label_10a8e0;
        case 0x10a8e4u: goto label_10a8e4;
        case 0x10a8e8u: goto label_10a8e8;
        case 0x10a8ecu: goto label_10a8ec;
        case 0x10a8f0u: goto label_10a8f0;
        case 0x10a8f4u: goto label_10a8f4;
        case 0x10a8f8u: goto label_10a8f8;
        case 0x10a8fcu: goto label_10a8fc;
        case 0x10a900u: goto label_10a900;
        case 0x10a904u: goto label_10a904;
        case 0x10a908u: goto label_10a908;
        case 0x10a90cu: goto label_10a90c;
        case 0x10a910u: goto label_10a910;
        case 0x10a914u: goto label_10a914;
        case 0x10a918u: goto label_10a918;
        case 0x10a91cu: goto label_10a91c;
        case 0x10a920u: goto label_10a920;
        case 0x10a924u: goto label_10a924;
        case 0x10a928u: goto label_10a928;
        case 0x10a92cu: goto label_10a92c;
        case 0x10a930u: goto label_10a930;
        case 0x10a934u: goto label_10a934;
        case 0x10a938u: goto label_10a938;
        case 0x10a93cu: goto label_10a93c;
        case 0x10a940u: goto label_10a940;
        case 0x10a944u: goto label_10a944;
        case 0x10a948u: goto label_10a948;
        case 0x10a94cu: goto label_10a94c;
        case 0x10a950u: goto label_10a950;
        case 0x10a954u: goto label_10a954;
        case 0x10a958u: goto label_10a958;
        case 0x10a95cu: goto label_10a95c;
        case 0x10a960u: goto label_10a960;
        case 0x10a964u: goto label_10a964;
        case 0x10a968u: goto label_10a968;
        case 0x10a96cu: goto label_10a96c;
        case 0x10a970u: goto label_10a970;
        case 0x10a974u: goto label_10a974;
        case 0x10a978u: goto label_10a978;
        case 0x10a97cu: goto label_10a97c;
        case 0x10a980u: goto label_10a980;
        case 0x10a984u: goto label_10a984;
        case 0x10a988u: goto label_10a988;
        case 0x10a98cu: goto label_10a98c;
        case 0x10a990u: goto label_10a990;
        case 0x10a994u: goto label_10a994;
        case 0x10a998u: goto label_10a998;
        case 0x10a99cu: goto label_10a99c;
        case 0x10a9a0u: goto label_10a9a0;
        case 0x10a9a4u: goto label_10a9a4;
        case 0x10a9a8u: goto label_10a9a8;
        case 0x10a9acu: goto label_10a9ac;
        case 0x10a9b0u: goto label_10a9b0;
        case 0x10a9b4u: goto label_10a9b4;
        case 0x10a9b8u: goto label_10a9b8;
        case 0x10a9bcu: goto label_10a9bc;
        case 0x10a9c0u: goto label_10a9c0;
        case 0x10a9c4u: goto label_10a9c4;
        default: break;
    }

    ctx->pc = 0x10a7f8u;

label_10a7f8:
    // 0x10a7f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10a7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10a7fc:
    // 0x10a7fc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x10a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_10a800:
    // 0x10a800: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_10a804:
    // 0x10a804: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x10a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_10a808:
    // 0x10a808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10a80c:
    // 0x10a80c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10a80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_10a810:
    // 0x10a810: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x10a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_10a814:
    // 0x10a814: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x10a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_10a818:
    // 0x10a818: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_10a81c:
    // 0x10a81c: 0x2447dca8  addiu       $a3, $v0, -0x2358
    ctx->pc = 0x10a81cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958248));
label_10a820:
    // 0x10a820: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x10a820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10a824:
    // 0x10a824: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x10a824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10a828:
    // 0x10a828: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x10a828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10a82c:
    // 0x10a82c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x10a82cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_10a830:
    // 0x10a830: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x10a830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_10a834:
    // 0x10a834: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x10a834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_10a838:
    // 0x10a838: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x10a838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a83c:
    // 0x10a83c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x10a83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a840:
    // 0x10a840: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x10a840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a844:
    // 0x10a844: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x10a844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a848:
    // 0x10a848: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x10a848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a84c:
    // 0x10a84c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x10a84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a850:
    // 0x10a850: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x10a850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_10a854:
    // 0x10a854: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x10a854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_10a858:
    // 0x10a858: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x10a858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_10a85c:
    // 0x10a85c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x10a85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_10a860:
    // 0x10a860: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x10a860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_10a864:
    // 0x10a864: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x10a864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a868:
    // 0x10a868: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x10a868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a86c:
    // 0x10a86c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x10a86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a870:
    // 0x10a870: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x10a870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a874:
    // 0x10a874: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10a874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_10a878:
    // 0x10a878: 0xc042ada  jal         func_10AB68
label_10a87c:
    if (ctx->pc == 0x10A87Cu) {
        ctx->pc = 0x10A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A878u;
        // 0x10a87c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A880u;
        goto label_10a880;
    }
    ctx->pc = 0x10A878u;
    SET_GPR_U32(ctx, 31, 0x10A880u);
    ctx->pc = 0x10A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A878u;
    // 0x10a87c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB68u, 0x10A878u, 0x10A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A880u;
label_10a880:
    // 0x10a880: 0x10000004  b           . + 4 + (0x4 << 2)
label_10a884:
    if (ctx->pc == 0x10A884u) {
        ctx->pc = 0x10A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A880u;
        // 0x10a884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A888u;
        goto label_10a888;
    }
    ctx->pc = 0x10A880u;
    {
        const bool branch_taken_0x10a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A880u;
        // 0x10a884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a880) {
            ctx->pc = 0x10A894u;
            goto label_10a894;
        }
    }
    ctx->pc = 0x10A888u;
label_10a888:
    // 0x10a888: 0xc042a80  jal         func_10AA00
label_10a88c:
    if (ctx->pc == 0x10A88Cu) {
        ctx->pc = 0x10A890u;
        goto label_10a890;
    }
    ctx->pc = 0x10A888u;
    SET_GPR_U32(ctx, 31, 0x10A890u);
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x10A888u, 0x10A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A890u;
label_10a890:
    // 0x10a890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a894:
    // 0x10a894: 0xc0421dc  jal         func_108770
label_10a898:
    if (ctx->pc == 0x10A898u) {
        ctx->pc = 0x10A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A894u;
        // 0x10a898: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A89Cu;
        goto label_10a89c;
    }
    ctx->pc = 0x10A894u;
    SET_GPR_U32(ctx, 31, 0x10A89Cu);
    ctx->pc = 0x10A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A894u;
    // 0x10a898: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10A894u, 0x10A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A89Cu;
label_10a89c:
    // 0x10a89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a8a0:
    // 0x10a8a0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_10a8a4:
    if (ctx->pc == 0x10A8A4u) {
        ctx->pc = 0x10A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A0u;
        // 0x10a8a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8A8u;
        goto label_10a8a8;
    }
    ctx->pc = 0x10A8A0u;
    {
        const bool branch_taken_0x10a8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A0u;
        // 0x10a8a4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8a0) {
            ctx->pc = 0x10A8B4u;
            goto label_10a8b4;
        }
    }
    ctx->pc = 0x10A8A8u;
label_10a8a8:
    // 0x10a8a8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a8ac:
    // 0x10a8ac: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_10a8b0:
    if (ctx->pc == 0x10A8B0u) {
        ctx->pc = 0x10A8B4u;
        goto label_10a8b4;
    }
    ctx->pc = 0x10A8ACu;
    {
        const bool branch_taken_0x10a8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a8ac) {
            ctx->pc = 0x10A888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a888;
        }
    }
    ctx->pc = 0x10A8B4u;
label_10a8b4:
    // 0x10a8b4: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x10a8b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_10a8b8:
    // 0x10a8b8: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x10a8b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_10a8bc:
    // 0x10a8bc: 0x10000033  b           . + 4 + (0x33 << 2)
label_10a8c0:
    if (ctx->pc == 0x10A8C0u) {
        ctx->pc = 0x10A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8BCu;
        // 0x10a8c0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8C4u;
        goto label_10a8c4;
    }
    ctx->pc = 0x10A8BCu;
    {
        const bool branch_taken_0x10a8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8BCu;
        // 0x10a8c0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8bc) {
            ctx->pc = 0x10A98Cu;
            goto label_10a98c;
        }
    }
    ctx->pc = 0x10A8C4u;
label_10a8c4:
    // 0x10a8c4: 0x0  nop
    ctx->pc = 0x10a8c4u;
    // NOP
label_10a8c8:
    // 0x10a8c8: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_10a8cc:
    if (ctx->pc == 0x10A8CCu) {
        ctx->pc = 0x10A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8C8u;
        // 0x10a8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8D0u;
        goto label_10a8d0;
    }
    ctx->pc = 0x10A8C8u;
    {
        const bool branch_taken_0x10a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x10A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8C8u;
        // 0x10a8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8c8) {
            ctx->pc = 0x10A944u;
            goto label_10a944;
        }
    }
    ctx->pc = 0x10A8D0u;
label_10a8d0:
    // 0x10a8d0: 0xc042ad8  jal         func_10AB60
label_10a8d4:
    if (ctx->pc == 0x10A8D4u) {
        ctx->pc = 0x10A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8D0u;
        // 0x10a8d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8D8u;
        goto label_10a8d8;
    }
    ctx->pc = 0x10A8D0u;
    SET_GPR_U32(ctx, 31, 0x10A8D8u);
    ctx->pc = 0x10A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8D0u;
    // 0x10a8d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB60u, 0x10A8D0u, 0x10A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8D8u;
label_10a8d8:
    // 0x10a8d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a8dc:
    // 0x10a8dc: 0xc0421a2  jal         func_108688
label_10a8e0:
    if (ctx->pc == 0x10A8E0u) {
        ctx->pc = 0x10A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8DCu;
        // 0x10a8e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8E4u;
        goto label_10a8e4;
    }
    ctx->pc = 0x10A8DCu;
    SET_GPR_U32(ctx, 31, 0x10A8E4u);
    ctx->pc = 0x10A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A8DCu;
    // 0x10a8e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108688u, 0x10A8DCu, 0x10A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A8E4u;
label_10a8e4:
    // 0x10a8e4: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x10a8e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10a8e8:
    // 0x10a8e8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x10a8e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_10a8ec:
    // 0x10a8ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a8f0:
    // 0x10a8f0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x10a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_10a8f4:
    // 0x10a8f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10a8f8:
    // 0x10a8f8: 0x40f809  jalr        $v0
label_10a8fc:
    if (ctx->pc == 0x10A8FCu) {
        ctx->pc = 0x10A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8F8u;
        // 0x10a8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A900u;
        goto label_10a900;
    }
    ctx->pc = 0x10A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A900u);
        ctx->pc = 0x10A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8F8u;
        // 0x10a8fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A8F8u, 0x10A900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A900u;
label_10a900:
    // 0x10a900: 0xc042ada  jal         func_10AB68
label_10a904:
    if (ctx->pc == 0x10A904u) {
        ctx->pc = 0x10A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A900u;
        // 0x10a904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A908u;
        goto label_10a908;
    }
    ctx->pc = 0x10A900u;
    SET_GPR_U32(ctx, 31, 0x10A908u);
    ctx->pc = 0x10A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A900u;
    // 0x10a904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB68u, 0x10A900u, 0x10A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A908u;
label_10a908:
    // 0x10a908: 0x10000004  b           . + 4 + (0x4 << 2)
label_10a90c:
    if (ctx->pc == 0x10A90Cu) {
        ctx->pc = 0x10A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A908u;
        // 0x10a90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A910u;
        goto label_10a910;
    }
    ctx->pc = 0x10A908u;
    {
        const bool branch_taken_0x10a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A908u;
        // 0x10a90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a908) {
            ctx->pc = 0x10A91Cu;
            goto label_10a91c;
        }
    }
    ctx->pc = 0x10A910u;
label_10a910:
    // 0x10a910: 0xc042a80  jal         func_10AA00
label_10a914:
    if (ctx->pc == 0x10A914u) {
        ctx->pc = 0x10A918u;
        goto label_10a918;
    }
    ctx->pc = 0x10A910u;
    SET_GPR_U32(ctx, 31, 0x10A918u);
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x10A910u, 0x10A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A918u;
label_10a918:
    // 0x10a918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a91c:
    // 0x10a91c: 0xc0421dc  jal         func_108770
label_10a920:
    if (ctx->pc == 0x10A920u) {
        ctx->pc = 0x10A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A91Cu;
        // 0x10a920: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A924u;
        goto label_10a924;
    }
    ctx->pc = 0x10A91Cu;
    SET_GPR_U32(ctx, 31, 0x10A924u);
    ctx->pc = 0x10A920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A91Cu;
    // 0x10a920: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10A91Cu, 0x10A924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A924u;
label_10a924:
    // 0x10a924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a928:
    // 0x10a928: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_10a92c:
    if (ctx->pc == 0x10A92Cu) {
        ctx->pc = 0x10A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A928u;
        // 0x10a92c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A930u;
        goto label_10a930;
    }
    ctx->pc = 0x10A928u;
    {
        const bool branch_taken_0x10a928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A928u;
        // 0x10a92c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a928) {
            ctx->pc = 0x10A990u;
            goto label_10a990;
        }
    }
    ctx->pc = 0x10A930u;
label_10a930:
    // 0x10a930: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a934:
    // 0x10a934: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_10a938:
    if (ctx->pc == 0x10A938u) {
        ctx->pc = 0x10A93Cu;
        goto label_10a93c;
    }
    ctx->pc = 0x10A934u;
    {
        const bool branch_taken_0x10a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a934) {
            ctx->pc = 0x10A910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a910;
        }
    }
    ctx->pc = 0x10A93Cu;
label_10a93c:
    // 0x10a93c: 0x10000013  b           . + 4 + (0x13 << 2)
label_10a940:
    if (ctx->pc == 0x10A940u) {
        ctx->pc = 0x10A944u;
        goto label_10a944;
    }
    ctx->pc = 0x10A93Cu;
    {
        const bool branch_taken_0x10a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a93c) {
            ctx->pc = 0x10A98Cu;
            goto label_10a98c;
        }
    }
    ctx->pc = 0x10A944u;
label_10a944:
    // 0x10a944: 0xc042ad8  jal         func_10AB60
label_10a948:
    if (ctx->pc == 0x10A948u) {
        ctx->pc = 0x10A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A944u;
        // 0x10a948: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A94Cu;
        goto label_10a94c;
    }
    ctx->pc = 0x10A944u;
    SET_GPR_U32(ctx, 31, 0x10A94Cu);
    ctx->pc = 0x10A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A944u;
    // 0x10a948: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB60u, 0x10A944u, 0x10A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A94Cu;
label_10a94c:
    // 0x10a94c: 0xc042ada  jal         func_10AB68
label_10a950:
    if (ctx->pc == 0x10A950u) {
        ctx->pc = 0x10A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A94Cu;
        // 0x10a950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A954u;
        goto label_10a954;
    }
    ctx->pc = 0x10A94Cu;
    SET_GPR_U32(ctx, 31, 0x10A954u);
    ctx->pc = 0x10A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A94Cu;
    // 0x10a950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AB68u, 0x10A94Cu, 0x10A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A954u;
label_10a954:
    // 0x10a954: 0x10000005  b           . + 4 + (0x5 << 2)
label_10a958:
    if (ctx->pc == 0x10A958u) {
        ctx->pc = 0x10A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A954u;
        // 0x10a958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A95Cu;
        goto label_10a95c;
    }
    ctx->pc = 0x10A954u;
    {
        const bool branch_taken_0x10a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A954u;
        // 0x10a958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a954) {
            ctx->pc = 0x10A96Cu;
            goto label_10a96c;
        }
    }
    ctx->pc = 0x10A95Cu;
label_10a95c:
    // 0x10a95c: 0x0  nop
    ctx->pc = 0x10a95cu;
    // NOP
label_10a960:
    // 0x10a960: 0xc042a80  jal         func_10AA00
label_10a964:
    if (ctx->pc == 0x10A964u) {
        ctx->pc = 0x10A968u;
        goto label_10a968;
    }
    ctx->pc = 0x10A960u;
    SET_GPR_U32(ctx, 31, 0x10A968u);
    ctx->pc = 0x10AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA00u, 0x10A960u, 0x10A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A968u;
label_10a968:
    // 0x10a968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a96c:
    // 0x10a96c: 0xc0421dc  jal         func_108770
label_10a970:
    if (ctx->pc == 0x10A970u) {
        ctx->pc = 0x10A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A96Cu;
        // 0x10a970: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A974u;
        goto label_10a974;
    }
    ctx->pc = 0x10A96Cu;
    SET_GPR_U32(ctx, 31, 0x10A974u);
    ctx->pc = 0x10A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A96Cu;
    // 0x10a970: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10A96Cu, 0x10A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A974u;
label_10a974:
    // 0x10a974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a978:
    // 0x10a978: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_10a97c:
    if (ctx->pc == 0x10A97Cu) {
        ctx->pc = 0x10A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A978u;
        // 0x10a97c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A980u;
        goto label_10a980;
    }
    ctx->pc = 0x10A978u;
    {
        const bool branch_taken_0x10a978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x10A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A978u;
        // 0x10a97c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a978) {
            ctx->pc = 0x10A990u;
            goto label_10a990;
        }
    }
    ctx->pc = 0x10A980u;
label_10a980:
    // 0x10a980: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x10a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_10a984:
    // 0x10a984: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_10a988:
    if (ctx->pc == 0x10A988u) {
        ctx->pc = 0x10A98Cu;
        goto label_10a98c;
    }
    ctx->pc = 0x10A984u;
    {
        const bool branch_taken_0x10a984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a984) {
            ctx->pc = 0x10A960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a960;
        }
    }
    ctx->pc = 0x10A98Cu;
label_10a98c:
    // 0x10a98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a990:
    // 0x10a990: 0xc0421dc  jal         func_108770
label_10a994:
    if (ctx->pc == 0x10A994u) {
        ctx->pc = 0x10A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A990u;
        // 0x10a994: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A998u;
        goto label_10a998;
    }
    ctx->pc = 0x10A990u;
    SET_GPR_U32(ctx, 31, 0x10A998u);
    ctx->pc = 0x10A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A990u;
    // 0x10a994: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10A990u, 0x10A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A998u;
label_10a998:
    // 0x10a998: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_10a99c:
    if (ctx->pc == 0x10A99Cu) {
        ctx->pc = 0x10A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A998u;
        // 0x10a99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9A0u;
        goto label_10a9a0;
    }
    ctx->pc = 0x10A998u;
    {
        const bool branch_taken_0x10a998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x10A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A998u;
        // 0x10a99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a998) {
            ctx->pc = 0x10A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a8d0;
        }
    }
    ctx->pc = 0x10A9A0u;
label_10a9a0:
    // 0x10a9a0: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_10a9a4:
    if (ctx->pc == 0x10A9A4u) {
        ctx->pc = 0x10A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9A0u;
        // 0x10a9a4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9A8u;
        goto label_10a9a8;
    }
    ctx->pc = 0x10A9A0u;
    {
        const bool branch_taken_0x10a9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x10A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9A0u;
        // 0x10a9a4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9a0) {
            ctx->pc = 0x10A8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a8c8;
        }
    }
    ctx->pc = 0x10A9A8u;
label_10a9a8:
    // 0x10a9a8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10a9a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10a9ac:
    // 0x10a9ac: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x10a9acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10a9b0:
    // 0x10a9b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10a9b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10a9b4:
    // 0x10a9b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x10a9b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10a9b8:
    // 0x10a9b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10a9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10a9bc:
    // 0x10a9bc: 0x3e00008  jr          $ra
label_10a9c0:
    if (ctx->pc == 0x10A9C0u) {
        ctx->pc = 0x10A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9BCu;
        // 0x10a9c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9C4u;
        goto label_10a9c4;
    }
    ctx->pc = 0x10A9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9BCu;
        // 0x10a9c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A9C4u;
label_10a9c4:
    // 0x10a9c4: 0x0  nop
    ctx->pc = 0x10a9c4u;
    // NOP
    ctx->pc = 0x10a9c8u;
}
