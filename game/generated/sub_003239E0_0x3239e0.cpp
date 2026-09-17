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

// Function: sub_003239E0
// Address: 0x3239e0 - 0x323a20
void sub_003239E0_0x3239e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003239E0_0x3239e0");
#endif

    switch (ctx->pc) {
        case 0x3239e0u: goto label_3239e0;
        case 0x3239e4u: goto label_3239e4;
        case 0x3239e8u: goto label_3239e8;
        case 0x3239ecu: goto label_3239ec;
        case 0x3239f0u: goto label_3239f0;
        case 0x3239f4u: goto label_3239f4;
        case 0x3239f8u: goto label_3239f8;
        case 0x3239fcu: goto label_3239fc;
        case 0x323a00u: goto label_323a00;
        case 0x323a04u: goto label_323a04;
        case 0x323a08u: goto label_323a08;
        case 0x323a0cu: goto label_323a0c;
        case 0x323a10u: goto label_323a10;
        case 0x323a14u: goto label_323a14;
        case 0x323a18u: goto label_323a18;
        case 0x323a1cu: goto label_323a1c;
        default: break;
    }

    ctx->pc = 0x3239e0u;

label_3239e0:
    // 0x3239e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3239e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3239e4:
    // 0x3239e4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3239e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3239e8:
    // 0x3239e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3239e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3239ec:
    // 0x3239ec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3239ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3239f0:
    // 0x3239f0: 0x34460100  ori         $a2, $v0, 0x100
    ctx->pc = 0x3239f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_3239f4:
    // 0x3239f4: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x3239f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_3239f8:
    // 0x3239f8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_3239fc:
    if (ctx->pc == 0x3239FCu) {
        ctx->pc = 0x3239FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239F8u;
        // 0x3239fc: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A00u;
        goto label_323a00;
    }
    ctx->pc = 0x3239F8u;
    {
        const bool branch_taken_0x3239f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3239f8) {
            ctx->pc = 0x3239FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3239F8u;
            // 0x3239fc: 0xac860010  sw          $a2, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A00u;
            goto label_323a00;
        }
    }
    ctx->pc = 0x323A00u;
label_323a00:
    // 0x323a00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323a04:
    // 0x323a04: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x323a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_323a08:
    // 0x323a08: 0x40f809  jalr        $v0
label_323a0c:
    if (ctx->pc == 0x323A0Cu) {
        ctx->pc = 0x323A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A08u;
        // 0x323a0c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A10u;
        goto label_323a10;
    }
    ctx->pc = 0x323A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323A10u);
        ctx->pc = 0x323A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A08u;
        // 0x323a0c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A08u, 0x323A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323A10u;
label_323a10:
    // 0x323a10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323a14:
    // 0x323a14: 0x3e00008  jr          $ra
label_323a18:
    if (ctx->pc == 0x323A18u) {
        ctx->pc = 0x323A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A14u;
        // 0x323a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A1Cu;
        goto label_323a1c;
    }
    ctx->pc = 0x323A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A14u;
        // 0x323a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A1Cu;
label_323a1c:
    // 0x323a1c: 0x0  nop
    ctx->pc = 0x323a1cu;
    // NOP
    ctx->pc = 0x323a20u;
}
