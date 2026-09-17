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

// Function: sub_0048F150
// Address: 0x48f150 - 0x48f1e8
void sub_0048F150_0x48f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F150_0x48f150");
#endif

    switch (ctx->pc) {
        case 0x48f174u: goto label_48f174;
        case 0x48f188u: goto label_48f188;
        case 0x48f190u: goto label_48f190;
        case 0x48f1a8u: goto label_48f1a8;
        case 0x48f1b8u: goto label_48f1b8;
        case 0x48f1d4u: goto label_48f1d4;
        default: break;
    }

    ctx->pc = 0x48f150u;

    // 0x48f150: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48f150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48f154: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48f154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48f158: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f15c: 0x2484f650  addiu       $a0, $a0, -0x9B0
    ctx->pc = 0x48f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964816));
    // 0x48f160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48f160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48f164: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48f168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48f16c: 0xc04a151  jal         func_128544
    ctx->pc = 0x48F16Cu;
    SET_GPR_U32(ctx, 31, 0x48F174u);
    ctx->pc = 0x48F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F16Cu;
    // 0x48f170: 0x24061e00  addiu       $a2, $zero, 0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x48F16Cu, 0x48F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F174u;
label_48f174:
    // 0x48f174: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x48f174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x48f178: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48f178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f17c: 0x24841450  addiu       $a0, $a0, 0x1450
    ctx->pc = 0x48f17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5200));
    // 0x48f180: 0xc04a151  jal         func_128544
    ctx->pc = 0x48F180u;
    SET_GPR_U32(ctx, 31, 0x48F188u);
    ctx->pc = 0x48F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F180u;
    // 0x48f184: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x48F180u, 0x48F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F188u;
label_48f188:
    // 0x48f188: 0xc1232ea  jal         func_48CBA8
    ctx->pc = 0x48F188u;
    SET_GPR_U32(ctx, 31, 0x48F190u);
    ctx->pc = 0x48CBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBA8u, 0x48F188u, 0x48F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F190u;
label_48f190:
    // 0x48f190: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x48f190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x48f194: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x48f194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x48f198: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x48f198u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48f19c: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x48F19Cu;
    {
        const bool branch_taken_0x48f19c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x48f19c) {
            ctx->pc = 0x48F1CCu;
            goto label_48f1cc;
        }
    }
    ctx->pc = 0x48F1A4u;
    // 0x48f1a4: 0x241100db  addiu       $s1, $zero, 0xDB
    ctx->pc = 0x48f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
label_48f1a8:
    // 0x48f1a8: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x48F1A8u;
    {
        const bool branch_taken_0x48f1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x48f1a8) {
            ctx->pc = 0x48F1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48F1A8u;
            // 0x48f1ac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48F1BCu;
            goto label_48f1bc;
        }
    }
    ctx->pc = 0x48F1B0u;
    // 0x48f1b0: 0xc123392  jal         func_48CE48
    ctx->pc = 0x48F1B0u;
    SET_GPR_U32(ctx, 31, 0x48F1B8u);
    ctx->pc = 0x48F1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F1B0u;
    // 0x48f1b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x48F1B0u, 0x48F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F1B8u;
label_48f1b8:
    // 0x48f1b8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x48f1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48f1bc:
    // 0x48f1bc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x48f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x48f1c0: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x48f1c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48f1c4: 0x441fff8  bgez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x48F1C4u;
    {
        const bool branch_taken_0x48f1c4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x48f1c4) {
            ctx->pc = 0x48F1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48f1a8;
        }
    }
    ctx->pc = 0x48F1CCu;
label_48f1cc:
    // 0x48f1cc: 0xc140eda  jal         func_503B68
    ctx->pc = 0x48F1CCu;
    SET_GPR_U32(ctx, 31, 0x48F1D4u);
    ctx->pc = 0x503B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B68u, 0x48F1CCu, 0x48F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F1D4u;
label_48f1d4:
    // 0x48f1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48f1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f1d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48f1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48f1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48f1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48f1e0: 0x8140ecc  j           func_503B30
    ctx->pc = 0x48F1E0u;
    ctx->pc = 0x48F1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F1E0u;
    // 0x48f1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503B30u;
    sub_00503B30_0x503b30(rdram, ctx, runtime); return;
    ctx->pc = 0x48F1E8u;
}
