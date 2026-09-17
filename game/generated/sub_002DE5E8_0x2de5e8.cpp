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

// Function: sub_002DE5E8
// Address: 0x2de5e8 - 0x2de638
void sub_002DE5E8_0x2de5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE5E8_0x2de5e8");
#endif

    switch (ctx->pc) {
        case 0x2de604u: goto label_2de604;
        case 0x2de610u: goto label_2de610;
        case 0x2de620u: goto label_2de620;
        default: break;
    }

    ctx->pc = 0x2de5e8u;

    // 0x2de5e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de5ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de5f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de5f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de5f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de5fc: 0xc0b7b88  jal         func_2DEE20
    ctx->pc = 0x2DE5FCu;
    SET_GPR_U32(ctx, 31, 0x2DE604u);
    ctx->pc = 0x2DE600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE5FCu;
    // 0x2de600: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEE20u, 0x2DE5FCu, 0x2DE604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE604u;
label_2de604:
    // 0x2de604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de608: 0xc0b7542  jal         func_2DD508
    ctx->pc = 0x2DE608u;
    SET_GPR_U32(ctx, 31, 0x2DE610u);
    ctx->pc = 0x2DE60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE608u;
    // 0x2de60c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD508u, 0x2DE608u, 0x2DE610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE610u;
label_2de610:
    // 0x2de610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2de614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de618: 0xc0b7cfc  jal         func_2DF3F0
    ctx->pc = 0x2DE618u;
    SET_GPR_U32(ctx, 31, 0x2DE620u);
    ctx->pc = 0x2DE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE618u;
    // 0x2de61c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3F0u, 0x2DE618u, 0x2DE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE620u;
label_2de620:
    // 0x2de620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de62c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE62Cu;
        // 0x2de630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE634u;
    // 0x2de634: 0x0  nop
    ctx->pc = 0x2de634u;
    // NOP
    ctx->pc = 0x2de638u;
}
