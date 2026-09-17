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

// Function: sub_0036EAC8
// Address: 0x36eac8 - 0x36eb20
void sub_0036EAC8_0x36eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EAC8_0x36eac8");
#endif

    switch (ctx->pc) {
        case 0x36eaecu: goto label_36eaec;
        case 0x36eb04u: goto label_36eb04;
        default: break;
    }

    ctx->pc = 0x36eac8u;

    // 0x36eac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36eac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36eacc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ead0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ead4: 0x24507210  addiu       $s0, $v0, 0x7210
    ctx->pc = 0x36ead4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29200));
    // 0x36ead8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7210u));
    // 0x36eadc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36EADCu;
    {
        const bool branch_taken_0x36eadc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EADCu;
        // 0x36eae0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36eadc) {
            ctx->pc = 0x36EB04u;
            goto label_36eb04;
        }
    }
    ctx->pc = 0x36EAE4u;
    // 0x36eae4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36EAE4u;
    SET_GPR_U32(ctx, 31, 0x36EAECu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36EAE4u, 0x36EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EAECu;
label_36eaec:
    // 0x36eaec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36eaf0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36eaf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36eaf4: 0x24a5fc78  addiu       $a1, $a1, -0x388
    ctx->pc = 0x36eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966392));
    // 0x36eaf8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36eafc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36EAFCu;
    SET_GPR_U32(ctx, 31, 0x36EB04u);
    ctx->pc = 0x36EB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EAFCu;
    // 0x36eb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36EAFCu, 0x36EB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EB04u;
label_36eb04:
    // 0x36eb04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36eb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eb08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36eb08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36eb0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36eb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36eb10: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB10u;
        // 0x36eb14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB18u;
    // 0x36eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x36EB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EB18u;
        // 0x36eb1c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EB20u;
}
