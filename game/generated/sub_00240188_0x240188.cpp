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

// Function: sub_00240188
// Address: 0x240188 - 0x2401d0
void sub_00240188_0x240188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240188_0x240188");
#endif

    switch (ctx->pc) {
        case 0x2401acu: goto label_2401ac;
        case 0x2401b4u: goto label_2401b4;
        default: break;
    }

    ctx->pc = 0x240188u;

    // 0x240188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24018c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240194: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x240194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x240198: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x240198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x24019c: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24019Cu;
    {
        const bool branch_taken_0x24019c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24019c) {
            ctx->pc = 0x2401A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24019Cu;
            // 0x2401a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2401C4u;
            goto label_2401c4;
        }
    }
    ctx->pc = 0x2401A4u;
    // 0x2401a4: 0xc0c5a41  jal         func_316904
    ctx->pc = 0x2401A4u;
    SET_GPR_U32(ctx, 31, 0x2401ACu);
    ctx->pc = 0x316904u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316904u, 0x2401A4u, 0x2401ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401ACu;
label_2401ac:
    // 0x2401ac: 0xc0d2fcf  jal         func_34BF3C
    ctx->pc = 0x2401ACu;
    SET_GPR_U32(ctx, 31, 0x2401B4u);
    ctx->pc = 0x2401B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401ACu;
    // 0x2401b0: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BF3Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BF3Cu, 0x2401ACu, 0x2401B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401B4u;
label_2401b4:
    // 0x2401b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2401b8: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x2401b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x2401bc: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x2401bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x2401c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2401c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2401c4:
    // 0x2401c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2401c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2401c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2401C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2401CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C8u;
        // 0x2401cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2401C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2401D0u;
}
