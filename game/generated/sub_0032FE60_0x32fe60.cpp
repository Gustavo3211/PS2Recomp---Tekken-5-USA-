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

// Function: sub_0032FE60
// Address: 0x32fe60 - 0x32feb8
void sub_0032FE60_0x32fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FE60_0x32fe60");
#endif

    switch (ctx->pc) {
        case 0x32feacu: goto label_32feac;
        default: break;
    }

    ctx->pc = 0x32fe60u;

    // 0x32fe60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fe64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fe68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fe6c: 0x80cd5a6  j           func_335698
    ctx->pc = 0x32FE6Cu;
    ctx->pc = 0x32FE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE6Cu;
    // 0x32fe70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335698u;
    sub_00335698_0x335698(rdram, ctx, runtime); return;
    ctx->pc = 0x32FE74u;
    // 0x32fe74: 0x0  nop
    ctx->pc = 0x32fe74u;
    // NOP
    // 0x32fe78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fe7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fe84: 0x80cd584  j           func_335610
    ctx->pc = 0x32FE84u;
    ctx->pc = 0x32FE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FE84u;
    // 0x32fe88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    sub_00335610_0x335610(rdram, ctx, runtime); return;
    ctx->pc = 0x32FE8Cu;
    // 0x32fe8c: 0x0  nop
    ctx->pc = 0x32fe8cu;
    // NOP
    // 0x32fe90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32fe90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fe94: 0x8f84c594  lw          $a0, -0x3A6C($gp)
    ctx->pc = 0x32fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
    // 0x32fe98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fe9c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32fe9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fea4: 0xc0c6c34  jal         func_31B0D0
    ctx->pc = 0x32FEA4u;
    SET_GPR_U32(ctx, 31, 0x32FEACu);
    ctx->pc = 0x32FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEA4u;
    // 0x32fea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0D0u, 0x32FEA4u, 0x32FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEACu;
label_32feac:
    // 0x32feac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32feb0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FEB0u;
        // 0x32feb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FEB8u;
}
