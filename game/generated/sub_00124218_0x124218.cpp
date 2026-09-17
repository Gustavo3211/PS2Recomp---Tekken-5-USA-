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

// Function: sub_00124218
// Address: 0x124218 - 0x124258
void sub_00124218_0x124218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124218_0x124218");
#endif

    switch (ctx->pc) {
        case 0x124228u: goto label_124228;
        default: break;
    }

    ctx->pc = 0x124218u;

    // 0x124218: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x124218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12421c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x12421Cu;
    {
        const bool branch_taken_0x12421c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x124220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12421Cu;
        // 0x124220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12421c) {
            ctx->pc = 0x124250u;
            goto label_124250;
        }
    }
    ctx->pc = 0x124224u;
    // 0x124224: 0x0  nop
    ctx->pc = 0x124224u;
    // NOP
label_124228:
    // 0x124228: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x124228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12422c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12422Cu;
    {
        const bool branch_taken_0x12422c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12422Cu;
        // 0x124230: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12422c) {
            ctx->pc = 0x12423Cu;
            goto label_12423c;
        }
    }
    ctx->pc = 0x124234u;
    // 0x124234: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x124234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124238: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x124238u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_12423c:
    // 0x12423c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x12423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x124240: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x124240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x124244: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x124244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x124248: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x124248u;
    {
        const bool branch_taken_0x124248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124248u;
        // 0x12424c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124248) {
            ctx->pc = 0x124228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_124228;
        }
    }
    ctx->pc = 0x124250u;
label_124250:
    // 0x124250: 0x3e00008  jr          $ra
    ctx->pc = 0x124250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124250u;
        // 0x124254: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124258u;
}
