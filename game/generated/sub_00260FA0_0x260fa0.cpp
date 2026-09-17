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

// Function: sub_00260FA0
// Address: 0x260fa0 - 0x261048
void sub_00260FA0_0x260fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260FA0_0x260fa0");
#endif

    switch (ctx->pc) {
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fd8u: goto label_260fd8;
        case 0x260fdcu: goto label_260fdc;
        case 0x260fe0u: goto label_260fe0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260fe8u: goto label_260fe8;
        case 0x260fecu: goto label_260fec;
        case 0x260ff0u: goto label_260ff0;
        case 0x260ff4u: goto label_260ff4;
        case 0x260ff8u: goto label_260ff8;
        case 0x260ffcu: goto label_260ffc;
        case 0x261000u: goto label_261000;
        case 0x261004u: goto label_261004;
        case 0x261008u: goto label_261008;
        case 0x26100cu: goto label_26100c;
        case 0x261010u: goto label_261010;
        case 0x261014u: goto label_261014;
        case 0x261018u: goto label_261018;
        case 0x26101cu: goto label_26101c;
        case 0x261020u: goto label_261020;
        case 0x261024u: goto label_261024;
        case 0x261028u: goto label_261028;
        case 0x26102cu: goto label_26102c;
        case 0x261030u: goto label_261030;
        case 0x261034u: goto label_261034;
        case 0x261038u: goto label_261038;
        case 0x26103cu: goto label_26103c;
        case 0x261040u: goto label_261040;
        case 0x261044u: goto label_261044;
        default: break;
    }

    ctx->pc = 0x260fa0u;

label_260fa0:
    // 0x260fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260fa4:
    // 0x260fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_260fa8:
    // 0x260fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260fac:
    // 0x260fac: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x260facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_260fb0:
    // 0x260fb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_260fb4:
    // 0x260fb4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x260fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_260fb8:
    // 0x260fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260fbc:
    // 0x260fbc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x260fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_260fc0:
    // 0x260fc0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x260fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_260fc4:
    // 0x260fc4: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x260fc4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_260fc8:
    // 0x260fc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x260fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_260fcc:
    // 0x260fcc: 0x40f809  jalr        $v0
label_260fd0:
    if (ctx->pc == 0x260FD0u) {
        ctx->pc = 0x260FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FCCu;
        // 0x260fd0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FD4u;
        goto label_260fd4;
    }
    ctx->pc = 0x260FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260FD4u);
        ctx->pc = 0x260FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FCCu;
        // 0x260fd0: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260FCCu, 0x260FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260FD4u;
label_260fd4:
    // 0x260fd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x260fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_260fd8:
    // 0x260fd8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x260fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_260fdc:
    // 0x260fdc: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x260fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_260fe0:
    // 0x260fe0: 0x244832c0  addiu       $t0, $v0, 0x32C0
    ctx->pc = 0x260fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12992));
label_260fe4:
    // 0x260fe4: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x260fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_260fe8:
    // 0x260fe8: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x260fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_260fec:
    // 0x260fec: 0xb083001f  sdl         $v1, 0x1F($a0)
    ctx->pc = 0x260fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_260ff0:
    // 0x260ff0: 0xb4830018  sdr         $v1, 0x18($a0)
    ctx->pc = 0x260ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_260ff4:
    // 0x260ff4: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x260ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_260ff8:
    // 0x260ff8: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x260ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_260ffc:
    // 0x260ffc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_261000:
    // 0x261000: 0x24a832b0  addiu       $t0, $a1, 0x32B0
    ctx->pc = 0x261000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12976));
label_261004:
    // 0x261004: 0x69090007  ldl         $t1, 0x7($t0)
    ctx->pc = 0x261004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_261008:
    // 0x261008: 0x6d090000  ldr         $t1, 0x0($t0)
    ctx->pc = 0x261008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_26100c:
    // 0x26100c: 0xb0890027  sdl         $t1, 0x27($a0)
    ctx->pc = 0x26100cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261010:
    // 0x261010: 0xb4890020  sdr         $t1, 0x20($a0)
    ctx->pc = 0x261010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261014:
    // 0x261014: 0x246632c8  addiu       $a2, $v1, 0x32C8
    ctx->pc = 0x261014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13000));
label_261018:
    // 0x261018: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x261018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_26101c:
    // 0x26101c: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x26101cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_261020:
    // 0x261020: 0xb209013f  sdl         $t1, 0x13F($s0)
    ctx->pc = 0x261020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261024:
    // 0x261024: 0xb6090138  sdr         $t1, 0x138($s0)
    ctx->pc = 0x261024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_261028:
    // 0x261028: 0x244332b8  addiu       $v1, $v0, 0x32B8
    ctx->pc = 0x261028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12984));
label_26102c:
    // 0x26102c: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x26102cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_261030:
    // 0x261030: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x261030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_261034:
    // 0x261034: 0xb2070147  sdl         $a3, 0x147($s0)
    ctx->pc = 0x261034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261038:
    // 0x261038: 0xb6070140  sdr         $a3, 0x140($s0)
    ctx->pc = 0x261038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_26103c:
    // 0x26103c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26103cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261040:
    // 0x261040: 0x3e00008  jr          $ra
label_261044:
    if (ctx->pc == 0x261044u) {
        ctx->pc = 0x261044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261040u;
        // 0x261044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261048u;
        goto label_fallthrough_0x261040;
    }
    ctx->pc = 0x261040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261040u;
        // 0x261044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261040:
    ctx->pc = 0x261048u;
}
