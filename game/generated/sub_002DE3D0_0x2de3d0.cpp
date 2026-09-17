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

// Function: sub_002DE3D0
// Address: 0x2de3d0 - 0x2de438
void sub_002DE3D0_0x2de3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE3D0_0x2de3d0");
#endif

    switch (ctx->pc) {
        case 0x2de3f8u: goto label_2de3f8;
        case 0x2de400u: goto label_2de400;
        case 0x2de410u: goto label_2de410;
        default: break;
    }

    ctx->pc = 0x2de3d0u;

    // 0x2de3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de3d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de3d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2de3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2de3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2de3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2de3e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de3e4: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x2de3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2de3e8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DE3E8u;
    {
        const bool branch_taken_0x2de3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3E8u;
        // 0x2de3ec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3e8) {
            ctx->pc = 0x2DE420u;
            goto label_2de420;
        }
    }
    ctx->pc = 0x2DE3F0u;
    // 0x2de3f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DE3F0u;
    {
        const bool branch_taken_0x2de3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE3F0u;
        // 0x2de3f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de3f0) {
            ctx->pc = 0x2DE408u;
            goto label_2de408;
        }
    }
    ctx->pc = 0x2DE3F8u;
label_2de3f8:
    // 0x2de3f8: 0xc04a3d7  jal         func_128F5C
    ctx->pc = 0x2DE3F8u;
    SET_GPR_U32(ctx, 31, 0x2DE400u);
    ctx->pc = 0x2DE3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE3F8u;
    // 0x2de3fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F5Cu, 0x2DE3F8u, 0x2DE400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE400u;
label_2de400:
    // 0x2de400: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x2de400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2de404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de408:
    // 0x2de408: 0xc04a3d7  jal         func_128F5C
    ctx->pc = 0x2DE408u;
    SET_GPR_U32(ctx, 31, 0x2DE410u);
    ctx->pc = 0x2DE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE408u;
    // 0x2de40c: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128F5Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128F5Cu, 0x2DE408u, 0x2DE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE410u;
label_2de410:
    // 0x2de410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de414: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DE414u;
    {
        const bool branch_taken_0x2de414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE414u;
        // 0x2de418: 0x2405007c  addiu       $a1, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de414) {
            ctx->pc = 0x2DE3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de3f8;
        }
    }
    ctx->pc = 0x2DE41Cu;
    // 0x2de41c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2de41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2de420:
    // 0x2de420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2de420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de424: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2de424u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2de428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de42c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE42Cu;
        // 0x2de430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE434u;
    // 0x2de434: 0x0  nop
    ctx->pc = 0x2de434u;
    // NOP
    ctx->pc = 0x2de438u;
}
