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

// Function: sub_00343E60
// Address: 0x343e60 - 0x343ec8
void sub_00343E60_0x343e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343E60_0x343e60");
#endif

    switch (ctx->pc) {
        case 0x343e94u: goto label_343e94;
        default: break;
    }

    ctx->pc = 0x343e60u;

    // 0x343e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x343e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x343e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x343e74: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x343e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x343e78: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x343e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x343e7c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x343E7Cu;
    {
        const bool branch_taken_0x343e7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E7Cu;
        // 0x343e80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e7c) {
            ctx->pc = 0x343EB4u;
            goto label_343eb4;
        }
    }
    ctx->pc = 0x343E84u;
    // 0x343e84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x343e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343e88: 0x94460008  lhu         $a2, 0x8($v0)
    ctx->pc = 0x343e88u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x343e8c: 0xc0ce6f8  jal         func_339BE0
    ctx->pc = 0x343E8Cu;
    SET_GPR_U32(ctx, 31, 0x343E94u);
    ctx->pc = 0x343E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E8Cu;
    // 0x343e90: 0x94450006  lhu         $a1, 0x6($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339BE0u, 0x343E8Cu, 0x343E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E94u;
label_343e94:
    // 0x343e94: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x343e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x343e98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x343e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e9c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x343E9Cu;
    {
        const bool branch_taken_0x343e9c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x343EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E9Cu;
        // 0x343ea0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e9c) {
            ctx->pc = 0x343EB4u;
            goto label_343eb4;
        }
    }
    ctx->pc = 0x343EA4u;
    // 0x343ea4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x343ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x343ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343eac: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x343eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x343eb0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x343eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_343eb4:
    // 0x343eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x343eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343eb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x343eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x343ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x343EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EBCu;
        // 0x343ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343EC4u;
    // 0x343ec4: 0x0  nop
    ctx->pc = 0x343ec4u;
    // NOP
    ctx->pc = 0x343ec8u;
}
