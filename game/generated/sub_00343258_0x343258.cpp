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

// Function: sub_00343258
// Address: 0x343258 - 0x3432a0
void sub_00343258_0x343258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343258_0x343258");
#endif

    ctx->pc = 0x343258u;

    // 0x343258: 0x51303  sra         $v0, $a1, 12
    ctx->pc = 0x343258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 12));
    // 0x34325c: 0x30a72000  andi        $a3, $a1, 0x2000
    ctx->pc = 0x34325cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x343260: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x343260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x343264: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x343264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x343268: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x343268u;
    {
        const bool branch_taken_0x343268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343268u;
        // 0x34326c: 0x30440001  andi        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x343268) {
            ctx->pc = 0x343290u;
            goto label_343290;
        }
    }
    ctx->pc = 0x343270u;
    // 0x343270: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x343270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343274: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x343274u;
    {
        const bool branch_taken_0x343274 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x343278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343274u;
        // 0x343278: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343274) {
            ctx->pc = 0x343288u;
            goto label_343288;
        }
    }
    ctx->pc = 0x34327Cu;
    // 0x34327c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x34327cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x343280: 0x3e00008  jr          $ra
    ctx->pc = 0x343280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343280u;
        // 0x343284: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343288u;
label_343288:
    // 0x343288: 0x3e00008  jr          $ra
    ctx->pc = 0x343288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34328Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343288u;
        // 0x34328c: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343290u;
label_343290:
    // 0x343290: 0x30a32000  andi        $v1, $a1, 0x2000
    ctx->pc = 0x343290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x343294: 0x34820004  ori         $v0, $a0, 0x4
    ctx->pc = 0x343294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x343298: 0x3e00008  jr          $ra
    ctx->pc = 0x343298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343298u;
        // 0x34329c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3432A0u;
}
