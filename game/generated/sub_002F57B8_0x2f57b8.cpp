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

// Function: sub_002F57B8
// Address: 0x2f57b8 - 0x2f5808
void sub_002F57B8_0x2f57b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F57B8_0x2f57b8");
#endif

    switch (ctx->pc) {
        case 0x2f57c8u: goto label_2f57c8;
        default: break;
    }

    ctx->pc = 0x2f57b8u;

    // 0x2f57b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f57b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f57bc: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x2f57bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2f57c0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2f57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2f57c4: 0x0  nop
    ctx->pc = 0x2f57c4u;
    // NOP
label_2f57c8:
    // 0x2f57c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f57cc: 0x14c50004  bne         $a2, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F57CCu;
    {
        const bool branch_taken_0x2f57cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57CCu;
        // 0x2f57d0: 0x8c430060  lw          $v1, 0x60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57cc) {
            ctx->pc = 0x2F57E0u;
            goto label_2f57e0;
        }
    }
    ctx->pc = 0x2F57D4u;
    // 0x2f57d4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2f57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2f57d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F57D8u;
    {
        const bool branch_taken_0x2f57d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F57D8u;
        // 0x2f57dc: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f57d8) {
            ctx->pc = 0x2F57E8u;
            goto label_2f57e8;
        }
    }
    ctx->pc = 0x2F57E0u;
label_2f57e0:
    // 0x2f57e0: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2f57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2f57e4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2f57e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2f57e8:
    // 0x2f57e8: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2f57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2f57ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f57ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f57f0: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x2f57f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2f57f4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F57F4u;
    {
        const bool branch_taken_0x2f57f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f57f4) {
            ctx->pc = 0x2F57F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F57F4u;
            // 0x2f57f8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F57C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f57c8;
        }
    }
    ctx->pc = 0x2F57FCu;
    // 0x2f57fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F57FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F57FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5804u;
    // 0x2f5804: 0x0  nop
    ctx->pc = 0x2f5804u;
    // NOP
    ctx->pc = 0x2f5808u;
}
