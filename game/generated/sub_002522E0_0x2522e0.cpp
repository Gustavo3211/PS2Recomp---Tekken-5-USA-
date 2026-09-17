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

// Function: sub_002522E0
// Address: 0x2522e0 - 0x252318
void sub_002522E0_0x2522e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002522E0_0x2522e0");
#endif

    ctx->pc = 0x2522e0u;

    // 0x2522e0: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x2522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2522e4: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x2522e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2522e8: 0x21ec3  sra         $v1, $v0, 27
    ctx->pc = 0x2522e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 27));
    // 0x2522ec: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x2522ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x2522f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2522f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2522f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2522F4u;
    {
        const bool branch_taken_0x2522f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522F4u;
        // 0x2522f8: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522f4) {
            ctx->pc = 0x252310u;
            goto label_252310;
        }
    }
    ctx->pc = 0x2522FCu;
    // 0x2522fc: 0x84a2004c  lh          $v0, 0x4C($a1)
    ctx->pc = 0x2522fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x252300: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x252300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x252304: 0x3e00008  jr          $ra
    ctx->pc = 0x252304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252304u;
        // 0x252308: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25230Cu;
    // 0x25230c: 0x0  nop
    ctx->pc = 0x25230cu;
    // NOP
label_252310:
    // 0x252310: 0x3e00008  jr          $ra
    ctx->pc = 0x252310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252310u;
        // 0x252314: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252318u;
}
