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

// Function: sub_00333CA0
// Address: 0x333ca0 - 0x333ce0
void sub_00333CA0_0x333ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333CA0_0x333ca0");
#endif

    switch (ctx->pc) {
        case 0x333cb4u: goto label_333cb4;
        case 0x333cc4u: goto label_333cc4;
        case 0x333cccu: goto label_333ccc;
        default: break;
    }

    ctx->pc = 0x333ca0u;

    // 0x333ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x333ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x333ca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x333ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x333cac: 0xc0d15e4  jal         func_345790
    ctx->pc = 0x333CACu;
    SET_GPR_U32(ctx, 31, 0x333CB4u);
    ctx->pc = 0x333CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CACu;
    // 0x333cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345790u, 0x333CACu, 0x333CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CB4u;
label_333cb4:
    // 0x333cb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x333CB4u;
    {
        const bool branch_taken_0x333cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x333CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CB4u;
        // 0x333cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333cb4) {
            ctx->pc = 0x333CD0u;
            goto label_333cd0;
        }
    }
    ctx->pc = 0x333CBCu;
    // 0x333cbc: 0xc0ccf76  jal         func_333DD8
    ctx->pc = 0x333CBCu;
    SET_GPR_U32(ctx, 31, 0x333CC4u);
    ctx->pc = 0x333DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333DD8u, 0x333CBCu, 0x333CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CC4u;
label_333cc4:
    // 0x333cc4: 0xc0ccffe  jal         func_333FF8
    ctx->pc = 0x333CC4u;
    SET_GPR_U32(ctx, 31, 0x333CCCu);
    ctx->pc = 0x333CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333CC4u;
    // 0x333cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x333FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x333FF8u, 0x333CC4u, 0x333CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333CCCu;
label_333ccc:
    // 0x333ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333cd0:
    // 0x333cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333cd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x333cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x333CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333CD8u;
        // 0x333cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333CE0u;
}
