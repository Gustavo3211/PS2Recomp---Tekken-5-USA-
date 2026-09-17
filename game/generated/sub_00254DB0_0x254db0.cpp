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

// Function: sub_00254DB0
// Address: 0x254db0 - 0x254e68
void sub_00254DB0_0x254db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254DB0_0x254db0");
#endif

    switch (ctx->pc) {
        case 0x254dc0u: goto label_254dc0;
        case 0x254df0u: goto label_254df0;
        default: break;
    }

    ctx->pc = 0x254db0u;

    // 0x254db0: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x254db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x254db4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254db8: 0x2446c700  addiu       $a2, $v0, -0x3900
    ctx->pc = 0x254db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952704));
    // 0x254dbc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x254dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_254dc0:
    // 0x254dc0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x254dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x254dc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x254dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x254dc8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x254dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x254dcc: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x254dccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x254dd0: 0x0  nop
    ctx->pc = 0x254dd0u;
    // NOP
    // 0x254dd4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x254DD4u;
    {
        const bool branch_taken_0x254dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DD4u;
        // 0x254dd8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dd4) {
            ctx->pc = 0x254DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254dc0;
        }
    }
    ctx->pc = 0x254DDCu;
    // 0x254ddc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x254ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x254de0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x254de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x254de4: 0x2447c778  addiu       $a3, $v0, -0x3888
    ctx->pc = 0x254de4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
    // 0x254de8: 0x24661bd0  addiu       $a2, $v1, 0x1BD0
    ctx->pc = 0x254de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 7120));
    // 0x254dec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254df0:
    // 0x254df0: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x254df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x254df4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x254df8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x254df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x254dfc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x254dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x254e00: 0x68880007  ldl         $t0, 0x7($a0)
    ctx->pc = 0x254e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x254e04: 0x6c880000  ldr         $t0, 0x0($a0)
    ctx->pc = 0x254e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x254e08: 0x6889000f  ldl         $t1, 0xF($a0)
    ctx->pc = 0x254e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x254e0c: 0x6c890008  ldr         $t1, 0x8($a0)
    ctx->pc = 0x254e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x254e10: 0x688a0017  ldl         $t2, 0x17($a0)
    ctx->pc = 0x254e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x254e14: 0x6c8a0010  ldr         $t2, 0x10($a0)
    ctx->pc = 0x254e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x254e18: 0x688b001f  ldl         $t3, 0x1F($a0)
    ctx->pc = 0x254e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x254e1c: 0x6c8b0018  ldr         $t3, 0x18($a0)
    ctx->pc = 0x254e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x254e20: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x254e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e24: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x254e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e28: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x254e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e2c: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x254e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e30: 0xb04a0017  sdl         $t2, 0x17($v0)
    ctx->pc = 0x254e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e34: 0xb44a0010  sdr         $t2, 0x10($v0)
    ctx->pc = 0x254e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e38: 0xb04b001f  sdl         $t3, 0x1F($v0)
    ctx->pc = 0x254e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254e3c: 0x28a3000f  slti        $v1, $a1, 0xF
    ctx->pc = 0x254e3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x254e40: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x254E40u;
    {
        const bool branch_taken_0x254e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E40u;
        // 0x254e44: 0xb44b0018  sdr         $t3, 0x18($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e40) {
            ctx->pc = 0x254DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254df0;
        }
    }
    ctx->pc = 0x254E48u;
    // 0x254e48: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x254e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x254e4c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x254e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x254e50: 0x2442c960  addiu       $v0, $v0, -0x36A0
    ctx->pc = 0x254e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x254e54: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x254e54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x16C968u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16C968u, _value); } while (0);
    // 0x254e58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x254e58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x16C960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x16C960u, _value); } while (0);
    // 0x254e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x254E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E5Cu;
        // 0x254e60: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E64u;
    // 0x254e64: 0x0  nop
    ctx->pc = 0x254e64u;
    // NOP
    ctx->pc = 0x254e68u;
}
