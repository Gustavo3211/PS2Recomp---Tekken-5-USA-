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

// Function: sub_00494C08
// Address: 0x494c08 - 0x494c40
void sub_00494C08_0x494c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494C08_0x494c08");
#endif

    switch (ctx->pc) {
        case 0x494c08u: goto label_494c08;
        case 0x494c0cu: goto label_494c0c;
        case 0x494c10u: goto label_494c10;
        case 0x494c14u: goto label_494c14;
        case 0x494c18u: goto label_494c18;
        case 0x494c1cu: goto label_494c1c;
        case 0x494c20u: goto label_494c20;
        case 0x494c24u: goto label_494c24;
        case 0x494c28u: goto label_494c28;
        case 0x494c2cu: goto label_494c2c;
        case 0x494c30u: goto label_494c30;
        case 0x494c34u: goto label_494c34;
        case 0x494c38u: goto label_494c38;
        case 0x494c3cu: goto label_494c3c;
        default: break;
    }

    ctx->pc = 0x494c08u;

label_494c08:
    // 0x494c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x494c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_494c0c:
    // 0x494c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x494c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_494c10:
    // 0x494c10: 0x848201b6  lh          $v0, 0x1B6($a0)
    ctx->pc = 0x494c10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 438)));
label_494c14:
    // 0x494c14: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x494c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_494c18:
    // 0x494c18: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x494c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_494c1c:
    // 0x494c1c: 0x50600028  beql        $v1, $zero, . + 4 + (0x28 << 2)
label_494c20:
    if (ctx->pc == 0x494C20u) {
        ctx->pc = 0x494C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C1Cu;
        // 0x494c20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x494C24u;
        goto label_494c24;
    }
    ctx->pc = 0x494C1Cu;
    {
        const bool branch_taken_0x494c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x494c1c) {
            ctx->pc = 0x494C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494C1Cu;
            // 0x494c20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494CC0u;
            return;
        }
    }
    ctx->pc = 0x494C24u;
label_494c24:
    // 0x494c24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x494c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_494c28:
    // 0x494c28: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x494c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_494c2c:
    // 0x494c2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x494c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_494c30:
    // 0x494c30: 0x8c63ac60  lw          $v1, -0x53A0($v1)
    ctx->pc = 0x494c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945888)));
label_494c34:
    // 0x494c34: 0x600008  jr          $v1
label_494c38:
    if (ctx->pc == 0x494C38u) {
        ctx->pc = 0x494C3Cu;
        goto label_494c3c;
    }
    ctx->pc = 0x494C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494C34u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x494C3Cu;
label_494c3c:
    // 0x494c3c: 0x0  nop
    ctx->pc = 0x494c3cu;
    // NOP
    ctx->pc = 0x494c40u;
}
