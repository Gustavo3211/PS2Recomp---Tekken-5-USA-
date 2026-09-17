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

// Function: sub_003208E8
// Address: 0x3208e8 - 0x320928
void sub_003208E8_0x3208e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003208E8_0x3208e8");
#endif

    switch (ctx->pc) {
        case 0x320900u: goto label_320900;
        case 0x320914u: goto label_320914;
        default: break;
    }

    ctx->pc = 0x3208e8u;

    // 0x3208e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3208e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3208ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3208ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3208f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3208f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3208f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3208f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3208f8: 0xc0cfaf2  jal         func_33EBC8
    ctx->pc = 0x3208F8u;
    SET_GPR_U32(ctx, 31, 0x320900u);
    ctx->pc = 0x3208FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3208F8u;
    // 0x3208fc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBC8u, 0x3208F8u, 0x320900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320900u;
label_320900:
    // 0x320900: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x320900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x320904: 0x34844080  ori         $a0, $a0, 0x4080
    ctx->pc = 0x320904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16512);
    // 0x320908: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x320908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x32090c: 0xc0cfaf2  jal         func_33EBC8
    ctx->pc = 0x32090Cu;
    SET_GPR_U32(ctx, 31, 0x320914u);
    ctx->pc = 0x33EBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBC8u, 0x32090Cu, 0x320914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320914u;
label_320914:
    // 0x320914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320918: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x320918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32091c: 0x3e00008  jr          $ra
    ctx->pc = 0x32091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32091Cu;
        // 0x320920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32091Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320924u;
    // 0x320924: 0x0  nop
    ctx->pc = 0x320924u;
    // NOP
    ctx->pc = 0x320928u;
}
