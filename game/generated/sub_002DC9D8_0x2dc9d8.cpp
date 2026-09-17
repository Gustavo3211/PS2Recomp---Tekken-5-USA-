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

// Function: sub_002DC9D8
// Address: 0x2dc9d8 - 0x2dca90
void sub_002DC9D8_0x2dc9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC9D8_0x2dc9d8");
#endif

    switch (ctx->pc) {
        case 0x2dca20u: goto label_2dca20;
        case 0x2dca48u: goto label_2dca48;
        default: break;
    }

    ctx->pc = 0x2dc9d8u;

    // 0x2dc9d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc9dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2dc9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2dc9e0: 0x2447f478  addiu       $a3, $v0, -0xB88
    ctx->pc = 0x2dc9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964344));
    // 0x2dc9e4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x2dc9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2dc9e8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x2dc9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2dc9ec: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x2dc9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dc9f0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x2dc9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dc9f4: 0x88e60013  lwl         $a2, 0x13($a3)
    ctx->pc = 0x2dc9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x2dc9f8: 0x98e60010  lwr         $a2, 0x10($a3)
    ctx->pc = 0x2dc9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x2dc9fc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2dc9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dca00: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2dca00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dca04: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x2dca04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dca08: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x2dca08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dca0c: 0xaba60013  swl         $a2, 0x13($sp)
    ctx->pc = 0x2dca0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dca10: 0xbba60010  swr         $a2, 0x10($sp)
    ctx->pc = 0x2dca10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dca14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dca14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dca18: 0x27aa0001  addiu       $t2, $sp, 0x1
    ctx->pc = 0x2dca18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x2dca1c: 0x83a90000  lb          $t1, 0x0($sp)
    ctx->pc = 0x2dca1cu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_2dca20:
    // 0x2dca20: 0x11200015  beqz        $t1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DCA20u;
    {
        const bool branch_taken_0x2dca20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA20u;
        // 0x2dca24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca20) {
            ctx->pc = 0x2DCA78u;
            goto label_2dca78;
        }
    }
    ctx->pc = 0x2DCA28u;
    // 0x2dca28: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x2dca28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2dca2c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2dca2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dca30: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DCA30u;
    {
        const bool branch_taken_0x2dca30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x2dca30) {
            ctx->pc = 0x2DCA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA30u;
            // 0x2dca34: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DCA38u;
    // 0x2dca38: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x2dca38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2dca3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DCA3Cu;
    {
        const bool branch_taken_0x2dca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA3Cu;
        // 0x2dca40: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dca3c) {
            ctx->pc = 0x2DCA78u;
            goto label_2dca78;
        }
    }
    ctx->pc = 0x2DCA44u;
    // 0x2dca44: 0x0  nop
    ctx->pc = 0x2dca44u;
    // NOP
label_2dca48:
    // 0x2dca48: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x2dca48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2dca4c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x2dca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x2dca50: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2dca50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dca54: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DCA54u;
    {
        const bool branch_taken_0x2dca54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dca54) {
            ctx->pc = 0x2DCA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA54u;
            // 0x2dca58: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA7Cu;
            goto label_2dca7c;
        }
    }
    ctx->pc = 0x2DCA5Cu;
    // 0x2dca5c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2dca5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dca60: 0x0  nop
    ctx->pc = 0x2dca60u;
    // NOP
    // 0x2dca64: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DCA64u;
    {
        const bool branch_taken_0x2dca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dca64) {
            ctx->pc = 0x2DCA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCA64u;
            // 0x2dca68: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dca48;
        }
    }
    ctx->pc = 0x2DCA6Cu;
    // 0x2dca6c: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2dca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2dca70: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2dca70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2dca74: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2dca74u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_2dca78:
    // 0x2dca78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dca78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2dca7c:
    // 0x2dca7c: 0x29020028  slti        $v0, $t0, 0x28
    ctx->pc = 0x2dca7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2dca80: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2DCA80u;
    {
        const bool branch_taken_0x2dca80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dca80) {
            ctx->pc = 0x2DCA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dca20;
        }
    }
    ctx->pc = 0x2DCA88u;
    // 0x2dca88: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCA88u;
        // 0x2dca8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCA90u;
}
