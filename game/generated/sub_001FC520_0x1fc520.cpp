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

// Function: sub_001FC520
// Address: 0x1fc520 - 0x1fc5b0
void sub_001FC520_0x1fc520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC520_0x1fc520");
#endif

    ctx->pc = 0x1fc520u;

    // 0x1fc520: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1fc520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1fc524: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x1fc524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1fc528: 0x24627789  addiu       $v0, $v1, 0x7789
    ctx->pc = 0x1fc528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30601));
    // 0x1fc52c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fc52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fc530: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fc530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc534: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FC534u;
    {
        const bool branch_taken_0x1fc534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC534u;
        // 0x1fc538: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc534) {
            ctx->pc = 0x1FC5A4u;
            goto label_1fc5a4;
        }
    }
    ctx->pc = 0x1FC53Cu;
    // 0x1fc53c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1fc53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1fc540: 0x340288ad  ori         $v0, $zero, 0x88AD
    ctx->pc = 0x1fc540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34989);
    // 0x1fc544: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC544u;
    {
        const bool branch_taken_0x1fc544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc544) {
            ctx->pc = 0x1FC548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC544u;
            // 0x1fc548: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC54Cu;
    // 0x1fc54c: 0x340288ae  ori         $v0, $zero, 0x88AE
    ctx->pc = 0x1fc54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34990);
    // 0x1fc550: 0x50620015  beql        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FC550u;
    {
        const bool branch_taken_0x1fc550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc550) {
            ctx->pc = 0x1FC554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC550u;
            // 0x1fc554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC558u;
    // 0x1fc558: 0x34028882  ori         $v0, $zero, 0x8882
    ctx->pc = 0x1fc558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34946);
    // 0x1fc55c: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FC55Cu;
    {
        const bool branch_taken_0x1fc55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc55c) {
            ctx->pc = 0x1FC560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC55Cu;
            // 0x1fc560: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC564u;
    // 0x1fc564: 0x34028884  ori         $v0, $zero, 0x8884
    ctx->pc = 0x1fc564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34948);
    // 0x1fc568: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC568u;
    {
        const bool branch_taken_0x1fc568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc568) {
            ctx->pc = 0x1FC56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC568u;
            // 0x1fc56c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC570u;
    // 0x1fc570: 0x340288b8  ori         $v0, $zero, 0x88B8
    ctx->pc = 0x1fc570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
    // 0x1fc574: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FC574u;
    {
        const bool branch_taken_0x1fc574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fc574) {
            ctx->pc = 0x1FC578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC574u;
            // 0x1fc578: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC57Cu;
    // 0x1fc57c: 0x340288ba  ori         $v0, $zero, 0x88BA
    ctx->pc = 0x1fc57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35002);
    // 0x1fc580: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC580u;
    {
        const bool branch_taken_0x1fc580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC580u;
        // 0x1fc584: 0x240313b3  addiu       $v1, $zero, 0x13B3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5043));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc580) {
            ctx->pc = 0x1FC5A4u;
            goto label_1fc5a4;
        }
    }
    ctx->pc = 0x1FC588u;
    // 0x1fc588: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x1fc588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1fc58c: 0x9445001c  lhu         $a1, 0x1C($v0)
    ctx->pc = 0x1fc58cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1fc590: 0x50a30005  beql        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC590u;
    {
        const bool branch_taken_0x1fc590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fc590) {
            ctx->pc = 0x1FC594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC590u;
            // 0x1fc594: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC598u;
    // 0x1fc598: 0x240213b6  addiu       $v0, $zero, 0x13B6
    ctx->pc = 0x1fc598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5046));
    // 0x1fc59c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC59Cu;
    {
        const bool branch_taken_0x1fc59c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc59c) {
            ctx->pc = 0x1FC5A8u;
            goto label_1fc5a8;
        }
    }
    ctx->pc = 0x1FC5A4u;
label_1fc5a4:
    // 0x1fc5a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc5a8:
    // 0x1fc5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC5A8u;
        // 0x1fc5ac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC5B0u;
}
