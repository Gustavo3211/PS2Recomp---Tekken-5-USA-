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

// Function: sub_00211B68
// Address: 0x211b68 - 0x211ba0
void sub_00211B68_0x211b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211B68_0x211b68");
#endif

    switch (ctx->pc) {
        case 0x211b78u: goto label_211b78;
        default: break;
    }

    ctx->pc = 0x211b68u;

    // 0x211b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211b70: 0xc08215c  jal         func_208570
    ctx->pc = 0x211B70u;
    SET_GPR_U32(ctx, 31, 0x211B78u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x211B70u, 0x211B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211B78u;
label_211b78:
    // 0x211b78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211b80: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x211b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x211b84: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x211b84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x211b88: 0x8c224d98  lw          $v0, 0x4D98($at)
    ctx->pc = 0x211b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x211b8c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x211b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x211b90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211b94: 0x3e00008  jr          $ra
    ctx->pc = 0x211B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211B94u;
        // 0x211b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211B9Cu;
    // 0x211b9c: 0x0  nop
    ctx->pc = 0x211b9cu;
    // NOP
    ctx->pc = 0x211ba0u;
}
