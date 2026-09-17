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

// Function: sub_00245EDC
// Address: 0x245edc - 0x245f00
void sub_00245EDC_0x245edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245EDC_0x245edc");
#endif

    switch (ctx->pc) {
        case 0x245ee4u: goto label_245ee4;
        case 0x245ee8u: goto label_245ee8;
        default: break;
    }

    ctx->pc = 0x245edcu;

    // 0x245edc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x245edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x245ee0: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x245ee0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_245ee4:
    // 0x245ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x245ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_245ee8:
    // 0x245ee8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x245ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x245eec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x245eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245ef0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x245ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x245ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x245EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245EF4u;
        // 0x245ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x245EFCu;
    // 0x245efc: 0x0  nop
    ctx->pc = 0x245efcu;
    // NOP
    ctx->pc = 0x245f00u;
}
