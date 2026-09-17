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

// Function: sub_002C9028
// Address: 0x2c9028 - 0x2c9090
void sub_002C9028_0x2c9028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9028_0x2c9028");
#endif

    switch (ctx->pc) {
        case 0x2c9080u: goto label_2c9080;
        default: break;
    }

    ctx->pc = 0x2c9028u;

    // 0x2c9028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c902c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c902cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c9030: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C9030u;
    {
        const bool branch_taken_0x2c9030 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9030u;
        // 0x2c9034: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9030) {
            ctx->pc = 0x2C9080u;
            goto label_2c9080;
        }
    }
    ctx->pc = 0x2C9038u;
    // 0x2c9038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c9038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c903c: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2c903cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2c9040: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c9040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c9044: 0x24638d44  addiu       $v1, $v1, -0x72BC
    ctx->pc = 0x2c9044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937924));
    // 0x2c9048: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c9048u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c904c: 0x2464ffcc  addiu       $a0, $v1, -0x34
    ctx->pc = 0x2c904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967244));
    // 0x2c9050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c9050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c9054: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2c9054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c9058: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c905c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2c905cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c9060: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2c9060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c9064: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x2c9064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2c9068: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x2c9068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2c906c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2c906cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9070: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2c9070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9074: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x2c9074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9078: 0xc0b244e  jal         func_2C9138
    ctx->pc = 0x2C9078u;
    SET_GPR_U32(ctx, 31, 0x2C9080u);
    ctx->pc = 0x2C907Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9078u;
    // 0x2c907c: 0xb4460008  sdr         $a2, 0x8($v0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9138u, 0x2C9078u, 0x2C9080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9080u;
label_2c9080:
    // 0x2c9080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9084: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9084u;
        // 0x2c9088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C908Cu;
    // 0x2c908c: 0x0  nop
    ctx->pc = 0x2c908cu;
    // NOP
    ctx->pc = 0x2c9090u;
}
