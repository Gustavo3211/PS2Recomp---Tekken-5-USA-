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

// Function: sub_0021E2C8
// Address: 0x21e2c8 - 0x21e348
void sub_0021E2C8_0x21e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E2C8_0x21e2c8");
#endif

    switch (ctx->pc) {
        case 0x21e2e8u: goto label_21e2e8;
        case 0x21e318u: goto label_21e318;
        default: break;
    }

    ctx->pc = 0x21e2c8u;

    // 0x21e2c8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x21e2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x21e2cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e2d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21e2d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e2d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21e2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21e2d8: 0x24842ce0  addiu       $a0, $a0, 0x2CE0
    ctx->pc = 0x21e2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11488));
    // 0x21e2dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x21e2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e2e0: 0x8087726  j           func_21DC98
    ctx->pc = 0x21E2E0u;
    ctx->pc = 0x21E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E2E0u;
    // 0x21e2e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DC98u, 0x21E2E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21E2E8u;
label_21e2e8:
    // 0x21e2e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e2ec: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x21e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21e2f0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x21e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8878u));
    // 0x21e2f4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x21E2F4u;
    {
        const bool branch_taken_0x21e2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2F4u;
        // 0x21e2f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2f4) {
            ctx->pc = 0x21E34Cu;
            return;
        }
    }
    ctx->pc = 0x21E2FCu;
    // 0x21e2fc: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x21e2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x21e300: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E300u;
    {
        const bool branch_taken_0x21e300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E300u;
        // 0x21e304: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e300) {
            ctx->pc = 0x21E34Cu;
            return;
        }
    }
    ctx->pc = 0x21E308u;
    // 0x21e308: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x21e308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e30c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21e30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e310: 0x80877d8  j           func_21DF60
    ctx->pc = 0x21E310u;
    ctx->pc = 0x21E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E310u;
    // 0x21e314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DF60u, 0x21E310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x21E318u;
label_21e318:
    // 0x21e318: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21e318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21e31c: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x21e31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21e320: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x21e320u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A8878u));
    // 0x21e324: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E324u;
    {
        const bool branch_taken_0x21e324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E324u;
        // 0x21e328: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e324) {
            ctx->pc = 0x21E34Cu;
            return;
        }
    }
    ctx->pc = 0x21E32Cu;
    // 0x21e32c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x21e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x21e330: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E330u;
    {
        const bool branch_taken_0x21e330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E330u;
        // 0x21e334: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e330) {
            ctx->pc = 0x21E34Cu;
            return;
        }
    }
    ctx->pc = 0x21E338u;
    // 0x21e338: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x21e338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e33c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x21e33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e340: 0x808782c  j           func_21E0B0
    ctx->pc = 0x21E340u;
    ctx->pc = 0x21E344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E340u;
    // 0x21e344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E0B0u;
    sub_0021E0B0_0x21e0b0(rdram, ctx, runtime); return;
    ctx->pc = 0x21E348u;
}
