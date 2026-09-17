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

// Function: sub_00246068
// Address: 0x246068 - 0x246090
void sub_00246068_0x246068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246068_0x246068");
#endif

    switch (ctx->pc) {
        case 0x24606cu: goto label_24606c;
        case 0x246074u: goto label_246074;
        case 0x246078u: goto label_246078;
        default: break;
    }

    ctx->pc = 0x246068u;

    // 0x246068: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x246068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24606c:
    // 0x24606c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x24606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x246070: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x246070u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_246074:
    // 0x246074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246078:
    // 0x246078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24607c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24607cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246080: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246084: 0x3e00008  jr          $ra
    ctx->pc = 0x246084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246084u;
        // 0x246088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24608Cu;
    // 0x24608c: 0x0  nop
    ctx->pc = 0x24608cu;
    // NOP
    ctx->pc = 0x246090u;
}
