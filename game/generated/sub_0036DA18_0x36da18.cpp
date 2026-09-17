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

// Function: sub_0036DA18
// Address: 0x36da18 - 0x36da70
void sub_0036DA18_0x36da18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DA18_0x36da18");
#endif

    switch (ctx->pc) {
        case 0x36da3cu: goto label_36da3c;
        case 0x36da54u: goto label_36da54;
        default: break;
    }

    ctx->pc = 0x36da18u;

    // 0x36da18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36da18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36da1c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36da20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36da20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36da24: 0x24507150  addiu       $s0, $v0, 0x7150
    ctx->pc = 0x36da24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29008));
    // 0x36da28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36da28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7150u));
    // 0x36da2c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36DA2Cu;
    {
        const bool branch_taken_0x36da2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA2Cu;
        // 0x36da30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36da2c) {
            ctx->pc = 0x36DA54u;
            goto label_36da54;
        }
    }
    ctx->pc = 0x36DA34u;
    // 0x36da34: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36DA34u;
    SET_GPR_U32(ctx, 31, 0x36DA3Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36DA34u, 0x36DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA3Cu;
label_36da3c:
    // 0x36da3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36da40: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36da40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36da44: 0x24a5edd8  addiu       $a1, $a1, -0x1228
    ctx->pc = 0x36da44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962648));
    // 0x36da48: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36da48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36da4c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36DA4Cu;
    SET_GPR_U32(ctx, 31, 0x36DA54u);
    ctx->pc = 0x36DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DA4Cu;
    // 0x36da50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36DA4Cu, 0x36DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DA54u;
label_36da54:
    // 0x36da54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36da54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36da58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36da58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36da5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36da60: 0x3e00008  jr          $ra
    ctx->pc = 0x36DA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA60u;
        // 0x36da64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DA68u;
    // 0x36da68: 0x3e00008  jr          $ra
    ctx->pc = 0x36DA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DA68u;
        // 0x36da6c: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DA70u;
}
