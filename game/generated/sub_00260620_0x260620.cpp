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

// Function: sub_00260620
// Address: 0x260620 - 0x260740
void sub_00260620_0x260620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260620_0x260620");
#endif

    switch (ctx->pc) {
        case 0x260688u: goto label_260688;
        default: break;
    }

    ctx->pc = 0x260620u;

    // 0x260620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x260624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x260624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260628: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x260628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26062c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26062cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260630: 0x24027e70  addiu       $v0, $zero, 0x7E70
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32368));
    // 0x260634: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260638: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x260638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26063c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x260640: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x260640u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260644: 0xad420028  sw          $v0, 0x28($t2)
    ctx->pc = 0x260644u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 40), GPR_U32(ctx, 2));
    // 0x260648: 0xad43002c  sw          $v1, 0x2C($t2)
    ctx->pc = 0x260648u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 44), GPR_U32(ctx, 3));
    // 0x26064c: 0xe5400018  swc1        $f0, 0x18($t2)
    ctx->pc = 0x26064cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x260650: 0xad46001c  sw          $a2, 0x1C($t2)
    ctx->pc = 0x260650u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 6));
    // 0x260654: 0xad400030  sw          $zero, 0x30($t2)
    ctx->pc = 0x260654u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 0));
    // 0x260658: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x260658u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x26065c: 0xad46000c  sw          $a2, 0xC($t2)
    ctx->pc = 0x26065cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 6));
    // 0x260660: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x260660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x260664: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x260664u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x260668: 0xad400020  sw          $zero, 0x20($t2)
    ctx->pc = 0x260668u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 0));
    // 0x26066c: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x26066cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x260670: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x260670u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x260674: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x260678: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260678u;
    {
        const bool branch_taken_0x260678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260678u;
        // 0x26067c: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260678) {
            ctx->pc = 0x260690u;
            goto label_260690;
        }
    }
    ctx->pc = 0x260680u;
    // 0x260680: 0xc0983c2  jal         func_260F08
    ctx->pc = 0x260680u;
    SET_GPR_U32(ctx, 31, 0x260688u);
    ctx->pc = 0x260F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260F08u, 0x260680u, 0x260688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260688u;
label_260688:
    // 0x260688: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x260688u;
    {
        const bool branch_taken_0x260688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260688u;
        // 0x26068c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260688) {
            ctx->pc = 0x260730u;
            goto label_260730;
        }
    }
    ctx->pc = 0x260690u;
label_260690:
    // 0x260690: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x260690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x260694: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x260694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x260698: 0x246d32b0  addiu       $t5, $v1, 0x32B0
    ctx->pc = 0x260698u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 12976));
    // 0x26069c: 0x69a60007  ldl         $a2, 0x7($t5)
    ctx->pc = 0x26069cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2606a0: 0x6da60000  ldr         $a2, 0x0($t5)
    ctx->pc = 0x2606a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2606a4: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x2606a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2606a8: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x2606a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2606ac: 0x3c080015  lui         $t0, 0x15
    ctx->pc = 0x2606acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)21 << 16));
    // 0x2606b0: 0x3c090015  lui         $t1, 0x15
    ctx->pc = 0x2606b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)21 << 16));
    // 0x2606b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2606b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2606b8: 0x248c32d0  addiu       $t4, $a0, 0x32D0
    ctx->pc = 0x2606b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 13008));
    // 0x2606bc: 0x69830007  ldl         $v1, 0x7($t4)
    ctx->pc = 0x2606bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2606c0: 0x6d830000  ldr         $v1, 0x0($t4)
    ctx->pc = 0x2606c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2606c4: 0xb0a30027  sdl         $v1, 0x27($a1)
    ctx->pc = 0x2606c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2606c8: 0xb4a30020  sdr         $v1, 0x20($a1)
    ctx->pc = 0x2606c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2606cc: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x2606ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2606d0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2606d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2606d4: 0x24c7000c  addiu       $a3, $a2, 0xC
    ctx->pc = 0x2606d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2606d8: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2606d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2606dc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2606dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2606e0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x2606e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x2606e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2606e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2606e8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2606e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x2606ec: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2606ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2606f0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x2606f0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2606f4: 0x2810  mfhi        $a1
    ctx->pc = 0x2606f4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2606f8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x2606f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x2606fc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2606fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x260700: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x260700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x260704: 0xad440034  sw          $a0, 0x34($t2)
    ctx->pc = 0x260704u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 52), GPR_U32(ctx, 4));
    // 0x260708: 0x250632b8  addiu       $a2, $t0, 0x32B8
    ctx->pc = 0x260708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 12984));
    // 0x26070c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x26070cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x260710: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x260710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x260714: 0xb163013f  sdl         $v1, 0x13F($t3)
    ctx->pc = 0x260714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x260718: 0xb5630138  sdr         $v1, 0x138($t3)
    ctx->pc = 0x260718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26071c: 0x252332d8  addiu       $v1, $t1, 0x32D8
    ctx->pc = 0x26071cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 13016));
    // 0x260720: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x260720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x260724: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x260724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x260728: 0xb1670147  sdl         $a3, 0x147($t3)
    ctx->pc = 0x260728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26072c: 0xb5670140  sdr         $a3, 0x140($t3)
    ctx->pc = 0x26072cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_260730:
    // 0x260730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260734: 0x3e00008  jr          $ra
    ctx->pc = 0x260734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260734u;
        // 0x260738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26073Cu;
    // 0x26073c: 0x0  nop
    ctx->pc = 0x26073cu;
    // NOP
    ctx->pc = 0x260740u;
}
