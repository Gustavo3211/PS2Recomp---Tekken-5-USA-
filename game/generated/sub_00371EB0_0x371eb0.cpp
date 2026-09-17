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

// Function: sub_00371EB0
// Address: 0x371eb0 - 0x371f00
void sub_00371EB0_0x371eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371EB0_0x371eb0");
#endif

    switch (ctx->pc) {
        case 0x371ed4u: goto label_371ed4;
        case 0x371ee8u: goto label_371ee8;
        default: break;
    }

    ctx->pc = 0x371eb0u;

    // 0x371eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371eb4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371ebc: 0x245075e0  addiu       $s0, $v0, 0x75E0
    ctx->pc = 0x371ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30176));
    // 0x371ec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D75E0u));
    // 0x371ec4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x371EC4u;
    {
        const bool branch_taken_0x371ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EC4u;
        // 0x371ec8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ec4) {
            ctx->pc = 0x371EE8u;
            goto label_371ee8;
        }
    }
    ctx->pc = 0x371ECCu;
    // 0x371ecc: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x371ECCu;
    SET_GPR_U32(ctx, 31, 0x371ED4u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x371ECCu, 0x371ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371ED4u;
label_371ed4:
    // 0x371ed4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371ed8: 0x24a50d70  addiu       $a1, $a1, 0xD70
    ctx->pc = 0x371ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3440));
    // 0x371edc: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x371edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x371ee0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371EE0u;
    SET_GPR_U32(ctx, 31, 0x371EE8u);
    ctx->pc = 0x371EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371EE0u;
    // 0x371ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371EE0u, 0x371EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EE8u;
label_371ee8:
    // 0x371ee8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x371EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EF4u;
        // 0x371ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371EFCu;
    // 0x371efc: 0x0  nop
    ctx->pc = 0x371efcu;
    // NOP
    ctx->pc = 0x371f00u;
}
