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

// Function: sub_00290ED8
// Address: 0x290ed8 - 0x290f68
void sub_00290ED8_0x290ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290ED8_0x290ed8");
#endif

    switch (ctx->pc) {
        case 0x290f38u: goto label_290f38;
        case 0x290f4cu: goto label_290f4c;
        default: break;
    }

    ctx->pc = 0x290ed8u;

    // 0x290ed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x290ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x290edc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x290edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x290ee0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290ee4: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x290ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x290ee8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x290ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x290eec: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x290eecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x290ef0: 0x261070d0  addiu       $s0, $s0, 0x70D0
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28880));
    // 0x290ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x290ef8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290efc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x290f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x290f04: 0x2631ac50  addiu       $s1, $s1, -0x53B0
    ctx->pc = 0x290f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945872));
    // 0x290f08: 0x244aac40  addiu       $t2, $v0, -0x53C0
    ctx->pc = 0x290f08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
    // 0x290f0c: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x290f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x290f10: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x290f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x290f14: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x290f14u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x47AC48u));
    // 0x290f18: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x290f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x290f1c: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x290f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x290f20: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x290f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x290f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f28: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x290f28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x177110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x177110u, _value); } while (0);
    // 0x290f2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f30: 0xc0a5bfa  jal         func_296FE8
    ctx->pc = 0x290F30u;
    SET_GPR_U32(ctx, 31, 0x290F38u);
    ctx->pc = 0x290F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F30u;
    // 0x290f34: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296FE8u, 0x290F30u, 0x290F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F38u;
label_290f38:
    // 0x290f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x290f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f44: 0xc0a5c48  jal         func_297120
    ctx->pc = 0x290F44u;
    SET_GPR_U32(ctx, 31, 0x290F4Cu);
    ctx->pc = 0x290F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F44u;
    // 0x290f48: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297120u, 0x290F44u, 0x290F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F4Cu;
label_290f4c:
    // 0x290f4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x290f4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290f50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x290f50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290f54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x290f54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290f58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x290f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x290f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x290F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F5Cu;
        // 0x290f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290F64u;
    // 0x290f64: 0x0  nop
    ctx->pc = 0x290f64u;
    // NOP
    ctx->pc = 0x290f68u;
}
