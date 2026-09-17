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

// Function: sub_004E004C
// Address: 0x4e004c - 0x4e00a0
void sub_004E004C_0x4e004c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E004C_0x4e004c");
#endif

    switch (ctx->pc) {
        case 0x4e0070u: goto label_4e0070;
        default: break;
    }

    ctx->pc = 0x4e004cu;

    // 0x4e004c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4e004cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0050: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4e0050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e0054: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4e0054u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e0058: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4e0058u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e005c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4e005cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e0060: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4e0060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4e0064: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4E0064u;
    ctx->pc = 0x4E0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E0064u;
    // 0x4e0068: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4E006Cu;
    // 0x4e006c: 0x0  nop
    ctx->pc = 0x4e006cu;
    // NOP
label_4e0070:
    // 0x4e0070: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4e0070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e0074: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4e0074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e0078: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4e0078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e007c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4e007cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e0080: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4e0080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e0084: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4e0084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e0088: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4e0088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e008c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4e008cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4e0090: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4e0090u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e0094: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x4e0094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4e0098: 0x3e00008  jr          $ra
    ctx->pc = 0x4E0098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E0098u;
        // 0x4e009c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E0098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E00A0u;
}
