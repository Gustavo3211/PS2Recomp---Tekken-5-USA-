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

// Function: sub_0023A238
// Address: 0x23a238 - 0x23a270
void sub_0023A238_0x23a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A238_0x23a238");
#endif

    switch (ctx->pc) {
        case 0x23a264u: goto label_23a264;
        default: break;
    }

    ctx->pc = 0x23a238u;

    // 0x23a238: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x23a238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x23a23c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a23cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23a240: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23a244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a248: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23a24c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x23a250: 0x2421d680  addiu       $at, $at, -0x2980
    ctx->pc = 0x23a250u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294956672));
    // 0x23a254: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x23a258: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x23a258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x23a25c: 0xc08e720  jal         func_239C80
    ctx->pc = 0x23A25Cu;
    SET_GPR_U32(ctx, 31, 0x23A264u);
    ctx->pc = 0x23A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A25Cu;
    // 0x23a260: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C80u, 0x23A25Cu, 0x23A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A264u;
label_23a264:
    // 0x23a264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a268: 0x3e00008  jr          $ra
    ctx->pc = 0x23A268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A268u;
        // 0x23a26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A270u;
}
