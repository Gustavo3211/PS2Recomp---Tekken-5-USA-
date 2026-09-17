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

// Function: sub_0036A9E8
// Address: 0x36a9e8 - 0x36aa38
void sub_0036A9E8_0x36a9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A9E8_0x36a9e8");
#endif

    switch (ctx->pc) {
        case 0x36aa0cu: goto label_36aa0c;
        case 0x36aa24u: goto label_36aa24;
        default: break;
    }

    ctx->pc = 0x36a9e8u;

    // 0x36a9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a9ec: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a9f4: 0x24506d58  addiu       $s0, $v0, 0x6D58
    ctx->pc = 0x36a9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27992));
    // 0x36a9f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D58u));
    // 0x36a9fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A9FCu;
    {
        const bool branch_taken_0x36a9fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9FCu;
        // 0x36aa00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9fc) {
            ctx->pc = 0x36AA24u;
            goto label_36aa24;
        }
    }
    ctx->pc = 0x36AA04u;
    // 0x36aa04: 0xc0daa58  jal         func_36A960
    ctx->pc = 0x36AA04u;
    SET_GPR_U32(ctx, 31, 0x36AA0Cu);
    ctx->pc = 0x36A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A960u, 0x36AA04u, 0x36AA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA0Cu;
label_36aa0c:
    // 0x36aa0c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36aa10: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36aa10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36aa14: 0x24a598a8  addiu       $a1, $a1, -0x6758
    ctx->pc = 0x36aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940840));
    // 0x36aa18: 0x24c66d68  addiu       $a2, $a2, 0x6D68
    ctx->pc = 0x36aa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28008));
    // 0x36aa1c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AA1Cu;
    SET_GPR_U32(ctx, 31, 0x36AA24u);
    ctx->pc = 0x36AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AA1Cu;
    // 0x36aa20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AA1Cu, 0x36AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AA24u;
label_36aa24:
    // 0x36aa24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36aa24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36aa28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36aa28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36aa2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36aa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36aa30: 0x3e00008  jr          $ra
    ctx->pc = 0x36AA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA30u;
        // 0x36aa34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AA38u;
}
