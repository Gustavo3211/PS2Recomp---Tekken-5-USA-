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

// Function: sub_0035CE30
// Address: 0x35ce30 - 0x35cef0
void sub_0035CE30_0x35ce30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CE30_0x35ce30");
#endif

    ctx->pc = 0x35ce30u;

    // 0x35ce30: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x35ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x35ce34: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x35ce34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35ce38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35ce3c: 0x2ca40030  sltiu       $a0, $a1, 0x30
    ctx->pc = 0x35ce3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x35ce40: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35ce40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35ce44: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x35CE44u;
    {
        const bool branch_taken_0x35ce44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE44u;
        // 0x35ce48: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ce44) {
            ctx->pc = 0x35CEE8u;
            goto label_35cee8;
        }
    }
    ctx->pc = 0x35CE4Cu;
    // 0x35ce4c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x35ce4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35ce50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ce50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35ce58: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x35ce58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35ce5c: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x35ce5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35ce60: 0x68c5000f  ldl         $a1, 0xF($a2)
    ctx->pc = 0x35ce60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35ce64: 0x6cc50008  ldr         $a1, 0x8($a2)
    ctx->pc = 0x35ce64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35ce68: 0x68c70017  ldl         $a3, 0x17($a2)
    ctx->pc = 0x35ce68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x35ce6c: 0x6cc70010  ldr         $a3, 0x10($a2)
    ctx->pc = 0x35ce6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x35ce70: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x35ce70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35ce74: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x35ce74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35ce78: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ce78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ce7c: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35ce7cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35ce80: 0xb02413c7  sdl         $a0, 0x13C7($at)
    ctx->pc = 0x35ce80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5063); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ce84: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ce84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ce88: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35ce88u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35ce8c: 0xb42413c0  sdr         $a0, 0x13C0($at)
    ctx->pc = 0x35ce8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5056); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ce90: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ce90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ce94: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35ce94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35ce98: 0xb02513cf  sdl         $a1, 0x13CF($at)
    ctx->pc = 0x35ce98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5071); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ce9c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ce9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35cea0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35cea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35cea4: 0xb42513c8  sdr         $a1, 0x13C8($at)
    ctx->pc = 0x35cea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5064); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cea8: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35cea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ceac: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35ceb0: 0xb02713d7  sdl         $a3, 0x13D7($at)
    ctx->pc = 0x35ceb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5079); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ceb4: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ceb8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35ceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35cebc: 0xb42713d0  sdr         $a3, 0x13D0($at)
    ctx->pc = 0x35cebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5072); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cec0: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35cec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35cec4: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35cec4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35cec8: 0xb02813df  sdl         $t0, 0x13DF($at)
    ctx->pc = 0x35cec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5087); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35cecc: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35ceccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35ced0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35ced0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35ced4: 0xb42813d8  sdr         $t0, 0x13D8($at)
    ctx->pc = 0x35ced4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 5080); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ced8: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x35ced8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x35cedc: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35cedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35cee0: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x35cee0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x35cee4: 0xac2413e0  sw          $a0, 0x13E0($at)
    ctx->pc = 0x35cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5088), GPR_U32(ctx, 4));
label_35cee8:
    // 0x35cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x35CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CEF0u;
}
