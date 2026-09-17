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

// Function: sub_00331150
// Address: 0x331150 - 0x3311f8
void sub_00331150_0x331150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331150_0x331150");
#endif

    switch (ctx->pc) {
        case 0x331178u: goto label_331178;
        case 0x331188u: goto label_331188;
        case 0x331190u: goto label_331190;
        case 0x3311a8u: goto label_3311a8;
        case 0x3311b0u: goto label_3311b0;
        case 0x3311b8u: goto label_3311b8;
        case 0x3311c0u: goto label_3311c0;
        case 0x3311d0u: goto label_3311d0;
        case 0x3311d8u: goto label_3311d8;
        case 0x3311e0u: goto label_3311e0;
        default: break;
    }

    ctx->pc = 0x331150u;

    // 0x331150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33115c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33115cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x331164: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x331164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331168: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x331168u;
    {
        const bool branch_taken_0x331168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331168u;
        // 0x33116c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331168) {
            ctx->pc = 0x3311E4u;
            goto label_3311e4;
        }
    }
    ctx->pc = 0x331170u;
    // 0x331170: 0xc0cc488  jal         func_331220
    ctx->pc = 0x331170u;
    SET_GPR_U32(ctx, 31, 0x331178u);
    ctx->pc = 0x331220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331220u, 0x331170u, 0x331178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331178u;
label_331178:
    // 0x331178: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x331178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33117c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33117Cu;
    {
        const bool branch_taken_0x33117c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33117Cu;
        // 0x331180: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33117c) {
            ctx->pc = 0x3311A0u;
            goto label_3311a0;
        }
    }
    ctx->pc = 0x331184u;
    // 0x331184: 0x0  nop
    ctx->pc = 0x331184u;
    // NOP
label_331188:
    // 0x331188: 0xc046226  jal         func_118898
    ctx->pc = 0x331188u;
    SET_GPR_U32(ctx, 31, 0x331190u);
    ctx->pc = 0x33118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331188u;
    // 0x33118c: 0x26243148  addiu       $a0, $s1, 0x3148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x331188u, 0x331190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331190u;
label_331190:
    // 0x331190: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x331190u;
    {
        const bool branch_taken_0x331190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331190) {
            ctx->pc = 0x331188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331188;
        }
    }
    ctx->pc = 0x331198u;
    // 0x331198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x331198u;
    {
        const bool branch_taken_0x331198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331198) {
            ctx->pc = 0x3311B8u;
            goto label_3311b8;
        }
    }
    ctx->pc = 0x3311A0u;
label_3311a0:
    // 0x3311a0: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x3311a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x3311a4: 0x0  nop
    ctx->pc = 0x3311a4u;
    // NOP
label_3311a8:
    // 0x3311a8: 0xc046226  jal         func_118898
    ctx->pc = 0x3311A8u;
    SET_GPR_U32(ctx, 31, 0x3311B0u);
    ctx->pc = 0x3311ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3311A8u;
    // 0x3311ac: 0x26243160  addiu       $a0, $s1, 0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x3311A8u, 0x3311B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311B0u;
label_3311b0:
    // 0x3311b0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3311B0u;
    {
        const bool branch_taken_0x3311b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311b0) {
            ctx->pc = 0x3311A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3311a8;
        }
    }
    ctx->pc = 0x3311B8u;
label_3311b8:
    // 0x3311b8: 0xc046212  jal         func_118848
    ctx->pc = 0x3311B8u;
    SET_GPR_U32(ctx, 31, 0x3311C0u);
    ctx->pc = 0x118848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118848u, 0x3311B8u, 0x3311C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311C0u;
label_3311c0:
    // 0x3311c0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3311C0u;
    {
        const bool branch_taken_0x3311c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3311c0) {
            ctx->pc = 0x3311B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3311b8;
        }
    }
    ctx->pc = 0x3311C8u;
    // 0x3311c8: 0xc0cc47e  jal         func_3311F8
    ctx->pc = 0x3311C8u;
    SET_GPR_U32(ctx, 31, 0x3311D0u);
    ctx->pc = 0x3311CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3311C8u;
    // 0x3311cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3311F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3311F8u, 0x3311C8u, 0x3311D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311D0u;
label_3311d0:
    // 0x3311d0: 0xc045ebe  jal         func_117AF8
    ctx->pc = 0x3311D0u;
    SET_GPR_U32(ctx, 31, 0x3311D8u);
    ctx->pc = 0x117AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AF8u, 0x3311D0u, 0x3311D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311D8u;
label_3311d8:
    // 0x3311d8: 0xc0450a2  jal         func_114288
    ctx->pc = 0x3311D8u;
    SET_GPR_U32(ctx, 31, 0x3311E0u);
    ctx->pc = 0x114288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114288u, 0x3311D8u, 0x3311E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3311E0u;
label_3311e0:
    // 0x3311e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3311e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3311e4:
    // 0x3311e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3311e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3311e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3311e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3311ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3311ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3311f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3311F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3311F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3311F0u;
        // 0x3311f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3311F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3311F8u;
}
