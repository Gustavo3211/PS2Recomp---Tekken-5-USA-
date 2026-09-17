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

// Function: sub_0035BBA0
// Address: 0x35bba0 - 0x35bc30
void sub_0035BBA0_0x35bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035BBA0_0x35bba0");
#endif

    switch (ctx->pc) {
        case 0x35bbd0u: goto label_35bbd0;
        default: break;
    }

    ctx->pc = 0x35bba0u;

    // 0x35bba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35bba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35bba4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35bba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35bba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35bbac: 0x24451320  addiu       $a1, $v0, 0x1320
    ctx->pc = 0x35bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35bbb0: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x35bbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1D1334u));
    // 0x35bbb4: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x35bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x35bbb8: 0x2c421001  sltiu       $v0, $v0, 0x1001
    ctx->pc = 0x35bbb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x35bbbc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35BBBCu;
    {
        const bool branch_taken_0x35bbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35bbbc) {
            ctx->pc = 0x35BBC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35BBBCu;
            // 0x35bbc0: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35BBD8u;
            goto label_35bbd8;
        }
    }
    ctx->pc = 0x35BBC4u;
    // 0x35bbc4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35bbc8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35BBC8u;
    SET_GPR_U32(ctx, 31, 0x35BBD0u);
    ctx->pc = 0x35BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BBC8u;
    // 0x35bbcc: 0x24845658  addiu       $a0, $a0, 0x5658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35BBC8u, 0x35BBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BBD0u;
label_35bbd0:
    // 0x35bbd0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35BBD0u;
    {
        const bool branch_taken_0x35bbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BBD0u;
        // 0x35bbd4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bbd0) {
            ctx->pc = 0x35BC1Cu;
            goto label_35bc1c;
        }
    }
    ctx->pc = 0x35BBD8u;
label_35bbd8:
    // 0x35bbd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35bbd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bbdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35bbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35bbe0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x35bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35bbe4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35bbe8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35bbec: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x35bbecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35bbf0: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x35bbf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35bbf4: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x35bbf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35bbf8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x35bbf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bbfc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x35bbfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35bc00: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x35bc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x35bc04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35bc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35bc08: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x35bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35bc0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35bc10: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x35bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x35bc14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35bc14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35bc18: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x35bc18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_35bc1c:
    // 0x35bc1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35bc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35bc20: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x35bc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35bc24: 0x3e00008  jr          $ra
    ctx->pc = 0x35BC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC24u;
        // 0x35bc28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BC2Cu;
    // 0x35bc2c: 0x0  nop
    ctx->pc = 0x35bc2cu;
    // NOP
    ctx->pc = 0x35bc30u;
}
