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

// Function: sub_002F5BD0
// Address: 0x2f5bd0 - 0x2f5c20
void sub_002F5BD0_0x2f5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5BD0_0x2f5bd0");
#endif

    switch (ctx->pc) {
        case 0x2f5bf0u: goto label_2f5bf0;
        default: break;
    }

    ctx->pc = 0x2f5bd0u;

    // 0x2f5bd0: 0x8c870104  lw          $a3, 0x104($a0)
    ctx->pc = 0x2f5bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2f5bd4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2f5bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2f5bd8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2f5bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f5bdc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F5BDCu;
    {
        const bool branch_taken_0x2f5bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BDCu;
        // 0x2f5be0: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bdc) {
            ctx->pc = 0x2F5C18u;
            goto label_2f5c18;
        }
    }
    ctx->pc = 0x2F5BE4u;
    // 0x2f5be4: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x2f5be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2f5be8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2f5be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2f5bec: 0x0  nop
    ctx->pc = 0x2f5becu;
    // NOP
label_2f5bf0:
    // 0x2f5bf0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f5bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5bf4: 0x80640150  lb          $a0, 0x150($v1)
    ctx->pc = 0x2f5bf4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f5bf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f5bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f5bfc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5BFCu;
    {
        const bool branch_taken_0x2f5bfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5BFCu;
        // 0x2f5c00: 0x28a30004  slti        $v1, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5bfc) {
            ctx->pc = 0x2F5C18u;
            goto label_2f5c18;
        }
    }
    ctx->pc = 0x2F5C04u;
    // 0x2f5c04: 0x0  nop
    ctx->pc = 0x2f5c04u;
    // NOP
    // 0x2f5c08: 0x0  nop
    ctx->pc = 0x2f5c08u;
    // NOP
    // 0x2f5c0c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F5C0Cu;
    {
        const bool branch_taken_0x2f5c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5C0Cu;
        // 0x2f5c10: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5c0c) {
            ctx->pc = 0x2F5BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f5bf0;
        }
    }
    ctx->pc = 0x2F5C14u;
    // 0x2f5c14: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2f5c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2f5c18:
    // 0x2f5c18: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5C20u;
}
