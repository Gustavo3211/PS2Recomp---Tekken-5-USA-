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

// Function: sub_00100EA0
// Address: 0x100ea0 - 0x100ed8
void sub_00100EA0_0x100ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100EA0_0x100ea0");
#endif

    switch (ctx->pc) {
        case 0x100eb8u: goto label_100eb8;
        default: break;
    }

    ctx->pc = 0x100ea0u;

    // 0x100ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100ea4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x100ea8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100EA8u;
    {
        const bool branch_taken_0x100ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x100EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EA8u;
        // 0x100eac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ea8) {
            ctx->pc = 0x100EC8u;
            goto label_100ec8;
        }
    }
    ctx->pc = 0x100EB0u;
    // 0x100eb0: 0xc04017a  jal         func_1005E8
    ctx->pc = 0x100EB0u;
    SET_GPR_U32(ctx, 31, 0x100EB8u);
    ctx->pc = 0x1005E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E8u, 0x100EB0u, 0x100EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EB8u;
label_100eb8:
    // 0x100eb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100ebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ec0: 0x8040320  j           func_100C80
    ctx->pc = 0x100EC0u;
    ctx->pc = 0x100EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EC0u;
    // 0x100ec4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100C80u;
    sub_00100C80_0x100c80(rdram, ctx, runtime); return;
    ctx->pc = 0x100EC8u;
label_100ec8:
    // 0x100ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x100ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ECCu;
        // 0x100ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100ED4u;
    // 0x100ed4: 0x0  nop
    ctx->pc = 0x100ed4u;
    // NOP
    ctx->pc = 0x100ed8u;
}
