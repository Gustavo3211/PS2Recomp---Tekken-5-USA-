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

// Function: sub_003362D8
// Address: 0x3362d8 - 0x336318
void sub_003362D8_0x3362d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003362D8_0x3362d8");
#endif

    switch (ctx->pc) {
        case 0x3362f0u: goto label_3362f0;
        default: break;
    }

    ctx->pc = 0x3362d8u;

    // 0x3362d8: 0x8c8301b8  lw          $v1, 0x1B8($a0)
    ctx->pc = 0x3362d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x3362dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3362dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362e0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3362E0u;
    {
        const bool branch_taken_0x3362e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362E0u;
        // 0x3362e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362e0) {
            ctx->pc = 0x336310u;
            goto label_336310;
        }
    }
    ctx->pc = 0x3362E8u;
    // 0x3362e8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3362e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362ec: 0x24850178  addiu       $a1, $a0, 0x178
    ctx->pc = 0x3362ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 376));
label_3362f0:
    // 0x3362f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3362f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3362f4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3362f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3362f8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3362f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3362fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3362fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x336300: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x336300u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x336304: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x336304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x336308: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x336308u;
    {
        const bool branch_taken_0x336308 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336308u;
        // 0x33630c: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336308) {
            ctx->pc = 0x3362F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3362f0;
        }
    }
    ctx->pc = 0x336310u;
label_336310:
    // 0x336310: 0x3e00008  jr          $ra
    ctx->pc = 0x336310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336310u;
        // 0x336314: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336318u;
}
