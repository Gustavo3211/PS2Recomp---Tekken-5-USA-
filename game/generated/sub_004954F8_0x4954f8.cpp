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

// Function: sub_004954F8
// Address: 0x4954f8 - 0x495568
void sub_004954F8_0x4954f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004954F8_0x4954f8");
#endif

    switch (ctx->pc) {
        case 0x4954f8u: goto label_4954f8;
        case 0x4954fcu: goto label_4954fc;
        case 0x495500u: goto label_495500;
        case 0x495504u: goto label_495504;
        case 0x495508u: goto label_495508;
        case 0x49550cu: goto label_49550c;
        case 0x495510u: goto label_495510;
        case 0x495514u: goto label_495514;
        case 0x495518u: goto label_495518;
        case 0x49551cu: goto label_49551c;
        case 0x495520u: goto label_495520;
        case 0x495524u: goto label_495524;
        case 0x495528u: goto label_495528;
        case 0x49552cu: goto label_49552c;
        case 0x495530u: goto label_495530;
        case 0x495534u: goto label_495534;
        case 0x495538u: goto label_495538;
        case 0x49553cu: goto label_49553c;
        case 0x495540u: goto label_495540;
        case 0x495544u: goto label_495544;
        case 0x495548u: goto label_495548;
        case 0x49554cu: goto label_49554c;
        case 0x495550u: goto label_495550;
        case 0x495554u: goto label_495554;
        case 0x495558u: goto label_495558;
        case 0x49555cu: goto label_49555c;
        case 0x495560u: goto label_495560;
        case 0x495564u: goto label_495564;
        default: break;
    }

    ctx->pc = 0x4954f8u;

label_4954f8:
    // 0x4954f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4954f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4954fc:
    // 0x4954fc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4954fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_495500:
    // 0x495500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x495500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_495504:
    // 0x495504: 0x24a50ab0  addiu       $a1, $a1, 0xAB0
    ctx->pc = 0x495504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2736));
label_495508:
    // 0x495508: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x495508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49550c:
    // 0x49550c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49550cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_495510:
    // 0x495510: 0x84c201b6  lh          $v0, 0x1B6($a2)
    ctx->pc = 0x495510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
label_495514:
    // 0x495514: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x495514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_495518:
    // 0x495518: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x495518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_49551c:
    // 0x49551c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_495520:
    // 0x495520: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_495524:
    // 0x495524: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x495524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_495528:
    // 0x495528: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x495528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_49552c:
    // 0x49552c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49552cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_495530:
    // 0x495530: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x495530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_495534:
    // 0x495534: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x495534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_495538:
    // 0x495538: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x495538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49553c:
    // 0x49553c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49553cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_495540:
    // 0x495540: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x495540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_495544:
    // 0x495544: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x495544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_495548:
    // 0x495548: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_49554c:
    if (ctx->pc == 0x49554Cu) {
        ctx->pc = 0x49554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495548u;
        // 0x49554c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x495550u;
        goto label_495550;
    }
    ctx->pc = 0x495548u;
    {
        const bool branch_taken_0x495548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495548) {
            ctx->pc = 0x49554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495548u;
            // 0x49554c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4955E8u;
            return;
        }
    }
    ctx->pc = 0x495550u;
label_495550:
    // 0x495550: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x495550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_495554:
    // 0x495554: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x495554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_495558:
    // 0x495558: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x495558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_49555c:
    // 0x49555c: 0x8c63ac80  lw          $v1, -0x5380($v1)
    ctx->pc = 0x49555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945920)));
label_495560:
    // 0x495560: 0x600008  jr          $v1
label_495564:
    if (ctx->pc == 0x495564u) {
        ctx->pc = 0x495568u;
        goto label_fallthrough_0x495560;
    }
    ctx->pc = 0x495560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495560u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x495560:
    ctx->pc = 0x495568u;
}
