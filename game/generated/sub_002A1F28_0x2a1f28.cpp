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

// Function: sub_002A1F28
// Address: 0x2a1f28 - 0x2a1f70
void sub_002A1F28_0x2a1f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1F28_0x2a1f28");
#endif

    switch (ctx->pc) {
        case 0x2a1f58u: goto label_2a1f58;
        default: break;
    }

    ctx->pc = 0x2a1f28u;

    // 0x2a1f28: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2a1f28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2a1f2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1f2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1f30: 0xc73821  addu        $a3, $a2, $a3
    ctx->pc = 0x2a1f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1f34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a1f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a1f38: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2a1f38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2a1f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1f40: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2a1f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2a1f44: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a1f48: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2a1f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2a1f4c: 0x8ca5cc30  lw          $a1, -0x33D0($a1)
    ctx->pc = 0x2a1f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954032)));
    // 0x2a1f50: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A1F50u;
    SET_GPR_U32(ctx, 31, 0x2A1F58u);
    ctx->pc = 0x2A1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1F50u;
    // 0x2a1f54: 0x8cf000b8  lw          $s0, 0xB8($a3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A1F50u, 0x2A1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1F58u;
label_2a1f58:
    // 0x2a1f58: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x2a1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2a1f5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a1f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1f60: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x2a1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x2a1f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1f68: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1F68u;
        // 0x2a1f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1F70u;
}
