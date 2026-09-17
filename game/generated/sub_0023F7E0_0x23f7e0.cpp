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

// Function: sub_0023F7E0
// Address: 0x23f7e0 - 0x23f820
void sub_0023F7E0_0x23f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F7E0_0x23f7e0");
#endif

    switch (ctx->pc) {
        case 0x23f80cu: goto label_23f80c;
        default: break;
    }

    ctx->pc = 0x23f7e0u;

    // 0x23f7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f7e8: 0x2790c9a0  addiu       $s0, $gp, -0x3660
    ctx->pc = 0x23f7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294953376));
    // 0x23f7ec: 0x2786a990  addiu       $a2, $gp, -0x5670
    ctx->pc = 0x23f7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945168));
    // 0x23f7f0: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x23f7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x23f7f4: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x23f7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x23f7f8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x23f7f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f7fc: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x23f7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23f800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23f800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23f804: 0xc043bc4  jal         func_10EF10
    ctx->pc = 0x23F804u;
    SET_GPR_U32(ctx, 31, 0x23F80Cu);
    ctx->pc = 0x23F808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F804u;
    // 0x23f808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EF10u, 0x23F804u, 0x23F80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F80Cu;
label_23f80c:
    // 0x23f80c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23f80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f810: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23f810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f818: 0x3e00008  jr          $ra
    ctx->pc = 0x23F818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F818u;
        // 0x23f81c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F820u;
}
