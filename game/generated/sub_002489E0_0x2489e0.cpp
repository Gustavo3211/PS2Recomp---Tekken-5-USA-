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

// Function: sub_002489E0
// Address: 0x2489e0 - 0x248a58
void sub_002489E0_0x2489e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002489E0_0x2489e0");
#endif

    switch (ctx->pc) {
        case 0x248a10u: goto label_248a10;
        case 0x248a34u: goto label_248a34;
        default: break;
    }

    ctx->pc = 0x2489e0u;

    // 0x2489e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2489e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2489e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2489e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2489e8: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x2489e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
    // 0x2489ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2489ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2489f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2489f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2489f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2489f8: 0x8e2388d0  lw          $v1, -0x7730($s1)
    ctx->pc = 0x2489f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x2489fc: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2489fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x248a00: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x248A00u;
    {
        const bool branch_taken_0x248a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x248A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A00u;
        // 0x248a04: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a00) {
            ctx->pc = 0x248A18u;
            goto label_248a18;
        }
    }
    ctx->pc = 0x248A08u;
    // 0x248a08: 0xc09224e  jal         func_248938
    ctx->pc = 0x248A08u;
    SET_GPR_U32(ctx, 31, 0x248A10u);
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x248A08u, 0x248A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A10u;
label_248a10:
    // 0x248a10: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x248A10u;
    {
        const bool branch_taken_0x248a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A10u;
        // 0x248a14: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a10) {
            ctx->pc = 0x248A40u;
            goto label_248a40;
        }
    }
    ctx->pc = 0x248A18u;
label_248a18:
    // 0x248a18: 0x262288d0  addiu       $v0, $s1, -0x7730
    ctx->pc = 0x248a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936784));
    // 0x248a1c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x248a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x248a20: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x248a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x248a24: 0x14900006  bne         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248A24u;
    {
        const bool branch_taken_0x248a24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x248A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A24u;
        // 0x248a28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a24) {
            ctx->pc = 0x248A40u;
            goto label_248a40;
        }
    }
    ctx->pc = 0x248A2Cu;
    // 0x248a2c: 0xc09224e  jal         func_248938
    ctx->pc = 0x248A2Cu;
    SET_GPR_U32(ctx, 31, 0x248A34u);
    ctx->pc = 0x248A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A2Cu;
    // 0x248a30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248938u, 0x248A2Cu, 0x248A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A34u;
label_248a34:
    // 0x248a34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x248A34u;
    {
        const bool branch_taken_0x248a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A34u;
        // 0x248a38: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a34) {
            ctx->pc = 0x248A40u;
            goto label_248a40;
        }
    }
    ctx->pc = 0x248A3Cu;
    // 0x248a3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x248a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248a40:
    // 0x248a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248a48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x248a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x248A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A4Cu;
        // 0x248a50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248A54u;
    // 0x248a54: 0x0  nop
    ctx->pc = 0x248a54u;
    // NOP
    ctx->pc = 0x248a58u;
}
