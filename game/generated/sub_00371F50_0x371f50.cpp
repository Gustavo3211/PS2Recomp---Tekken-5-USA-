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

// Function: sub_00371F50
// Address: 0x371f50 - 0x371fa0
void sub_00371F50_0x371f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371F50_0x371f50");
#endif

    switch (ctx->pc) {
        case 0x371f74u: goto label_371f74;
        case 0x371f88u: goto label_371f88;
        default: break;
    }

    ctx->pc = 0x371f50u;

    // 0x371f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371f54: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371f58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371f5c: 0x245075d0  addiu       $s0, $v0, 0x75D0
    ctx->pc = 0x371f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30160));
    // 0x371f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371f60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D75D0u));
    // 0x371f64: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x371F64u;
    {
        const bool branch_taken_0x371f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F64u;
        // 0x371f68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371f64) {
            ctx->pc = 0x371F88u;
            goto label_371f88;
        }
    }
    ctx->pc = 0x371F6Cu;
    // 0x371f6c: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x371F6Cu;
    SET_GPR_U32(ctx, 31, 0x371F74u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x371F6Cu, 0x371F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F74u;
label_371f74:
    // 0x371f74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371f78: 0x24a50da8  addiu       $a1, $a1, 0xDA8
    ctx->pc = 0x371f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3496));
    // 0x371f7c: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x371f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x371f80: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371F80u;
    SET_GPR_U32(ctx, 31, 0x371F88u);
    ctx->pc = 0x371F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F80u;
    // 0x371f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371F80u, 0x371F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F88u;
label_371f88:
    // 0x371f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371f90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371f94: 0x3e00008  jr          $ra
    ctx->pc = 0x371F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F94u;
        // 0x371f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371F9Cu;
    // 0x371f9c: 0x0  nop
    ctx->pc = 0x371f9cu;
    // NOP
    ctx->pc = 0x371fa0u;
}
