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

// Function: sub_00332D38
// Address: 0x332d38 - 0x332d68
void sub_00332D38_0x332d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332D38_0x332d38");
#endif

    switch (ctx->pc) {
        case 0x332d4cu: goto label_332d4c;
        case 0x332d54u: goto label_332d54;
        case 0x332d5cu: goto label_332d5c;
        default: break;
    }

    ctx->pc = 0x332d38u;

    // 0x332d38: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x332d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x332d3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x332d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x332d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x332d44: 0xc0c7590  jal         func_31D640
    ctx->pc = 0x332D44u;
    SET_GPR_U32(ctx, 31, 0x332D4Cu);
    ctx->pc = 0x332D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332D44u;
    // 0x332d48: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D640u, 0x332D44u, 0x332D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D4Cu;
label_332d4c:
    // 0x332d4c: 0xc0cd15c  jal         func_334570
    ctx->pc = 0x332D4Cu;
    SET_GPR_U32(ctx, 31, 0x332D54u);
    ctx->pc = 0x334570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334570u, 0x332D4Cu, 0x332D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D54u;
label_332d54:
    // 0x332d54: 0xc0cd076  jal         func_3341D8
    ctx->pc = 0x332D54u;
    SET_GPR_U32(ctx, 31, 0x332D5Cu);
    ctx->pc = 0x3341D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3341D8u, 0x332D54u, 0x332D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332D5Cu;
label_332d5c:
    // 0x332d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332d60: 0x3e00008  jr          $ra
    ctx->pc = 0x332D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D60u;
        // 0x332d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332D68u;
}
