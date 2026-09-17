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

// Function: sub_00259FB8
// Address: 0x259fb8 - 0x25a000
void sub_00259FB8_0x259fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259FB8_0x259fb8");
#endif

    switch (ctx->pc) {
        case 0x259fd0u: goto label_259fd0;
        case 0x259fe0u: goto label_259fe0;
        default: break;
    }

    ctx->pc = 0x259fb8u;

    // 0x259fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x259fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x259fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259fc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x259fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x259fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x259fc8: 0xc0967e4  jal         func_259F90
    ctx->pc = 0x259FC8u;
    SET_GPR_U32(ctx, 31, 0x259FD0u);
    ctx->pc = 0x259FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FC8u;
    // 0x259fcc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F90u, 0x259FC8u, 0x259FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FD0u;
label_259fd0:
    // 0x259fd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x259fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259fd8: 0xc0963e8  jal         func_258FA0
    ctx->pc = 0x259FD8u;
    SET_GPR_U32(ctx, 31, 0x259FE0u);
    ctx->pc = 0x259FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259FD8u;
    // 0x259fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FA0u, 0x259FD8u, 0x259FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259FE0u;
label_259fe0:
    // 0x259fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259fe4: 0xae0205c0  sw          $v0, 0x5C0($s0)
    ctx->pc = 0x259fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1472), GPR_U32(ctx, 2));
    // 0x259fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x259fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x259fec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x259fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259ff0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x259ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x259FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x259FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259FF4u;
        // 0x259ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259FFCu;
    // 0x259ffc: 0x0  nop
    ctx->pc = 0x259ffcu;
    // NOP
    ctx->pc = 0x25a000u;
}
