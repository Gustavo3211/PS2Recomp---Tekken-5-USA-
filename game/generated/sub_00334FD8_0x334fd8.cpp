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

// Function: sub_00334FD8
// Address: 0x334fd8 - 0x335010
void sub_00334FD8_0x334fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334FD8_0x334fd8");
#endif

    switch (ctx->pc) {
        case 0x334fd8u: goto label_334fd8;
        case 0x334fdcu: goto label_334fdc;
        case 0x334fe0u: goto label_334fe0;
        case 0x334fe4u: goto label_334fe4;
        case 0x334fe8u: goto label_334fe8;
        case 0x334fecu: goto label_334fec;
        case 0x334ff0u: goto label_334ff0;
        case 0x334ff4u: goto label_334ff4;
        case 0x334ff8u: goto label_334ff8;
        case 0x334ffcu: goto label_334ffc;
        case 0x335000u: goto label_335000;
        case 0x335004u: goto label_335004;
        case 0x335008u: goto label_335008;
        case 0x33500cu: goto label_33500c;
        default: break;
    }

    ctx->pc = 0x334fd8u;

label_334fd8:
    // 0x334fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_334fdc:
    // 0x334fdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_334fe0:
    // 0x334fe0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x334fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_334fe4:
    // 0x334fe4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x334fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_334fe8:
    // 0x334fe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x334fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_334fec:
    // 0x334fec: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x334fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_334ff0:
    // 0x334ff0: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x334ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_334ff4:
    // 0x334ff4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x334ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_334ff8:
    // 0x334ff8: 0xc0f809  jalr        $a2
label_334ffc:
    if (ctx->pc == 0x334FFCu) {
        ctx->pc = 0x334FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FF8u;
        // 0x334ffc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335000u;
        goto label_335000;
    }
    ctx->pc = 0x334FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x335000u);
        ctx->pc = 0x334FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334FF8u;
        // 0x334ffc: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334FF8u, 0x335000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335000u;
label_335000:
    // 0x335000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335004:
    // 0x335004: 0x3e00008  jr          $ra
label_335008:
    if (ctx->pc == 0x335008u) {
        ctx->pc = 0x335008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335004u;
        // 0x335008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33500Cu;
        goto label_33500c;
    }
    ctx->pc = 0x335004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335004u;
        // 0x335008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33500Cu;
label_33500c:
    // 0x33500c: 0x0  nop
    ctx->pc = 0x33500cu;
    // NOP
    ctx->pc = 0x335010u;
}
