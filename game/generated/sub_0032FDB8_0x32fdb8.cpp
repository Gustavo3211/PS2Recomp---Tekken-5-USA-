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

// Function: sub_0032FDB8
// Address: 0x32fdb8 - 0x32fe08
void sub_0032FDB8_0x32fdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FDB8_0x32fdb8");
#endif

    switch (ctx->pc) {
        case 0x32fddcu: goto label_32fddc;
        case 0x32fdfcu: goto label_32fdfc;
        default: break;
    }

    ctx->pc = 0x32fdb8u;

    // 0x32fdb8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32fdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32fdbc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x32fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32fdc0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FDC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDC0u;
        // 0x32fdc4: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FDC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FDC8u;
    // 0x32fdc8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32fdcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fdccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fdd4: 0xc0cb3b8  jal         func_32CEE0
    ctx->pc = 0x32FDD4u;
    SET_GPR_U32(ctx, 31, 0x32FDDCu);
    ctx->pc = 0x32FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FDD4u;
    // 0x32fdd8: 0x2484ff00  addiu       $a0, $a0, -0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CEE0u, 0x32FDD4u, 0x32FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDDCu;
label_32fddc:
    // 0x32fddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fde0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FDE0u;
        // 0x32fde4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FDE8u;
    // 0x32fde8: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32fdec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32fdecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32fdf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fdf4: 0xc0cb3c6  jal         func_32CF18
    ctx->pc = 0x32FDF4u;
    SET_GPR_U32(ctx, 31, 0x32FDFCu);
    ctx->pc = 0x32FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FDF4u;
    // 0x32fdf8: 0x2484ff00  addiu       $a0, $a0, -0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF18u, 0x32FDF4u, 0x32FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FDFCu;
label_32fdfc:
    // 0x32fdfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fe00: 0x3e00008  jr          $ra
    ctx->pc = 0x32FE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FE00u;
        // 0x32fe04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FE08u;
}
