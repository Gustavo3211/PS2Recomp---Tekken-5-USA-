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

// Function: sub_0020E1E0
// Address: 0x20e1e0 - 0x20e248
void sub_0020E1E0_0x20e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E1E0_0x20e1e0");
#endif

    switch (ctx->pc) {
        case 0x20e214u: goto label_20e214;
        case 0x20e22cu: goto label_20e22c;
        default: break;
    }

    ctx->pc = 0x20e1e0u;

    // 0x20e1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e1e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e1e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e1e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e1ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20e1f0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x20e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x20e1f4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x20E1F4u;
    {
        const bool branch_taken_0x20e1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E1F4u;
        // 0x20e1f8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e1f4) {
            ctx->pc = 0x20E234u;
            goto label_20e234;
        }
    }
    ctx->pc = 0x20E1FCu;
    // 0x20e1fc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x20e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20e200: 0x54a2000d  bnel        $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20E200u;
    {
        const bool branch_taken_0x20e200 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x20e200) {
            ctx->pc = 0x20E204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E200u;
            // 0x20e204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E238u;
            goto label_20e238;
        }
    }
    ctx->pc = 0x20E208u;
    // 0x20e208: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x20e208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x20e20c: 0xc0af9ce  jal         func_2BE738
    ctx->pc = 0x20E20Cu;
    SET_GPR_U32(ctx, 31, 0x20E214u);
    ctx->pc = 0x20E210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E20Cu;
    // 0x20e210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE738u, 0x20E20Cu, 0x20E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E214u;
label_20e214:
    // 0x20e214: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20e214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e218: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x20e21c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E21Cu;
    {
        const bool branch_taken_0x20e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E21Cu;
        // 0x20e220: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e21c) {
            ctx->pc = 0x20E234u;
            goto label_20e234;
        }
    }
    ctx->pc = 0x20E224u;
    // 0x20e224: 0xc0af9ce  jal         func_2BE738
    ctx->pc = 0x20E224u;
    SET_GPR_U32(ctx, 31, 0x20E22Cu);
    ctx->pc = 0x20E228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E224u;
    // 0x20e228: 0x86040012  lh          $a0, 0x12($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE738u, 0x20E224u, 0x20E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E22Cu;
label_20e22c:
    // 0x20e22c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20e230: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x20e230u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20e234:
    // 0x20e234: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e234u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e238:
    // 0x20e238: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20e238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e23c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e240: 0x3e00008  jr          $ra
    ctx->pc = 0x20E240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E240u;
        // 0x20e244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E248u;
}
