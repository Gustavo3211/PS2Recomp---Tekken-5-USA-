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

// Function: sub_0036C048
// Address: 0x36c048 - 0x36c098
void sub_0036C048_0x36c048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C048_0x36c048");
#endif

    switch (ctx->pc) {
        case 0x36c06cu: goto label_36c06c;
        case 0x36c084u: goto label_36c084;
        default: break;
    }

    ctx->pc = 0x36c048u;

    // 0x36c048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c04c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36c050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c054: 0x24506ee8  addiu       $s0, $v0, 0x6EE8
    ctx->pc = 0x36c054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28392));
    // 0x36c058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36c058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6EE8u));
    // 0x36c05c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36C05Cu;
    {
        const bool branch_taken_0x36c05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36C060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C05Cu;
        // 0x36c060: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c05c) {
            ctx->pc = 0x36C084u;
            goto label_36c084;
        }
    }
    ctx->pc = 0x36C064u;
    // 0x36c064: 0xc0daf7e  jal         func_36BDF8
    ctx->pc = 0x36C064u;
    SET_GPR_U32(ctx, 31, 0x36C06Cu);
    ctx->pc = 0x36BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36BDF8u, 0x36C064u, 0x36C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C06Cu;
label_36c06c:
    // 0x36c06c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36c06cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36c070: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36c070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36c074: 0x24a5bde8  addiu       $a1, $a1, -0x4218
    ctx->pc = 0x36c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950376));
    // 0x36c078: 0x24c66ed8  addiu       $a2, $a2, 0x6ED8
    ctx->pc = 0x36c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28376));
    // 0x36c07c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36C07Cu;
    SET_GPR_U32(ctx, 31, 0x36C084u);
    ctx->pc = 0x36C080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C07Cu;
    // 0x36c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36C07Cu, 0x36C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C084u;
label_36c084:
    // 0x36c084: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c08c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c090: 0x3e00008  jr          $ra
    ctx->pc = 0x36C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C090u;
        // 0x36c094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C098u;
}
