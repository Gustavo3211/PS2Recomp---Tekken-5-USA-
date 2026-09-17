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

// Function: sub_0031BA48
// Address: 0x31ba48 - 0x31ba88
void sub_0031BA48_0x31ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BA48_0x31ba48");
#endif

    switch (ctx->pc) {
        case 0x31ba5cu: goto label_31ba5c;
        default: break;
    }

    ctx->pc = 0x31ba48u;

    // 0x31ba48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ba4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ba4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ba50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31ba54: 0xc0c6b92  jal         func_31AE48
    ctx->pc = 0x31BA54u;
    SET_GPR_U32(ctx, 31, 0x31BA5Cu);
    ctx->pc = 0x31BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31BA54u;
    // 0x31ba58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AE48u, 0x31BA54u, 0x31BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BA5Cu;
label_31ba5c:
    // 0x31ba5c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x31ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x31ba60: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x31ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x31ba64: 0x244216a8  addiu       $v0, $v0, 0x16A8
    ctx->pc = 0x31ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5800));
    // 0x31ba68: 0x248424a8  addiu       $a0, $a0, 0x24A8
    ctx->pc = 0x31ba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9384));
    // 0x31ba6c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x31ba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x31ba70: 0xae0400b0  sw          $a0, 0xB0($s0)
    ctx->pc = 0x31ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 4));
    // 0x31ba74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ba74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ba78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31ba78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ba7c: 0x3e00008  jr          $ra
    ctx->pc = 0x31BA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA7Cu;
        // 0x31ba80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BA84u;
    // 0x31ba84: 0x0  nop
    ctx->pc = 0x31ba84u;
    // NOP
    ctx->pc = 0x31ba88u;
}
