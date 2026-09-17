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

// Function: sub_00342B80
// Address: 0x342b80 - 0x342be8
void sub_00342B80_0x342b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342B80_0x342b80");
#endif

    switch (ctx->pc) {
        case 0x342b94u: goto label_342b94;
        case 0x342b9cu: goto label_342b9c;
        case 0x342ba4u: goto label_342ba4;
        case 0x342bacu: goto label_342bac;
        case 0x342bb4u: goto label_342bb4;
        case 0x342bbcu: goto label_342bbc;
        case 0x342bc4u: goto label_342bc4;
        case 0x342bccu: goto label_342bcc;
        case 0x342bd4u: goto label_342bd4;
        default: break;
    }

    ctx->pc = 0x342b80u;

    // 0x342b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342b88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342b8c: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342B8Cu;
    SET_GPR_U32(ctx, 31, 0x342B94u);
    ctx->pc = 0x342B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B8Cu;
    // 0x342b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342B8Cu, 0x342B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B94u;
label_342b94:
    // 0x342b94: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342B94u;
    SET_GPR_U32(ctx, 31, 0x342B9Cu);
    ctx->pc = 0x342B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B94u;
    // 0x342b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342B94u, 0x342B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B9Cu;
label_342b9c:
    // 0x342b9c: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342B9Cu;
    SET_GPR_U32(ctx, 31, 0x342BA4u);
    ctx->pc = 0x342BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B9Cu;
    // 0x342ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342B9Cu, 0x342BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BA4u;
label_342ba4:
    // 0x342ba4: 0xc0d094c  jal         func_342530
    ctx->pc = 0x342BA4u;
    SET_GPR_U32(ctx, 31, 0x342BACu);
    ctx->pc = 0x342BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BA4u;
    // 0x342ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x342BA4u, 0x342BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BACu;
label_342bac:
    // 0x342bac: 0xc0d0958  jal         func_342560
    ctx->pc = 0x342BACu;
    SET_GPR_U32(ctx, 31, 0x342BB4u);
    ctx->pc = 0x342BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BACu;
    // 0x342bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x342BACu, 0x342BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BB4u;
label_342bb4:
    // 0x342bb4: 0xc0d0964  jal         func_342590
    ctx->pc = 0x342BB4u;
    SET_GPR_U32(ctx, 31, 0x342BBCu);
    ctx->pc = 0x342BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BB4u;
    // 0x342bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x342BB4u, 0x342BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BBCu;
label_342bbc:
    // 0x342bbc: 0xc0d0970  jal         func_3425C0
    ctx->pc = 0x342BBCu;
    SET_GPR_U32(ctx, 31, 0x342BC4u);
    ctx->pc = 0x342BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BBCu;
    // 0x342bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3425C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3425C0u, 0x342BBCu, 0x342BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BC4u;
label_342bc4:
    // 0x342bc4: 0xc0d09ac  jal         func_3426B0
    ctx->pc = 0x342BC4u;
    SET_GPR_U32(ctx, 31, 0x342BCCu);
    ctx->pc = 0x342BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BC4u;
    // 0x342bc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3426B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3426B0u, 0x342BC4u, 0x342BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BCCu;
label_342bcc:
    // 0x342bcc: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342BCCu;
    SET_GPR_U32(ctx, 31, 0x342BD4u);
    ctx->pc = 0x342BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BCCu;
    // 0x342bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342BCCu, 0x342BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BD4u;
label_342bd4:
    // 0x342bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342bd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x342BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BDCu;
        // 0x342be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342BE4u;
    // 0x342be4: 0x0  nop
    ctx->pc = 0x342be4u;
    // NOP
    ctx->pc = 0x342be8u;
}
