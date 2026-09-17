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

// Function: sub_003341D8
// Address: 0x3341d8 - 0x334220
void sub_003341D8_0x3341d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003341D8_0x3341d8");
#endif

    switch (ctx->pc) {
        case 0x3341f4u: goto label_3341f4;
        case 0x3341fcu: goto label_3341fc;
        case 0x334204u: goto label_334204;
        case 0x33420cu: goto label_33420c;
        default: break;
    }

    ctx->pc = 0x3341d8u;

    // 0x3341d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3341d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3341dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3341dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3341e0: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3341e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3341e4: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x3341e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x3341e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3341e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3341ec: 0xc0cd396  jal         func_334E58
    ctx->pc = 0x3341ECu;
    SET_GPR_U32(ctx, 31, 0x3341F4u);
    ctx->pc = 0x3341F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341ECu;
    // 0x3341f0: 0x26040414  addiu       $a0, $s0, 0x414 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1044));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E58u, 0x3341ECu, 0x3341F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341F4u;
label_3341f4:
    // 0x3341f4: 0xc0cd396  jal         func_334E58
    ctx->pc = 0x3341F4u;
    SET_GPR_U32(ctx, 31, 0x3341FCu);
    ctx->pc = 0x3341F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341F4u;
    // 0x3341f8: 0x26040424  addiu       $a0, $s0, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E58u, 0x3341F4u, 0x3341FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3341FCu;
label_3341fc:
    // 0x3341fc: 0xc0cd396  jal         func_334E58
    ctx->pc = 0x3341FCu;
    SET_GPR_U32(ctx, 31, 0x334204u);
    ctx->pc = 0x334200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3341FCu;
    // 0x334200: 0x26040434  addiu       $a0, $s0, 0x434 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E58u, 0x3341FCu, 0x334204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334204u;
label_334204:
    // 0x334204: 0xc04066a  jal         func_1019A8
    ctx->pc = 0x334204u;
    SET_GPR_U32(ctx, 31, 0x33420Cu);
    ctx->pc = 0x334208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334204u;
    // 0x334208: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1019A8u, 0x334204u, 0x33420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33420Cu;
label_33420c:
    // 0x33420c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33420cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x334210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x334214: 0x3e00008  jr          $ra
    ctx->pc = 0x334214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334214u;
        // 0x334218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33421Cu;
    // 0x33421c: 0x0  nop
    ctx->pc = 0x33421cu;
    // NOP
    ctx->pc = 0x334220u;
}
