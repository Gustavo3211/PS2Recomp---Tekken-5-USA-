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

// Function: sub_002DE028
// Address: 0x2de028 - 0x2de058
void sub_002DE028_0x2de028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE028_0x2de028");
#endif

    switch (ctx->pc) {
        case 0x2de04cu: goto label_2de04c;
        default: break;
    }

    ctx->pc = 0x2de028u;

    // 0x2de028: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2de028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2de02c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de030: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x2de034: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x2de034u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2de038: 0xc42cf838  lwc1        $f12, -0x7C8($at)
    ctx->pc = 0x2de038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294965304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2de03c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de040: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2de040u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2de044: 0xc0cbfae  jal         func_32FEB8
    ctx->pc = 0x2DE044u;
    SET_GPR_U32(ctx, 31, 0x2DE04Cu);
    ctx->pc = 0x2DE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE044u;
    // 0x2de048: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FEB8u, 0x2DE044u, 0x2DE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE04Cu;
label_2de04c:
    // 0x2de04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de050: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE050u;
        // 0x2de054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE058u;
}
