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

// Function: sub_002B8258
// Address: 0x2b8258 - 0x2b82c8
void sub_002B8258_0x2b8258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8258_0x2b8258");
#endif

    switch (ctx->pc) {
        case 0x2b8270u: goto label_2b8270;
        case 0x2b82a0u: goto label_2b82a0;
        default: break;
    }

    ctx->pc = 0x2b8258u;

    // 0x2b8258: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B8258u;
    {
        const bool branch_taken_0x2b8258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8258) {
            ctx->pc = 0x2B8298u;
            goto label_2b8298;
        }
    }
    ctx->pc = 0x2B8260u;
    // 0x2b8260: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2B8260u;
    {
        const bool branch_taken_0x2b8260 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8260) {
            ctx->pc = 0x2B8298u;
            goto label_2b8298;
        }
    }
    ctx->pc = 0x2B8268u;
    // 0x2b8268: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b8268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b826c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2b826cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2b8270:
    // 0x2b8270: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b8270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b8274: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2b8274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2b8278: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x2b8278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b827c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b8280: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8280u;
    {
        const bool branch_taken_0x2b8280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8280u;
        // 0x2b8284: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8280) {
            ctx->pc = 0x2B8290u;
            goto label_2b8290;
        }
    }
    ctx->pc = 0x2B8288u;
    // 0x2b8288: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2b8288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b828c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2b828cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2b8290:
    // 0x2b8290: 0x1900fff7  blez        $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B8290u;
    {
        const bool branch_taken_0x2b8290 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2B8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8290u;
        // 0x2b8294: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8290) {
            ctx->pc = 0x2B8270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8270;
        }
    }
    ctx->pc = 0x2B8298u;
label_2b8298:
    // 0x2b8298: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B82A0u;
label_2b82a0:
    // 0x2b82a0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B82A0u;
    {
        const bool branch_taken_0x2b82a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B82A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B82A0u;
        // 0x2b82a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b82a0) {
            ctx->pc = 0x2B82BCu;
            goto label_2b82bc;
        }
    }
    ctx->pc = 0x2B82A8u;
    // 0x2b82a8: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B82A8u;
    {
        const bool branch_taken_0x2b82a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b82a8) {
            ctx->pc = 0x2B82BCu;
            goto label_2b82bc;
        }
    }
    ctx->pc = 0x2B82B0u;
    // 0x2b82b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b82b4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2b82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2b82b8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2b82bc:
    // 0x2b82bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B82BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B82BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B82C4u;
    // 0x2b82c4: 0x0  nop
    ctx->pc = 0x2b82c4u;
    // NOP
    ctx->pc = 0x2b82c8u;
}
