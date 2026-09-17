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

// Function: sub_002DC850
// Address: 0x2dc850 - 0x2dc998
void sub_002DC850_0x2dc850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC850_0x2dc850");
#endif

    switch (ctx->pc) {
        case 0x2dc87cu: goto label_2dc87c;
        case 0x2dc890u: goto label_2dc890;
        case 0x2dc8a4u: goto label_2dc8a4;
        case 0x2dc8b8u: goto label_2dc8b8;
        case 0x2dc8c0u: goto label_2dc8c0;
        case 0x2dc8d8u: goto label_2dc8d8;
        case 0x2dc938u: goto label_2dc938;
        case 0x2dc940u: goto label_2dc940;
        case 0x2dc94cu: goto label_2dc94c;
        case 0x2dc958u: goto label_2dc958;
        case 0x2dc968u: goto label_2dc968;
        case 0x2dc978u: goto label_2dc978;
        default: break;
    }

    ctx->pc = 0x2dc850u;

    // 0x2dc850: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2dc850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2dc854: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc858: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x2dc858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x2dc85c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc85cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc860: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2dc860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2dc864: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x2dc864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x2dc868: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x2dc868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x2dc86c: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x2dc86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x2dc870: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2dc870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2dc874: 0xc04a151  jal         func_128544
    ctx->pc = 0x2DC874u;
    SET_GPR_U32(ctx, 31, 0x2DC87Cu);
    ctx->pc = 0x2DC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC874u;
    // 0x2dc878: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2DC874u, 0x2DC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC87Cu;
label_2dc87c:
    // 0x2dc87c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2dc87cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dc880: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc884: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2dc884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2dc888: 0xc04a151  jal         func_128544
    ctx->pc = 0x2DC888u;
    SET_GPR_U32(ctx, 31, 0x2DC890u);
    ctx->pc = 0x2DC88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC888u;
    // 0x2dc88c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2DC888u, 0x2DC890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC890u;
label_2dc890:
    // 0x2dc890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc894: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x2dc894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dc898: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2dc898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2dc89c: 0xc04a151  jal         func_128544
    ctx->pc = 0x2DC89Cu;
    SET_GPR_U32(ctx, 31, 0x2DC8A4u);
    ctx->pc = 0x2DC8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC89Cu;
    // 0x2dc8a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2DC89Cu, 0x2DC8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8A4u;
label_2dc8a4:
    // 0x2dc8a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dc8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8a8: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x2dc8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2dc8ac: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x2dc8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2dc8b0: 0xc04a151  jal         func_128544
    ctx->pc = 0x2DC8B0u;
    SET_GPR_U32(ctx, 31, 0x2DC8B8u);
    ctx->pc = 0x2DC8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8B0u;
    // 0x2dc8b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x2DC8B0u, 0x2DC8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8B8u;
label_2dc8b8:
    // 0x2dc8b8: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x2DC8B8u;
    SET_GPR_U32(ctx, 31, 0x2DC8C0u);
    ctx->pc = 0x2DC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC8B8u;
    // 0x2dc8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x2DC8B8u, 0x2DC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8C0u;
label_2dc8c0:
    // 0x2dc8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc8c4: 0x2c420028  sltiu       $v0, $v0, 0x28
    ctx->pc = 0x2dc8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2dc8c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC8C8u;
    {
        const bool branch_taken_0x2dc8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC8C8u;
        // 0x2dc8cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc8c8) {
            ctx->pc = 0x2DC8E0u;
            goto label_2dc8e0;
        }
    }
    ctx->pc = 0x2DC8D0u;
    // 0x2dc8d0: 0xc04a48c  jal         func_129230
    ctx->pc = 0x2DC8D0u;
    SET_GPR_U32(ctx, 31, 0x2DC8D8u);
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x2DC8D0u, 0x2DC8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC8D8u;
label_2dc8d8:
    // 0x2dc8d8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2DC8D8u;
    {
        const bool branch_taken_0x2dc8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc8d8) {
            ctx->pc = 0x2DC930u;
            goto label_2dc930;
        }
    }
    ctx->pc = 0x2DC8E0u;
label_2dc8e0:
    // 0x2dc8e0: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x2dc8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dc8e4: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x2dc8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dc8e8: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x2dc8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dc8ec: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x2dc8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dc8f0: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x2dc8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2dc8f4: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x2dc8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2dc8f8: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x2dc8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dc8fc: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x2dc8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dc900: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x2dc900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc904: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x2dc904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc908: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x2dc908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc90c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x2dc90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc910: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x2dc910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc914: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x2dc914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc918: 0xb205001f  sdl         $a1, 0x1F($s0)
    ctx->pc = 0x2dc918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc91c: 0xb6050018  sdr         $a1, 0x18($s0)
    ctx->pc = 0x2dc91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc920: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x2dc920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dc924: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x2dc924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dc928: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x2dc928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dc92c: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x2dc92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2dc930:
    // 0x2dc930: 0xc0b7266  jal         func_2DC998
    ctx->pc = 0x2DC930u;
    SET_GPR_U32(ctx, 31, 0x2DC938u);
    ctx->pc = 0x2DC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC930u;
    // 0x2dc934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC998u, 0x2DC930u, 0x2DC938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC938u;
label_2dc938:
    // 0x2dc938: 0xc0b7276  jal         func_2DC9D8
    ctx->pc = 0x2DC938u;
    SET_GPR_U32(ctx, 31, 0x2DC940u);
    ctx->pc = 0x2DC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC938u;
    // 0x2dc93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC9D8u, 0x2DC938u, 0x2DC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC940u;
label_2dc940:
    // 0x2dc940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2dc940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc944: 0xc0b72a4  jal         func_2DCA90
    ctx->pc = 0x2DC944u;
    SET_GPR_U32(ctx, 31, 0x2DC94Cu);
    ctx->pc = 0x2DC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC944u;
    // 0x2dc948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA90u, 0x2DC944u, 0x2DC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC94Cu;
label_2dc94c:
    // 0x2dc94c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc950: 0xc0b72ba  jal         func_2DCAE8
    ctx->pc = 0x2DC950u;
    SET_GPR_U32(ctx, 31, 0x2DC958u);
    ctx->pc = 0x2DC954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC950u;
    // 0x2dc954: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCAE8u, 0x2DC950u, 0x2DC958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC958u;
label_2dc958:
    // 0x2dc958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc95c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dc95cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc960: 0xc0b72dc  jal         func_2DCB70
    ctx->pc = 0x2DC960u;
    SET_GPR_U32(ctx, 31, 0x2DC968u);
    ctx->pc = 0x2DC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC960u;
    // 0x2dc964: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCB70u, 0x2DC960u, 0x2DC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC968u;
label_2dc968:
    // 0x2dc968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc96c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dc96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc970: 0xc0b72fc  jal         func_2DCBF0
    ctx->pc = 0x2DC970u;
    SET_GPR_U32(ctx, 31, 0x2DC978u);
    ctx->pc = 0x2DC974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC970u;
    // 0x2dc974: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCBF0u, 0x2DC970u, 0x2DC978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC978u;
label_2dc978:
    // 0x2dc978: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x2dc978u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2dc97c: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x2dc97cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2dc980: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x2dc980u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2dc984: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x2dc984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2dc988: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2dc988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2dc98c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC98Cu;
        // 0x2dc990: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC994u;
    // 0x2dc994: 0x0  nop
    ctx->pc = 0x2dc994u;
    // NOP
    ctx->pc = 0x2dc998u;
}
