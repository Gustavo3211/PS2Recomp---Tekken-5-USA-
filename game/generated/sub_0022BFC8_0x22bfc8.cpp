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

// Function: sub_0022BFC8
// Address: 0x22bfc8 - 0x22c010
void sub_0022BFC8_0x22bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BFC8_0x22bfc8");
#endif

    switch (ctx->pc) {
        case 0x22bfdcu: goto label_22bfdc;
        case 0x22bffcu: goto label_22bffc;
        default: break;
    }

    ctx->pc = 0x22bfc8u;

    // 0x22bfc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bfd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22bfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22bfd4: 0xc08afec  jal         func_22BFB0
    ctx->pc = 0x22BFD4u;
    SET_GPR_U32(ctx, 31, 0x22BFDCu);
    ctx->pc = 0x22BFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BFD4u;
    // 0x22bfd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFB0u, 0x22BFD4u, 0x22BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFDCu;
label_22bfdc:
    // 0x22bfdc: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x22bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x22bfe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BFE0u;
    {
        const bool branch_taken_0x22bfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BFE0u;
        // 0x22bfe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfe0) {
            ctx->pc = 0x22BFFCu;
            goto label_22bffc;
        }
    }
    ctx->pc = 0x22BFE8u;
    // 0x22bfe8: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x22bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x22bfec: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x22bfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x22bff0: 0x8ca59274  lw          $a1, -0x6D8C($a1)
    ctx->pc = 0x22bff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294939252)));
    // 0x22bff4: 0xc08b0de  jal         func_22C378
    ctx->pc = 0x22BFF4u;
    SET_GPR_U32(ctx, 31, 0x22BFFCu);
    ctx->pc = 0x22C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C378u, 0x22BFF4u, 0x22BFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BFFCu;
label_22bffc:
    // 0x22bffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c000: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c004: 0x3e00008  jr          $ra
    ctx->pc = 0x22C004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C004u;
        // 0x22c008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C00Cu;
    // 0x22c00c: 0x0  nop
    ctx->pc = 0x22c00cu;
    // NOP
    ctx->pc = 0x22c010u;
}
