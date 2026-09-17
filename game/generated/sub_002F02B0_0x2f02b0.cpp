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

// Function: sub_002F02B0
// Address: 0x2f02b0 - 0x2f0320
void sub_002F02B0_0x2f02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F02B0_0x2f02b0");
#endif

    switch (ctx->pc) {
        case 0x2f02c0u: goto label_2f02c0;
        default: break;
    }

    ctx->pc = 0x2f02b0u;

    // 0x2f02b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f02b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f02b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F02B4u;
    {
        const bool branch_taken_0x2f02b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02B4u;
        // 0x2f02b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f02b4) {
            ctx->pc = 0x2F02C8u;
            goto label_2f02c8;
        }
    }
    ctx->pc = 0x2F02BCu;
    // 0x2f02bc: 0x0  nop
    ctx->pc = 0x2f02bcu;
    // NOP
label_2f02c0:
    // 0x2f02c0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x2f02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2f02c4: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x2f02c4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
label_2f02c8:
    // 0x2f02c8: 0x28e2000c  slti        $v0, $a3, 0xC
    ctx->pc = 0x2f02c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2f02cc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F02CCu;
    {
        const bool branch_taken_0x2f02cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f02cc) {
            ctx->pc = 0x2F0314u;
            goto label_2f0314;
        }
    }
    ctx->pc = 0x2F02D4u;
    // 0x2f02d4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2f02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2f02d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f02dc: 0x24460058  addiu       $a2, $v0, 0x58
    ctx->pc = 0x2f02dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2f02e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2f02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f02e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F02E4u;
    {
        const bool branch_taken_0x2f02e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F02E4u;
        // 0x2f02e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f02e4) {
            ctx->pc = 0x2F0300u;
            goto label_2f0300;
        }
    }
    ctx->pc = 0x2F02ECu;
    // 0x2f02ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f02f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f02f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f02f4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2f02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f02f8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F02F8u;
    {
        const bool branch_taken_0x2f02f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f02f8) {
            ctx->pc = 0x2F030Cu;
            goto label_2f030c;
        }
    }
    ctx->pc = 0x2F0300u;
label_2f0300:
    // 0x2f0300: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2f0300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x2f0304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f0304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0308: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2f0308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2f030c:
    // 0x2f030c: 0x54a0ffec  bnel        $a1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2F030Cu;
    {
        const bool branch_taken_0x2f030c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f030c) {
            ctx->pc = 0x2F0310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F030Cu;
            // 0x2f0310: 0x8ca30054  lw          $v1, 0x54($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F02C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f02c0;
        }
    }
    ctx->pc = 0x2F0314u;
label_2f0314:
    // 0x2f0314: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0314u;
        // 0x2f0318: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F031Cu;
    // 0x2f031c: 0x0  nop
    ctx->pc = 0x2f031cu;
    // NOP
    ctx->pc = 0x2f0320u;
}
