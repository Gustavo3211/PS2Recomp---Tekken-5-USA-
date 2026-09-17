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

// Function: sub_005000EC
// Address: 0x5000ec - 0x500188
void sub_005000EC_0x5000ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005000EC_0x5000ec");
#endif

    switch (ctx->pc) {
        case 0x5000fcu: goto label_5000fc;
        case 0x500100u: goto label_500100;
        case 0x500134u: goto label_500134;
        case 0x500138u: goto label_500138;
        default: break;
    }

    ctx->pc = 0x5000ecu;

    // 0x5000ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5000ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5000f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5000f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5000f4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x5000F4u;
    SET_GPR_U32(ctx, 31, 0x5000FCu);
    ctx->pc = 0x5000F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5000F4u;
    // 0x5000f8: 0x2484c6b8  addiu       $a0, $a0, -0x3948 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x5000F4u, 0x5000FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5000FCu;
label_5000fc:
    // 0x5000fc: 0x0  nop
    ctx->pc = 0x5000fcu;
    // NOP
label_500100:
    // 0x500100: 0x0  nop
    ctx->pc = 0x500100u;
    // NOP
    // 0x500104: 0x0  nop
    ctx->pc = 0x500104u;
    // NOP
    // 0x500108: 0x0  nop
    ctx->pc = 0x500108u;
    // NOP
    // 0x50010c: 0x0  nop
    ctx->pc = 0x50010cu;
    // NOP
    // 0x500110: 0x0  nop
    ctx->pc = 0x500110u;
    // NOP
    // 0x500114: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x500114u;
    {
        const bool branch_taken_0x500114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x500114) {
            ctx->pc = 0x500100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_500100;
        }
    }
    ctx->pc = 0x50011Cu;
    // 0x50011c: 0x0  nop
    ctx->pc = 0x50011cu;
    // NOP
    // 0x500120: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x500120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x500124: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x500124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x500128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x500128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50012c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x50012Cu;
    SET_GPR_U32(ctx, 31, 0x500134u);
    ctx->pc = 0x500130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50012Cu;
    // 0x500130: 0x2484c6d0  addiu       $a0, $a0, -0x3930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x50012Cu, 0x500134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x500134u;
label_500134:
    // 0x500134: 0x0  nop
    ctx->pc = 0x500134u;
    // NOP
label_500138:
    // 0x500138: 0x0  nop
    ctx->pc = 0x500138u;
    // NOP
    // 0x50013c: 0x0  nop
    ctx->pc = 0x50013cu;
    // NOP
    // 0x500140: 0x0  nop
    ctx->pc = 0x500140u;
    // NOP
    // 0x500144: 0x0  nop
    ctx->pc = 0x500144u;
    // NOP
    // 0x500148: 0x0  nop
    ctx->pc = 0x500148u;
    // NOP
    // 0x50014c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x50014Cu;
    {
        const bool branch_taken_0x50014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x50014c) {
            ctx->pc = 0x500138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_500138;
        }
    }
    ctx->pc = 0x500154u;
    // 0x500154: 0x0  nop
    ctx->pc = 0x500154u;
    // NOP
    // 0x500158: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x500158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50015c: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x50015cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x500160: 0x8c62a66c  lw          $v0, -0x5994($v1)
    ctx->pc = 0x500160u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EA66Cu));
    // 0x500164: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x500164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x500168: 0x8cc3a670  lw          $v1, -0x5990($a2)
    ctx->pc = 0x500168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA670u));
    // 0x50016c: 0x3e00008  jr          $ra
    ctx->pc = 0x50016Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50016Cu;
        // 0x500170: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50016Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500174u;
    // 0x500174: 0x0  nop
    ctx->pc = 0x500174u;
    // NOP
    // 0x500178: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x500178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50017c: 0x3e00008  jr          $ra
    ctx->pc = 0x50017Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x500180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50017Cu;
        // 0x500180: 0x8c62a668  lw          $v0, -0x5998($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944360)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50017Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x500184u;
    // 0x500184: 0x0  nop
    ctx->pc = 0x500184u;
    // NOP
    ctx->pc = 0x500188u;
}
