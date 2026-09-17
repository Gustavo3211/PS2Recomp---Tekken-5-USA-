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

// Function: sub_002DD950
// Address: 0x2dd950 - 0x2dd978
void sub_002DD950_0x2dd950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD950_0x2dd950");
#endif

    ctx->pc = 0x2dd950u;

    // 0x2dd950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd954: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD954u;
    {
        const bool branch_taken_0x2dd954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD954u;
        // 0x2dd958: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd954) {
            ctx->pc = 0x2DD970u;
            goto label_2dd970;
        }
    }
    ctx->pc = 0x2DD95Cu;
    // 0x2dd95c: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD95Cu;
    {
        const bool branch_taken_0x2dd95c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD95Cu;
        // 0x2dd960: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd95c) {
            ctx->pc = 0x2DD970u;
            goto label_2dd970;
        }
    }
    ctx->pc = 0x2DD964u;
    // 0x2dd964: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dd964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd968: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2dd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2dd96c: 0x46180b  movn        $v1, $v0, $a2
    ctx->pc = 0x2dd96cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_2dd970:
    // 0x2dd970: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD970u;
        // 0x2dd974: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD978u;
}
