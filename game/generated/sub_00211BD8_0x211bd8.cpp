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

// Function: sub_00211BD8
// Address: 0x211bd8 - 0x211c10
void sub_00211BD8_0x211bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211BD8_0x211bd8");
#endif

    switch (ctx->pc) {
        case 0x211be8u: goto label_211be8;
        default: break;
    }

    ctx->pc = 0x211bd8u;

    // 0x211bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211be0: 0xc08215c  jal         func_208570
    ctx->pc = 0x211BE0u;
    SET_GPR_U32(ctx, 31, 0x211BE8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x211BE0u, 0x211BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211BE8u;
label_211be8:
    // 0x211be8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211bf0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x211bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x211bf4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x211bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x211bf8: 0x8c224d98  lw          $v0, 0x4D98($at)
    ctx->pc = 0x211bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x211bfc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x211bfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x211c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x211c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x211c04: 0x3e00008  jr          $ra
    ctx->pc = 0x211C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211C04u;
        // 0x211c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211C0Cu;
    // 0x211c0c: 0x0  nop
    ctx->pc = 0x211c0cu;
    // NOP
    ctx->pc = 0x211c10u;
}
