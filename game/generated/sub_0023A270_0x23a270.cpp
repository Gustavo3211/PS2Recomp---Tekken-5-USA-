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

// Function: sub_0023A270
// Address: 0x23a270 - 0x23a310
void sub_0023A270_0x23a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A270_0x23a270");
#endif

    switch (ctx->pc) {
        case 0x23a29cu: goto label_23a29c;
        case 0x23a2a4u: goto label_23a2a4;
        case 0x23a2d0u: goto label_23a2d0;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a2e8u: goto label_23a2e8;
        default: break;
    }

    ctx->pc = 0x23a270u;

    // 0x23a270: 0x8f82c988  lw          $v0, -0x3678($gp)
    ctx->pc = 0x23a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953352)));
    // 0x23a274: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a27c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a284: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23A284u;
    {
        const bool branch_taken_0x23a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A284u;
        // 0x23a288: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a284) {
            ctx->pc = 0x23A2B0u;
            goto label_23a2b0;
        }
    }
    ctx->pc = 0x23A28Cu;
    // 0x23a28c: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x23a28cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
    // 0x23a290: 0x2630d680  addiu       $s0, $s1, -0x2980
    ctx->pc = 0x23a290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x23a294: 0xc08e840  jal         func_23A100
    ctx->pc = 0x23A294u;
    SET_GPR_U32(ctx, 31, 0x23A29Cu);
    ctx->pc = 0x23A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A294u;
    // 0x23a298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A100u, 0x23A294u, 0x23A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A29Cu;
label_23a29c:
    // 0x23a29c: 0xc08e840  jal         func_23A100
    ctx->pc = 0x23A29Cu;
    SET_GPR_U32(ctx, 31, 0x23A2A4u);
    ctx->pc = 0x23A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A29Cu;
    // 0x23a2a0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A100u, 0x23A29Cu, 0x23A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2A4u;
label_23a2a4:
    // 0x23a2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a2a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23A2A8u;
    {
        const bool branch_taken_0x23a2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2A8u;
        // 0x23a2ac: 0xaf82c988  sw          $v0, -0x3678($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2a8) {
            ctx->pc = 0x23A2B4u;
            goto label_23a2b4;
        }
    }
    ctx->pc = 0x23A2B0u;
label_23a2b0:
    // 0x23a2b0: 0x3c110016  lui         $s1, 0x16
    ctx->pc = 0x23a2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)22 << 16));
label_23a2b4:
    // 0x23a2b4: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x23a2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x23a2b8: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x23a2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x23a2bc: 0x2610d710  addiu       $s0, $s0, -0x28F0
    ctx->pc = 0x23a2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956816));
    // 0x23a2c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a2c8: 0xc08e852  jal         func_23A148
    ctx->pc = 0x23A2C8u;
    SET_GPR_U32(ctx, 31, 0x23A2D0u);
    ctx->pc = 0x23A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2C8u;
    // 0x23a2cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A148u, 0x23A2C8u, 0x23A2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2D0u;
label_23a2d0:
    // 0x23a2d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x23a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x23a2d4: 0xc08e852  jal         func_23A148
    ctx->pc = 0x23A2D4u;
    SET_GPR_U32(ctx, 31, 0x23A2DCu);
    ctx->pc = 0x23A2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2D4u;
    // 0x23a2d8: 0x26250048  addiu       $a1, $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A148u, 0x23A2D4u, 0x23A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2DCu;
label_23a2dc:
    // 0x23a2dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23a2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a2e0:
    // 0x23a2e0: 0xc08e88e  jal         func_23A238
    ctx->pc = 0x23A2E0u;
    SET_GPR_U32(ctx, 31, 0x23A2E8u);
    ctx->pc = 0x23A2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A2E0u;
    // 0x23a2e4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A238u, 0x23A2E0u, 0x23A2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A2E8u;
label_23a2e8:
    // 0x23a2e8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x23a2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a2ec: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23A2ECu;
    {
        const bool branch_taken_0x23a2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2ECu;
        // 0x23a2f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2ec) {
            ctx->pc = 0x23A2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a2e0;
        }
    }
    ctx->pc = 0x23A2F4u;
    // 0x23a2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a2f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a2fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a2fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a300: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a304: 0x3e00008  jr          $ra
    ctx->pc = 0x23A304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A304u;
        // 0x23a308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A30Cu;
    // 0x23a30c: 0x0  nop
    ctx->pc = 0x23a30cu;
    // NOP
    ctx->pc = 0x23a310u;
}
