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

// Function: sub_00261048
// Address: 0x261048 - 0x2610f0
void sub_00261048_0x261048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261048_0x261048");
#endif

    switch (ctx->pc) {
        case 0x261048u: goto label_261048;
        case 0x26104cu: goto label_26104c;
        case 0x261050u: goto label_261050;
        case 0x261054u: goto label_261054;
        case 0x261058u: goto label_261058;
        case 0x26105cu: goto label_26105c;
        case 0x261060u: goto label_261060;
        case 0x261064u: goto label_261064;
        case 0x261068u: goto label_261068;
        case 0x26106cu: goto label_26106c;
        case 0x261070u: goto label_261070;
        case 0x261074u: goto label_261074;
        case 0x261078u: goto label_261078;
        case 0x26107cu: goto label_26107c;
        case 0x261080u: goto label_261080;
        case 0x261084u: goto label_261084;
        case 0x261088u: goto label_261088;
        case 0x26108cu: goto label_26108c;
        case 0x261090u: goto label_261090;
        case 0x261094u: goto label_261094;
        case 0x261098u: goto label_261098;
        case 0x26109cu: goto label_26109c;
        case 0x2610a0u: goto label_2610a0;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610acu: goto label_2610ac;
        case 0x2610b0u: goto label_2610b0;
        case 0x2610b4u: goto label_2610b4;
        case 0x2610b8u: goto label_2610b8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610c0u: goto label_2610c0;
        case 0x2610c4u: goto label_2610c4;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610ccu: goto label_2610cc;
        case 0x2610d0u: goto label_2610d0;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610d8u: goto label_2610d8;
        case 0x2610dcu: goto label_2610dc;
        case 0x2610e0u: goto label_2610e0;
        case 0x2610e4u: goto label_2610e4;
        case 0x2610e8u: goto label_2610e8;
        case 0x2610ecu: goto label_2610ec;
        default: break;
    }

    ctx->pc = 0x261048u;

label_261048:
    // 0x261048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_26104c:
    // 0x26104c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26104cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261050:
    // 0x261050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x261050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261054:
    // 0x261054: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x261054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_261058:
    // 0x261058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x261058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_26105c:
    // 0x26105c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x26105cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_261060:
    // 0x261060: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x261060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261064:
    // 0x261064: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x261064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_261068:
    // 0x261068: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x261068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_26106c:
    // 0x26106c: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_261070:
    // 0x261070: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x261070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_261074:
    // 0x261074: 0x40f809  jalr        $v0
label_261078:
    if (ctx->pc == 0x261078u) {
        ctx->pc = 0x261078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261074u;
        // 0x261078: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26107Cu;
        goto label_26107c;
    }
    ctx->pc = 0x261074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26107Cu);
        ctx->pc = 0x261078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261074u;
        // 0x261078: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261074u, 0x26107Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26107Cu;
label_26107c:
    // 0x26107c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_261080:
    // 0x261080: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_261084:
    // 0x261084: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x261084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
label_261088:
    // 0x261088: 0x244832b0  addiu       $t0, $v0, 0x32B0
    ctx->pc = 0x261088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12976));
label_26108c:
    // 0x26108c: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x26108cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_261090:
    // 0x261090: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x261090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_261094:
    // 0x261094: 0xb083001f  sdl         $v1, 0x1F($a0)
    ctx->pc = 0x261094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_261098:
    // 0x261098: 0xb4830018  sdr         $v1, 0x18($a0)
    ctx->pc = 0x261098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_26109c:
    // 0x26109c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x26109cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2610a0:
    // 0x2610a0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_2610a4:
    // 0x2610a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2610a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2610a8:
    // 0x2610a8: 0x24a832d0  addiu       $t0, $a1, 0x32D0
    ctx->pc = 0x2610a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 13008));
label_2610ac:
    // 0x2610ac: 0x69090007  ldl         $t1, 0x7($t0)
    ctx->pc = 0x2610acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2610b0:
    // 0x2610b0: 0x6d090000  ldr         $t1, 0x0($t0)
    ctx->pc = 0x2610b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2610b4:
    // 0x2610b4: 0xb0890027  sdl         $t1, 0x27($a0)
    ctx->pc = 0x2610b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2610b8:
    // 0x2610b8: 0xb4890020  sdr         $t1, 0x20($a0)
    ctx->pc = 0x2610b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2610bc:
    // 0x2610bc: 0x246632b8  addiu       $a2, $v1, 0x32B8
    ctx->pc = 0x2610bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 12984));
label_2610c0:
    // 0x2610c0: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x2610c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2610c4:
    // 0x2610c4: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x2610c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2610c8:
    // 0x2610c8: 0xb209013f  sdl         $t1, 0x13F($s0)
    ctx->pc = 0x2610c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2610cc:
    // 0x2610cc: 0xb6090138  sdr         $t1, 0x138($s0)
    ctx->pc = 0x2610ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2610d0:
    // 0x2610d0: 0x244332d8  addiu       $v1, $v0, 0x32D8
    ctx->pc = 0x2610d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13016));
label_2610d4:
    // 0x2610d4: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x2610d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2610d8:
    // 0x2610d8: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x2610d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2610dc:
    // 0x2610dc: 0xb2070147  sdl         $a3, 0x147($s0)
    ctx->pc = 0x2610dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2610e0:
    // 0x2610e0: 0xb6070140  sdr         $a3, 0x140($s0)
    ctx->pc = 0x2610e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2610e4:
    // 0x2610e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2610e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2610e8:
    // 0x2610e8: 0x3e00008  jr          $ra
label_2610ec:
    if (ctx->pc == 0x2610ECu) {
        ctx->pc = 0x2610ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610E8u;
        // 0x2610ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610F0u;
        goto label_fallthrough_0x2610e8;
    }
    ctx->pc = 0x2610E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2610ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610E8u;
        // 0x2610ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2610e8:
    ctx->pc = 0x2610F0u;
}
