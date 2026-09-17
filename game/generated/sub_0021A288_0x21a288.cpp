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

// Function: sub_0021A288
// Address: 0x21a288 - 0x21a2c0
void sub_0021A288_0x21a288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A288_0x21a288");
#endif

    switch (ctx->pc) {
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2a8u: goto label_21a2a8;
        default: break;
    }

    ctx->pc = 0x21a288u;

    // 0x21a288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21a28c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21a28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21a294: 0xc08664a  jal         func_219928
    ctx->pc = 0x21A294u;
    SET_GPR_U32(ctx, 31, 0x21A29Cu);
    ctx->pc = 0x21A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A294u;
    // 0x21a298: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21A294u, 0x21A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A29Cu;
label_21a29c:
    // 0x21a29c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a2a0: 0xc08664a  jal         func_219928
    ctx->pc = 0x21A2A0u;
    SET_GPR_U32(ctx, 31, 0x21A2A8u);
    ctx->pc = 0x21A2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2A0u;
    // 0x21a2a4: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21A2A0u, 0x21A2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2A8u;
label_21a2a8:
    // 0x21a2a8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21a2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21a2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a2b0: 0xac408880  sw          $zero, -0x7780($v0)
    ctx->pc = 0x21a2b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A8880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8880u, _value); } while (0);
    // 0x21a2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x21A2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B4u;
        // 0x21a2b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A2BCu;
    // 0x21a2bc: 0x0  nop
    ctx->pc = 0x21a2bcu;
    // NOP
    ctx->pc = 0x21a2c0u;
}
