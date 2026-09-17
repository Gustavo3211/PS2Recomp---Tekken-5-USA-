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

// Function: sub_00260EC0
// Address: 0x260ec0 - 0x260f08
void sub_00260EC0_0x260ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260EC0_0x260ec0");
#endif

    switch (ctx->pc) {
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        default: break;
    }

    ctx->pc = 0x260ec0u;

label_260ec0:
    // 0x260ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_260ec4:
    // 0x260ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_260ec8:
    // 0x260ec8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_260ecc:
    // 0x260ecc: 0xc07e232  jal         func_1F88C8
label_260ed0:
    if (ctx->pc == 0x260ED0u) {
        ctx->pc = 0x260ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ECCu;
        // 0x260ed0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260ED4u;
        goto label_260ed4;
    }
    ctx->pc = 0x260ECCu;
    SET_GPR_U32(ctx, 31, 0x260ED4u);
    ctx->pc = 0x260ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260ECCu;
    // 0x260ed0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x260ECCu, 0x260ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ED4u;
label_260ed4:
    // 0x260ed4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_260ed8:
    if (ctx->pc == 0x260ED8u) {
        ctx->pc = 0x260ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ED4u;
        // 0x260ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EDCu;
        goto label_260edc;
    }
    ctx->pc = 0x260ED4u;
    {
        const bool branch_taken_0x260ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ED4u;
        // 0x260ed8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ed4) {
            ctx->pc = 0x260EF8u;
            goto label_260ef8;
        }
    }
    ctx->pc = 0x260EDCu;
label_260edc:
    // 0x260edc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x260edcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_260ee0:
    // 0x260ee0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x260ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_260ee4:
    // 0x260ee4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x260ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_260ee8:
    // 0x260ee8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x260ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_260eec:
    // 0x260eec: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x260eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_260ef0:
    // 0x260ef0: 0x60f809  jalr        $v1
label_260ef4:
    if (ctx->pc == 0x260EF4u) {
        ctx->pc = 0x260EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EF0u;
        // 0x260ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EF8u;
        goto label_260ef8;
    }
    ctx->pc = 0x260EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x260EF8u);
        ctx->pc = 0x260EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EF0u;
        // 0x260ef4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260EF0u, 0x260EF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260EF8u;
label_260ef8:
    // 0x260ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260efc:
    // 0x260efc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_260f00:
    // 0x260f00: 0x3e00008  jr          $ra
label_260f04:
    if (ctx->pc == 0x260F04u) {
        ctx->pc = 0x260F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F00u;
        // 0x260f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F08u;
        goto label_fallthrough_0x260f00;
    }
    ctx->pc = 0x260F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F00u;
        // 0x260f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x260f00:
    ctx->pc = 0x260F08u;
}
