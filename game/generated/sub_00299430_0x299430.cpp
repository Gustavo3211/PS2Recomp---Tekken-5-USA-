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

// Function: sub_00299430
// Address: 0x299430 - 0x299510
void sub_00299430_0x299430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299430_0x299430");
#endif

    switch (ctx->pc) {
        case 0x299464u: goto label_299464;
        case 0x29947cu: goto label_29947c;
        case 0x299494u: goto label_299494;
        case 0x2994f0u: goto label_2994f0;
        default: break;
    }

    ctx->pc = 0x299430u;

    // 0x299430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x299430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x299434: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x299438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29943c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x29943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x299440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x299440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299444: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x299444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x299448: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x299448u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29944c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29944cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x299450: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x299450u;
    {
        const bool branch_taken_0x299450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x299454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299450u;
        // 0x299454: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299450) {
            ctx->pc = 0x2994F0u;
            goto label_2994f0;
        }
    }
    ctx->pc = 0x299458u;
    // 0x299458: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x299458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x29945c: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x29945Cu;
    SET_GPR_U32(ctx, 31, 0x299464u);
    ctx->pc = 0x299460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29945Cu;
    // 0x299460: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x29945Cu, 0x299464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299464u;
label_299464:
    // 0x299464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299468: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x299468u;
    {
        const bool branch_taken_0x299468 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x29946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299468u;
        // 0x29946c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299468) {
            ctx->pc = 0x299488u;
            goto label_299488;
        }
    }
    ctx->pc = 0x299470u;
    // 0x299470: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299474: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x299474u;
    SET_GPR_U32(ctx, 31, 0x29947Cu);
    ctx->pc = 0x299478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299474u;
    // 0x299478: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x299474u, 0x29947Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29947Cu;
label_29947c:
    // 0x29947c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29947Cu;
    {
        const bool branch_taken_0x29947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29947Cu;
        // 0x299480: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29947c) {
            ctx->pc = 0x299498u;
            goto label_299498;
        }
    }
    ctx->pc = 0x299484u;
    // 0x299484: 0x0  nop
    ctx->pc = 0x299484u;
    // NOP
label_299488:
    // 0x299488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29948c: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x29948Cu;
    SET_GPR_U32(ctx, 31, 0x299494u);
    ctx->pc = 0x299490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29948Cu;
    // 0x299490: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x29948Cu, 0x299494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299494u;
label_299494:
    // 0x299494: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x299494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_299498:
    // 0x299498: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x299498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29949c: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x29949cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2994a0: 0x2442c638  addiu       $v0, $v0, -0x39C8
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952504));
    // 0x2994a4: 0x8faa0000  lw          $t2, 0x0($sp)
    ctx->pc = 0x2994a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2994a8: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x2994a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2994ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2994acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2994b0: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x2994b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2994b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2994b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994b8: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x2994b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2994bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2994bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2994c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2994c4: 0x1495021  addu        $t2, $t2, $t1
    ctx->pc = 0x2994c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x2994c8: 0xafaa0000  sw          $t2, 0x0($sp)
    ctx->pc = 0x2994c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    // 0x2994cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2994ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2994d0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x2994d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x2994d4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2994d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2994d8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2994d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2994dc: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2994dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994e0: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2994e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2994e4: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2994e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2994e8: 0xc0a64ba  jal         func_2992E8
    ctx->pc = 0x2994E8u;
    SET_GPR_U32(ctx, 31, 0x2994F0u);
    ctx->pc = 0x2994ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2994E8u;
    // 0x2994ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2992E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2992E8u, 0x2994E8u, 0x2994F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2994F0u;
label_2994f0:
    // 0x2994f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2994f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2994f4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2994f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2994f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2994f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2994fc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2994fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299500: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x299500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299504: 0x3e00008  jr          $ra
    ctx->pc = 0x299504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299504u;
        // 0x299508: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29950Cu;
    // 0x29950c: 0x0  nop
    ctx->pc = 0x29950cu;
    // NOP
    ctx->pc = 0x299510u;
}
