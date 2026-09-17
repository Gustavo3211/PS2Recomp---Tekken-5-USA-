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

// Function: sub_002487D8
// Address: 0x2487d8 - 0x248810
void sub_002487D8_0x2487d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002487D8_0x2487d8");
#endif

    switch (ctx->pc) {
        case 0x2487e4u: goto label_2487e4;
        case 0x248800u: goto label_248800;
        default: break;
    }

    ctx->pc = 0x2487d8u;

    // 0x2487d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2487d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2487dc: 0xc0921a0  jal         func_248680
    ctx->pc = 0x2487DCu;
    SET_GPR_U32(ctx, 31, 0x2487E4u);
    ctx->pc = 0x2487E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487DCu;
    // 0x2487e0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248680u, 0x2487DCu, 0x2487E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487E4u;
label_2487e4:
    // 0x2487e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2487e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2487e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2487e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2487ec: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x2487ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2487f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2487f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2487f4: 0x80921a0  j           func_248680
    ctx->pc = 0x2487F4u;
    ctx->pc = 0x2487F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487F4u;
    // 0x2487f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248680u;
    sub_00248680_0x248680(rdram, ctx, runtime); return;
    ctx->pc = 0x2487FCu;
    // 0x2487fc: 0x0  nop
    ctx->pc = 0x2487fcu;
    // NOP
label_248800:
    // 0x248800: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x248800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x248804: 0x3e00008  jr          $ra
    ctx->pc = 0x248804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248804u;
        // 0x248808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24880Cu;
    // 0x24880c: 0x0  nop
    ctx->pc = 0x24880cu;
    // NOP
    ctx->pc = 0x248810u;
}
