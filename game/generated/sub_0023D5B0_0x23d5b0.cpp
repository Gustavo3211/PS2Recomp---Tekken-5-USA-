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

// Function: sub_0023D5B0
// Address: 0x23d5b0 - 0x23d5f8
void sub_0023D5B0_0x23d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D5B0_0x23d5b0");
#endif

    switch (ctx->pc) {
        case 0x23d5dcu: goto label_23d5dc;
        default: break;
    }

    ctx->pc = 0x23d5b0u;

    // 0x23d5b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d5b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d5b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23d5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d5c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d5c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23d5c8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x23d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d5cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23d5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5d0: 0x2444007e  addiu       $a0, $v0, 0x7E
    ctx->pc = 0x23d5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 126));
    // 0x23d5d4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x23D5D4u;
    SET_GPR_U32(ctx, 31, 0x23D5DCu);
    ctx->pc = 0x23D5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D5D4u;
    // 0x23d5d8: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x23D5D4u, 0x23D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D5DCu;
label_23d5dc:
    // 0x23d5dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d5dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5e0: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23D5E0u;
    {
        const bool branch_taken_0x23d5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d5e0) {
            ctx->pc = 0x23D5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D5E0u;
            // 0x23d5e4: 0x701021  addu        $v0, $v1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D5E8u;
            goto label_23d5e8;
        }
    }
    ctx->pc = 0x23D5E8u;
label_23d5e8:
    // 0x23d5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d5ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23d5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23d5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D5F0u;
        // 0x23d5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D5F8u;
}
