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

// Function: sub_002D8600
// Address: 0x2d8600 - 0x2d8638
void sub_002D8600_0x2d8600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8600_0x2d8600");
#endif

    switch (ctx->pc) {
        case 0x2d8600u: goto label_2d8600;
        case 0x2d8604u: goto label_2d8604;
        case 0x2d8608u: goto label_2d8608;
        case 0x2d860cu: goto label_2d860c;
        case 0x2d8610u: goto label_2d8610;
        case 0x2d8614u: goto label_2d8614;
        case 0x2d8618u: goto label_2d8618;
        case 0x2d861cu: goto label_2d861c;
        case 0x2d8620u: goto label_2d8620;
        case 0x2d8624u: goto label_2d8624;
        case 0x2d8628u: goto label_2d8628;
        case 0x2d862cu: goto label_2d862c;
        case 0x2d8630u: goto label_2d8630;
        case 0x2d8634u: goto label_2d8634;
        default: break;
    }

    ctx->pc = 0x2d8600u;

label_2d8600:
    // 0x2d8600: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d8600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2d8604:
    // 0x2d8604: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2d8604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2d8608:
    // 0x2d8608: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2d8608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2d860c:
    // 0x2d860c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2d860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2d8610:
    // 0x2d8610: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x2d8610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2d8614:
    // 0x2d8614: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2d8618:
    if (ctx->pc == 0x2D8618u) {
        ctx->pc = 0x2D8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8614u;
        // 0x2d8618: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D861Cu;
        goto label_2d861c;
    }
    ctx->pc = 0x2D8614u;
    {
        const bool branch_taken_0x2d8614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8614u;
        // 0x2d8618: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8614) {
            ctx->pc = 0x2D8650u;
            return;
        }
    }
    ctx->pc = 0x2D861Cu;
label_2d861c:
    // 0x2d861c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2d861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2d8620:
    // 0x2d8620: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d8620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2d8624:
    // 0x2d8624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d8624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d8628:
    // 0x2d8628: 0x8c63ee10  lw          $v1, -0x11F0($v1)
    ctx->pc = 0x2d8628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962704)));
label_2d862c:
    // 0x2d862c: 0x600008  jr          $v1
label_2d8630:
    if (ctx->pc == 0x2D8630u) {
        ctx->pc = 0x2D8634u;
        goto label_2d8634;
    }
    ctx->pc = 0x2D862Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D862Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2D8634u;
label_2d8634:
    // 0x2d8634: 0x0  nop
    ctx->pc = 0x2d8634u;
    // NOP
    ctx->pc = 0x2d8638u;
}
