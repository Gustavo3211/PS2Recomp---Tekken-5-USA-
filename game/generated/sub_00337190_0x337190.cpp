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

// Function: sub_00337190
// Address: 0x337190 - 0x3371e0
void sub_00337190_0x337190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337190_0x337190");
#endif

    switch (ctx->pc) {
        case 0x3371b0u: goto label_3371b0;
        case 0x3371b8u: goto label_3371b8;
        case 0x3371c8u: goto label_3371c8;
        default: break;
    }

    ctx->pc = 0x337190u;

    // 0x337190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337194: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x337194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x337198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33719c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33719cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3371a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3371a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3371a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3371a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3371a8: 0xc0cd866  jal         func_336198
    ctx->pc = 0x3371A8u;
    SET_GPR_U32(ctx, 31, 0x3371B0u);
    ctx->pc = 0x3371ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371A8u;
    // 0x3371ac: 0x261101c8  addiu       $s1, $s0, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336198u, 0x3371A8u, 0x3371B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371B0u;
label_3371b0:
    // 0x3371b0: 0xc0cda26  jal         func_336898
    ctx->pc = 0x3371B0u;
    SET_GPR_U32(ctx, 31, 0x3371B8u);
    ctx->pc = 0x3371B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371B0u;
    // 0x3371b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x3371B0u, 0x3371B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371B8u;
label_3371b8:
    // 0x3371b8: 0x260401bc  addiu       $a0, $s0, 0x1BC
    ctx->pc = 0x3371b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x3371bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3371bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3371c0: 0xc0cd9e0  jal         func_336780
    ctx->pc = 0x3371C0u;
    SET_GPR_U32(ctx, 31, 0x3371C8u);
    ctx->pc = 0x3371C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3371C0u;
    // 0x3371c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336780u, 0x3371C0u, 0x3371C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3371C8u;
label_3371c8:
    // 0x3371c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3371c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3371cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3371ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3371d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3371d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3371d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3371D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3371D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3371D4u;
        // 0x3371d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3371D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3371DCu;
    // 0x3371dc: 0x0  nop
    ctx->pc = 0x3371dcu;
    // NOP
    ctx->pc = 0x3371e0u;
}
