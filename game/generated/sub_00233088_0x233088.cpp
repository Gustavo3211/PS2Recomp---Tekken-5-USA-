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

// Function: sub_00233088
// Address: 0x233088 - 0x2330b8
void sub_00233088_0x233088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233088_0x233088");
#endif

    switch (ctx->pc) {
        case 0x233088u: goto label_233088;
        case 0x23308cu: goto label_23308c;
        case 0x233090u: goto label_233090;
        case 0x233094u: goto label_233094;
        case 0x233098u: goto label_233098;
        case 0x23309cu: goto label_23309c;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        default: break;
    }

    ctx->pc = 0x233088u;

label_233088:
    // 0x233088: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23308c:
    // 0x23308c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23308cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_233090:
    // 0x233090: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x233090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_233094:
    // 0x233094: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_233098:
    if (ctx->pc == 0x233098u) {
        ctx->pc = 0x233098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233094u;
        // 0x233098: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23309Cu;
        goto label_23309c;
    }
    ctx->pc = 0x233094u;
    {
        const bool branch_taken_0x233094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233094u;
        // 0x233098: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233094) {
            ctx->pc = 0x233128u;
            return;
        }
    }
    ctx->pc = 0x23309Cu;
label_23309c:
    // 0x23309c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x23309cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2330a0:
    // 0x2330a0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2330a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_2330a4:
    // 0x2330a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2330a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2330a8:
    // 0x2330a8: 0x8c637a10  lw          $v1, 0x7A10($v1)
    ctx->pc = 0x2330a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31248)));
label_2330ac:
    // 0x2330ac: 0x600008  jr          $v1
label_2330b0:
    if (ctx->pc == 0x2330B0u) {
        ctx->pc = 0x2330B4u;
        goto label_2330b4;
    }
    ctx->pc = 0x2330ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2330ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2330B4u;
label_2330b4:
    // 0x2330b4: 0x0  nop
    ctx->pc = 0x2330b4u;
    // NOP
    ctx->pc = 0x2330b8u;
}
