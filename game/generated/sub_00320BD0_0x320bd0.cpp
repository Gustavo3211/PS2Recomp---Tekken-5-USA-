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

// Function: sub_00320BD0
// Address: 0x320bd0 - 0x320c10
void sub_00320BD0_0x320bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320BD0_0x320bd0");
#endif

    switch (ctx->pc) {
        case 0x320bd0u: goto label_320bd0;
        case 0x320bd4u: goto label_320bd4;
        case 0x320bd8u: goto label_320bd8;
        case 0x320bdcu: goto label_320bdc;
        case 0x320be0u: goto label_320be0;
        case 0x320be4u: goto label_320be4;
        case 0x320be8u: goto label_320be8;
        case 0x320becu: goto label_320bec;
        case 0x320bf0u: goto label_320bf0;
        case 0x320bf4u: goto label_320bf4;
        case 0x320bf8u: goto label_320bf8;
        case 0x320bfcu: goto label_320bfc;
        case 0x320c00u: goto label_320c00;
        case 0x320c04u: goto label_320c04;
        case 0x320c08u: goto label_320c08;
        case 0x320c0cu: goto label_320c0c;
        default: break;
    }

    ctx->pc = 0x320bd0u;

label_320bd0:
    // 0x320bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x320bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_320bd4:
    // 0x320bd4: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x320bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
label_320bd8:
    // 0x320bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320bdc:
    // 0x320bdc: 0x24e7d6c0  addiu       $a3, $a3, -0x2940
    ctx->pc = 0x320bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956736));
label_320be0:
    // 0x320be0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x320be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320be4:
    // 0x320be4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x320be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320be8:
    // 0x320be8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x320be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_320bec:
    // 0x320bec: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x320becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_320bf0:
    // 0x320bf0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x320bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_320bf4:
    // 0x320bf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x320bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_320bf8:
    // 0x320bf8: 0x40f809  jalr        $v0
label_320bfc:
    if (ctx->pc == 0x320BFCu) {
        ctx->pc = 0x320BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BF8u;
        // 0x320bfc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C00u;
        goto label_320c00;
    }
    ctx->pc = 0x320BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320C00u);
        ctx->pc = 0x320BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320BF8u;
        // 0x320bfc: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320BF8u, 0x320C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320C00u;
label_320c00:
    // 0x320c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_320c04:
    // 0x320c04: 0x3e00008  jr          $ra
label_320c08:
    if (ctx->pc == 0x320C08u) {
        ctx->pc = 0x320C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C04u;
        // 0x320c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320C0Cu;
        goto label_320c0c;
    }
    ctx->pc = 0x320C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320C04u;
        // 0x320c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320C0Cu;
label_320c0c:
    // 0x320c0c: 0x0  nop
    ctx->pc = 0x320c0cu;
    // NOP
    ctx->pc = 0x320c10u;
}
