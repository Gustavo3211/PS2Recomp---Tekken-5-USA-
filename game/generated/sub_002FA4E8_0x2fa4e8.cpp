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

// Function: sub_002FA4E8
// Address: 0x2fa4e8 - 0x2fa598
void sub_002FA4E8_0x2fa4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA4E8_0x2fa4e8");
#endif

    switch (ctx->pc) {
        case 0x2fa528u: goto label_2fa528;
        case 0x2fa55cu: goto label_2fa55c;
        default: break;
    }

    ctx->pc = 0x2fa4e8u;

    // 0x2fa4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa4f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fa4f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa4f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fa4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fa4f8: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2fa4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2fa4fc: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x2fa4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2fa500: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA500u;
    {
        const bool branch_taken_0x2fa500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa500) {
            ctx->pc = 0x2FA504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA500u;
            // 0x2fa504: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA59Cu;
            return;
        }
    }
    ctx->pc = 0x2FA508u;
    // 0x2fa508: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2fa508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fa50c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2fa50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2fa510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fa510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fa514: 0x8c631ac0  lw          $v1, 0x1AC0($v1)
    ctx->pc = 0x2fa514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6848)));
    // 0x2fa518: 0x600008  jr          $v1
    ctx->pc = 0x2FA518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FA520u: goto label_2fa520;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FA520u;
label_2fa520:
    // 0x2fa520: 0xc0bbebc  jal         func_2EFAF0
    ctx->pc = 0x2FA520u;
    SET_GPR_U32(ctx, 31, 0x2FA528u);
    ctx->pc = 0x2FA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA520u;
    // 0x2fa524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFAF0u, 0x2FA520u, 0x2FA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA528u;
label_2fa528:
    // 0x2fa528: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x2fa528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2fa52c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa530: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA530u;
    {
        const bool branch_taken_0x2fa530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa530) {
            ctx->pc = 0x2FA534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA530u;
            // 0x2fa534: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA54Cu;
            goto label_2fa54c;
        }
    }
    ctx->pc = 0x2FA538u;
    // 0x2fa538: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa53c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa540: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA540u;
    {
        const bool branch_taken_0x2fa540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fa540) {
            ctx->pc = 0x2FA554u;
            goto label_2fa554;
        }
    }
    ctx->pc = 0x2FA548u;
    // 0x2fa548: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa54c:
    // 0x2fa54c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa550: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2fa554:
    // 0x2fa554: 0xc0bdab4  jal         func_2F6AD0
    ctx->pc = 0x2FA554u;
    SET_GPR_U32(ctx, 31, 0x2FA55Cu);
    ctx->pc = 0x2F6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6AD0u, 0x2FA554u, 0x2FA55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA55Cu;
label_2fa55c:
    // 0x2fa55c: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2fa55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2fa560: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2fa560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa564: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA564u;
    {
        const bool branch_taken_0x2fa564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa564) {
            ctx->pc = 0x2FA568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA564u;
            // 0x2fa568: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA580u;
            goto label_2fa580;
        }
    }
    ctx->pc = 0x2FA56Cu;
    // 0x2fa56c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa570: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2fa570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2fa574: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA574u;
    {
        const bool branch_taken_0x2fa574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA574u;
        // 0x2fa578: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa574) {
            ctx->pc = 0x2FA58Cu;
            goto label_2fa58c;
        }
    }
    ctx->pc = 0x2FA57Cu;
    // 0x2fa57c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2fa57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2fa580:
    // 0x2fa580: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa584: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2fa584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2fa588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa58c:
    // 0x2fa58c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fa58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa590: 0x80be32a  j           func_2F8CA8
    ctx->pc = 0x2FA590u;
    ctx->pc = 0x2FA594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA590u;
    // 0x2fa594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8CA8u, 0x2FA590u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FA598u;
}
