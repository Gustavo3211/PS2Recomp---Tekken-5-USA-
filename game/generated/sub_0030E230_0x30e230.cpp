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

// Function: sub_0030E230
// Address: 0x30e230 - 0x30e278
void sub_0030E230_0x30e230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E230_0x30e230");
#endif

    switch (ctx->pc) {
        case 0x30e238u: goto label_30e238;
        case 0x30e240u: goto label_30e240;
        default: break;
    }

    ctx->pc = 0x30e230u;

    // 0x30e230: 0x24840330  addiu       $a0, $a0, 0x330
    ctx->pc = 0x30e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 816));
    // 0x30e234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30e234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30e238:
    // 0x30e238: 0x24821110  addiu       $v0, $a0, 0x1110
    ctx->pc = 0x30e238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4368));
    // 0x30e23c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x30e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_30e240:
    // 0x30e240: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e244: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x30e244u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x30e248: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x30e248u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x30e24c: 0x0  nop
    ctx->pc = 0x30e24cu;
    // NOP
    // 0x30e250: 0x0  nop
    ctx->pc = 0x30e250u;
    // NOP
    // 0x30e254: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30E254u;
    {
        const bool branch_taken_0x30e254 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E254u;
        // 0x30e258: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e254) {
            ctx->pc = 0x30E240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e240;
        }
    }
    ctx->pc = 0x30E25Cu;
    // 0x30e25c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x30e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30e260: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x30e260u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e264: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30E264u;
    {
        const bool branch_taken_0x30e264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E264u;
        // 0x30e268: 0x248422c0  addiu       $a0, $a0, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e264) {
            ctx->pc = 0x30E238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e238;
        }
    }
    ctx->pc = 0x30E26Cu;
    // 0x30e26c: 0x3e00008  jr          $ra
    ctx->pc = 0x30E26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E274u;
    // 0x30e274: 0x0  nop
    ctx->pc = 0x30e274u;
    // NOP
    ctx->pc = 0x30e278u;
}
