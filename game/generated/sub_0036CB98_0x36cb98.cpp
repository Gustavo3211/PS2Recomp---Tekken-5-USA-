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

// Function: sub_0036CB98
// Address: 0x36cb98 - 0x36cbe8
void sub_0036CB98_0x36cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CB98_0x36cb98");
#endif

    switch (ctx->pc) {
        case 0x36cbbcu: goto label_36cbbc;
        case 0x36cbd4u: goto label_36cbd4;
        default: break;
    }

    ctx->pc = 0x36cb98u;

    // 0x36cb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cb9c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36cba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36cba4: 0x24506f98  addiu       $s0, $v0, 0x6F98
    ctx->pc = 0x36cba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28568));
    // 0x36cba8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36cba8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F98u));
    // 0x36cbac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36CBACu;
    {
        const bool branch_taken_0x36cbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBACu;
        // 0x36cbb0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cbac) {
            ctx->pc = 0x36CBD4u;
            goto label_36cbd4;
        }
    }
    ctx->pc = 0x36CBB4u;
    // 0x36cbb4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36CBB4u;
    SET_GPR_U32(ctx, 31, 0x36CBBCu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36CBB4u, 0x36CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CBBCu;
label_36cbbc:
    // 0x36cbbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36cbc0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36cbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36cbc4: 0x24a5d5a8  addiu       $a1, $a1, -0x2A58
    ctx->pc = 0x36cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956456));
    // 0x36cbc8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36cbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36cbcc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36CBCCu;
    SET_GPR_U32(ctx, 31, 0x36CBD4u);
    ctx->pc = 0x36CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CBCCu;
    // 0x36cbd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36CBCCu, 0x36CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CBD4u;
label_36cbd4:
    // 0x36cbd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36cbd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cbd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cbdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36cbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x36CBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBE0u;
        // 0x36cbe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CBE8u;
}
