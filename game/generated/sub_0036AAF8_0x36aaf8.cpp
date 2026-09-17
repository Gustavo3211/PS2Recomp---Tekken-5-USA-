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

// Function: sub_0036AAF8
// Address: 0x36aaf8 - 0x36ab48
void sub_0036AAF8_0x36aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AAF8_0x36aaf8");
#endif

    switch (ctx->pc) {
        case 0x36ab1cu: goto label_36ab1c;
        case 0x36ab34u: goto label_36ab34;
        default: break;
    }

    ctx->pc = 0x36aaf8u;

    // 0x36aaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36aafc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ab00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ab04: 0x24506d48  addiu       $s0, $v0, 0x6D48
    ctx->pc = 0x36ab04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27976));
    // 0x36ab08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D48u));
    // 0x36ab0c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36AB0Cu;
    {
        const bool branch_taken_0x36ab0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB0Cu;
        // 0x36ab10: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ab0c) {
            ctx->pc = 0x36AB34u;
            goto label_36ab34;
        }
    }
    ctx->pc = 0x36AB14u;
    // 0x36ab14: 0xc0daa58  jal         func_36A960
    ctx->pc = 0x36AB14u;
    SET_GPR_U32(ctx, 31, 0x36AB1Cu);
    ctx->pc = 0x36A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A960u, 0x36AB14u, 0x36AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB1Cu;
label_36ab1c:
    // 0x36ab1c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ab20: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ab20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ab24: 0x24a598e0  addiu       $a1, $a1, -0x6720
    ctx->pc = 0x36ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940896));
    // 0x36ab28: 0x24c66d68  addiu       $a2, $a2, 0x6D68
    ctx->pc = 0x36ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28008));
    // 0x36ab2c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AB2Cu;
    SET_GPR_U32(ctx, 31, 0x36AB34u);
    ctx->pc = 0x36AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AB2Cu;
    // 0x36ab30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AB2Cu, 0x36AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AB34u;
label_36ab34:
    // 0x36ab34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ab34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ab38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ab38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ab3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ab3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ab40: 0x3e00008  jr          $ra
    ctx->pc = 0x36AB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AB40u;
        // 0x36ab44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AB48u;
}
