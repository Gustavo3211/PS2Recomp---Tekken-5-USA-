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

// Function: sub_00336980
// Address: 0x336980 - 0x336ad8
void sub_00336980_0x336980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336980_0x336980");
#endif

    switch (ctx->pc) {
        case 0x3369b8u: goto label_3369b8;
        default: break;
    }

    ctx->pc = 0x336980u;

    // 0x336980: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x336980u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x336984: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x336984u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x336988: 0x8d630018  lw          $v1, 0x18($t3)
    ctx->pc = 0x336988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 24)));
    // 0x33698c: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x33698cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336990: 0x248a0018  addiu       $t2, $a0, 0x18
    ctx->pc = 0x336990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x336994: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x336994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x336998: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x336998u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x33699c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3369a0: 0x106a001b  beq         $v1, $t2, . + 4 + (0x1B << 2)
    ctx->pc = 0x3369A0u;
    {
        const bool branch_taken_0x3369a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x3369A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369A0u;
        // 0x3369a4: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369a0) {
            ctx->pc = 0x336A10u;
            goto label_336a10;
        }
    }
    ctx->pc = 0x3369A8u;
    // 0x3369a8: 0xa66821  addu        $t5, $a1, $a2
    ctx->pc = 0x3369a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3369ac: 0x27af0020  addiu       $t7, $sp, 0x20
    ctx->pc = 0x3369acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3369b0: 0x180702d  daddu       $t6, $t4, $zero
    ctx->pc = 0x3369b0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3369b4: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x3369b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3369b8:
    // 0x3369b8: 0x25070008  addiu       $a3, $t0, 0x8
    ctx->pc = 0x3369b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3369bc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3369bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3369c0: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3369c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3369c4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3369C4u;
    {
        const bool branch_taken_0x3369c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3369c4) {
            ctx->pc = 0x3369C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3369C4u;
            // 0x3369c8: 0xade80000  sw          $t0, 0x0($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3369F8u;
            goto label_3369f8;
        }
    }
    ctx->pc = 0x3369CCu;
    // 0x3369cc: 0x55a40011  bnel        $t5, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3369CCu;
    {
        const bool branch_taken_0x3369cc = (GPR_U64(ctx, 13) != GPR_U64(ctx, 4));
        if (branch_taken_0x3369cc) {
            ctx->pc = 0x3369D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3369CCu;
            // 0x3369d0: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336A14u;
            goto label_336a14;
        }
    }
    ctx->pc = 0x3369D4u;
    // 0x3369d4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3369d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3369d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3369d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3369dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3369dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3369e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3369e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3369e4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3369e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3369e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3369e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3369ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3369ECu;
    {
        const bool branch_taken_0x3369ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369ECu;
        // 0x3369f0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369ec) {
            ctx->pc = 0x336A10u;
            goto label_336a10;
        }
    }
    ctx->pc = 0x3369F4u;
    // 0x3369f4: 0x0  nop
    ctx->pc = 0x3369f4u;
    // NOP
label_3369f8:
    // 0x3369f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3369f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3369fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3369fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336a00: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x336a00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x336a04: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x336a04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a08: 0x1469ffeb  bne         $v1, $t1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x336A08u;
    {
        const bool branch_taken_0x336a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x336A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A08u;
        // 0x336a0c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a08) {
            ctx->pc = 0x3369B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3369b8;
        }
    }
    ctx->pc = 0x336A10u;
label_336a10:
    // 0x336a10: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x336a10u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_336a14:
    // 0x336a14: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x336a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x336a18: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x336a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x336a1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x336a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336a20: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x336a20u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x336a24: 0xafaa0030  sw          $t2, 0x30($sp)
    ctx->pc = 0x336a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 10));
    // 0x336a28: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x336a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x336a2c: 0x10ea0007  beq         $a3, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x336A2Cu;
    {
        const bool branch_taken_0x336a2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x336A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A2Cu;
        // 0x336a30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a2c) {
            ctx->pc = 0x336A4Cu;
            goto label_336a4c;
        }
    }
    ctx->pc = 0x336A34u;
    // 0x336a34: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x336a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x336a38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x336a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336a3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x336a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336a40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x336a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x336a44: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x336a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x336a48: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x336a48u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_336a4c:
    // 0x336a4c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336A4Cu;
    {
        const bool branch_taken_0x336a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A4Cu;
        // 0x336a50: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a4c) {
            ctx->pc = 0x336A68u;
            goto label_336a68;
        }
    }
    ctx->pc = 0x336A54u;
    // 0x336a54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x336a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336a58: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x336a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x336a5c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x336A5Cu;
    {
        const bool branch_taken_0x336a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A5Cu;
        // 0x336a60: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a5c) {
            ctx->pc = 0x336ACCu;
            goto label_336acc;
        }
    }
    ctx->pc = 0x336A64u;
    // 0x336a64: 0x0  nop
    ctx->pc = 0x336a64u;
    // NOP
label_336a68:
    // 0x336a68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336a6c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x336a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x336a70: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x336a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x336a74: 0xafa60054  sw          $a2, 0x54($sp)
    ctx->pc = 0x336a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 6));
    // 0x336a78: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x336a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x336a7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x336a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336a80: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x336a80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x336a84: 0xac8b0004  sw          $t3, 0x4($a0)
    ctx->pc = 0x336a84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 11));
    // 0x336a88: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x336a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x336a8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336a90: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x336a90u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x336a94: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x336a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x336a98: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x336a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x336a9c: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x336a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336aa0: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x336aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336aa4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x336aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x336aa8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x336aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336aac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x336aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x336ab0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x336ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x336ab4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x336ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x336ab8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336abc: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x336abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x336ac0: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x336ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x336ac4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336ac8: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x336ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
label_336acc:
    // 0x336acc: 0x3e00008  jr          $ra
    ctx->pc = 0x336ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336ACCu;
        // 0x336ad0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336AD4u;
    // 0x336ad4: 0x0  nop
    ctx->pc = 0x336ad4u;
    // NOP
    ctx->pc = 0x336ad8u;
}
