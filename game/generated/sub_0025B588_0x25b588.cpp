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

// Function: sub_0025B588
// Address: 0x25b588 - 0x25b5c8
void sub_0025B588_0x25b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B588_0x25b588");
#endif

    ctx->pc = 0x25b588u;

    // 0x25b588: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x25b588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25b58c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x25b58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x25b590: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x25b590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25b594: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x25b594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x25b598: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25B598u;
    {
        const bool branch_taken_0x25b598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B598u;
        // 0x25b59c: 0x4302a  slt         $a2, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b598) {
            ctx->pc = 0x25B5BCu;
            goto label_25b5bc;
        }
    }
    ctx->pc = 0x25B5A0u;
    // 0x25b5a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x25b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b5a4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x25b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x25b5a8: 0xa4a60012  sh          $a2, 0x12($a1)
    ctx->pc = 0x25b5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 6));
    // 0x25b5ac: 0xa4a4003c  sh          $a0, 0x3C($a1)
    ctx->pc = 0x25b5acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x25b5b0: 0xaca00890  sw          $zero, 0x890($a1)
    ctx->pc = 0x25b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2192), GPR_U32(ctx, 0));
    // 0x25b5b4: 0xa4a2003e  sh          $v0, 0x3E($a1)
    ctx->pc = 0x25b5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b5b8: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x25b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
label_25b5bc:
    // 0x25b5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B5C4u;
    // 0x25b5c4: 0x0  nop
    ctx->pc = 0x25b5c4u;
    // NOP
    ctx->pc = 0x25b5c8u;
}
