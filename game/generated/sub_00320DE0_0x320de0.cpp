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

// Function: sub_00320DE0
// Address: 0x320de0 - 0x320e20
void sub_00320DE0_0x320de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320DE0_0x320de0");
#endif

    switch (ctx->pc) {
        case 0x320de0u: goto label_320de0;
        case 0x320de4u: goto label_320de4;
        case 0x320de8u: goto label_320de8;
        case 0x320decu: goto label_320dec;
        case 0x320df0u: goto label_320df0;
        case 0x320df4u: goto label_320df4;
        case 0x320df8u: goto label_320df8;
        case 0x320dfcu: goto label_320dfc;
        case 0x320e00u: goto label_320e00;
        case 0x320e04u: goto label_320e04;
        case 0x320e08u: goto label_320e08;
        case 0x320e0cu: goto label_320e0c;
        case 0x320e10u: goto label_320e10;
        case 0x320e14u: goto label_320e14;
        case 0x320e18u: goto label_320e18;
        case 0x320e1cu: goto label_320e1c;
        default: break;
    }

    ctx->pc = 0x320de0u;

label_320de0:
    // 0x320de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320de4:
    // 0x320de4: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x320de4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_320de8:
    // 0x320de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320dec:
    // 0x320dec: 0x24e7d6c0  addiu       $a3, $a3, -0x2940
    ctx->pc = 0x320decu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956736));
label_320df0:
    // 0x320df0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x320df0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_320df4:
    // 0x320df4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x320df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320df8:
    // 0x320df8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x320df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_320dfc:
    // 0x320dfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320e00:
    // 0x320e00: 0x24630098  addiu       $v1, $v1, 0x98
    ctx->pc = 0x320e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
label_320e04:
    // 0x320e04: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320e08:
    // 0x320e08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320e0c:
    // 0x320e0c: 0x40f809  jalr        $v0
label_320e10:
    if (ctx->pc == 0x320E10u) {
        ctx->pc = 0x320E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E0Cu;
        // 0x320e10: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E14u;
        goto label_320e14;
    }
    ctx->pc = 0x320E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320E14u);
        ctx->pc = 0x320E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E0Cu;
        // 0x320e10: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E0Cu, 0x320E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320E14u;
label_320e14:
    // 0x320e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320e18:
    // 0x320e18: 0x3e00008  jr          $ra
label_320e1c:
    if (ctx->pc == 0x320E1Cu) {
        ctx->pc = 0x320E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E18u;
        // 0x320e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320E20u;
        goto label_fallthrough_0x320e18;
    }
    ctx->pc = 0x320E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320E18u;
        // 0x320e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x320e18:
    ctx->pc = 0x320E20u;
}
