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

// Function: sub_0021FEE0
// Address: 0x21fee0 - 0x21ff28
void sub_0021FEE0_0x21fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FEE0_0x21fee0");
#endif

    switch (ctx->pc) {
        case 0x21fef4u: goto label_21fef4;
        default: break;
    }

    ctx->pc = 0x21fee0u;

    // 0x21fee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21fee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21fee4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fee8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21feec: 0xc086438  jal         func_2190E0
    ctx->pc = 0x21FEECu;
    SET_GPR_U32(ctx, 31, 0x21FEF4u);
    ctx->pc = 0x21FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FEECu;
    // 0x21fef0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190E0u, 0x21FEECu, 0x21FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FEF4u;
label_21fef4:
    // 0x21fef4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21fef4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fef8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x21fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x21fefc: 0x2c63001e  sltiu       $v1, $v1, 0x1E
    ctx->pc = 0x21fefcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21ff00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21FF00u;
    {
        const bool branch_taken_0x21ff00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF00u;
        // 0x21ff04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ff00) {
            ctx->pc = 0x21FF18u;
            goto label_21ff18;
        }
    }
    ctx->pc = 0x21FF08u;
    // 0x21ff08: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x21ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x21ff0c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21ff10: 0x8c428e64  lw          $v0, -0x719C($v0)
    ctx->pc = 0x21ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938212)));
    // 0x21ff14: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x21ff14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21ff18:
    // 0x21ff18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ff18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ff1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21ff1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x21FF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF20u;
        // 0x21ff24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FF28u;
}
