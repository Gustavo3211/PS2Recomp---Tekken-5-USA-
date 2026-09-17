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

// Function: sub_0020B6F8
// Address: 0x20b6f8 - 0x20b730
void sub_0020B6F8_0x20b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B6F8_0x20b6f8");
#endif

    switch (ctx->pc) {
        case 0x20b720u: goto label_20b720;
        default: break;
    }

    ctx->pc = 0x20b6f8u;

    // 0x20b6f8: 0xc78d83b4  lwc1        $f13, -0x7C4C($gp)
    ctx->pc = 0x20b6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20b6fc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x20b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x20b700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b704: 0x2484c480  addiu       $a0, $a0, -0x3B80
    ctx->pc = 0x20b704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952064));
    // 0x20b708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20b70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b718: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x20B718u;
    SET_GPR_U32(ctx, 31, 0x20B720u);
    ctx->pc = 0x20B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B718u;
    // 0x20b71c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x20B718u, 0x20B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B720u;
label_20b720:
    // 0x20b720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b724: 0x3e00008  jr          $ra
    ctx->pc = 0x20B724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B724u;
        // 0x20b728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B72Cu;
    // 0x20b72c: 0x0  nop
    ctx->pc = 0x20b72cu;
    // NOP
    ctx->pc = 0x20b730u;
}
