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

// Function: sub_0036C7F0
// Address: 0x36c7f0 - 0x36c840
void sub_0036C7F0_0x36c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C7F0_0x36c7f0");
#endif

    switch (ctx->pc) {
        case 0x36c814u: goto label_36c814;
        case 0x36c82cu: goto label_36c82c;
        default: break;
    }

    ctx->pc = 0x36c7f0u;

    // 0x36c7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c7f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c7f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c7fc: 0x24506f88  addiu       $s0, $v0, 0x6F88
    ctx->pc = 0x36c7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28552));
    // 0x36c800: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c800u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6F88u));
    // 0x36c804: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C804u;
    {
        const bool branch_taken_0x36c804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C804u;
        // 0x36c808: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c804) {
            ctx->pc = 0x36C82Cu;
            goto label_36c82c;
        }
    }
    ctx->pc = 0x36C80Cu;
    // 0x36c80c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36C80Cu;
    SET_GPR_U32(ctx, 31, 0x36C814u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36C80Cu, 0x36C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C814u;
label_36c814:
    // 0x36c814: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c818: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c818u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c81c: 0x24a5d528  addiu       $a1, $a1, -0x2AD8
    ctx->pc = 0x36c81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956328));
    // 0x36c820: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36c820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36c824: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C824u;
    SET_GPR_U32(ctx, 31, 0x36C82Cu);
    ctx->pc = 0x36C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C824u;
    // 0x36c828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C824u, 0x36C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C82Cu;
label_36c82c:
    // 0x36c82c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c834: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c838: 0x3e00008  jr          $ra
    ctx->pc = 0x36C838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C838u;
        // 0x36c83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C840u;
}
