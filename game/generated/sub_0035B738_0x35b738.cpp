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

// Function: sub_0035B738
// Address: 0x35b738 - 0x35b7c0
void sub_0035B738_0x35b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B738_0x35b738");
#endif

    switch (ctx->pc) {
        case 0x35b768u: goto label_35b768;
        default: break;
    }

    ctx->pc = 0x35b738u;

    // 0x35b738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b73c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b744: 0x24451320  addiu       $a1, $v0, 0x1320
    ctx->pc = 0x35b744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b748: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x35b748u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1D1334u));
    // 0x35b74c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x35b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x35b750: 0x2c421001  sltiu       $v0, $v0, 0x1001
    ctx->pc = 0x35b750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4097) ? 1 : 0);
    // 0x35b754: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x35B754u;
    {
        const bool branch_taken_0x35b754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35b754) {
            ctx->pc = 0x35B758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B754u;
            // 0x35b758: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B770u;
            goto label_35b770;
        }
    }
    ctx->pc = 0x35B75Cu;
    // 0x35b75c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b760: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B760u;
    SET_GPR_U32(ctx, 31, 0x35B768u);
    ctx->pc = 0x35B764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B760u;
    // 0x35b764: 0x24845430  addiu       $a0, $a0, 0x5430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B760u, 0x35B768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B768u;
label_35b768:
    // 0x35b768: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35B768u;
    {
        const bool branch_taken_0x35b768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B768u;
        // 0x35b76c: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b768) {
            ctx->pc = 0x35B7ACu;
            goto label_35b7ac;
        }
    }
    ctx->pc = 0x35B770u;
label_35b770:
    // 0x35b770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35b770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b774: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35b774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35b778: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x35b778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35b77c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b780: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35b780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35b784: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x35b784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35b788: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x35b788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35b78c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x35b78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b790: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x35b790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b794: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x35b794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35b798: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x35b798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35b79c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b7a0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x35b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x35b7a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35b7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35b7a8: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x35b7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_35b7ac:
    // 0x35b7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b7b0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x35b7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B7B4u;
        // 0x35b7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B7BCu;
    // 0x35b7bc: 0x0  nop
    ctx->pc = 0x35b7bcu;
    // NOP
    ctx->pc = 0x35b7c0u;
}
