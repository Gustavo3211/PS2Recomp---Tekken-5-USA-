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

// Function: sub_0036B578
// Address: 0x36b578 - 0x36b5c8
void sub_0036B578_0x36b578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B578_0x36b578");
#endif

    switch (ctx->pc) {
        case 0x36b59cu: goto label_36b59c;
        case 0x36b5b4u: goto label_36b5b4;
        default: break;
    }

    ctx->pc = 0x36b578u;

    // 0x36b578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b57c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b584: 0x24506e68  addiu       $s0, $v0, 0x6E68
    ctx->pc = 0x36b584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28264));
    // 0x36b588: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b588u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E68u));
    // 0x36b58c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B58Cu;
    {
        const bool branch_taken_0x36b58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B58Cu;
        // 0x36b590: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b58c) {
            ctx->pc = 0x36B5B4u;
            goto label_36b5b4;
        }
    }
    ctx->pc = 0x36B594u;
    // 0x36b594: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x36B594u;
    SET_GPR_U32(ctx, 31, 0x36B59Cu);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x36B594u, 0x36B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B59Cu;
label_36b59c:
    // 0x36b59c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b5a0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b5a4: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40
    ctx->pc = 0x36b5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
    // 0x36b5a8: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x36b5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x36b5ac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B5ACu;
    SET_GPR_U32(ctx, 31, 0x36B5B4u);
    ctx->pc = 0x36B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B5ACu;
    // 0x36b5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B5ACu, 0x36B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B5B4u;
label_36b5b4:
    // 0x36b5b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b5b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b5bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x36B5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B5C0u;
        // 0x36b5c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B5C8u;
}
