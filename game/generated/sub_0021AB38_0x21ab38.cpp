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

// Function: sub_0021AB38
// Address: 0x21ab38 - 0x21ac78
void sub_0021AB38_0x21ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021AB38_0x21ab38");
#endif

    switch (ctx->pc) {
        case 0x21abf0u: goto label_21abf0;
        case 0x21ac08u: goto label_21ac08;
        case 0x21ac14u: goto label_21ac14;
        case 0x21ac58u: goto label_21ac58;
        default: break;
    }

    ctx->pc = 0x21ab38u;

    // 0x21ab38: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21ab3c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21ab3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21ab40: 0x8c4683c0  lw          $a2, -0x7C40($v0)
    ctx->pc = 0x21ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x21ab44: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x21ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x21ab48: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x21ab48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x21ab4c: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x21ab4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21ab50: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x21ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x21ab54: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x21ab54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21ab58: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x21ab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x21ab5c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ab60: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x21ab64: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x21ab64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x21ab68: 0x38c60005  xori        $a2, $a2, 0x5
    ctx->pc = 0x21ab68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
    // 0x21ab6c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x21ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x21ab70: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x21ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x21ab74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21ab74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab78: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x21ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x21ab7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ab7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ab80: 0x244b2c00  addiu       $t3, $v0, 0x2C00
    ctx->pc = 0x21ab80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x21ab84: 0x89680003  lwl         $t0, 0x3($t3)
    ctx->pc = 0x21ab84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
    // 0x21ab88: 0x99680000  lwr         $t0, 0x0($t3)
    ctx->pc = 0x21ab88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x21ab8c: 0x81690004  lb          $t1, 0x4($t3)
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 9, (int8_t)FAST_READ8(0x152C04u));
    // 0x21ab90: 0x816a0005  lb          $t2, 0x5($t3)
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x152C05u));
    // 0x21ab94: 0xaba80003  swl         $t0, 0x3($sp)
    ctx->pc = 0x21ab94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x21ab98: 0xbba80000  swr         $t0, 0x0($sp)
    ctx->pc = 0x21ab98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x21ab9c: 0xa3a90004  sb          $t1, 0x4($sp)
    ctx->pc = 0x21ab9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x21aba0: 0xa3aa0005  sb          $t2, 0x5($sp)
    ctx->pc = 0x21aba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 10));
    // 0x21aba4: 0x246a6890  addiu       $t2, $v1, 0x6890
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 26768));
    // 0x21aba8: 0x69420007  ldl         $v0, 0x7($t2)
    ctx->pc = 0x21aba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21abac: 0x6d420000  ldr         $v0, 0x0($t2)
    ctx->pc = 0x21abacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21abb0: 0x81480008  lb          $t0, 0x8($t2)
    ctx->pc = 0x21abb0u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x466898u));
    // 0x21abb4: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x21abb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21abb8: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x21abb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21abbc: 0xa2880008  sb          $t0, 0x8($s4)
    ctx->pc = 0x21abbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 8), (uint8_t)GPR_U32(ctx, 8));
    // 0x21abc0: 0x24e868a0  addiu       $t0, $a3, 0x68A0
    ctx->pc = 0x21abc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 26784));
    // 0x21abc4: 0x690b0007  ldl         $t3, 0x7($t0)
    ctx->pc = 0x21abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x21abc8: 0x6d0b0000  ldr         $t3, 0x0($t0)
    ctx->pc = 0x21abc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x21abcc: 0x81020008  lb          $v0, 0x8($t0)
    ctx->pc = 0x21abccu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4668A8u));
    // 0x21abd0: 0xb22b0007  sdl         $t3, 0x7($s1)
    ctx->pc = 0x21abd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21abd4: 0xb62b0000  sdr         $t3, 0x0($s1)
    ctx->pc = 0x21abd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21abd8: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x21abd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x21abdc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x21abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x21abe0: 0x14c00015  bnez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x21ABE0u;
    {
        const bool branch_taken_0x21abe0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABE0u;
        // 0x21abe4: 0xafb10034  sw          $s1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abe0) {
            ctx->pc = 0x21AC38u;
            goto label_21ac38;
        }
    }
    ctx->pc = 0x21ABE8u;
    // 0x21abe8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21ABE8u;
    SET_GPR_U32(ctx, 31, 0x21ABF0u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21ABE8u, 0x21ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ABF0u;
label_21abf0:
    // 0x21abf0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x21abf0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21abf4: 0x1810  mfhi        $v1
    ctx->pc = 0x21abf4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21abf8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x21abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x21abfc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21abfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21ac00: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21AC00u;
    SET_GPR_U32(ctx, 31, 0x21AC08u);
    ctx->pc = 0x21AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC00u;
    // 0x21ac04: 0xa3a20011  sb          $v0, 0x11($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21AC00u, 0x21AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC08u;
label_21ac08:
    // 0x21ac08: 0x93a40011  lbu         $a0, 0x11($sp)
    ctx->pc = 0x21ac08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x21ac0c: 0xc0867a0  jal         func_219E80
    ctx->pc = 0x21AC0Cu;
    SET_GPR_U32(ctx, 31, 0x21AC14u);
    ctx->pc = 0x21AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC0Cu;
    // 0x21ac10: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219E80u, 0x21AC0Cu, 0x21AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC14u;
label_21ac14:
    // 0x21ac14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ac18: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x21ac18u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21ac1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x21ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21ac20: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x21ac24: 0xafb40044  sw          $s4, 0x44($sp)
    ctx->pc = 0x21ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 20));
    // 0x21ac28: 0x2010  mfhi        $a0
    ctx->pc = 0x21ac28u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21ac2c: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x21ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x21ac30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21AC30u;
    {
        const bool branch_taken_0x21ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC30u;
        // 0x21ac34: 0xa3a30012  sb          $v1, 0x12($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac30) {
            ctx->pc = 0x21AC44u;
            goto label_21ac44;
        }
    }
    ctx->pc = 0x21AC38u;
label_21ac38:
    // 0x21ac38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21ac3c: 0xafbd0044  sw          $sp, 0x44($sp)
    ctx->pc = 0x21ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 29));
    // 0x21ac40: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x21ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_21ac44:
    // 0x21ac44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21ac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ac4c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21ac50: 0xc08694a  jal         func_21A528
    ctx->pc = 0x21AC50u;
    SET_GPR_U32(ctx, 31, 0x21AC58u);
    ctx->pc = 0x21AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AC50u;
    // 0x21ac54: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A528u, 0x21AC50u, 0x21AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC58u;
label_21ac58:
    // 0x21ac58: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x21ac58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ac5c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x21ac5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x21ac60: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x21ac60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ac64: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x21ac64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21ac68: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x21ac68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21ac6c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x21ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21ac70: 0x3e00008  jr          $ra
    ctx->pc = 0x21AC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC70u;
        // 0x21ac74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21AC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21AC78u;
}
