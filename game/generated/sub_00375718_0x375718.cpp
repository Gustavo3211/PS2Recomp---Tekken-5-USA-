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

// Function: sub_00375718
// Address: 0x375718 - 0x375750
void sub_00375718_0x375718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375718_0x375718");
#endif

    ctx->pc = 0x375718u;

    // 0x375718: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37571c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37571cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375720: 0x24422130  addiu       $v0, $v0, 0x2130
    ctx->pc = 0x375720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
    // 0x375724: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37572c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37572Cu;
    {
        const bool branch_taken_0x37572c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37572Cu;
        // 0x375730: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37572c) {
            ctx->pc = 0x375740u;
            goto label_375740;
        }
    }
    ctx->pc = 0x375734u;
    // 0x375734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375738: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375738u;
    ctx->pc = 0x37573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375738u;
    // 0x37573c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375740u;
label_375740:
    // 0x375740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375744: 0x3e00008  jr          $ra
    ctx->pc = 0x375744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375744u;
        // 0x375748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37574Cu;
    // 0x37574c: 0x0  nop
    ctx->pc = 0x37574cu;
    // NOP
    ctx->pc = 0x375750u;
}
