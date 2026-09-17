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

// Function: sub_002A7900
// Address: 0x2a7900 - 0x2a7940
void sub_002A7900_0x2a7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7900_0x2a7900");
#endif

    ctx->pc = 0x2a7900u;

    // 0x2a7900: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a7900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a7904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a7908: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2a7908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2a790c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7910: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2a7910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2a7914: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2a7914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2a7918: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a7918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a791c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A791Cu;
    {
        const bool branch_taken_0x2a791c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A791Cu;
        // 0x2a7920: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a791c) {
            ctx->pc = 0x2A7930u;
            goto label_2a7930;
        }
    }
    ctx->pc = 0x2A7924u;
    // 0x2a7924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7928: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x2A7928u;
    ctx->pc = 0x2A792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7928u;
    // 0x2a792c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A7930u;
label_2a7930:
    // 0x2a7930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a7930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7934: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7934u;
        // 0x2a7938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A793Cu;
    // 0x2a793c: 0x0  nop
    ctx->pc = 0x2a793cu;
    // NOP
    ctx->pc = 0x2a7940u;
}
