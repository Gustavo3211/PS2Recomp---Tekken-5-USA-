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

// Function: sub_001242E8
// Address: 0x1242e8 - 0x124340
void sub_001242E8_0x1242e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001242E8_0x1242e8");
#endif

    switch (ctx->pc) {
        case 0x1242f8u: goto label_1242f8;
        default: break;
    }

    ctx->pc = 0x1242e8u;

    // 0x1242e8: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x1242e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1242ec: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1242ECu;
    {
        const bool branch_taken_0x1242ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242ECu;
        // 0x1242f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242ec) {
            ctx->pc = 0x124338u;
            goto label_124338;
        }
    }
    ctx->pc = 0x1242F4u;
    // 0x1242f4: 0x0  nop
    ctx->pc = 0x1242f4u;
    // NOP
label_1242f8:
    // 0x1242f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1242f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1242fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1242FCu;
    {
        const bool branch_taken_0x1242fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1242FCu;
        // 0x124300: 0x871021  addu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242fc) {
            ctx->pc = 0x124324u;
            goto label_124324;
        }
    }
    ctx->pc = 0x124304u;
    // 0x124304: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x124304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x124308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124308u;
    {
        const bool branch_taken_0x124308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124308u;
        // 0x12430c: 0xa23023  subu        $a2, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124308) {
            ctx->pc = 0x124320u;
            goto label_124320;
        }
    }
    ctx->pc = 0x124310u;
    // 0x124310: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x124310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x124314: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x124314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x124318: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x124318u;
    {
        const bool branch_taken_0x124318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124318u;
        // 0x12431c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124318) {
            ctx->pc = 0x124338u;
            goto label_124338;
        }
    }
    ctx->pc = 0x124320u;
label_124320:
    // 0x124320: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x124320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_124324:
    // 0x124324: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x124324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x124328: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12432c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x12432Cu;
    {
        const bool branch_taken_0x12432c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x124330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12432Cu;
        // 0x124330: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12432c) {
            ctx->pc = 0x1242F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1242f8;
        }
    }
    ctx->pc = 0x124334u;
    // 0x124334: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x124334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124338:
    // 0x124338: 0x3e00008  jr          $ra
    ctx->pc = 0x124338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124340u;
}
