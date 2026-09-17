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

// Function: sub_0023F9B0
// Address: 0x23f9b0 - 0x23fa48
void sub_0023F9B0_0x23f9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F9B0_0x23f9b0");
#endif

    switch (ctx->pc) {
        case 0x23f9ccu: goto label_23f9cc;
        case 0x23fa2cu: goto label_23fa2c;
        default: break;
    }

    ctx->pc = 0x23f9b0u;

    // 0x23f9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f9b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23f9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f9bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f9c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f9c4: 0xc08fc96  jal         func_23F258
    ctx->pc = 0x23F9C4u;
    SET_GPR_U32(ctx, 31, 0x23F9CCu);
    ctx->pc = 0x23F9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F9C4u;
    // 0x23f9c8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F258u, 0x23F9C4u, 0x23F9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F9CCu;
label_23f9cc:
    // 0x23f9cc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x23f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x23f9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f9d4: 0x14440010  bne         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23F9D4u;
    {
        const bool branch_taken_0x23f9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F9D4u;
        // 0x23f9d8: 0x24633580  addiu       $v1, $v1, 0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f9d4) {
            ctx->pc = 0x23FA18u;
            goto label_23fa18;
        }
    }
    ctx->pc = 0x23F9DCu;
    // 0x23f9dc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f9e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23f9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f9e4: 0x24473598  addiu       $a3, $v0, 0x3598
    ctx->pc = 0x23f9e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13720));
    // 0x23f9e8: 0x6a24000b  ldl         $a0, 0xB($s1)
    ctx->pc = 0x23f9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x23f9ec: 0x6e240004  ldr         $a0, 0x4($s1)
    ctx->pc = 0x23f9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x23f9f0: 0x6a250013  ldl         $a1, 0x13($s1)
    ctx->pc = 0x23f9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x23f9f4: 0x6e25000c  ldr         $a1, 0xC($s1)
    ctx->pc = 0x23f9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x23f9f8: 0x6a26001b  ldl         $a2, 0x1B($s1)
    ctx->pc = 0x23f9f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x23f9fc: 0x6e260014  ldr         $a2, 0x14($s1)
    ctx->pc = 0x23f9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x23fa00: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x23fa00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23fa04: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x23fa04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23fa08: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x23fa08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23fa0c: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x23fa0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23fa10: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x23fa10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x23fa14: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x23fa14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_23fa18:
    // 0x23fa18: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23FA18u;
    {
        const bool branch_taken_0x23fa18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA18u;
        // 0x23fa1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa18) {
            ctx->pc = 0x23FA2Cu;
            goto label_23fa2c;
        }
    }
    ctx->pc = 0x23FA20u;
    // 0x23fa20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23fa24: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x23FA24u;
    SET_GPR_U32(ctx, 31, 0x23FA2Cu);
    ctx->pc = 0x23FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FA24u;
    // 0x23fa28: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x23FA24u, 0x23FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FA2Cu;
label_23fa2c:
    // 0x23fa2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23fa2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fa34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fa34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fa38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x23FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA3Cu;
        // 0x23fa40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FA44u;
    // 0x23fa44: 0x0  nop
    ctx->pc = 0x23fa44u;
    // NOP
    ctx->pc = 0x23fa48u;
}
