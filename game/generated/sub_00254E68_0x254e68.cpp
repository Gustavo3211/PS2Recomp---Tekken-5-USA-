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

// Function: sub_00254E68
// Address: 0x254e68 - 0x254f3c
void sub_00254E68_0x254e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E68_0x254e68");
#endif

    switch (ctx->pc) {
        case 0x254e78u: goto label_254e78;
        case 0x254ed8u: goto label_254ed8;
        default: break;
    }

    ctx->pc = 0x254e68u;

    // 0x254e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254e70: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x254E70u;
    SET_GPR_U32(ctx, 31, 0x254E78u);
    ctx->pc = 0x254E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E70u;
    // 0x254e74: 0x24040062  addiu       $a0, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x254E70u, 0x254E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E78u;
label_254e78:
    // 0x254e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x254e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e7c: 0x3c022004  lui         $v0, 0x2004
    ctx->pc = 0x254e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8196 << 16));
    // 0x254e80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x254e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x254e84: 0x34420822  ori         $v0, $v0, 0x822
    ctx->pc = 0x254e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2082);
    // 0x254e88: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x254e88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x254e8c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254E8Cu;
    {
        const bool branch_taken_0x254e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x254E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E8Cu;
        // 0x254e90: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e8c) {
            ctx->pc = 0x254EA8u;
            goto label_254ea8;
        }
    }
    ctx->pc = 0x254E94u;
    // 0x254e94: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x254e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x254e98: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x254e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x254e9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254E9Cu;
    {
        const bool branch_taken_0x254e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E9Cu;
        // 0x254ea0: 0x24451bd0  addiu       $a1, $v0, 0x1BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e9c) {
            ctx->pc = 0x254EACu;
            goto label_254eac;
        }
    }
    ctx->pc = 0x254EA4u;
    // 0x254ea4: 0x0  nop
    ctx->pc = 0x254ea4u;
    // NOP
label_254ea8:
    // 0x254ea8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254eac:
    // 0x254eac: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x254eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x254eb0: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x254eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8880u));
    // 0x254eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x254eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254eb8: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x254eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x254ebc: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x254ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x254ec0: 0xac26c700  sw          $a2, -0x3900($at)
    ctx->pc = 0x254ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952704), GPR_U32(ctx, 6));
    // 0x254ec4: 0x18c0001a  blez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x254EC4u;
    {
        const bool branch_taken_0x254ec4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x254EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EC4u;
        // 0x254ec8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ec4) {
            ctx->pc = 0x254F30u;
            goto label_254f30;
        }
    }
    ctx->pc = 0x254ECCu;
    // 0x254ecc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x254eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x254ed0: 0x2447c778  addiu       $a3, $v0, -0x3888
    ctx->pc = 0x254ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952824));
    // 0x254ed4: 0x0  nop
    ctx->pc = 0x254ed4u;
    // NOP
label_254ed8:
    // 0x254ed8: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x254ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x254edc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x254edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x254ee0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x254ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x254ee4: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x254ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x254ee8: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x254ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x254eec: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x254eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x254ef0: 0x68a9000f  ldl         $t1, 0xF($a1)
    ctx->pc = 0x254ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x254ef4: 0x6ca90008  ldr         $t1, 0x8($a1)
    ctx->pc = 0x254ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x254ef8: 0x68aa0017  ldl         $t2, 0x17($a1)
    ctx->pc = 0x254ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x254efc: 0x6caa0010  ldr         $t2, 0x10($a1)
    ctx->pc = 0x254efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x254f00: 0x68ab001f  ldl         $t3, 0x1F($a1)
    ctx->pc = 0x254f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x254f04: 0x6cab0018  ldr         $t3, 0x18($a1)
    ctx->pc = 0x254f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x254f08: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x254f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f0c: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x254f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f10: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x254f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f14: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x254f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f18: 0xb04a0017  sdl         $t2, 0x17($v0)
    ctx->pc = 0x254f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f1c: 0xb44a0010  sdr         $t2, 0x10($v0)
    ctx->pc = 0x254f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f20: 0xb04b001f  sdl         $t3, 0x1F($v0)
    ctx->pc = 0x254f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f24: 0xb44b0018  sdr         $t3, 0x18($v0)
    ctx->pc = 0x254f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x254f28: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x254F28u;
    {
        const bool branch_taken_0x254f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F28u;
        // 0x254f2c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f28) {
            ctx->pc = 0x254ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254ed8;
        }
    }
    ctx->pc = 0x254F30u;
label_254f30:
    // 0x254f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254f34: 0x3e00008  jr          $ra
    ctx->pc = 0x254F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F34u;
        // 0x254f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254F3Cu;
}
