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

// Function: sub_00235458
// Address: 0x235458 - 0x235478
void sub_00235458_0x235458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235458_0x235458");
#endif

    switch (ctx->pc) {
        case 0x23545cu: goto label_23545c;
        case 0x235460u: goto label_235460;
        default: break;
    }

    ctx->pc = 0x235458u;

    // 0x235458: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x235458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_23545c:
    // 0x23545c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x23545cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_235460:
    // 0x235460: 0xae110030  sw          $s1, 0x30($s0)
    ctx->pc = 0x235460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
    // 0x235464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23546c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23546cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235470: 0x3e00008  jr          $ra
    ctx->pc = 0x235470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235470u;
        // 0x235474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235478u;
}
