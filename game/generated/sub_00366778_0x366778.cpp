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

// Function: sub_00366778
// Address: 0x366778 - 0x3667c8
void sub_00366778_0x366778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366778_0x366778");
#endif

    switch (ctx->pc) {
        case 0x3667a0u: goto label_3667a0;
        case 0x3667a8u: goto label_3667a8;
        default: break;
    }

    ctx->pc = 0x366778u;

    // 0x366778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36677c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366788: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x366788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36678c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x36678cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366790: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x366790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x366794: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x366794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x366798: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x366798u;
    SET_GPR_U32(ctx, 31, 0x3667A0u);
    ctx->pc = 0x36679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366798u;
    // 0x36679c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x366798u, 0x3667A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667A0u;
label_3667a0:
    // 0x3667a0: 0xc0d6a96  jal         func_35AA58
    ctx->pc = 0x3667A0u;
    SET_GPR_U32(ctx, 31, 0x3667A8u);
    ctx->pc = 0x35AA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AA58u, 0x3667A0u, 0x3667A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3667A8u;
label_3667a8:
    // 0x3667a8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3667a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3667ac: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x3667acu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x3667b0: 0xac20a80c  sw          $zero, -0x57F4($at)
    ctx->pc = 0x3667b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944780), GPR_U32(ctx, 0));
    // 0x3667b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3667b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3667b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3667b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3667bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3667BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3667C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3667BCu;
        // 0x3667c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3667BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3667C4u;
    // 0x3667c4: 0x0  nop
    ctx->pc = 0x3667c4u;
    // NOP
    ctx->pc = 0x3667c8u;
}
