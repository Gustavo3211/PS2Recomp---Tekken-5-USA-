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

// Function: sub_00344B90
// Address: 0x344b90 - 0x344bd8
void sub_00344B90_0x344b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344B90_0x344b90");
#endif

    switch (ctx->pc) {
        case 0x344bacu: goto label_344bac;
        case 0x344bc0u: goto label_344bc0;
        default: break;
    }

    ctx->pc = 0x344b90u;

    // 0x344b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344ba0: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344ba0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344ba4: 0xc042fd0  jal         func_10BF40
    ctx->pc = 0x344BA4u;
    SET_GPR_U32(ctx, 31, 0x344BACu);
    ctx->pc = 0x344BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BA4u;
    // 0x344ba8: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF40u, 0x344BA4u, 0x344BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BACu;
label_344bac:
    // 0x344bac: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x344bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x344bb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x344bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x344bb4: 0x24840730  addiu       $a0, $a0, 0x730
    ctx->pc = 0x344bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1840));
    // 0x344bb8: 0xc0cb174  jal         func_32C5D0
    ctx->pc = 0x344BB8u;
    SET_GPR_U32(ctx, 31, 0x344BC0u);
    ctx->pc = 0x344BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BB8u;
    // 0x344bbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5D0u, 0x344BB8u, 0x344BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BC0u;
label_344bc0:
    // 0x344bc0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x344bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x344bc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x344BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BCCu;
        // 0x344bd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344BD4u;
    // 0x344bd4: 0x0  nop
    ctx->pc = 0x344bd4u;
    // NOP
    ctx->pc = 0x344bd8u;
}
