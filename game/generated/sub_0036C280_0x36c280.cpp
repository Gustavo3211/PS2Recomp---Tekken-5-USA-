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

// Function: sub_0036C280
// Address: 0x36c280 - 0x36c2d0
void sub_0036C280_0x36c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C280_0x36c280");
#endif

    switch (ctx->pc) {
        case 0x36c2a4u: goto label_36c2a4;
        case 0x36c2bcu: goto label_36c2bc;
        default: break;
    }

    ctx->pc = 0x36c280u;

    // 0x36c280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c284: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c28c: 0x24506f38  addiu       $s0, $v0, 0x6F38
    ctx->pc = 0x36c28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28472));
    // 0x36c290: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c290u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F38u));
    // 0x36c294: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C294u;
    {
        const bool branch_taken_0x36c294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C294u;
        // 0x36c298: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c294) {
            ctx->pc = 0x36C2BCu;
            goto label_36c2bc;
        }
    }
    ctx->pc = 0x36C29Cu;
    // 0x36c29c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36C29Cu;
    SET_GPR_U32(ctx, 31, 0x36C2A4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36C29Cu, 0x36C2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2A4u;
label_36c2a4:
    // 0x36c2a4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c2a8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c2ac: 0x24a5c5e0  addiu       $a1, $a1, -0x3A20
    ctx->pc = 0x36c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952416));
    // 0x36c2b0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36c2b4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C2B4u;
    SET_GPR_U32(ctx, 31, 0x36C2BCu);
    ctx->pc = 0x36C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C2B4u;
    // 0x36c2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C2B4u, 0x36C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C2BCu;
label_36c2bc:
    // 0x36c2bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c2c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c2c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c2c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C2C8u;
        // 0x36c2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C2D0u;
}
