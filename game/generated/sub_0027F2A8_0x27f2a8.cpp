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

// Function: sub_0027F2A8
// Address: 0x27f2a8 - 0x27f310
void sub_0027F2A8_0x27f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F2A8_0x27f2a8");
#endif

    switch (ctx->pc) {
        case 0x27f2ccu: goto label_27f2cc;
        case 0x27f2d0u: goto label_27f2d0;
        case 0x27f2e8u: goto label_27f2e8;
        default: break;
    }

    ctx->pc = 0x27f2a8u;

    // 0x27f2a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x27f2ac: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x27f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x27f2b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2b4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x27f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x27f2b8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x27f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x27f2bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27f2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f2c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27f2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x27f2c4: 0xc084cb0  jal         func_2132C0
    ctx->pc = 0x27F2C4u;
    SET_GPR_U32(ctx, 31, 0x27F2CCu);
    ctx->pc = 0x27F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2C4u;
    // 0x27f2c8: 0x24500880  addiu       $s0, $v0, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2132C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2132C0u, 0x27F2C4u, 0x27F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2CCu;
label_27f2cc:
    // 0x27f2cc: 0x0  nop
    ctx->pc = 0x27f2ccu;
    // NOP
label_27f2d0:
    // 0x27f2d0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x27f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x27f2d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F2D4u;
    {
        const bool branch_taken_0x27f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2D4u;
        // 0x27f2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2d4) {
            ctx->pc = 0x27F2E8u;
            goto label_27f2e8;
        }
    }
    ctx->pc = 0x27F2DCu;
    // 0x27f2dc: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x27f2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27f2e0: 0xc08491e  jal         func_212478
    ctx->pc = 0x27F2E0u;
    SET_GPR_U32(ctx, 31, 0x27F2E8u);
    ctx->pc = 0x27F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F2E0u;
    // 0x27f2e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x27F2E0u, 0x27F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F2E8u;
label_27f2e8:
    // 0x27f2e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27f2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27f2ec: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x27f2ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27f2f0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x27F2F0u;
    {
        const bool branch_taken_0x27f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F2F0u;
        // 0x27f2f4: 0x26101070  addiu       $s0, $s0, 0x1070 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2f0) {
            ctx->pc = 0x27F2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f2d0;
        }
    }
    ctx->pc = 0x27F2F8u;
    // 0x27f2f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27f2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f2fc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x27f2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27f300: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27f300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f304: 0x3e00008  jr          $ra
    ctx->pc = 0x27F304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F304u;
        // 0x27f308: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F30Cu;
    // 0x27f30c: 0x0  nop
    ctx->pc = 0x27f30cu;
    // NOP
    ctx->pc = 0x27f310u;
}
