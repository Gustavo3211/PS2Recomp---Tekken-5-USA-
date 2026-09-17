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

// Function: sub_00375218
// Address: 0x375218 - 0x375250
void sub_00375218_0x375218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375218_0x375218");
#endif

    ctx->pc = 0x375218u;

    // 0x375218: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37521c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37521cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375220: 0x24421f50  addiu       $v0, $v0, 0x1F50
    ctx->pc = 0x375220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8016));
    // 0x375224: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x375228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37522c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x37522Cu;
    {
        const bool branch_taken_0x37522c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37522Cu;
        // 0x375230: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37522c) {
            ctx->pc = 0x375240u;
            goto label_375240;
        }
    }
    ctx->pc = 0x375234u;
    // 0x375234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375238: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x375238u;
    ctx->pc = 0x37523Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375238u;
    // 0x37523c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x375240u;
label_375240:
    // 0x375240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375244: 0x3e00008  jr          $ra
    ctx->pc = 0x375244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375244u;
        // 0x375248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37524Cu;
    // 0x37524c: 0x0  nop
    ctx->pc = 0x37524cu;
    // NOP
    ctx->pc = 0x375250u;
}
