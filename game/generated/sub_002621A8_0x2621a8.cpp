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

// Function: sub_002621A8
// Address: 0x2621a8 - 0x2621f0
void sub_002621A8_0x2621a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002621A8_0x2621a8");
#endif

    switch (ctx->pc) {
        case 0x2621d0u: goto label_2621d0;
        case 0x2621dcu: goto label_2621dc;
        default: break;
    }

    ctx->pc = 0x2621a8u;

    // 0x2621a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2621ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2621acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2621b0: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x2621b4: 0x2610ed98  addiu       $s0, $s0, -0x1268
    ctx->pc = 0x2621b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962584));
    // 0x2621b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2621b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2621bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2621bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2621c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2621c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2621c8: 0xc098b7e  jal         func_262DF8
    ctx->pc = 0x2621C8u;
    SET_GPR_U32(ctx, 31, 0x2621D0u);
    ctx->pc = 0x2621CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621C8u;
    // 0x2621cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x2621C8u, 0x2621D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621D0u;
label_2621d0:
    // 0x2621d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2621d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621d4: 0xc098b7e  jal         func_262DF8
    ctx->pc = 0x2621D4u;
    SET_GPR_U32(ctx, 31, 0x2621DCu);
    ctx->pc = 0x2621D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2621D4u;
    // 0x2621d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262DF8u, 0x2621D4u, 0x2621DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621DCu;
label_2621dc:
    // 0x2621dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2621dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2621e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2621e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2621e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2621e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2621e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2621E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2621ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2621E8u;
        // 0x2621ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2621E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2621F0u;
}
