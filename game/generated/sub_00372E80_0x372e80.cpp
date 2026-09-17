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

// Function: sub_00372E80
// Address: 0x372e80 - 0x372ed0
void sub_00372E80_0x372e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372E80_0x372e80");
#endif

    switch (ctx->pc) {
        case 0x372ea4u: goto label_372ea4;
        case 0x372ebcu: goto label_372ebc;
        default: break;
    }

    ctx->pc = 0x372e80u;

    // 0x372e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372e84: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372e88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372e8c: 0x245076b0  addiu       $s0, $v0, 0x76B0
    ctx->pc = 0x372e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30384));
    // 0x372e90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372e90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D76B0u));
    // 0x372e94: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372E94u;
    {
        const bool branch_taken_0x372e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372E94u;
        // 0x372e98: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372e94) {
            ctx->pc = 0x372EBCu;
            goto label_372ebc;
        }
    }
    ctx->pc = 0x372E9Cu;
    // 0x372e9c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x372E9Cu;
    SET_GPR_U32(ctx, 31, 0x372EA4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x372E9Cu, 0x372EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EA4u;
label_372ea4:
    // 0x372ea4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372ea8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372eac: 0x24a51b78  addiu       $a1, $a1, 0x1B78
    ctx->pc = 0x372eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7032));
    // 0x372eb0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x372eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x372eb4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372EB4u;
    SET_GPR_U32(ctx, 31, 0x372EBCu);
    ctx->pc = 0x372EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372EB4u;
    // 0x372eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372EB4u, 0x372EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372EBCu;
label_372ebc:
    // 0x372ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372ec4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x372EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372EC8u;
        // 0x372ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372ED0u;
}
