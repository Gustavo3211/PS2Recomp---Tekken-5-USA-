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

// Function: sub_00372170
// Address: 0x372170 - 0x3721b0
void sub_00372170_0x372170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372170_0x372170");
#endif

    switch (ctx->pc) {
        case 0x372198u: goto label_372198;
        default: break;
    }

    ctx->pc = 0x372170u;

    // 0x372170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372178: 0x2790cc88  addiu       $s0, $gp, -0x3378
    ctx->pc = 0x372178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954120));
    // 0x37217c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x372180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372184: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x372184u;
    {
        const bool branch_taken_0x372184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372184u;
        // 0x372188: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372184) {
            ctx->pc = 0x372198u;
            goto label_372198;
        }
    }
    ctx->pc = 0x37218Cu;
    // 0x37218c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37218cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372190: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x372190u;
    SET_GPR_U32(ctx, 31, 0x372198u);
    ctx->pc = 0x372194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372190u;
    // 0x372194: 0x24a50e70  addiu       $a1, $a1, 0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x372190u, 0x372198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372198u;
label_372198:
    // 0x372198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37219c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37219cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3721a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3721a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3721a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3721A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3721A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3721A4u;
        // 0x3721a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3721A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3721ACu;
    // 0x3721ac: 0x0  nop
    ctx->pc = 0x3721acu;
    // NOP
    ctx->pc = 0x3721b0u;
}
