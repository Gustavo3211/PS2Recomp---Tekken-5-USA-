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

// Function: sub_00221458
// Address: 0x221458 - 0x2214a0
void sub_00221458_0x221458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221458_0x221458");
#endif

    switch (ctx->pc) {
        case 0x221494u: goto label_221494;
        default: break;
    }

    ctx->pc = 0x221458u;

    // 0x221458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22145c: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22145Cu;
    {
        const bool branch_taken_0x22145c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x221460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22145Cu;
        // 0x221460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22145c) {
            ctx->pc = 0x221480u;
            goto label_221480;
        }
    }
    ctx->pc = 0x221464u;
    // 0x221464: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x221468: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22146c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22146cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221474: 0x24a56f80  addiu       $a1, $a1, 0x6F80
    ctx->pc = 0x221474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28544));
    // 0x221478: 0x80884c0  j           func_221300
    ctx->pc = 0x221478u;
    ctx->pc = 0x22147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x221478u;
    // 0x22147c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221300u;
    sub_00221300_0x221300(rdram, ctx, runtime); return;
    ctx->pc = 0x221480u;
label_221480:
    // 0x221480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x221480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x221484: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x221484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x221488: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x221488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22148c: 0xc0884c0  jal         func_221300
    ctx->pc = 0x22148Cu;
    SET_GPR_U32(ctx, 31, 0x221494u);
    ctx->pc = 0x221490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22148Cu;
    // 0x221490: 0x24a56fc0  addiu       $a1, $a1, 0x6FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221300u, 0x22148Cu, 0x221494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221494u;
label_221494:
    // 0x221494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221498: 0x3e00008  jr          $ra
    ctx->pc = 0x221498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221498u;
        // 0x22149c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2214A0u;
}
