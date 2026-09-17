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

// Function: sub_00105FC8
// Address: 0x105fc8 - 0x106010
void sub_00105FC8_0x105fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105FC8_0x105fc8");
#endif

    switch (ctx->pc) {
        case 0x105fecu: goto label_105fec;
        case 0x105ff8u: goto label_105ff8;
        default: break;
    }

    ctx->pc = 0x105fc8u;

    // 0x105fc8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x105fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x105fcc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x105fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x105fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x105fd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x105fd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105fd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105fdc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x105fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105fe0: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x105fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x105fe4: 0xc044766  jal         func_111D98
    ctx->pc = 0x105FE4u;
    SET_GPR_U32(ctx, 31, 0x105FECu);
    ctx->pc = 0x105FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FE4u;
    // 0x105fe8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D98u, 0x105FE4u, 0x105FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FECu;
label_105fec:
    // 0x105fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ff0: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x105FF0u;
    SET_GPR_U32(ctx, 31, 0x105FF8u);
    ctx->pc = 0x105FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FF0u;
    // 0x105ff4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x105FF0u, 0x105FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FF8u;
label_105ff8:
    // 0x105ff8: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x105ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x105ffc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x105ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x106000: 0x3e00008  jr          $ra
    ctx->pc = 0x106000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106000u;
        // 0x106004: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106008u;
    // 0x106008: 0x0  nop
    ctx->pc = 0x106008u;
    // NOP
    // 0x10600c: 0x0  nop
    ctx->pc = 0x10600cu;
    // NOP
    ctx->pc = 0x106010u;
}
