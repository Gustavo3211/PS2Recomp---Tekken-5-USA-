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

// Function: sub_00372D70
// Address: 0x372d70 - 0x372dc0
void sub_00372D70_0x372d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372D70_0x372d70");
#endif

    switch (ctx->pc) {
        case 0x372d94u: goto label_372d94;
        case 0x372dacu: goto label_372dac;
        default: break;
    }

    ctx->pc = 0x372d70u;

    // 0x372d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372d74: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372d78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372d7c: 0x245076c0  addiu       $s0, $v0, 0x76C0
    ctx->pc = 0x372d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30400));
    // 0x372d80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372d80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D76C0u));
    // 0x372d84: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372D84u;
    {
        const bool branch_taken_0x372d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D84u;
        // 0x372d88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372d84) {
            ctx->pc = 0x372DACu;
            goto label_372dac;
        }
    }
    ctx->pc = 0x372D8Cu;
    // 0x372d8c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x372D8Cu;
    SET_GPR_U32(ctx, 31, 0x372D94u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x372D8Cu, 0x372D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D94u;
label_372d94:
    // 0x372d94: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372d98: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372d98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372d9c: 0x24a51b40  addiu       $a1, $a1, 0x1B40
    ctx->pc = 0x372d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    // 0x372da0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x372da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x372da4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372DA4u;
    SET_GPR_U32(ctx, 31, 0x372DACu);
    ctx->pc = 0x372DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372DA4u;
    // 0x372da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372DA4u, 0x372DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372DACu;
label_372dac:
    // 0x372dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372db4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372db8: 0x3e00008  jr          $ra
    ctx->pc = 0x372DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372DB8u;
        // 0x372dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372DC0u;
}
