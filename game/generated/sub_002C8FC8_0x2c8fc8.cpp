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

// Function: sub_002C8FC8
// Address: 0x2c8fc8 - 0x2c9028
void sub_002C8FC8_0x2c8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8FC8_0x2c8fc8");
#endif

    switch (ctx->pc) {
        case 0x2c9018u: goto label_2c9018;
        default: break;
    }

    ctx->pc = 0x2c8fc8u;

    // 0x2c8fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8fcc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c8fd0: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8FD0u;
    {
        const bool branch_taken_0x2c8fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FD0u;
        // 0x2c8fd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fd0) {
            ctx->pc = 0x2C9018u;
            goto label_2c9018;
        }
    }
    ctx->pc = 0x2C8FD8u;
    // 0x2c8fd8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8fdc: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2c8fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2c8fe0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8fe4: 0x24638d38  addiu       $v1, $v1, -0x72C8
    ctx->pc = 0x2c8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937912));
    // 0x2c8fe8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c8fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8fec: 0x2464ffd8  addiu       $a0, $v1, -0x28
    ctx->pc = 0x2c8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x2c8ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8ff4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2c8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8ffc: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x2c8ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2c9000: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x2c9000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2c9004: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c9008: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2c9008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c900c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2c900cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2c9010: 0xc0b244e  jal         func_2C9138
    ctx->pc = 0x2C9010u;
    SET_GPR_U32(ctx, 31, 0x2C9018u);
    ctx->pc = 0x2C9014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9010u;
    // 0x2c9014: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9138u, 0x2C9010u, 0x2C9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9018u;
label_2c9018:
    // 0x2c9018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c901c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C901Cu;
        // 0x2c9020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9024u;
    // 0x2c9024: 0x0  nop
    ctx->pc = 0x2c9024u;
    // NOP
    ctx->pc = 0x2c9028u;
}
