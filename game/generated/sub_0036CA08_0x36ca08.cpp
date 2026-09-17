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

// Function: sub_0036CA08
// Address: 0x36ca08 - 0x36ca58
void sub_0036CA08_0x36ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CA08_0x36ca08");
#endif

    switch (ctx->pc) {
        case 0x36ca2cu: goto label_36ca2c;
        case 0x36ca44u: goto label_36ca44;
        default: break;
    }

    ctx->pc = 0x36ca08u;

    // 0x36ca08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ca0c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ca10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ca14: 0x24506fb8  addiu       $s0, $v0, 0x6FB8
    ctx->pc = 0x36ca14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28600));
    // 0x36ca18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ca18u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6FB8u));
    // 0x36ca1c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36CA1Cu;
    {
        const bool branch_taken_0x36ca1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA1Cu;
        // 0x36ca20: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ca1c) {
            ctx->pc = 0x36CA44u;
            goto label_36ca44;
        }
    }
    ctx->pc = 0x36CA24u;
    // 0x36ca24: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36CA24u;
    SET_GPR_U32(ctx, 31, 0x36CA2Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36CA24u, 0x36CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA2Cu;
label_36ca2c:
    // 0x36ca2c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ca30: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ca30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ca34: 0x24a5d578  addiu       $a1, $a1, -0x2A88
    ctx->pc = 0x36ca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956408));
    // 0x36ca38: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36ca38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36ca3c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36CA3Cu;
    SET_GPR_U32(ctx, 31, 0x36CA44u);
    ctx->pc = 0x36CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CA3Cu;
    // 0x36ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36CA3Cu, 0x36CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CA44u;
label_36ca44:
    // 0x36ca44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ca44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ca48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ca48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ca4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ca50: 0x3e00008  jr          $ra
    ctx->pc = 0x36CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CA50u;
        // 0x36ca54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CA58u;
}
