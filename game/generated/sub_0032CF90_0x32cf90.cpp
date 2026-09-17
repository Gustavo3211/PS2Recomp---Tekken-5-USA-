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

// Function: sub_0032CF90
// Address: 0x32cf90 - 0x32cfe0
void sub_0032CF90_0x32cf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CF90_0x32cf90");
#endif

    switch (ctx->pc) {
        case 0x32cfacu: goto label_32cfac;
        case 0x32cfc0u: goto label_32cfc0;
        default: break;
    }

    ctx->pc = 0x32cf90u;

    // 0x32cf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32cf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32cf94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32cf98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32cf98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cf9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32cf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32cfa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32cfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32cfa4: 0xc0d0e36  jal         func_3438D8
    ctx->pc = 0x32CFA4u;
    SET_GPR_U32(ctx, 31, 0x32CFACu);
    ctx->pc = 0x32CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CFA4u;
    // 0x32cfa8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3438D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3438D8u, 0x32CFA4u, 0x32CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFACu;
label_32cfac:
    // 0x32cfac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32cfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cfb0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32CFB0u;
    {
        const bool branch_taken_0x32cfb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFB0u;
        // 0x32cfb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32cfb0) {
            ctx->pc = 0x32CFCCu;
            goto label_32cfcc;
        }
    }
    ctx->pc = 0x32CFB8u;
    // 0x32cfb8: 0xc0d0e64  jal         func_343990
    ctx->pc = 0x32CFB8u;
    SET_GPR_U32(ctx, 31, 0x32CFC0u);
    ctx->pc = 0x343990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343990u, 0x32CFB8u, 0x32CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CFC0u;
label_32cfc0:
    // 0x32cfc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32cfc4: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
    ctx->pc = 0x32CFC4u;
    {
        const bool branch_taken_0x32cfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x32cfc4) {
            ctx->pc = 0x32CFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32CFC4u;
            // 0x32cfc8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32CFCCu;
            goto label_32cfcc;
        }
    }
    ctx->pc = 0x32CFCCu;
label_32cfcc:
    // 0x32cfcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32cfccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32cfd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32cfd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32cfd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32cfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32cfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x32CFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CFD8u;
        // 0x32cfdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CFE0u;
}
