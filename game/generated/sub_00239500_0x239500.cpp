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

// Function: sub_00239500
// Address: 0x239500 - 0x239600
void sub_00239500_0x239500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239500_0x239500");
#endif

    switch (ctx->pc) {
        case 0x239524u: goto label_239524;
        case 0x239590u: goto label_239590;
        case 0x2395d0u: goto label_2395d0;
        default: break;
    }

    ctx->pc = 0x239500u;

    // 0x239500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239504: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x239504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x239508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23950c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x23950cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x239510: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x239510u;
    {
        const bool branch_taken_0x239510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239510u;
        // 0x239514: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239510) {
            ctx->pc = 0x2395ECu;
            goto label_2395ec;
        }
    }
    ctx->pc = 0x239518u;
    // 0x239518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23951c: 0xc04306a  jal         func_10C1A8
    ctx->pc = 0x23951Cu;
    SET_GPR_U32(ctx, 31, 0x239524u);
    ctx->pc = 0x239520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23951Cu;
    // 0x239520: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C1A8u, 0x23951Cu, 0x239524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239524u;
label_239524:
    // 0x239524: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x239524u;
    {
        const bool branch_taken_0x239524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239524) {
            ctx->pc = 0x239528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239524u;
            // 0x239528: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2395F0u;
            goto label_2395f0;
        }
    }
    ctx->pc = 0x23952Cu;
    // 0x23952c: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x23952cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239530: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x239530u;
    {
        const bool branch_taken_0x239530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239530) {
            ctx->pc = 0x239534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239530u;
            // 0x239534: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2395F0u;
            goto label_2395f0;
        }
    }
    ctx->pc = 0x239538u;
    // 0x239538: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x239538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x23953c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x23953cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x239540: 0x104040  sll         $t0, $s0, 1
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x239544: 0x2487d600  addiu       $a3, $a0, -0x2A00
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956544));
    // 0x239548: 0x1101821  addu        $v1, $t0, $s0
    ctx->pc = 0x239548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x23954c: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x23954cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x239550: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x239550u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x239554: 0x24e30004  addiu       $v1, $a3, 0x4
    ctx->pc = 0x239554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x239558: 0x93a50001  lbu         $a1, 0x1($sp)
    ctx->pc = 0x239558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x23955c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x23955cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x239560: 0x822027  nor         $a0, $a0, $v0
    ctx->pc = 0x239560u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 2)));
    // 0x239564: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x239564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x239568: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x239568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23956c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x23956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x239570: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x239570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x239574: 0xa4440010  sh          $a0, 0x10($v0)
    ctx->pc = 0x239574u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x239578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x239578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23957c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x23957cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x239580: 0x1445000d  bne         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x239580u;
    {
        const bool branch_taken_0x239580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x239584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239580u;
        // 0x239584: 0x1101021  addu        $v0, $t0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239580) {
            ctx->pc = 0x2395B8u;
            goto label_2395b8;
        }
    }
    ctx->pc = 0x239588u;
    // 0x239588: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x239588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x23958c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23958cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239590:
    // 0x239590: 0xbd1821  addu        $v1, $a1, $sp
    ctx->pc = 0x239590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x239594: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x239594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x239598: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x239598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23959c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23959cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2395a0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2395a4: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2395a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2395a8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2395A8u;
    {
        const bool branch_taken_0x2395a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2395ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395A8u;
        // 0x2395ac: 0xa0440010  sb          $a0, 0x10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395a8) {
            ctx->pc = 0x239590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239590;
        }
    }
    ctx->pc = 0x2395B0u;
    // 0x2395b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2395B0u;
    {
        const bool branch_taken_0x2395b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395B0u;
        // 0x2395b4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395b0) {
            ctx->pc = 0x2395F0u;
            goto label_2395f0;
        }
    }
    ctx->pc = 0x2395B8u;
label_2395b8:
    // 0x2395b8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2395bc: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2395c0: 0x2467d602  addiu       $a3, $v1, -0x29FE
    ctx->pc = 0x2395c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956546));
    // 0x2395c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2395c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395c8: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x2395c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x2395cc: 0x0  nop
    ctx->pc = 0x2395ccu;
    // NOP
label_2395d0:
    // 0x2395d0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2395d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2395d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2395d8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2395d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2395dc: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x2395dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2395e0: 0x0  nop
    ctx->pc = 0x2395e0u;
    // NOP
    // 0x2395e4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2395E4u;
    {
        const bool branch_taken_0x2395e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2395E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395E4u;
        // 0x2395e8: 0xa0460010  sb          $a2, 0x10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395e4) {
            ctx->pc = 0x2395D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2395d0;
        }
    }
    ctx->pc = 0x2395ECu;
label_2395ec:
    // 0x2395ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2395ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2395f0:
    // 0x2395f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2395f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2395f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2395F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2395F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F4u;
        // 0x2395f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2395F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2395FCu;
    // 0x2395fc: 0x0  nop
    ctx->pc = 0x2395fcu;
    // NOP
    ctx->pc = 0x239600u;
}
