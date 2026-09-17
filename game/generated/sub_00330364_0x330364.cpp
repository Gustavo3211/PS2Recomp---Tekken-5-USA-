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

// Function: sub_00330364
// Address: 0x330364 - 0x330394
void sub_00330364_0x330364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330364_0x330364");
#endif

    switch (ctx->pc) {
        case 0x33036cu: goto label_33036c;
        default: break;
    }

    ctx->pc = 0x330364u;

    // 0x330364: 0xc0c817e  jal         func_3205F8
    ctx->pc = 0x330364u;
    SET_GPR_U32(ctx, 31, 0x33036Cu);
    ctx->pc = 0x330368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330364u;
    // 0x330368: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3205F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3205F8u, 0x330364u, 0x33036Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33036Cu;
label_33036c:
    // 0x33036c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33036cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330370: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x330370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330374: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x330374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330378: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x330378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33037c: 0x3e00008  jr          $ra
    ctx->pc = 0x33037Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33037Cu;
        // 0x330380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33037Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330384u;
    // 0x330384: 0x0  nop
    ctx->pc = 0x330384u;
    // NOP
    // 0x330388: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x330388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33038c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x330390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x330394u;
}
