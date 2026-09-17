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

// Function: sub_00279A40
// Address: 0x279a40 - 0x279a88
void sub_00279A40_0x279a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279A40_0x279a40");
#endif

    switch (ctx->pc) {
        case 0x279a78u: goto label_279a78;
        default: break;
    }

    ctx->pc = 0x279a40u;

    // 0x279a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279a44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x279a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279a4c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x279a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x279a50: 0xa4a306ac  sh          $v1, 0x6AC($a1)
    ctx->pc = 0x279a50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1708), (uint16_t)GPR_U32(ctx, 3));
    // 0x279a54: 0x94a2003c  lhu         $v0, 0x3C($a1)
    ctx->pc = 0x279a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x279a58: 0xa4a006aa  sh          $zero, 0x6AA($a1)
    ctx->pc = 0x279a58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1706), (uint16_t)GPR_U32(ctx, 0));
    // 0x279a5c: 0xa4a006ae  sh          $zero, 0x6AE($a1)
    ctx->pc = 0x279a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1710), (uint16_t)GPR_U32(ctx, 0));
    // 0x279a60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x279a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279a64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279a68: 0x5c1821  addu        $v1, $v0, $gp
    ctx->pc = 0x279a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 28)));
    // 0x279a6c: 0x8c63a868  lw          $v1, -0x5798($v1)
    ctx->pc = 0x279a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944872)));
    // 0x279a70: 0xc09e1f4  jal         func_2787D0
    ctx->pc = 0x279A70u;
    SET_GPR_U32(ctx, 31, 0x279A78u);
    ctx->pc = 0x279A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279A70u;
    // 0x279a74: 0xaca306b4  sw          $v1, 0x6B4($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 1716), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787D0u, 0x279A70u, 0x279A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279A78u;
label_279a78:
    // 0x279a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x279A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279A7Cu;
        // 0x279a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279A84u;
    // 0x279a84: 0x0  nop
    ctx->pc = 0x279a84u;
    // NOP
    ctx->pc = 0x279a88u;
}
