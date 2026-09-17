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

// Function: sub_002643C0
// Address: 0x2643c0 - 0x264410
void sub_002643C0_0x2643c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002643C0_0x2643c0");
#endif

    switch (ctx->pc) {
        case 0x2643e8u: goto label_2643e8;
        case 0x2643f0u: goto label_2643f0;
        case 0x2643fcu: goto label_2643fc;
        default: break;
    }

    ctx->pc = 0x2643c0u;

    // 0x2643c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2643c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2643c4: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2643c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2643c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2643c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2643cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2643ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2643d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2643d4: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x2643d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2643d8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2643D8u;
    {
        const bool branch_taken_0x2643d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2643d8) {
            ctx->pc = 0x2643DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2643D8u;
            // 0x2643dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264400u;
            goto label_264400;
        }
    }
    ctx->pc = 0x2643E0u;
    // 0x2643e0: 0xc07e62c  jal         func_1F98B0
    ctx->pc = 0x2643E0u;
    SET_GPR_U32(ctx, 31, 0x2643E8u);
    ctx->pc = 0x1F98B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98B0u, 0x2643E0u, 0x2643E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643E8u;
label_2643e8:
    // 0x2643e8: 0xc0404de  jal         func_101378
    ctx->pc = 0x2643E8u;
    SET_GPR_U32(ctx, 31, 0x2643F0u);
    ctx->pc = 0x101378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101378u, 0x2643E8u, 0x2643F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643F0u;
label_2643f0:
    // 0x2643f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2643f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643f4: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x2643F4u;
    SET_GPR_U32(ctx, 31, 0x2643FCu);
    ctx->pc = 0x2643F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2643F4u;
    // 0x2643f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x2643F4u, 0x2643FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2643FCu;
label_2643fc:
    // 0x2643fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2643fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264400:
    // 0x264400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264404: 0x3e00008  jr          $ra
    ctx->pc = 0x264404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264404u;
        // 0x264408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26440Cu;
    // 0x26440c: 0x0  nop
    ctx->pc = 0x26440cu;
    // NOP
    ctx->pc = 0x264410u;
}
