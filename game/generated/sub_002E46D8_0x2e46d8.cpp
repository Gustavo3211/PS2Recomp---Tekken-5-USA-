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

// Function: sub_002E46D8
// Address: 0x2e46d8 - 0x2e4728
void sub_002E46D8_0x2e46d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E46D8_0x2e46d8");
#endif

    switch (ctx->pc) {
        case 0x2e471cu: goto label_2e471c;
        default: break;
    }

    ctx->pc = 0x2e46d8u;

    // 0x2e46d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e46d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e46dc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e46dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e46e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e46e4: 0x250700fc  addiu       $a3, $t0, 0xFC
    ctx->pc = 0x2e46e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 252));
    // 0x2e46e8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2e46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e46ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E46ECu;
    {
        const bool branch_taken_0x2e46ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E46ECu;
        // 0x2e46f0: 0x25060054  addiu       $a2, $t0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e46ec) {
            ctx->pc = 0x2E4704u;
            goto label_2e4704;
        }
    }
    ctx->pc = 0x2E46F4u;
    // 0x2e46f4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e46f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e46f8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e46fc: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E46FCu;
    {
        const bool branch_taken_0x2e46fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e46fc) {
            ctx->pc = 0x2E4700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E46FCu;
            // 0x2e4700: 0x8d08010c  lw          $t0, 0x10C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4714u;
            goto label_2e4714;
        }
    }
    ctx->pc = 0x2E4704u;
label_2e4704:
    // 0x2e4704: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2e4704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2e4708: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e4708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e470c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2e470cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2e4710: 0x8d08010c  lw          $t0, 0x10C($t0)
    ctx->pc = 0x2e4710u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 268)));
label_2e4714:
    // 0x2e4714: 0xc0b91ca  jal         func_2E4728
    ctx->pc = 0x2E4714u;
    SET_GPR_U32(ctx, 31, 0x2E471Cu);
    ctx->pc = 0x2E4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4714u;
    // 0x2e4718: 0x24870054  addiu       $a3, $a0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4728u, 0x2E4714u, 0x2E471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E471Cu;
label_2e471c:
    // 0x2e471c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e471cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4720: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4720u;
        // 0x2e4724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4728u;
}
