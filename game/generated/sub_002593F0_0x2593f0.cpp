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

// Function: sub_002593F0
// Address: 0x2593f0 - 0x2595b0
void sub_002593F0_0x2593f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002593F0_0x2593f0");
#endif

    switch (ctx->pc) {
        case 0x25943cu: goto label_25943c;
        case 0x2594b0u: goto label_2594b0;
        case 0x2594c0u: goto label_2594c0;
        case 0x2594f0u: goto label_2594f0;
        case 0x259594u: goto label_259594;
        default: break;
    }

    ctx->pc = 0x2593f0u;

    // 0x2593f0: 0x27bdf3d0  addiu       $sp, $sp, -0xC30
    ctx->pc = 0x2593f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964176));
    // 0x2593f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2593f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2593f8: 0x7fb00c00  sq          $s0, 0xC00($sp)
    ctx->pc = 0x2593f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3072), GPR_VEC(ctx, 16));
    // 0x2593fc: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x2593fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x259400: 0xffb10c10  sd          $s1, 0xC10($sp)
    ctx->pc = 0x259400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3088), GPR_U64(ctx, 17));
    // 0x259404: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x259404u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x259408: 0xffb20c18  sd          $s2, 0xC18($sp)
    ctx->pc = 0x259408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3096), GPR_U64(ctx, 18));
    // 0x25940c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25940cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259410: 0xffbf0c20  sd          $ra, 0xC20($sp)
    ctx->pc = 0x259410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3104), GPR_U64(ctx, 31));
    // 0x259414: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x259414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x259418: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x259418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x25941c: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x25941cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x259420: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x259420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x259424: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x259424u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x259428: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x259428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25942c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x25942cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x259430: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x259430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x259434: 0xc095cde  jal         func_257378
    ctx->pc = 0x259434u;
    SET_GPR_U32(ctx, 31, 0x25943Cu);
    ctx->pc = 0x259438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259434u;
    // 0x259438: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257378u, 0x259434u, 0x25943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25943Cu;
label_25943c:
    // 0x25943c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x25943cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x259440: 0x24211c30  addiu       $at, $at, 0x1C30
    ctx->pc = 0x259440u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 7216));
    // 0x259444: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x259444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x259448: 0x27a30980  addiu       $v1, $sp, 0x980
    ctx->pc = 0x259448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2432));
    // 0x25944c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x25944cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x259450: 0x27a40ab0  addiu       $a0, $sp, 0xAB0
    ctx->pc = 0x259450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2736));
    // 0x259454: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x259454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x259458: 0x27b90be0  addiu       $t9, $sp, 0xBE0
    ctx->pc = 0x259458u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 3040));
    // 0x25945c: 0xafa30bf0  sw          $v1, 0xBF0($sp)
    ctx->pc = 0x25945cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3056), GPR_U32(ctx, 3));
    // 0x259460: 0x27b804c0  addiu       $t8, $sp, 0x4C0
    ctx->pc = 0x259460u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x259464: 0xafa40bf4  sw          $a0, 0xBF4($sp)
    ctx->pc = 0x259464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3060), GPR_U32(ctx, 4));
    // 0x259468: 0x260d0010  addiu       $t5, $s0, 0x10
    ctx->pc = 0x259468u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x25946c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x25946cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x259470: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x259470u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259474: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x259474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x259478: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x259478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25947c: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x25947cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259480: 0x6ba50bf7  ldl         $a1, 0xBF7($sp)
    ctx->pc = 0x259480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3063); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x259484: 0x6fa50bf0  ldr         $a1, 0xBF0($sp)
    ctx->pc = 0x259484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3056); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x259488: 0xb3250007  sdl         $a1, 0x7($t9)
    ctx->pc = 0x259488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25948c: 0xb7250000  sdr         $a1, 0x0($t9)
    ctx->pc = 0x25948cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x259490: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x259490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x259494: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x259494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x259498: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x259498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25949c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x25949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x2594a0: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x2594a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2594a4: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2594a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2594a8: 0x300582d  daddu       $t3, $t8, $zero
    ctx->pc = 0x2594a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2594ac: 0x7a100000  lq          $s0, 0x0($s0)
    ctx->pc = 0x2594acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2594b0:
    // 0x2594b0: 0x92940  sll         $a1, $t1, 5
    ctx->pc = 0x2594b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x2594b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2594b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2594b8: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x2594b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2594bc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2594bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2594c0:
    // 0x2594c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2594c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2594c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2594c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2594c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2594c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2594cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2594ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2594d0: 0x0  nop
    ctx->pc = 0x2594d0u;
    // NOP
    // 0x2594d4: 0x14ccfffa  bne         $a2, $t4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2594D4u;
    {
        const bool branch_taken_0x2594d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 12));
        ctx->pc = 0x2594D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2594D4u;
        // 0x2594d8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2594d4) {
            ctx->pc = 0x2594C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2594c0;
        }
    }
    ctx->pc = 0x2594DCu;
    // 0x2594dc: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x2594dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2594e0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2594e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2594e4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2594e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2594e8: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2594e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2594ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2594ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2594f0:
    // 0x2594f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2594f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2594f4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2594f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2594f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2594f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2594fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2594fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x259500: 0x0  nop
    ctx->pc = 0x259500u;
    // NOP
    // 0x259504: 0x14c7fffa  bne         $a2, $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x259504u;
    {
        const bool branch_taken_0x259504 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x259508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259504u;
        // 0x259508: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259504) {
            ctx->pc = 0x2594F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2594f0;
        }
    }
    ctx->pc = 0x25950Cu;
    // 0x25950c: 0x1654021  addu        $t0, $t3, $a1
    ctx->pc = 0x25950cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x259510: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x259510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x259514: 0x7d100000  sq          $s0, 0x0($t0)
    ctx->pc = 0x259514u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 16));
    // 0x259518: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x259518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x25951c: 0x24a5001c  addiu       $a1, $a1, 0x1C
    ctx->pc = 0x25951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
    // 0x259520: 0x920c0  sll         $a0, $t1, 3
    ctx->pc = 0x259520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x259524: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x259524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x259528: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x259528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x25952c: 0x79a60000  lq          $a2, 0x0($t5)
    ctx->pc = 0x25952cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x259530: 0x1c43821  addu        $a3, $t6, $a0
    ctx->pc = 0x259530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x259534: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x259534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x259538: 0x1e42021  addu        $a0, $t7, $a0
    ctx->pc = 0x259538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x25953c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x25953cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x259540: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x259540u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x259544: 0x1012  mflo        $v0
    ctx->pc = 0x259544u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x259548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x259548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x25954c: 0x7d060010  sq          $a2, 0x10($t0)
    ctx->pc = 0x25954cu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 6));
    // 0x259550: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x259550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259554: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x259554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x259558: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x259558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x25955c: 0x29230026  slti        $v1, $t1, 0x26
    ctx->pc = 0x25955cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)38) ? 1 : 0);
    // 0x259560: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x259560u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x259564: 0x1012  mflo        $v0
    ctx->pc = 0x259564u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x259568: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x259568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x25956c: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x25956cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x259570: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x259570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x259574: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x259574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x259578: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x259578u;
    {
        const bool branch_taken_0x259578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259578u;
        // 0x25957c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x259578) {
            ctx->pc = 0x2594B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2594b0;
        }
    }
    ctx->pc = 0x259580u;
    // 0x259580: 0x300282d  daddu       $a1, $t8, $zero
    ctx->pc = 0x259580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259584: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x259584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259588: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x259588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25958c: 0xc09622e  jal         func_2588B8
    ctx->pc = 0x25958Cu;
    SET_GPR_U32(ctx, 31, 0x259594u);
    ctx->pc = 0x259590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25958Cu;
    // 0x259590: 0x2407004c  addiu       $a3, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2588B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588B8u, 0x25958Cu, 0x259594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259594u;
label_259594:
    // 0x259594: 0x7bb00c00  lq          $s0, 0xC00($sp)
    ctx->pc = 0x259594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3072)));
    // 0x259598: 0xdfb10c10  ld          $s1, 0xC10($sp)
    ctx->pc = 0x259598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3088)));
    // 0x25959c: 0xdfb20c18  ld          $s2, 0xC18($sp)
    ctx->pc = 0x25959cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3096)));
    // 0x2595a0: 0xdfbf0c20  ld          $ra, 0xC20($sp)
    ctx->pc = 0x2595a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3104)));
    // 0x2595a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2595A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2595A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2595A4u;
        // 0x2595a8: 0x27bd0c30  addiu       $sp, $sp, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2595A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2595ACu;
    // 0x2595ac: 0x0  nop
    ctx->pc = 0x2595acu;
    // NOP
    ctx->pc = 0x2595b0u;
}
