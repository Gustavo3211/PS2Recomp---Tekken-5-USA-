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

// Function: sub_0022C5D0
// Address: 0x22c5d0 - 0x22c680
void sub_0022C5D0_0x22c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C5D0_0x22c5d0");
#endif

    switch (ctx->pc) {
        case 0x22c5e8u: goto label_22c5e8;
        case 0x22c5f0u: goto label_22c5f0;
        case 0x22c60cu: goto label_22c60c;
        case 0x22c620u: goto label_22c620;
        case 0x22c648u: goto label_22c648;
        default: break;
    }

    ctx->pc = 0x22c5d0u;

    // 0x22c5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c5d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22c5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22c5dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22c5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22c5e0: 0xc08b114  jal         func_22C450
    ctx->pc = 0x22C5E0u;
    SET_GPR_U32(ctx, 31, 0x22C5E8u);
    ctx->pc = 0x22C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C450u, 0x22C5E0u, 0x22C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5E8u;
label_22c5e8:
    // 0x22c5e8: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x22C5E8u;
    SET_GPR_U32(ctx, 31, 0x22C5F0u);
    ctx->pc = 0x22C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C5E8u;
    // 0x22c5ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x22C5E8u, 0x22C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C5F0u;
label_22c5f0:
    // 0x22c5f0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22C5F0u;
    {
        const bool branch_taken_0x22c5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5F0u;
        // 0x22c5f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5f0) {
            ctx->pc = 0x22C670u;
            goto label_22c670;
        }
    }
    ctx->pc = 0x22C5F8u;
    // 0x22c5f8: 0x8c500050  lw          $s0, 0x50($v0)
    ctx->pc = 0x22c5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x22c5fc: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x22C5FCu;
    {
        const bool branch_taken_0x22c5fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C5FCu;
        // 0x22c600: 0x8c510054  lw          $s1, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c5fc) {
            ctx->pc = 0x22C66Cu;
            goto label_22c66c;
        }
    }
    ctx->pc = 0x22C604u;
    // 0x22c604: 0xc08b11a  jal         func_22C468
    ctx->pc = 0x22C604u;
    SET_GPR_U32(ctx, 31, 0x22C60Cu);
    ctx->pc = 0x22C468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C468u, 0x22C604u, 0x22C60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C60Cu;
label_22c60c:
    // 0x22c60c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x22c610: 0x24829288  addiu       $v0, $a0, -0x6D78
    ctx->pc = 0x22c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939272));
    // 0x22c614: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22c614u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x15928Cu));
    // 0x22c618: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22C618u;
    {
        const bool branch_taken_0x22c618 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C618u;
        // 0x22c61c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c618) {
            ctx->pc = 0x22C63Cu;
            goto label_22c63c;
        }
    }
    ctx->pc = 0x22C620u;
label_22c620:
    // 0x22c620: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22c620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22c624: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x22c624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x22c628: 0x0  nop
    ctx->pc = 0x22c628u;
    // NOP
    // 0x22c62c: 0x0  nop
    ctx->pc = 0x22c62cu;
    // NOP
    // 0x22c630: 0x0  nop
    ctx->pc = 0x22c630u;
    // NOP
    // 0x22c634: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C634u;
    {
        const bool branch_taken_0x22c634 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x22C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C634u;
        // 0x22c638: 0x24420040  addiu       $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c634) {
            ctx->pc = 0x22C620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c620;
        }
    }
    ctx->pc = 0x22C63Cu;
label_22c63c:
    // 0x22c63c: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x22C63Cu;
    {
        const bool branch_taken_0x22c63c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x22C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C63Cu;
        // 0x22c640: 0x8c839288  lw          $v1, -0x6D78($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c63c) {
            ctx->pc = 0x22C66Cu;
            goto label_22c66c;
        }
    }
    ctx->pc = 0x22C644u;
    // 0x22c644: 0x0  nop
    ctx->pc = 0x22c644u;
    // NOP
label_22c648:
    // 0x22c648: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x22c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x22c64c: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x22c64cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x22c650: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x22c650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x22c654: 0xa0600032  sb          $zero, 0x32($v1)
    ctx->pc = 0x22c654u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x22c658: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x22c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x22c65c: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x22c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x22c660: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x22c660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x22c664: 0x1e00fff8  bgtz        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22C664u;
    {
        const bool branch_taken_0x22c664 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x22C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C664u;
        // 0x22c668: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c664) {
            ctx->pc = 0x22C648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c648;
        }
    }
    ctx->pc = 0x22C66Cu;
label_22c66c:
    // 0x22c66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22c670:
    // 0x22c670: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22c670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22c674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c678: 0x3e00008  jr          $ra
    ctx->pc = 0x22C678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C678u;
        // 0x22c67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C680u;
}
