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

// Function: sub_00375250
// Address: 0x375250 - 0x375288
void sub_00375250_0x375250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375250_0x375250");
#endif

    ctx->pc = 0x375250u;

    // 0x375250: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375254: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375258: 0x24421f50  addiu       $v0, $v0, 0x1F50
    ctx->pc = 0x375258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8016));
    // 0x37525c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x37525cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375264: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x375264u;
    {
        const bool branch_taken_0x375264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375264u;
        // 0x375268: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375264) {
            ctx->pc = 0x375278u;
            goto label_375278;
        }
    }
    ctx->pc = 0x37526Cu;
    // 0x37526c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37526cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375270: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375270u;
    ctx->pc = 0x375274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375270u;
    // 0x375274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375278u;
label_375278:
    // 0x375278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37527c: 0x3e00008  jr          $ra
    ctx->pc = 0x37527Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37527Cu;
        // 0x375280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37527Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375284u;
    // 0x375284: 0x0  nop
    ctx->pc = 0x375284u;
    // NOP
    ctx->pc = 0x375288u;
}
