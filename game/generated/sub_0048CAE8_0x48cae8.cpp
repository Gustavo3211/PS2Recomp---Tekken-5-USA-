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

// Function: sub_0048CAE8
// Address: 0x48cae8 - 0x48cb18
void sub_0048CAE8_0x48cae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CAE8_0x48cae8");
#endif

    switch (ctx->pc) {
        case 0x48cae8u: goto label_48cae8;
        case 0x48caecu: goto label_48caec;
        case 0x48caf0u: goto label_48caf0;
        case 0x48caf4u: goto label_48caf4;
        case 0x48caf8u: goto label_48caf8;
        case 0x48cafcu: goto label_48cafc;
        case 0x48cb00u: goto label_48cb00;
        case 0x48cb04u: goto label_48cb04;
        case 0x48cb08u: goto label_48cb08;
        case 0x48cb0cu: goto label_48cb0c;
        case 0x48cb10u: goto label_48cb10;
        case 0x48cb14u: goto label_48cb14;
        default: break;
    }

    ctx->pc = 0x48cae8u;

label_48cae8:
    // 0x48cae8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_48caec:
    // 0x48caec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48caecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48caf0:
    // 0x48caf0: 0x8442f940  lh          $v0, -0x6C0($v0)
    ctx->pc = 0x48caf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294965568)));
label_48caf4:
    // 0x48caf4: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x48caf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_48caf8:
    // 0x48caf8: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_48cafc:
    if (ctx->pc == 0x48CAFCu) {
        ctx->pc = 0x48CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAF8u;
        // 0x48cafc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48CB00u;
        goto label_48cb00;
    }
    ctx->pc = 0x48CAF8u;
    {
        const bool branch_taken_0x48caf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CAF8u;
        // 0x48cafc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48caf8) {
            ctx->pc = 0x48CB78u;
            return;
        }
    }
    ctx->pc = 0x48CB00u;
label_48cb00:
    // 0x48cb00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48cb04:
    // 0x48cb04: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_48cb08:
    // 0x48cb08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48cb0c:
    // 0x48cb0c: 0x8c639ed0  lw          $v1, -0x6130($v1)
    ctx->pc = 0x48cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942416)));
label_48cb10:
    // 0x48cb10: 0x600008  jr          $v1
label_48cb14:
    if (ctx->pc == 0x48CB14u) {
        ctx->pc = 0x48CB18u;
        goto label_fallthrough_0x48cb10;
    }
    ctx->pc = 0x48CB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CB10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x48cb10:
    ctx->pc = 0x48CB18u;
}
