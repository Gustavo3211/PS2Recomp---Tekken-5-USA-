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

// Function: sub_001FAE30
// Address: 0x1fae30 - 0x1fae58
void sub_001FAE30_0x1fae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAE30_0x1fae30");
#endif

    switch (ctx->pc) {
        case 0x1fae30u: goto label_1fae30;
        case 0x1fae34u: goto label_1fae34;
        case 0x1fae38u: goto label_1fae38;
        case 0x1fae3cu: goto label_1fae3c;
        case 0x1fae40u: goto label_1fae40;
        case 0x1fae44u: goto label_1fae44;
        case 0x1fae48u: goto label_1fae48;
        case 0x1fae4cu: goto label_1fae4c;
        case 0x1fae50u: goto label_1fae50;
        case 0x1fae54u: goto label_1fae54;
        default: break;
    }

    ctx->pc = 0x1fae30u;

label_1fae30:
    // 0x1fae30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fae34:
    // 0x1fae34: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x1fae34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1fae38:
    // 0x1fae38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1fae3c:
    if (ctx->pc == 0x1FAE3Cu) {
        ctx->pc = 0x1FAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE38u;
        // 0x1fae3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FAE40u;
        goto label_1fae40;
    }
    ctx->pc = 0x1FAE38u;
    {
        const bool branch_taken_0x1fae38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAE38u;
        // 0x1fae3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fae38) {
            ctx->pc = 0x1FAE58u;
            return;
        }
    }
    ctx->pc = 0x1FAE40u;
label_1fae40:
    // 0x1fae40: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1fae40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1fae44:
    // 0x1fae44: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fae44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1fae48:
    // 0x1fae48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fae48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fae4c:
    // 0x1fae4c: 0x8c633610  lw          $v1, 0x3610($v1)
    ctx->pc = 0x1fae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13840)));
label_1fae50:
    // 0x1fae50: 0x600008  jr          $v1
label_1fae54:
    if (ctx->pc == 0x1FAE54u) {
        ctx->pc = 0x1FAE58u;
        goto label_fallthrough_0x1fae50;
    }
    ctx->pc = 0x1FAE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAE50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1fae50:
    ctx->pc = 0x1FAE58u;
}
