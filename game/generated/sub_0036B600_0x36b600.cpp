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

// Function: sub_0036B600
// Address: 0x36b600 - 0x36b650
void sub_0036B600_0x36b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B600_0x36b600");
#endif

    switch (ctx->pc) {
        case 0x36b624u: goto label_36b624;
        case 0x36b63cu: goto label_36b63c;
        default: break;
    }

    ctx->pc = 0x36b600u;

    // 0x36b600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b604: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b60c: 0x24506e78  addiu       $s0, $v0, 0x6E78
    ctx->pc = 0x36b60cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28280));
    // 0x36b610: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E78u));
    // 0x36b614: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B614u;
    {
        const bool branch_taken_0x36b614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B614u;
        // 0x36b618: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b614) {
            ctx->pc = 0x36B63Cu;
            goto label_36b63c;
        }
    }
    ctx->pc = 0x36B61Cu;
    // 0x36b61c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36B61Cu;
    SET_GPR_U32(ctx, 31, 0x36B624u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36B61Cu, 0x36B624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B624u;
label_36b624:
    // 0x36b624: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b628: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b628u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b62c: 0x24a5bad8  addiu       $a1, $a1, -0x4528
    ctx->pc = 0x36b62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949592));
    // 0x36b630: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36b630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36b634: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B634u;
    SET_GPR_U32(ctx, 31, 0x36B63Cu);
    ctx->pc = 0x36B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B634u;
    // 0x36b638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B634u, 0x36B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B63Cu;
label_36b63c:
    // 0x36b63c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b648: 0x3e00008  jr          $ra
    ctx->pc = 0x36B648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B648u;
        // 0x36b64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B650u;
}
