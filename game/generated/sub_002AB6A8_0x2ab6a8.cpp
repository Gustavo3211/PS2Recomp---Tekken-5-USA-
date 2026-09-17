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

// Function: sub_002AB6A8
// Address: 0x2ab6a8 - 0x2ab6f0
void sub_002AB6A8_0x2ab6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB6A8_0x2ab6a8");
#endif

    switch (ctx->pc) {
        case 0x2ab6c8u: goto label_2ab6c8;
        case 0x2ab6d8u: goto label_2ab6d8;
        default: break;
    }

    ctx->pc = 0x2ab6a8u;

    // 0x2ab6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ab6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ab6ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab6b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab6b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab6bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ab6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ab6c0: 0xc0aa7ac  jal         func_2A9EB0
    ctx->pc = 0x2AB6C0u;
    SET_GPR_U32(ctx, 31, 0x2AB6C8u);
    ctx->pc = 0x2AB6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6C0u;
    // 0x2ab6c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EB0u, 0x2AB6C0u, 0x2AB6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6C8u;
label_2ab6c8:
    // 0x2ab6c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ab6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ab6cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ab6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ab6d0: 0xc0aa7ac  jal         func_2A9EB0
    ctx->pc = 0x2AB6D0u;
    SET_GPR_U32(ctx, 31, 0x2AB6D8u);
    ctx->pc = 0x2AB6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB6D0u;
    // 0x2ab6d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EB0u, 0x2AB6D0u, 0x2AB6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB6D8u;
label_2ab6d8:
    // 0x2ab6d8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ab6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ab6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab6e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ab6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6E8u;
        // 0x2ab6ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB6F0u;
}
