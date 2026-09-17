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

// Function: sub_002405E8
// Address: 0x2405e8 - 0x240628
void sub_002405E8_0x2405e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002405E8_0x2405e8");
#endif

    switch (ctx->pc) {
        case 0x240610u: goto label_240610;
        default: break;
    }

    ctx->pc = 0x2405e8u;

    // 0x2405e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2405e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2405ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2405ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2405f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2405f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2405f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2405f8: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2405fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2405fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x240600: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240600u;
    {
        const bool branch_taken_0x240600 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x240604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240600u;
        // 0x240604: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240600) {
            ctx->pc = 0x240618u;
            goto label_240618;
        }
    }
    ctx->pc = 0x240608u;
    // 0x240608: 0xc0c5a77  jal         func_3169DC
    ctx->pc = 0x240608u;
    SET_GPR_U32(ctx, 31, 0x240610u);
    ctx->pc = 0x3169DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169DCu, 0x240608u, 0x240610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240610u;
label_240610:
    // 0x240610: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x240610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x240614: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x240614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_240618:
    // 0x240618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24061c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240620: 0x3e00008  jr          $ra
    ctx->pc = 0x240620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240620u;
        // 0x240624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240628u;
}
