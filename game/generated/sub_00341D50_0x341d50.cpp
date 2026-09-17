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

// Function: sub_00341D50
// Address: 0x341d50 - 0x341da8
void sub_00341D50_0x341d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341D50_0x341d50");
#endif

    switch (ctx->pc) {
        case 0x341d50u: goto label_341d50;
        case 0x341d54u: goto label_341d54;
        case 0x341d58u: goto label_341d58;
        case 0x341d5cu: goto label_341d5c;
        case 0x341d60u: goto label_341d60;
        case 0x341d64u: goto label_341d64;
        case 0x341d68u: goto label_341d68;
        case 0x341d6cu: goto label_341d6c;
        case 0x341d70u: goto label_341d70;
        case 0x341d74u: goto label_341d74;
        case 0x341d78u: goto label_341d78;
        case 0x341d7cu: goto label_341d7c;
        case 0x341d80u: goto label_341d80;
        case 0x341d84u: goto label_341d84;
        case 0x341d88u: goto label_341d88;
        case 0x341d8cu: goto label_341d8c;
        case 0x341d90u: goto label_341d90;
        case 0x341d94u: goto label_341d94;
        case 0x341d98u: goto label_341d98;
        case 0x341d9cu: goto label_341d9c;
        case 0x341da0u: goto label_341da0;
        case 0x341da4u: goto label_341da4;
        default: break;
    }

    ctx->pc = 0x341d50u;

label_341d50:
    // 0x341d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_341d54:
    // 0x341d54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x341d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_341d58:
    // 0x341d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x341d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_341d5c:
    // 0x341d5c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x341d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_341d60:
    // 0x341d60: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x341d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_341d64:
    // 0x341d64: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x341d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_341d68:
    // 0x341d68: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_341d6c:
    if (ctx->pc == 0x341D6Cu) {
        ctx->pc = 0x341D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D68u;
        // 0x341d6c: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D70u;
        goto label_341d70;
    }
    ctx->pc = 0x341D68u;
    {
        const bool branch_taken_0x341d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D68u;
        // 0x341d6c: 0xae060008  sw          $a2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d68) {
            ctx->pc = 0x341D98u;
            goto label_341d98;
        }
    }
    ctx->pc = 0x341D70u;
label_341d70:
    // 0x341d70: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x341d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_341d74:
    // 0x341d74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x341d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_341d78:
    // 0x341d78: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x341d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_341d7c:
    // 0x341d7c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x341d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_341d80:
    // 0x341d80: 0x60f809  jalr        $v1
label_341d84:
    if (ctx->pc == 0x341D84u) {
        ctx->pc = 0x341D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D80u;
        // 0x341d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D88u;
        goto label_341d88;
    }
    ctx->pc = 0x341D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x341D88u);
        ctx->pc = 0x341D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D80u;
        // 0x341d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D80u, 0x341D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x341D88u;
label_341d88:
    // 0x341d88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x341d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_341d8c:
    // 0x341d8c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x341d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_341d90:
    // 0x341d90: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_341d94:
    if (ctx->pc == 0x341D94u) {
        ctx->pc = 0x341D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D90u;
        // 0x341d94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341D98u;
        goto label_341d98;
    }
    ctx->pc = 0x341D90u;
    {
        const bool branch_taken_0x341d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x341D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D90u;
        // 0x341d94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d90) {
            ctx->pc = 0x341D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341d70;
        }
    }
    ctx->pc = 0x341D98u;
label_341d98:
    // 0x341d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_341d9c:
    // 0x341d9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_341da0:
    // 0x341da0: 0x3e00008  jr          $ra
label_341da4:
    if (ctx->pc == 0x341DA4u) {
        ctx->pc = 0x341DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DA0u;
        // 0x341da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x341DA8u;
        goto label_fallthrough_0x341da0;
    }
    ctx->pc = 0x341DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DA0u;
        // 0x341da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x341da0:
    ctx->pc = 0x341DA8u;
}
