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

// Function: sub_0050AEE8
// Address: 0x50aee8 - 0x50af30
void sub_0050AEE8_0x50aee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050AEE8_0x50aee8");
#endif

    switch (ctx->pc) {
        case 0x50aee8u: goto label_50aee8;
        case 0x50aeecu: goto label_50aeec;
        case 0x50aef0u: goto label_50aef0;
        case 0x50aef4u: goto label_50aef4;
        case 0x50aef8u: goto label_50aef8;
        case 0x50aefcu: goto label_50aefc;
        case 0x50af00u: goto label_50af00;
        case 0x50af04u: goto label_50af04;
        case 0x50af08u: goto label_50af08;
        case 0x50af0cu: goto label_50af0c;
        case 0x50af10u: goto label_50af10;
        case 0x50af14u: goto label_50af14;
        case 0x50af18u: goto label_50af18;
        case 0x50af1cu: goto label_50af1c;
        case 0x50af20u: goto label_50af20;
        case 0x50af24u: goto label_50af24;
        case 0x50af28u: goto label_50af28;
        case 0x50af2cu: goto label_50af2c;
        default: break;
    }

    ctx->pc = 0x50aee8u;

label_50aee8:
    // 0x50aee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50aee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_50aeec:
    // 0x50aeec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50aeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_50aef0:
    // 0x50aef0: 0xc1439b0  jal         func_50E6C0
label_50aef4:
    if (ctx->pc == 0x50AEF4u) {
        ctx->pc = 0x50AEF8u;
        goto label_50aef8;
    }
    ctx->pc = 0x50AEF0u;
    SET_GPR_U32(ctx, 31, 0x50AEF8u);
    ctx->pc = 0x50E6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50E6C0u, 0x50AEF0u, 0x50AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AEF8u;
label_50aef8:
    // 0x50aef8: 0xc142c1c  jal         func_50B070
label_50aefc:
    if (ctx->pc == 0x50AEFCu) {
        ctx->pc = 0x50AF00u;
        goto label_50af00;
    }
    ctx->pc = 0x50AEF8u;
    SET_GPR_U32(ctx, 31, 0x50AF00u);
    ctx->pc = 0x50B070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50B070u, 0x50AEF8u, 0x50AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50AF00u;
label_50af00:
    // 0x50af00: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50af00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
label_50af04:
    // 0x50af04: 0x84423d50  lh          $v0, 0x3D50($v0)
    ctx->pc = 0x50af04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 15696)));
label_50af08:
    // 0x50af08: 0x2c43000d  sltiu       $v1, $v0, 0xD
    ctx->pc = 0x50af08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_50af0c:
    // 0x50af0c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_50af10:
    if (ctx->pc == 0x50AF10u) {
        ctx->pc = 0x50AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AF0Cu;
        // 0x50af10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x50AF14u;
        goto label_50af14;
    }
    ctx->pc = 0x50AF0Cu;
    {
        const bool branch_taken_0x50af0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x50AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50AF0Cu;
        // 0x50af10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50af0c) {
            ctx->pc = 0x50B000u;
            return;
        }
    }
    ctx->pc = 0x50AF14u;
label_50af14:
    // 0x50af14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x50af14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_50af18:
    // 0x50af18: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x50af18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_50af1c:
    // 0x50af1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x50af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_50af20:
    // 0x50af20: 0x8c63d280  lw          $v1, -0x2D80($v1)
    ctx->pc = 0x50af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955648)));
label_50af24:
    // 0x50af24: 0x600008  jr          $v1
label_50af28:
    if (ctx->pc == 0x50AF28u) {
        ctx->pc = 0x50AF2Cu;
        goto label_50af2c;
    }
    ctx->pc = 0x50AF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50AF24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x50AF2Cu;
label_50af2c:
    // 0x50af2c: 0x0  nop
    ctx->pc = 0x50af2cu;
    // NOP
    ctx->pc = 0x50af30u;
}
