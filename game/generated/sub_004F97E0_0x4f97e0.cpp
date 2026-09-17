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

// Function: sub_004F97E0
// Address: 0x4f97e0 - 0x4f9850
void sub_004F97E0_0x4f97e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F97E0_0x4f97e0");
#endif

    switch (ctx->pc) {
        case 0x4f9800u: goto label_4f9800;
        case 0x4f9808u: goto label_4f9808;
        default: break;
    }

    ctx->pc = 0x4f97e0u;

    // 0x4f97e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f97e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f97e4: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x4f97e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x4f97e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f97e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f97ec: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f97ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f97f0: 0x26101280  addiu       $s0, $s0, 0x1280
    ctx->pc = 0x4f97f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4736));
    // 0x4f97f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f97f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f97f8: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x4F97F8u;
    SET_GPR_U32(ctx, 31, 0x4F9800u);
    ctx->pc = 0x4F97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F97F8u;
    // 0x4f97fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x4F97F8u, 0x4F9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9800u;
label_4f9800:
    // 0x4f9800: 0xc122c2e  jal         func_48B0B8
    ctx->pc = 0x4F9800u;
    SET_GPR_U32(ctx, 31, 0x4F9808u);
    ctx->pc = 0x48B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B0B8u, 0x4F9800u, 0x4F9808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9808u;
label_4f9808:
    // 0x4f9808: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x4f9808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4f980c: 0x240300a6  addiu       $v1, $zero, 0xA6
    ctx->pc = 0x4f980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
    // 0x4f9810: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4f9810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4f9814: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x4f9814u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9818: 0xa603006c  sh          $v1, 0x6C($s0)
    ctx->pc = 0x4f9818u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f981c: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x4f981cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f9820: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x4f9820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9824: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x4f9824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9828: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x4f9828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f982c: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x4f982cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9830: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x4f9830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9834: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x4f9834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f9838: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x4f9838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f983c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f983cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f9840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f9840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f9844: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9844u;
        // 0x4f9848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F984Cu;
    // 0x4f984c: 0x0  nop
    ctx->pc = 0x4f984cu;
    // NOP
    ctx->pc = 0x4f9850u;
}
