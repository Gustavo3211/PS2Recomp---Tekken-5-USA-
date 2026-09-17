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

// Function: sub_00343160
// Address: 0x343160 - 0x343190
void sub_00343160_0x343160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343160_0x343160");
#endif

    switch (ctx->pc) {
        case 0x343160u: goto label_343160;
        case 0x343164u: goto label_343164;
        case 0x343168u: goto label_343168;
        case 0x34316cu: goto label_34316c;
        case 0x343170u: goto label_343170;
        case 0x343174u: goto label_343174;
        case 0x343178u: goto label_343178;
        case 0x34317cu: goto label_34317c;
        case 0x343180u: goto label_343180;
        case 0x343184u: goto label_343184;
        case 0x343188u: goto label_343188;
        case 0x34318cu: goto label_34318c;
        default: break;
    }

    ctx->pc = 0x343160u;

label_343160:
    // 0x343160: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x343160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_343164:
    // 0x343164: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x343164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_343168:
    // 0x343168: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x343168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_34316c:
    // 0x34316c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_343170:
    if (ctx->pc == 0x343170u) {
        ctx->pc = 0x343174u;
        goto label_343174;
    }
    ctx->pc = 0x34316Cu;
    {
        const bool branch_taken_0x34316c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34316c) {
            ctx->pc = 0x3431D8u;
            return;
        }
    }
    ctx->pc = 0x343174u;
label_343174:
    // 0x343174: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x343174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_343178:
    // 0x343178: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x343178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_34317c:
    // 0x34317c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x34317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_343180:
    // 0x343180: 0x8c6348c0  lw          $v1, 0x48C0($v1)
    ctx->pc = 0x343180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18624)));
label_343184:
    // 0x343184: 0x600008  jr          $v1
label_343188:
    if (ctx->pc == 0x343188u) {
        ctx->pc = 0x34318Cu;
        goto label_34318c;
    }
    ctx->pc = 0x343184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x34318Cu;
label_34318c:
    // 0x34318c: 0x0  nop
    ctx->pc = 0x34318cu;
    // NOP
    ctx->pc = 0x343190u;
}
