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

// Function: sub_00121CA8
// Address: 0x121ca8 - 0x121ce0
void sub_00121CA8_0x121ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121CA8_0x121ca8");
#endif

    switch (ctx->pc) {
        case 0x121cbcu: goto label_121cbc;
        default: break;
    }

    ctx->pc = 0x121ca8u;

    // 0x121ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121cb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x121cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x121cb4: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x121CB4u;
    SET_GPR_U32(ctx, 31, 0x121CBCu);
    ctx->pc = 0x121CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CB4u;
    // 0x121cb8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x121CB4u, 0x121CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CBCu;
label_121cbc:
    // 0x121cbc: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x121cbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x121cc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x121cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121cc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x121cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x121CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CCCu;
        // 0x121cd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121CD4u;
    // 0x121cd4: 0x0  nop
    ctx->pc = 0x121cd4u;
    // NOP
    // 0x121cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x121CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121CE0u;
}
