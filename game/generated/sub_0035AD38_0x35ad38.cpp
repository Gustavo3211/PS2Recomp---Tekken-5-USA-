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

// Function: sub_0035AD38
// Address: 0x35ad38 - 0x35ad80
void sub_0035AD38_0x35ad38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AD38_0x35ad38");
#endif

    switch (ctx->pc) {
        case 0x35ad50u: goto label_35ad50;
        case 0x35ad68u: goto label_35ad68;
        default: break;
    }

    ctx->pc = 0x35ad38u;

    // 0x35ad38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ad38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ad3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35ad40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ad44: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x35ad44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ad48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ad4c: 0x3c11001d  lui         $s1, 0x1D
    ctx->pc = 0x35ad4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)29 << 16));
label_35ad50:
    // 0x35ad50: 0x0  nop
    ctx->pc = 0x35ad50u;
    // NOP
    // 0x35ad54: 0x0  nop
    ctx->pc = 0x35ad54u;
    // NOP
    // 0x35ad58: 0x0  nop
    ctx->pc = 0x35ad58u;
    // NOP
    // 0x35ad5c: 0x0  nop
    ctx->pc = 0x35ad5cu;
    // NOP
    // 0x35ad60: 0xc044cac  jal         func_1132B0
    ctx->pc = 0x35AD60u;
    SET_GPR_U32(ctx, 31, 0x35AD68u);
    ctx->pc = 0x35AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD60u;
    // 0x35ad64: 0x2624cf80  addiu       $a0, $s1, -0x3080 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1132B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1132B0u, 0x35AD60u, 0x35AD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD68u;
label_35ad68:
    // 0x35ad68: 0x1050fff9  beq         $v0, $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35AD68u;
    {
        const bool branch_taken_0x35ad68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x35AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD68u;
        // 0x35ad6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ad68) {
            ctx->pc = 0x35AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ad50;
        }
    }
    ctx->pc = 0x35AD70u;
    // 0x35ad70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ad70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ad74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ad74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ad78: 0x3e00008  jr          $ra
    ctx->pc = 0x35AD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AD78u;
        // 0x35ad7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AD80u;
}
