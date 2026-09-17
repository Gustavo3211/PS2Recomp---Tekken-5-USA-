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

// Function: sub_002983C0
// Address: 0x2983c0 - 0x298400
void sub_002983C0_0x2983c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002983C0_0x2983c0");
#endif

    switch (ctx->pc) {
        case 0x2983f0u: goto label_2983f0;
        default: break;
    }

    ctx->pc = 0x2983c0u;

    // 0x2983c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2983c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2983c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2983c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2983c8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2983C8u;
    {
        const bool branch_taken_0x2983c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2983CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983C8u;
        // 0x2983cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983c8) {
            ctx->pc = 0x2983E0u;
            goto label_2983e0;
        }
    }
    ctx->pc = 0x2983D0u;
    // 0x2983d0: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2983d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2983d4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2983d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2983d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2983D8u;
    {
        const bool branch_taken_0x2983d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2983d8) {
            ctx->pc = 0x2983E8u;
            goto label_2983e8;
        }
    }
    ctx->pc = 0x2983E0u;
label_2983e0:
    // 0x2983e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2983E0u;
    {
        const bool branch_taken_0x2983e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983E0u;
        // 0x2983e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983e0) {
            ctx->pc = 0x2983F4u;
            goto label_2983f4;
        }
    }
    ctx->pc = 0x2983E8u;
label_2983e8:
    // 0x2983e8: 0xc0db02e  jal         func_36C0B8
    ctx->pc = 0x2983E8u;
    SET_GPR_U32(ctx, 31, 0x2983F0u);
    ctx->pc = 0x2983ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2983E8u;
    // 0x2983ec: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C0B8u, 0x2983E8u, 0x2983F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2983F0u;
label_2983f0:
    // 0x2983f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2983f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2983f4:
    // 0x2983f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2983f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2983f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2983F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2983FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983F8u;
        // 0x2983fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2983F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298400u;
}
