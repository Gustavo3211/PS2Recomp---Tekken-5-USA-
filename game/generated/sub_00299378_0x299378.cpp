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

// Function: sub_00299378
// Address: 0x299378 - 0x299430
void sub_00299378_0x299378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299378_0x299378");
#endif

    switch (ctx->pc) {
        case 0x2993a8u: goto label_2993a8;
        case 0x2993b8u: goto label_2993b8;
        case 0x299418u: goto label_299418;
        default: break;
    }

    ctx->pc = 0x299378u;

    // 0x299378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x299378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29937c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299384: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x299384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299388: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x299388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29938c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x299390: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x299390u;
    {
        const bool branch_taken_0x299390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x299394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299390u;
        // 0x299394: 0x32100001  andi        $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299390) {
            ctx->pc = 0x299418u;
            goto label_299418;
        }
    }
    ctx->pc = 0x299398u;
    // 0x299398: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299398u;
    {
        const bool branch_taken_0x299398 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299398u;
        // 0x29939c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299398) {
            ctx->pc = 0x2993B0u;
            goto label_2993b0;
        }
    }
    ctx->pc = 0x2993A0u;
    // 0x2993a0: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2993A0u;
    SET_GPR_U32(ctx, 31, 0x2993A8u);
    ctx->pc = 0x2993A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993A0u;
    // 0x2993a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2993A0u, 0x2993A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993A8u;
label_2993a8:
    // 0x2993a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2993A8u;
    {
        const bool branch_taken_0x2993a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993A8u;
        // 0x2993ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993a8) {
            ctx->pc = 0x2993BCu;
            goto label_2993bc;
        }
    }
    ctx->pc = 0x2993B0u;
label_2993b0:
    // 0x2993b0: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2993B0u;
    SET_GPR_U32(ctx, 31, 0x2993B8u);
    ctx->pc = 0x2993B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2993B0u;
    // 0x2993b4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2993B0u, 0x2993B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2993B8u;
label_2993b8:
    // 0x2993b8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2993b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2993bc:
    // 0x2993bc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2993bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2993c0: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2993c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2993c4: 0x2442c628  addiu       $v0, $v0, -0x39D8
    ctx->pc = 0x2993c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952488));
    // 0x2993c8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2993c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2993cc: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2993ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2993d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2993d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2993d4: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2993d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2993d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2993d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993dc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2993dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2993e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2993e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2993e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2993e8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2993e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x2993ec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2993ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2993f0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2993f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2993f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2993f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2993f8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2993f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2993fc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2993fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x299400: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x299400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x299404: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x299404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x299408: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x299408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29940c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x29940cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299410: 0xc0a6480  jal         func_299200
    ctx->pc = 0x299410u;
    SET_GPR_U32(ctx, 31, 0x299418u);
    ctx->pc = 0x299414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299410u;
    // 0x299414: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299200u, 0x299410u, 0x299418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299418u;
label_299418:
    // 0x299418: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29941c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x29941cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x299420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299424: 0x3e00008  jr          $ra
    ctx->pc = 0x299424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299424u;
        // 0x299428: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29942Cu;
    // 0x29942c: 0x0  nop
    ctx->pc = 0x29942cu;
    // NOP
    ctx->pc = 0x299430u;
}
