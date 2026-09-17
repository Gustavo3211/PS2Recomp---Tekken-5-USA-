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

// Function: sub_002DFF30
// Address: 0x2dff30 - 0x2dff70
void sub_002DFF30_0x2dff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFF30_0x2dff30");
#endif

    switch (ctx->pc) {
        case 0x2dff30u: goto label_2dff30;
        case 0x2dff34u: goto label_2dff34;
        case 0x2dff38u: goto label_2dff38;
        case 0x2dff3cu: goto label_2dff3c;
        case 0x2dff40u: goto label_2dff40;
        case 0x2dff44u: goto label_2dff44;
        case 0x2dff48u: goto label_2dff48;
        case 0x2dff4cu: goto label_2dff4c;
        case 0x2dff50u: goto label_2dff50;
        case 0x2dff54u: goto label_2dff54;
        case 0x2dff58u: goto label_2dff58;
        case 0x2dff5cu: goto label_2dff5c;
        case 0x2dff60u: goto label_2dff60;
        case 0x2dff64u: goto label_2dff64;
        case 0x2dff68u: goto label_2dff68;
        case 0x2dff6cu: goto label_2dff6c;
        default: break;
    }

    ctx->pc = 0x2dff30u;

label_2dff30:
    // 0x2dff30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2dff34:
    // 0x2dff34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2dff38:
    // 0x2dff38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2dff3c:
    // 0x2dff3c: 0xc0b7fdc  jal         func_2DFF70
label_2dff40:
    if (ctx->pc == 0x2DFF40u) {
        ctx->pc = 0x2DFF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF3Cu;
        // 0x2dff40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF44u;
        goto label_2dff44;
    }
    ctx->pc = 0x2DFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2DFF44u);
    ctx->pc = 0x2DFF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFF3Cu;
    // 0x2dff40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF70u, 0x2DFF3Cu, 0x2DFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFF44u;
label_2dff44:
    // 0x2dff44: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2dff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2dff48:
    // 0x2dff48: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2dff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2dff4c:
    // 0x2dff4c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2dff4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2dff50:
    // 0x2dff50: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dff50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2dff54:
    // 0x2dff54: 0x60f809  jalr        $v1
label_2dff58:
    if (ctx->pc == 0x2DFF58u) {
        ctx->pc = 0x2DFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF54u;
        // 0x2dff58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF5Cu;
        goto label_2dff5c;
    }
    ctx->pc = 0x2DFF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2DFF5Cu);
        ctx->pc = 0x2DFF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF54u;
        // 0x2dff58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFF54u, 0x2DFF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFF5Cu;
label_2dff5c:
    // 0x2dff5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dff5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dff60:
    // 0x2dff60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dff60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2dff64:
    // 0x2dff64: 0x3e00008  jr          $ra
label_2dff68:
    if (ctx->pc == 0x2DFF68u) {
        ctx->pc = 0x2DFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF64u;
        // 0x2dff68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF6Cu;
        goto label_2dff6c;
    }
    ctx->pc = 0x2DFF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF64u;
        // 0x2dff68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFF6Cu;
label_2dff6c:
    // 0x2dff6c: 0x0  nop
    ctx->pc = 0x2dff6cu;
    // NOP
    ctx->pc = 0x2dff70u;
}
