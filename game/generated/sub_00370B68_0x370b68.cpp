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

// Function: sub_00370B68
// Address: 0x370b68 - 0x370bb8
void sub_00370B68_0x370b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370B68_0x370b68");
#endif

    switch (ctx->pc) {
        case 0x370b8cu: goto label_370b8c;
        case 0x370ba4u: goto label_370ba4;
        default: break;
    }

    ctx->pc = 0x370b68u;

    // 0x370b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370b6c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370b70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370b74: 0x24507430  addiu       $s0, $v0, 0x7430
    ctx->pc = 0x370b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29744));
    // 0x370b78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370b78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7430u));
    // 0x370b7c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370B7Cu;
    {
        const bool branch_taken_0x370b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370B7Cu;
        // 0x370b80: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370b7c) {
            ctx->pc = 0x370BA4u;
            goto label_370ba4;
        }
    }
    ctx->pc = 0x370B84u;
    // 0x370b84: 0xc0dc206  jal         func_370818
    ctx->pc = 0x370B84u;
    SET_GPR_U32(ctx, 31, 0x370B8Cu);
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x370B84u, 0x370B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370B8Cu;
label_370b8c:
    // 0x370b8c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370b90: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370b94: 0x24a50b58  addiu       $a1, $a1, 0xB58
    ctx->pc = 0x370b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2904));
    // 0x370b98: 0x24c67370  addiu       $a2, $a2, 0x7370
    ctx->pc = 0x370b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x370b9c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370B9Cu;
    SET_GPR_U32(ctx, 31, 0x370BA4u);
    ctx->pc = 0x370BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370B9Cu;
    // 0x370ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370B9Cu, 0x370BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370BA4u;
label_370ba4:
    // 0x370ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370bac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x370BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370BB0u;
        // 0x370bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370BB8u;
}
