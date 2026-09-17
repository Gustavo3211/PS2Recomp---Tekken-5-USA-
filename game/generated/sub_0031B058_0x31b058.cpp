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

// Function: sub_0031B058
// Address: 0x31b058 - 0x31b0a8
void sub_0031B058_0x31b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B058_0x31b058");
#endif

    switch (ctx->pc) {
        case 0x31b058u: goto label_31b058;
        case 0x31b05cu: goto label_31b05c;
        case 0x31b060u: goto label_31b060;
        case 0x31b064u: goto label_31b064;
        case 0x31b068u: goto label_31b068;
        case 0x31b06cu: goto label_31b06c;
        case 0x31b070u: goto label_31b070;
        case 0x31b074u: goto label_31b074;
        case 0x31b078u: goto label_31b078;
        case 0x31b07cu: goto label_31b07c;
        case 0x31b080u: goto label_31b080;
        case 0x31b084u: goto label_31b084;
        case 0x31b088u: goto label_31b088;
        case 0x31b08cu: goto label_31b08c;
        case 0x31b090u: goto label_31b090;
        case 0x31b094u: goto label_31b094;
        case 0x31b098u: goto label_31b098;
        case 0x31b09cu: goto label_31b09c;
        case 0x31b0a0u: goto label_31b0a0;
        case 0x31b0a4u: goto label_31b0a4;
        default: break;
    }

    ctx->pc = 0x31b058u;

label_31b058:
    // 0x31b058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31b05c:
    // 0x31b05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31b060:
    // 0x31b060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b064:
    // 0x31b064: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31b064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_31b068:
    // 0x31b068: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_31b06c:
    if (ctx->pc == 0x31B06Cu) {
        ctx->pc = 0x31B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B068u;
        // 0x31b06c: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B070u;
        goto label_31b070;
    }
    ctx->pc = 0x31B068u;
    {
        const bool branch_taken_0x31b068 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B068u;
        // 0x31b06c: 0xae050020  sw          $a1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b068) {
            ctx->pc = 0x31B078u;
            goto label_31b078;
        }
    }
    ctx->pc = 0x31B070u;
label_31b070:
    // 0x31b070: 0xc0c6c80  jal         func_31B200
label_31b074:
    if (ctx->pc == 0x31B074u) {
        ctx->pc = 0x31B078u;
        goto label_31b078;
    }
    ctx->pc = 0x31B070u;
    SET_GPR_U32(ctx, 31, 0x31B078u);
    ctx->pc = 0x31B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B200u, 0x31B070u, 0x31B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B078u;
label_31b078:
    // 0x31b078: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x31b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_31b07c:
    // 0x31b07c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x31b07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31b080:
    // 0x31b080: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x31b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_31b084:
    // 0x31b084: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31b084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31b088:
    // 0x31b088: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x31b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_31b08c:
    // 0x31b08c: 0x60f809  jalr        $v1
label_31b090:
    if (ctx->pc == 0x31B090u) {
        ctx->pc = 0x31B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B08Cu;
        // 0x31b090: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B094u;
        goto label_31b094;
    }
    ctx->pc = 0x31B08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31B094u);
        ctx->pc = 0x31B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B08Cu;
        // 0x31b090: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B08Cu, 0x31B094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B094u;
label_31b094:
    // 0x31b094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b098:
    // 0x31b098: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31b098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31b09c:
    // 0x31b09c: 0x3e00008  jr          $ra
label_31b0a0:
    if (ctx->pc == 0x31B0A0u) {
        ctx->pc = 0x31B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B09Cu;
        // 0x31b0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0A4u;
        goto label_31b0a4;
    }
    ctx->pc = 0x31B09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B09Cu;
        // 0x31b0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B0A4u;
label_31b0a4:
    // 0x31b0a4: 0x0  nop
    ctx->pc = 0x31b0a4u;
    // NOP
    ctx->pc = 0x31b0a8u;
}
