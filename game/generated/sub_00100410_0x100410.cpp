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

// Function: sub_00100410
// Address: 0x100410 - 0x100470
void sub_00100410_0x100410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100410_0x100410");
#endif

    switch (ctx->pc) {
        case 0x100424u: goto label_100424;
        case 0x100438u: goto label_100438;
        default: break;
    }

    ctx->pc = 0x100410u;

    // 0x100410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x100418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10041c: 0xc08f450  jal         func_23D140
    ctx->pc = 0x10041Cu;
    SET_GPR_U32(ctx, 31, 0x100424u);
    ctx->pc = 0x100420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10041Cu;
    // 0x100420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D140u, 0x10041Cu, 0x100424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100424u;
label_100424:
    // 0x100424: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x100424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100428: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10042c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10042cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100430: 0x2444a1c0  addiu       $a0, $v0, -0x5E40
    ctx->pc = 0x100430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x100434: 0x0  nop
    ctx->pc = 0x100434u;
    // NOP
label_100438:
    // 0x100438: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x100438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10043c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x10043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x100440: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x100440u;
    {
        const bool branch_taken_0x100440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100440u;
        // 0x100444: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100440) {
            ctx->pc = 0x10044Cu;
            goto label_10044c;
        }
    }
    ctx->pc = 0x100448u;
    // 0x100448: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x100448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_10044c:
    // 0x10044c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x100450: 0x28a200a8  slti        $v0, $a1, 0xA8
    ctx->pc = 0x100450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)168) ? 1 : 0);
    // 0x100454: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x100454u;
    {
        const bool branch_taken_0x100454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100454u;
        // 0x100458: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100454) {
            ctx->pc = 0x100438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100438;
        }
    }
    ctx->pc = 0x10045Cu;
    // 0x10045c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10045cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100460: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100464: 0x3e00008  jr          $ra
    ctx->pc = 0x100464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100464u;
        // 0x100468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10046Cu;
    // 0x10046c: 0x0  nop
    ctx->pc = 0x10046cu;
    // NOP
    ctx->pc = 0x100470u;
}
