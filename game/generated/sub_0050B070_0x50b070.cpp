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

// Function: sub_0050B070
// Address: 0x50b070 - 0x50b0c8
void sub_0050B070_0x50b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B070_0x50b070");
#endif

    switch (ctx->pc) {
        case 0x50b080u: goto label_50b080;
        default: break;
    }

    ctx->pc = 0x50b070u;

    // 0x50b070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50b074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50b078: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x50B078u;
    SET_GPR_U32(ctx, 31, 0x50B080u);
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x50B078u, 0x50B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B080u;
label_50b080:
    // 0x50b080: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x50b080u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x50b084: 0x2445002c  addiu       $a1, $v0, 0x2C
    ctx->pc = 0x50b084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x50b088: 0x9444002a  lhu         $a0, 0x2A($v0)
    ctx->pc = 0x50b088u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x50b08c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x50b08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x50b090: 0xa4430072  sh          $v1, 0x72($v0)
    ctx->pc = 0x50b090u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b094: 0xa4440074  sh          $a0, 0x74($v0)
    ctx->pc = 0x50b094u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 116), (uint16_t)GPR_U32(ctx, 4));
    // 0x50b098: 0x9443002e  lhu         $v1, 0x2E($v0)
    ctx->pc = 0x50b098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x50b09c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x50b09cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50b0a0: 0xa4430078  sh          $v1, 0x78($v0)
    ctx->pc = 0x50b0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b0a4: 0xa4440076  sh          $a0, 0x76($v0)
    ctx->pc = 0x50b0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 118), (uint16_t)GPR_U32(ctx, 4));
    // 0x50b0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50b0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b0ac: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x50b0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50b0b0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x50b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50b0b4: 0x94440032  lhu         $a0, 0x32($v0)
    ctx->pc = 0x50b0b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x50b0b8: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x50b0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x50b0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x50B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50B0BCu;
        // 0x50b0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50B0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50B0C4u;
    // 0x50b0c4: 0x0  nop
    ctx->pc = 0x50b0c4u;
    // NOP
    ctx->pc = 0x50b0c8u;
}
