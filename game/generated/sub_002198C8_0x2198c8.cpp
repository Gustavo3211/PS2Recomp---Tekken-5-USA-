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

// Function: sub_002198C8
// Address: 0x2198c8 - 0x219910
void sub_002198C8_0x2198c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002198C8_0x2198c8");
#endif

    switch (ctx->pc) {
        case 0x2198dcu: goto label_2198dc;
        default: break;
    }

    ctx->pc = 0x2198c8u;

    // 0x2198c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2198c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2198cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2198ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2198d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2198d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2198d4: 0xc086624  jal         func_219890
    ctx->pc = 0x2198D4u;
    SET_GPR_U32(ctx, 31, 0x2198DCu);
    ctx->pc = 0x2198D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2198D4u;
    // 0x2198d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219890u, 0x2198D4u, 0x2198DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2198DCu;
label_2198dc:
    // 0x2198dc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2198dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2198e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2198e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2198e4: 0x8ca388a8  lw          $v1, -0x7758($a1)
    ctx->pc = 0x2198e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2198e8: 0x2042004  sllv        $a0, $a0, $s0
    ctx->pc = 0x2198e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 16) & 0x1F));
    // 0x2198ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2198ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2198f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2198f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2198f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2198f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2198f8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2198f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2198fc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2198fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x219900: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x219900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x219904: 0x3e00008  jr          $ra
    ctx->pc = 0x219904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219904u;
        // 0x219908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21990Cu;
    // 0x21990c: 0x0  nop
    ctx->pc = 0x21990cu;
    // NOP
    ctx->pc = 0x219910u;
}
