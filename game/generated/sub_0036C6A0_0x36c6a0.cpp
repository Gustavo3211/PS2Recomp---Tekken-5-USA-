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

// Function: sub_0036C6A0
// Address: 0x36c6a0 - 0x36c6f0
void sub_0036C6A0_0x36c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C6A0_0x36c6a0");
#endif

    switch (ctx->pc) {
        case 0x36c6c4u: goto label_36c6c4;
        case 0x36c6dcu: goto label_36c6dc;
        default: break;
    }

    ctx->pc = 0x36c6a0u;

    // 0x36c6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c6a4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c6a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c6ac: 0x24506f58  addiu       $s0, $v0, 0x6F58
    ctx->pc = 0x36c6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28504));
    // 0x36c6b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F58u));
    // 0x36c6b4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C6B4u;
    {
        const bool branch_taken_0x36c6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C6B4u;
        // 0x36c6b8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c6b4) {
            ctx->pc = 0x36C6DCu;
            goto label_36c6dc;
        }
    }
    ctx->pc = 0x36C6BCu;
    // 0x36c6bc: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36C6BCu;
    SET_GPR_U32(ctx, 31, 0x36C6C4u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36C6BCu, 0x36C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6C4u;
label_36c6c4:
    // 0x36c6c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c6c8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c6cc: 0x24a5d170  addiu       $a1, $a1, -0x2E90
    ctx->pc = 0x36c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955376));
    // 0x36c6d0: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36c6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36c6d4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C6D4u;
    SET_GPR_U32(ctx, 31, 0x36C6DCu);
    ctx->pc = 0x36C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C6D4u;
    // 0x36c6d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C6D4u, 0x36C6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C6DCu;
label_36c6dc:
    // 0x36c6dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c6e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x36C6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C6E8u;
        // 0x36c6ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C6F0u;
}
