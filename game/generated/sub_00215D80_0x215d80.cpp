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

// Function: sub_00215D80
// Address: 0x215d80 - 0x215dd0
void sub_00215D80_0x215d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215D80_0x215d80");
#endif

    switch (ctx->pc) {
        case 0x215d94u: goto label_215d94;
        case 0x215da0u: goto label_215da0;
        case 0x215db0u: goto label_215db0;
        default: break;
    }

    ctx->pc = 0x215d80u;

    // 0x215d80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x215d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x215d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215d88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x215d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x215d8c: 0xc085202  jal         func_214808
    ctx->pc = 0x215D8Cu;
    SET_GPR_U32(ctx, 31, 0x215D94u);
    ctx->pc = 0x215D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D8Cu;
    // 0x215d90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214808u, 0x215D8Cu, 0x215D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215D94u;
label_215d94:
    // 0x215d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d98: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x215D98u;
    SET_GPR_U32(ctx, 31, 0x215DA0u);
    ctx->pc = 0x215D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215D98u;
    // 0x215d9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x215D98u, 0x215DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DA0u;
label_215da0:
    // 0x215da0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x215da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x215da4: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x215da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x215da8: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x215DA8u;
    SET_GPR_U32(ctx, 31, 0x215DB0u);
    ctx->pc = 0x215DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215DA8u;
    // 0x215dac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x215DA8u, 0x215DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215DB0u;
label_215db0:
    // 0x215db0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x215db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x215db4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x215db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x215db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215dbc: 0xac70886c  sw          $s0, -0x7794($v1)
    ctx->pc = 0x215dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x215dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215dc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x215dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x215DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215DC8u;
        // 0x215dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215DD0u;
}
