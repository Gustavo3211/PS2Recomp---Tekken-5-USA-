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

// Function: sub_0035B7C0
// Address: 0x35b7c0 - 0x35b850
void sub_0035B7C0_0x35b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B7C0_0x35b7c0");
#endif

    switch (ctx->pc) {
        case 0x35b7f0u: goto label_35b7f0;
        default: break;
    }

    ctx->pc = 0x35b7c0u;

    // 0x35b7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b7c4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b7cc: 0x24451320  addiu       $a1, $v0, 0x1320
    ctx->pc = 0x35b7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b7d0: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x35b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1D1334u));
    // 0x35b7d4: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x35b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x35b7d8: 0x2c421001  sltiu       $v0, $v0, 0x1001
    ctx->pc = 0x35b7d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x35b7dc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B7DCu;
    {
        const bool branch_taken_0x35b7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b7dc) {
            ctx->pc = 0x35B7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B7DCu;
            // 0x35b7e0: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B7F8u;
            goto label_35b7f8;
        }
    }
    ctx->pc = 0x35B7E4u;
    // 0x35b7e4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b7e8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B7E8u;
    SET_GPR_U32(ctx, 31, 0x35B7F0u);
    ctx->pc = 0x35B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B7E8u;
    // 0x35b7ec: 0x24845458  addiu       $a0, $a0, 0x5458 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B7E8u, 0x35B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B7F0u;
label_35b7f0:
    // 0x35b7f0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x35B7F0u;
    {
        const bool branch_taken_0x35b7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B7F0u;
        // 0x35b7f4: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b7f0) {
            ctx->pc = 0x35B83Cu;
            goto label_35b83c;
        }
    }
    ctx->pc = 0x35B7F8u;
label_35b7f8:
    // 0x35b7f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x35b7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b7fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b800: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x35b800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35b804: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b808: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35b80c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x35b80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35b810: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x35b810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35b814: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x35b814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35b818: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x35b818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b81c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x35b81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b820: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x35b820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x35b824: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35b824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35b828: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x35b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35b82c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b830: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x35b830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x35b834: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35b834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35b838: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x35b838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_35b83c:
    // 0x35b83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b840: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x35b840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b844: 0x3e00008  jr          $ra
    ctx->pc = 0x35B844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B844u;
        // 0x35b848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B84Cu;
    // 0x35b84c: 0x0  nop
    ctx->pc = 0x35b84cu;
    // NOP
    ctx->pc = 0x35b850u;
}
