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

// Function: sub_00243BE0
// Address: 0x243be0 - 0x243c38
void sub_00243BE0_0x243be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243BE0_0x243be0");
#endif

    switch (ctx->pc) {
        case 0x243bf4u: goto label_243bf4;
        case 0x243bf8u: goto label_243bf8;
        case 0x243c00u: goto label_243c00;
        case 0x243c10u: goto label_243c10;
        case 0x243c28u: goto label_243c28;
        default: break;
    }

    ctx->pc = 0x243be0u;

    // 0x243be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x243be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x243bec: 0xc0ca492  jal         func_329248
    ctx->pc = 0x243BECu;
    SET_GPR_U32(ctx, 31, 0x243BF4u);
    ctx->pc = 0x243BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BECu;
    // 0x243bf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329248u, 0x243BECu, 0x243BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243BF4u;
label_243bf4:
    // 0x243bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_243bf8:
    // 0x243bf8: 0xc0ca5ac  jal         func_3296B0
    ctx->pc = 0x243BF8u;
    SET_GPR_U32(ctx, 31, 0x243C00u);
    ctx->pc = 0x243BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243BF8u;
    // 0x243bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296B0u, 0x243BF8u, 0x243C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C00u;
label_243c00:
    // 0x243c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x243c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c08: 0xc0ca4d2  jal         func_329348
    ctx->pc = 0x243C08u;
    SET_GPR_U32(ctx, 31, 0x243C10u);
    ctx->pc = 0x243C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C08u;
    // 0x243c0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329348u, 0x243C08u, 0x243C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C10u;
label_243c10:
    // 0x243c10: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x243c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x243c14: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x243C14u;
    {
        const bool branch_taken_0x243c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C14u;
        // 0x243c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c14) {
            ctx->pc = 0x243BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243bf8;
        }
    }
    ctx->pc = 0x243C1Cu;
    // 0x243c1c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x243c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x243c20: 0xc090d7e  jal         func_2435F8
    ctx->pc = 0x243C20u;
    SET_GPR_U32(ctx, 31, 0x243C28u);
    ctx->pc = 0x243C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243C20u;
    // 0x243c24: 0xaf82c9d0  sw          $v0, -0x3630($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953424), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435F8u, 0x243C20u, 0x243C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243C28u;
label_243c28:
    // 0x243c28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243c28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243c2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x243c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243c30: 0x3e00008  jr          $ra
    ctx->pc = 0x243C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243C30u;
        // 0x243c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243C38u;
}
