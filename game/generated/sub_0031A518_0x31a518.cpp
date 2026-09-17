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

// Function: sub_0031A518
// Address: 0x31a518 - 0x31a548
void sub_0031A518_0x31a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A518_0x31a518");
#endif

    switch (ctx->pc) {
        case 0x31a518u: goto label_31a518;
        case 0x31a51cu: goto label_31a51c;
        case 0x31a520u: goto label_31a520;
        case 0x31a524u: goto label_31a524;
        case 0x31a528u: goto label_31a528;
        case 0x31a52cu: goto label_31a52c;
        case 0x31a530u: goto label_31a530;
        case 0x31a534u: goto label_31a534;
        case 0x31a538u: goto label_31a538;
        case 0x31a53cu: goto label_31a53c;
        case 0x31a540u: goto label_31a540;
        case 0x31a544u: goto label_31a544;
        default: break;
    }

    ctx->pc = 0x31a518u;

label_31a518:
    // 0x31a518: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_31a51c:
    // 0x31a51c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a51cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_31a520:
    // 0x31a520: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x31a520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_31a524:
    // 0x31a524: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_31a528:
    if (ctx->pc == 0x31A528u) {
        ctx->pc = 0x31A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A524u;
        // 0x31a528: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31A52Cu;
        goto label_31a52c;
    }
    ctx->pc = 0x31A524u;
    {
        const bool branch_taken_0x31a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A524u;
        // 0x31a528: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a524) {
            ctx->pc = 0x31A5F8u;
            return;
        }
    }
    ctx->pc = 0x31A52Cu;
label_31a52c:
    // 0x31a52c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x31a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31a530:
    // 0x31a530: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x31a530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_31a534:
    // 0x31a534: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31a538:
    // 0x31a538: 0x8c632e20  lw          $v1, 0x2E20($v1)
    ctx->pc = 0x31a538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11808)));
label_31a53c:
    // 0x31a53c: 0x600008  jr          $v1
label_31a540:
    if (ctx->pc == 0x31A540u) {
        ctx->pc = 0x31A544u;
        goto label_31a544;
    }
    ctx->pc = 0x31A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A53Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31A544u;
label_31a544:
    // 0x31a544: 0x0  nop
    ctx->pc = 0x31a544u;
    // NOP
    ctx->pc = 0x31a548u;
}
