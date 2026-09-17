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

// Function: sub_00211678
// Address: 0x211678 - 0x211690
void sub_00211678_0x211678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211678_0x211678");
#endif

    switch (ctx->pc) {
        case 0x21167cu: goto label_21167c;
        case 0x211680u: goto label_211680;
        default: break;
    }

    ctx->pc = 0x211678u;

    // 0x211678: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x211678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21167c:
    // 0x21167c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21167cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_211680:
    // 0x211680: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x211680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x211684: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x211684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211688: 0x3e00008  jr          $ra
    ctx->pc = 0x211688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21168Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211688u;
        // 0x21168c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211690u;
}
