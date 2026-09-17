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

// Function: sub_00304218
// Address: 0x304218 - 0x304250
void sub_00304218_0x304218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304218_0x304218");
#endif

    switch (ctx->pc) {
        case 0x30423cu: goto label_30423c;
        default: break;
    }

    ctx->pc = 0x304218u;

    // 0x304218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30421c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30421cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304224: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304228: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x304228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30422c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30422Cu;
    {
        const bool branch_taken_0x30422c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30422Cu;
        // 0x304230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30422c) {
            ctx->pc = 0x304240u;
            goto label_304240;
        }
    }
    ctx->pc = 0x304234u;
    // 0x304234: 0xc0c82ca  jal         func_320B28
    ctx->pc = 0x304234u;
    SET_GPR_U32(ctx, 31, 0x30423Cu);
    ctx->pc = 0x320B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B28u, 0x304234u, 0x30423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30423Cu;
label_30423c:
    // 0x30423c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30423cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_304240:
    // 0x304240: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304244: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304248: 0x3e00008  jr          $ra
    ctx->pc = 0x304248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304248u;
        // 0x30424c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304250u;
}
