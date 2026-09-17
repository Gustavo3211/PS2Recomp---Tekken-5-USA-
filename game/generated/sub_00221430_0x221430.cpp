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

// Function: sub_00221430
// Address: 0x221430 - 0x221458
void sub_00221430_0x221430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221430_0x221430");
#endif

    switch (ctx->pc) {
        case 0x221448u: goto label_221448;
        default: break;
    }

    ctx->pc = 0x221430u;

    // 0x221430: 0xc78c84a0  lwc1        $f12, -0x7B60($gp)
    ctx->pc = 0x221430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x221434: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22143c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22143cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221440: 0xc0884c0  jal         func_221300
    ctx->pc = 0x221440u;
    SET_GPR_U32(ctx, 31, 0x221448u);
    ctx->pc = 0x221444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221440u;
    // 0x221444: 0x24a57000  addiu       $a1, $a1, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221300u, 0x221440u, 0x221448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221448u;
label_221448:
    // 0x221448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22144c: 0x3e00008  jr          $ra
    ctx->pc = 0x22144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22144Cu;
        // 0x221450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221454u;
    // 0x221454: 0x0  nop
    ctx->pc = 0x221454u;
    // NOP
    ctx->pc = 0x221458u;
}
