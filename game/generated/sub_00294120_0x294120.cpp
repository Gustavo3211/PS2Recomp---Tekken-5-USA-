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

// Function: sub_00294120
// Address: 0x294120 - 0x294168
void sub_00294120_0x294120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294120_0x294120");
#endif

    switch (ctx->pc) {
        case 0x294138u: goto label_294138;
        case 0x294140u: goto label_294140;
        case 0x294148u: goto label_294148;
        case 0x294154u: goto label_294154;
        default: break;
    }

    ctx->pc = 0x294120u;

    // 0x294120: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x294120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x294124: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294128: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x294128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29412c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294130: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x294130u;
    SET_GPR_U32(ctx, 31, 0x294138u);
    ctx->pc = 0x294134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294130u;
    // 0x294134: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x294130u, 0x294138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294138u;
label_294138:
    // 0x294138: 0xc092108  jal         func_248420
    ctx->pc = 0x294138u;
    SET_GPR_U32(ctx, 31, 0x294140u);
    ctx->pc = 0x29413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294138u;
    // 0x29413c: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248420u, 0x294138u, 0x294140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294140u;
label_294140:
    // 0x294140: 0xc091da4  jal         func_247690
    ctx->pc = 0x294140u;
    SET_GPR_U32(ctx, 31, 0x294148u);
    ctx->pc = 0x247690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247690u, 0x294140u, 0x294148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294148u;
label_294148:
    // 0x294148: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x294148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29414c: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x29414Cu;
    SET_GPR_U32(ctx, 31, 0x294154u);
    ctx->pc = 0x294150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29414Cu;
    // 0x294150: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x29414Cu, 0x294154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294154u;
label_294154:
    // 0x294154: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x294154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x294158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29415c: 0xac40886c  sw          $zero, -0x7794($v0)
    ctx->pc = 0x29415cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x294160: 0x3e00008  jr          $ra
    ctx->pc = 0x294160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294160u;
        // 0x294164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294168u;
}
