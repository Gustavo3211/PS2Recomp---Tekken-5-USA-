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

// Function: sub_0023BF18
// Address: 0x23bf18 - 0x23bf58
void sub_0023BF18_0x23bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BF18_0x23bf18");
#endif

    switch (ctx->pc) {
        case 0x23bf38u: goto label_23bf38;
        default: break;
    }

    ctx->pc = 0x23bf18u;

    // 0x23bf18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23bf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23bf1c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x23bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x23bf20: 0x2442d7c8  addiu       $v0, $v0, -0x2838
    ctx->pc = 0x23bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957000));
    // 0x23bf24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23bf28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23bf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23bf2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23bf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23bf30: 0xc08efbe  jal         func_23BEF8
    ctx->pc = 0x23BF30u;
    SET_GPR_U32(ctx, 31, 0x23BF38u);
    ctx->pc = 0x23BF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BF30u;
    // 0x23bf34: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BEF8u, 0x23BF30u, 0x23BF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BF38u;
label_23bf38:
    // 0x23bf38: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x23bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
    // 0x23bf3c: 0x246331c8  addiu       $v1, $v1, 0x31C8
    ctx->pc = 0x23bf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12744));
    // 0x23bf40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23bf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bf44: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x23bf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x23bf48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bf48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23bf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x23BF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BF4Cu;
        // 0x23bf50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BF54u;
    // 0x23bf54: 0x0  nop
    ctx->pc = 0x23bf54u;
    // NOP
    ctx->pc = 0x23bf58u;
}
