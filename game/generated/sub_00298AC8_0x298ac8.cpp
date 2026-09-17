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

// Function: sub_00298AC8
// Address: 0x298ac8 - 0x298b08
void sub_00298AC8_0x298ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298AC8_0x298ac8");
#endif

    switch (ctx->pc) {
        case 0x298ad8u: goto label_298ad8;
        default: break;
    }

    ctx->pc = 0x298ac8u;

    // 0x298ac8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x298ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x298acc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x298accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ad0: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x298ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x298ad4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x298ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_298ad8:
    // 0x298ad8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x298ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x298adc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x298adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x298ae0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x298ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x298ae4: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x298ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x298ae8: 0x0  nop
    ctx->pc = 0x298ae8u;
    // NOP
    // 0x298aec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298AECu;
    {
        const bool branch_taken_0x298aec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298AECu;
        // 0x298af0: 0xac480000  sw          $t0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298aec) {
            ctx->pc = 0x298AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298ad8;
        }
    }
    ctx->pc = 0x298AF4u;
    // 0x298af4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x298af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x298af8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x298af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x298afc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x298afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x298b00: 0x3e00008  jr          $ra
    ctx->pc = 0x298B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B00u;
        // 0x298b04: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298B08u;
}
