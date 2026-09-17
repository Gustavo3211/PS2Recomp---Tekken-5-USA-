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

// Function: sub_00335158
// Address: 0x335158 - 0x335190
void sub_00335158_0x335158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335158_0x335158");
#endif

    switch (ctx->pc) {
        case 0x335158u: goto label_335158;
        case 0x33515cu: goto label_33515c;
        case 0x335160u: goto label_335160;
        case 0x335164u: goto label_335164;
        case 0x335168u: goto label_335168;
        case 0x33516cu: goto label_33516c;
        case 0x335170u: goto label_335170;
        case 0x335174u: goto label_335174;
        case 0x335178u: goto label_335178;
        case 0x33517cu: goto label_33517c;
        case 0x335180u: goto label_335180;
        case 0x335184u: goto label_335184;
        case 0x335188u: goto label_335188;
        case 0x33518cu: goto label_33518c;
        default: break;
    }

    ctx->pc = 0x335158u;

label_335158:
    // 0x335158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x335158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33515c:
    // 0x33515c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_335160:
    // 0x335160: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x335160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_335164:
    // 0x335164: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x335164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_335168:
    // 0x335168: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x335168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33516c:
    // 0x33516c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x33516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_335170:
    // 0x335170: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x335170u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_335174:
    // 0x335174: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x335174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_335178:
    // 0x335178: 0xc0f809  jalr        $a2
label_33517c:
    if (ctx->pc == 0x33517Cu) {
        ctx->pc = 0x33517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335178u;
        // 0x33517c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x335180u;
        goto label_335180;
    }
    ctx->pc = 0x335178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x335180u);
        ctx->pc = 0x33517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335178u;
        // 0x33517c: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335178u, 0x335180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x335180u;
label_335180:
    // 0x335180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335184:
    // 0x335184: 0x3e00008  jr          $ra
label_335188:
    if (ctx->pc == 0x335188u) {
        ctx->pc = 0x335188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335184u;
        // 0x335188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33518Cu;
        goto label_33518c;
    }
    ctx->pc = 0x335184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335184u;
        // 0x335188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33518Cu;
label_33518c:
    // 0x33518c: 0x0  nop
    ctx->pc = 0x33518cu;
    // NOP
    ctx->pc = 0x335190u;
}
