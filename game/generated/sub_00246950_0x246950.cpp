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

// Function: sub_00246950
// Address: 0x246950 - 0x246980
void sub_00246950_0x246950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246950_0x246950");
#endif

    switch (ctx->pc) {
        case 0x246950u: goto label_246950;
        case 0x246954u: goto label_246954;
        case 0x246958u: goto label_246958;
        case 0x24695cu: goto label_24695c;
        case 0x246960u: goto label_246960;
        case 0x246964u: goto label_246964;
        case 0x246968u: goto label_246968;
        case 0x24696cu: goto label_24696c;
        case 0x246970u: goto label_246970;
        case 0x246974u: goto label_246974;
        case 0x246978u: goto label_246978;
        case 0x24697cu: goto label_24697c;
        default: break;
    }

    ctx->pc = 0x246950u;

label_246950:
    // 0x246950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_246954:
    // 0x246954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_246958:
    // 0x246958: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x246958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_24695c:
    // 0x24695c: 0x2c620021  sltiu       $v0, $v1, 0x21
    ctx->pc = 0x24695cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
label_246960:
    // 0x246960: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_246964:
    if (ctx->pc == 0x246964u) {
        ctx->pc = 0x246964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246960u;
        // 0x246964: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246968u;
        goto label_246968;
    }
    ctx->pc = 0x246960u;
    {
        const bool branch_taken_0x246960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246960u;
        // 0x246964: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246960) {
            ctx->pc = 0x246990u;
            return;
        }
    }
    ctx->pc = 0x246968u;
label_246968:
    // 0x246968: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x246968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24696c:
    // 0x24696c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x24696cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_246970:
    // 0x246970: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x246970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_246974:
    // 0x246974: 0x8c630a90  lw          $v1, 0xA90($v1)
    ctx->pc = 0x246974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2704)));
label_246978:
    // 0x246978: 0x600008  jr          $v1
label_24697c:
    if (ctx->pc == 0x24697Cu) {
        ctx->pc = 0x246980u;
        goto label_fallthrough_0x246978;
    }
    ctx->pc = 0x246978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246978u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x246978:
    ctx->pc = 0x246980u;
}
