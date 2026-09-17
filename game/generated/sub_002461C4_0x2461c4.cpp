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

// Function: sub_002461C4
// Address: 0x2461c4 - 0x2461e8
void sub_002461C4_0x2461c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002461C4_0x2461c4");
#endif

    switch (ctx->pc) {
        case 0x2461c8u: goto label_2461c8;
        case 0x2461ccu: goto label_2461cc;
        default: break;
    }

    ctx->pc = 0x2461c4u;

    // 0x2461c4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2461c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2461c8:
    // 0x2461c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2461c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2461cc:
    // 0x2461cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2461ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2461d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2461d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2461d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2461d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2461d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2461d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2461dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2461DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2461E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2461DCu;
        // 0x2461e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2461DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2461E4u;
    // 0x2461e4: 0x0  nop
    ctx->pc = 0x2461e4u;
    // NOP
    ctx->pc = 0x2461e8u;
}
