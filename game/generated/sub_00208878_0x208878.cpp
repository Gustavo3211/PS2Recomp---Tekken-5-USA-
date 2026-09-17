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

// Function: sub_00208878
// Address: 0x208878 - 0x2088b0
void sub_00208878_0x208878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208878_0x208878");
#endif

    switch (ctx->pc) {
        case 0x208878u: goto label_208878;
        case 0x20887cu: goto label_20887c;
        case 0x208880u: goto label_208880;
        case 0x208884u: goto label_208884;
        case 0x208888u: goto label_208888;
        case 0x20888cu: goto label_20888c;
        case 0x208890u: goto label_208890;
        case 0x208894u: goto label_208894;
        case 0x208898u: goto label_208898;
        case 0x20889cu: goto label_20889c;
        case 0x2088a0u: goto label_2088a0;
        case 0x2088a4u: goto label_2088a4;
        case 0x2088a8u: goto label_2088a8;
        case 0x2088acu: goto label_2088ac;
        default: break;
    }

    ctx->pc = 0x208878u;

label_208878:
    // 0x208878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20887c:
    // 0x20887c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20887cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_208880:
    // 0x208880: 0xc0821a4  jal         func_208690
label_208884:
    if (ctx->pc == 0x208884u) {
        ctx->pc = 0x208888u;
        goto label_208888;
    }
    ctx->pc = 0x208880u;
    SET_GPR_U32(ctx, 31, 0x208888u);
    ctx->pc = 0x208690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208690u, 0x208880u, 0x208888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208888u;
label_208888:
    // 0x208888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x208888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20888c:
    // 0x20888c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x20888cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_208890:
    // 0x208890: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_208894:
    if (ctx->pc == 0x208894u) {
        ctx->pc = 0x208894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208890u;
        // 0x208894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208898u;
        goto label_208898;
    }
    ctx->pc = 0x208890u;
    {
        const bool branch_taken_0x208890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208890u;
        // 0x208894: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208890) {
            ctx->pc = 0x208928u;
            return;
        }
    }
    ctx->pc = 0x208898u;
label_208898:
    // 0x208898: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20889c:
    // 0x20889c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x20889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_2088a0:
    // 0x2088a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2088a4:
    // 0x2088a4: 0x8c6343e0  lw          $v1, 0x43E0($v1)
    ctx->pc = 0x2088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17376)));
label_2088a8:
    // 0x2088a8: 0x600008  jr          $v1
label_2088ac:
    if (ctx->pc == 0x2088ACu) {
        ctx->pc = 0x2088B0u;
        goto label_fallthrough_0x2088a8;
    }
    ctx->pc = 0x2088A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2088A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2088a8:
    ctx->pc = 0x2088B0u;
}
