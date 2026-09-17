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

// Function: sub_004955F0
// Address: 0x4955f0 - 0x495660
void sub_004955F0_0x4955f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004955F0_0x4955f0");
#endif

    switch (ctx->pc) {
        case 0x4955f0u: goto label_4955f0;
        case 0x4955f4u: goto label_4955f4;
        case 0x4955f8u: goto label_4955f8;
        case 0x4955fcu: goto label_4955fc;
        case 0x495600u: goto label_495600;
        case 0x495604u: goto label_495604;
        case 0x495608u: goto label_495608;
        case 0x49560cu: goto label_49560c;
        case 0x495610u: goto label_495610;
        case 0x495614u: goto label_495614;
        case 0x495618u: goto label_495618;
        case 0x49561cu: goto label_49561c;
        case 0x495620u: goto label_495620;
        case 0x495624u: goto label_495624;
        case 0x495628u: goto label_495628;
        case 0x49562cu: goto label_49562c;
        case 0x495630u: goto label_495630;
        case 0x495634u: goto label_495634;
        case 0x495638u: goto label_495638;
        case 0x49563cu: goto label_49563c;
        case 0x495640u: goto label_495640;
        case 0x495644u: goto label_495644;
        case 0x495648u: goto label_495648;
        case 0x49564cu: goto label_49564c;
        case 0x495650u: goto label_495650;
        case 0x495654u: goto label_495654;
        case 0x495658u: goto label_495658;
        case 0x49565cu: goto label_49565c;
        default: break;
    }

    ctx->pc = 0x4955f0u;

label_4955f0:
    // 0x4955f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4955f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4955f4:
    // 0x4955f4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4955f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4955f8:
    // 0x4955f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4955f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4955fc:
    // 0x4955fc: 0x24a50ab0  addiu       $a1, $a1, 0xAB0
    ctx->pc = 0x4955fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
label_495600:
    // 0x495600: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x495600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_495604:
    // 0x495604: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x495604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_495608:
    // 0x495608: 0x84c201b6  lh          $v0, 0x1B6($a2)
    ctx->pc = 0x495608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
label_49560c:
    // 0x49560c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495610:
    // 0x495610: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x495610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_495614:
    // 0x495614: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_495618:
    // 0x495618: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49561c:
    // 0x49561c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49561cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_495620:
    // 0x495620: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_495624:
    // 0x495624: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x495624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_495628:
    // 0x495628: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x495628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_49562c:
    // 0x49562c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_495630:
    // 0x495630: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_495634:
    // 0x495634: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x495634u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_495638:
    // 0x495638: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x495638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_49563c:
    // 0x49563c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x49563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_495640:
    // 0x495640: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_495644:
    if (ctx->pc == 0x495644u) {
        ctx->pc = 0x495644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495640u;
        // 0x495644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x495648u;
        goto label_495648;
    }
    ctx->pc = 0x495640u;
    {
        const bool branch_taken_0x495640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495640) {
            ctx->pc = 0x495644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495640u;
            // 0x495644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4956E0u;
            return;
        }
    }
    ctx->pc = 0x495648u;
label_495648:
    // 0x495648: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x495648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49564c:
    // 0x49564c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_495650:
    // 0x495650: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x495650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_495654:
    // 0x495654: 0x8c63aca0  lw          $v1, -0x5360($v1)
    ctx->pc = 0x495654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945952)));
label_495658:
    // 0x495658: 0x600008  jr          $v1
label_49565c:
    if (ctx->pc == 0x49565Cu) {
        ctx->pc = 0x495660u;
        goto label_fallthrough_0x495658;
    }
    ctx->pc = 0x495658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495658u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x495658:
    ctx->pc = 0x495660u;
}
