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

// Function: sub_00320A98
// Address: 0x320a98 - 0x320ae0
void sub_00320A98_0x320a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320A98_0x320a98");
#endif

    switch (ctx->pc) {
        case 0x320a98u: goto label_320a98;
        case 0x320a9cu: goto label_320a9c;
        case 0x320aa0u: goto label_320aa0;
        case 0x320aa4u: goto label_320aa4;
        case 0x320aa8u: goto label_320aa8;
        case 0x320aacu: goto label_320aac;
        case 0x320ab0u: goto label_320ab0;
        case 0x320ab4u: goto label_320ab4;
        case 0x320ab8u: goto label_320ab8;
        case 0x320abcu: goto label_320abc;
        case 0x320ac0u: goto label_320ac0;
        case 0x320ac4u: goto label_320ac4;
        case 0x320ac8u: goto label_320ac8;
        case 0x320accu: goto label_320acc;
        case 0x320ad0u: goto label_320ad0;
        case 0x320ad4u: goto label_320ad4;
        case 0x320ad8u: goto label_320ad8;
        case 0x320adcu: goto label_320adc;
        default: break;
    }

    ctx->pc = 0x320a98u;

label_320a98:
    // 0x320a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320a9c:
    // 0x320a9c: 0x3c080044  lui         $t0, 0x44
    ctx->pc = 0x320a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)68 << 16));
label_320aa0:
    // 0x320aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320aa4:
    // 0x320aa4: 0x2508d6c0  addiu       $t0, $t0, -0x2940
    ctx->pc = 0x320aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956736));
label_320aa8:
    // 0x320aa8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x320aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320aac:
    // 0x320aac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320ab0:
    // 0x320ab0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x320ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_320ab4:
    // 0x320ab4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x320ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320ab8:
    // 0x320ab8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x320ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320abc:
    // 0x320abc: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x320abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_320ac0:
    // 0x320ac0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320ac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320ac4:
    // 0x320ac4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320ac8:
    // 0x320ac8: 0x40f809  jalr        $v0
label_320acc:
    if (ctx->pc == 0x320ACCu) {
        ctx->pc = 0x320ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AC8u;
        // 0x320acc: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320AD0u;
        goto label_320ad0;
    }
    ctx->pc = 0x320AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320AD0u);
        ctx->pc = 0x320ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AC8u;
        // 0x320acc: 0x882021  addu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320AC8u, 0x320AD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320AD0u;
label_320ad0:
    // 0x320ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320ad4:
    // 0x320ad4: 0x3e00008  jr          $ra
label_320ad8:
    if (ctx->pc == 0x320AD8u) {
        ctx->pc = 0x320AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AD4u;
        // 0x320ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320ADCu;
        goto label_320adc;
    }
    ctx->pc = 0x320AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AD4u;
        // 0x320ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320ADCu;
label_320adc:
    // 0x320adc: 0x0  nop
    ctx->pc = 0x320adcu;
    // NOP
    ctx->pc = 0x320ae0u;
}
