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

// Function: sub_00334E88
// Address: 0x334e88 - 0x334ec8
void sub_00334E88_0x334e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334E88_0x334e88");
#endif

    switch (ctx->pc) {
        case 0x334e88u: goto label_334e88;
        case 0x334e8cu: goto label_334e8c;
        case 0x334e90u: goto label_334e90;
        case 0x334e94u: goto label_334e94;
        case 0x334e98u: goto label_334e98;
        case 0x334e9cu: goto label_334e9c;
        case 0x334ea0u: goto label_334ea0;
        case 0x334ea4u: goto label_334ea4;
        case 0x334ea8u: goto label_334ea8;
        case 0x334eacu: goto label_334eac;
        case 0x334eb0u: goto label_334eb0;
        case 0x334eb4u: goto label_334eb4;
        case 0x334eb8u: goto label_334eb8;
        case 0x334ebcu: goto label_334ebc;
        case 0x334ec0u: goto label_334ec0;
        case 0x334ec4u: goto label_334ec4;
        default: break;
    }

    ctx->pc = 0x334e88u;

label_334e88:
    // 0x334e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_334e8c:
    // 0x334e8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x334e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_334e90:
    // 0x334e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_334e94:
    // 0x334e94: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x334e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_334e98:
    // 0x334e98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x334e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_334e9c:
    // 0x334e9c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x334e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_334ea0:
    // 0x334ea0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x334ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_334ea4:
    // 0x334ea4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x334ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_334ea8:
    // 0x334ea8: 0x40f809  jalr        $v0
label_334eac:
    if (ctx->pc == 0x334EACu) {
        ctx->pc = 0x334EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EA8u;
        // 0x334eac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EB0u;
        goto label_334eb0;
    }
    ctx->pc = 0x334EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334EB0u);
        ctx->pc = 0x334EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EA8u;
        // 0x334eac: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334EA8u, 0x334EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334EB0u;
label_334eb0:
    // 0x334eb0: 0xf  sync
    ctx->pc = 0x334eb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_334eb4:
    // 0x334eb4: 0x42000038  ei
    ctx->pc = 0x334eb4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_334eb8:
    // 0x334eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_334ebc:
    // 0x334ebc: 0x3e00008  jr          $ra
label_334ec0:
    if (ctx->pc == 0x334EC0u) {
        ctx->pc = 0x334EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EBCu;
        // 0x334ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334EC4u;
        goto label_334ec4;
    }
    ctx->pc = 0x334EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EBCu;
        // 0x334ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334EC4u;
label_334ec4:
    // 0x334ec4: 0x0  nop
    ctx->pc = 0x334ec4u;
    // NOP
    ctx->pc = 0x334ec8u;
}
