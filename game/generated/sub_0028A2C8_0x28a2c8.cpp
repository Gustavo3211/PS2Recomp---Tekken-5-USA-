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

// Function: sub_0028A2C8
// Address: 0x28a2c8 - 0x28a380
void sub_0028A2C8_0x28a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A2C8_0x28a2c8");
#endif

    switch (ctx->pc) {
        case 0x28a2f0u: goto label_28a2f0;
        case 0x28a328u: goto label_28a328;
        case 0x28a330u: goto label_28a330;
        case 0x28a350u: goto label_28a350;
        case 0x28a358u: goto label_28a358;
        default: break;
    }

    ctx->pc = 0x28a2c8u;

    // 0x28a2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28a2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28a2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28a2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28a2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28a2dc: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x28a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x28a2e0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28A2E0u;
    {
        const bool branch_taken_0x28a2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2E0u;
        // 0x28a2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2e0) {
            ctx->pc = 0x28A308u;
            goto label_28a308;
        }
    }
    ctx->pc = 0x28A2E8u;
    // 0x28a2e8: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A2E8u;
    SET_GPR_U32(ctx, 31, 0x28A2F0u);
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A2E8u, 0x28A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A2F0u;
label_28a2f0:
    // 0x28a2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a2f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a2f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a2fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a300: 0x80a2870  j           func_28A1C0
    ctx->pc = 0x28A300u;
    ctx->pc = 0x28A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A300u;
    // 0x28a304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1C0u;
    sub_0028A1C0_0x28a1c0(rdram, ctx, runtime); return;
    ctx->pc = 0x28A308u;
label_28a308:
    // 0x28a308: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28A308u;
    {
        const bool branch_taken_0x28a308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a308) {
            ctx->pc = 0x28A348u;
            goto label_28a348;
        }
    }
    ctx->pc = 0x28A310u;
    // 0x28a310: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28a310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28a314: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x28a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x28a318: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28a318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28a31c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A31Cu;
    {
        const bool branch_taken_0x28a31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a31c) {
            ctx->pc = 0x28A33Cu;
            goto label_28a33c;
        }
    }
    ctx->pc = 0x28A324u;
    // 0x28a324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28a324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28a328:
    // 0x28a328: 0xc043cb0  jal         func_10F2C0
    ctx->pc = 0x28A328u;
    SET_GPR_U32(ctx, 31, 0x28A330u);
    ctx->pc = 0x10F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C0u, 0x28A328u, 0x28A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A330u;
label_28a330:
    // 0x28a330: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x28a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x28a334: 0x1071fffc  beq         $v1, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x28A334u;
    {
        const bool branch_taken_0x28a334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x28a334) {
            ctx->pc = 0x28A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a328;
        }
    }
    ctx->pc = 0x28A33Cu;
label_28a33c:
    // 0x28a33c: 0x462000c  bltzl       $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28A33Cu;
    {
        const bool branch_taken_0x28a33c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x28a33c) {
            ctx->pc = 0x28A340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A33Cu;
            // 0x28a340: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A370u;
            goto label_28a370;
        }
    }
    ctx->pc = 0x28A344u;
    // 0x28a344: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x28a344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_28a348:
    // 0x28a348: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x28A348u;
    SET_GPR_U32(ctx, 31, 0x28A350u);
    ctx->pc = 0x28A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A348u;
    // 0x28a34c: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x28A348u, 0x28A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A350u;
label_28a350:
    // 0x28a350: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A350u;
    SET_GPR_U32(ctx, 31, 0x28A358u);
    ctx->pc = 0x28A354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A350u;
    // 0x28a354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A350u, 0x28A358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A358u;
label_28a358:
    // 0x28a358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a368: 0x80a2870  j           func_28A1C0
    ctx->pc = 0x28A368u;
    ctx->pc = 0x28A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A368u;
    // 0x28a36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A1C0u;
    sub_0028A1C0_0x28a1c0(rdram, ctx, runtime); return;
    ctx->pc = 0x28A370u;
label_28a370:
    // 0x28a370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28a370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a378: 0x3e00008  jr          $ra
    ctx->pc = 0x28A378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A378u;
        // 0x28a37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A380u;
}
