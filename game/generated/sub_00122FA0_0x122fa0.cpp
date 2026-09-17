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

// Function: sub_00122FA0
// Address: 0x122fa0 - 0x122fe0
void sub_00122FA0_0x122fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122FA0_0x122fa0");
#endif

    switch (ctx->pc) {
        case 0x122fb8u: goto label_122fb8;
        case 0x122fd0u: goto label_122fd0;
        default: break;
    }

    ctx->pc = 0x122fa0u;

    // 0x122fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122fa4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x122fa8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x122fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x122facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x122fb0: 0xc049c4a  jal         func_127128
    ctx->pc = 0x122FB0u;
    SET_GPR_U32(ctx, 31, 0x122FB8u);
    ctx->pc = 0x122FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FB0u;
    // 0x122fb4: 0xe7ac0010  swc1        $f12, 0x10($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x127128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127128u, 0x122FB0u, 0x122FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FB8u;
label_122fb8:
    // 0x122fb8: 0x9fa7000c  lwu         $a3, 0xC($sp)
    ctx->pc = 0x122fb8u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x122fbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x122fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122fc0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x122fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x122fc4: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x122fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x122fc8: 0xc048df4  jal         func_1237D0
    ctx->pc = 0x122FC8u;
    SET_GPR_U32(ctx, 31, 0x122FD0u);
    ctx->pc = 0x122FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FC8u;
    // 0x122fcc: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237D0u, 0x122FC8u, 0x122FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FD0u;
label_122fd0:
    // 0x122fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x122fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x122FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FD4u;
        // 0x122fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122FDCu;
    // 0x122fdc: 0x0  nop
    ctx->pc = 0x122fdcu;
    // NOP
    ctx->pc = 0x122fe0u;
}
