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

// Function: sub_002FE098
// Address: 0x2fe098 - 0x2fe0e8
void sub_002FE098_0x2fe098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE098_0x2fe098");
#endif

    switch (ctx->pc) {
        case 0x2fe0b8u: goto label_2fe0b8;
        default: break;
    }

    ctx->pc = 0x2fe098u;

    // 0x2fe098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe09c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe09cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fe0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fe0a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2fe0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0a8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FE0A8u;
    {
        const bool branch_taken_0x2fe0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0A8u;
        // 0x2fe0ac: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0a8) {
            ctx->pc = 0x2FE0D8u;
            goto label_2fe0d8;
        }
    }
    ctx->pc = 0x2FE0B0u;
    // 0x2fe0b0: 0xc0bf7b0  jal         func_2FDEC0
    ctx->pc = 0x2FE0B0u;
    SET_GPR_U32(ctx, 31, 0x2FE0B8u);
    ctx->pc = 0x2FDEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDEC0u, 0x2FE0B0u, 0x2FE0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE0B8u;
label_2fe0b8:
    // 0x2fe0b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fe0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fe0bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe0c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE0C0u;
    {
        const bool branch_taken_0x2fe0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0C0u;
        // 0x2fe0c4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe0c0) {
            ctx->pc = 0x2FE0D8u;
            goto label_2fe0d8;
        }
    }
    ctx->pc = 0x2FE0C8u;
    // 0x2fe0c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe0c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe0cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe0d0: 0x80bf80a  j           func_2FE028
    ctx->pc = 0x2FE0D0u;
    ctx->pc = 0x2FE0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE0D0u;
    // 0x2fe0d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE028u;
    sub_002FE028_0x2fe028(rdram, ctx, runtime); return;
    ctx->pc = 0x2FE0D8u;
label_2fe0d8:
    // 0x2fe0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fe0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe0dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fe0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fe0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE0E0u;
        // 0x2fe0e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE0E8u;
}
