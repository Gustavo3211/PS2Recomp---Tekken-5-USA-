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

// Function: sub_002EF500
// Address: 0x2ef500 - 0x2ef620
void sub_002EF500_0x2ef500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF500_0x2ef500");
#endif

    switch (ctx->pc) {
        case 0x2ef540u: goto label_2ef540;
        case 0x2ef594u: goto label_2ef594;
        case 0x2ef608u: goto label_2ef608;
        default: break;
    }

    ctx->pc = 0x2ef500u;

    // 0x2ef500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ef504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ef504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ef508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef50c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ef50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ef510: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ef510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ef514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ef518: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ef518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ef51c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ef51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ef520: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x2ef520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x2ef524: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x2ef524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2ef528: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2ef528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2ef52c: 0x26020058  addiu       $v0, $s0, 0x58
    ctx->pc = 0x2ef52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2ef530: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ef530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2ef534: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2ef534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ef538: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2ef538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2ef53c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ef53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ef540:
    // 0x2ef540: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ef540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ef544: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2ef544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2ef548: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ef548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ef54c: 0x0  nop
    ctx->pc = 0x2ef54cu;
    // NOP
    // 0x2ef550: 0x0  nop
    ctx->pc = 0x2ef550u;
    // NOP
    // 0x2ef554: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2EF554u;
    {
        const bool branch_taken_0x2ef554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF554u;
        // 0x2ef558: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef554) {
            ctx->pc = 0x2EF540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef540;
        }
    }
    ctx->pc = 0x2EF55Cu;
    // 0x2ef55c: 0x26020110  addiu       $v0, $s0, 0x110
    ctx->pc = 0x2ef55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x2ef560: 0x260300b8  addiu       $v1, $s0, 0xB8
    ctx->pc = 0x2ef560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x2ef564: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ef564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ef568: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2ef568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2ef56c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2ef56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2ef570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ef570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef574: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2ef574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2ef578: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ef578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ef57c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2ef57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2ef580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ef580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef584: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ef584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ef588: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ef588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ef58c: 0xc0b79f8  jal         func_2DE7E0
    ctx->pc = 0x2EF58Cu;
    SET_GPR_U32(ctx, 31, 0x2EF594u);
    ctx->pc = 0x2EF590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF58Cu;
    // 0x2ef590: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE7E0u, 0x2EF58Cu, 0x2EF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF594u;
label_2ef594:
    // 0x2ef594: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2ef594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2ef598: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2ef598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2ef59c: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x2ef59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x2ef5a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ef5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ef5a4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EF5A4u;
    {
        const bool branch_taken_0x2ef5a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5A4u;
        // 0x2ef5a8: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5a4) {
            ctx->pc = 0x2EF5C0u;
            goto label_2ef5c0;
        }
    }
    ctx->pc = 0x2EF5ACu;
    // 0x2ef5ac: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2ef5acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x2ef5b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ef5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ef5b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EF5B4u;
    {
        const bool branch_taken_0x2ef5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5B4u;
        // 0x2ef5b8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5b4) {
            ctx->pc = 0x2EF5C8u;
            goto label_2ef5c8;
        }
    }
    ctx->pc = 0x2EF5BCu;
    // 0x2ef5bc: 0x0  nop
    ctx->pc = 0x2ef5bcu;
    // NOP
label_2ef5c0:
    // 0x2ef5c0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2ef5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2ef5c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2ef5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2ef5c8:
    // 0x2ef5c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ef5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ef5cc: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x2ef5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x2ef5d0: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2ef5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2ef5d4: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x2ef5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x2ef5d8: 0xae0200f8  sw          $v0, 0xF8($s0)
    ctx->pc = 0x2ef5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 2));
    // 0x2ef5dc: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x2ef5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x2ef5e0: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x2ef5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x2ef5e4: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x2ef5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x2ef5e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF5E8u;
    {
        const bool branch_taken_0x2ef5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF5E8u;
        // 0x2ef5ec: 0xae000128  sw          $zero, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef5e8) {
            ctx->pc = 0x2EF608u;
            goto label_2ef608;
        }
    }
    ctx->pc = 0x2EF5F0u;
    // 0x2ef5f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ef5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ef5f4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ef5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ef5f8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ef5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ef5fc: 0x248406a8  addiu       $a0, $a0, 0x6A8
    ctx->pc = 0x2ef5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1704));
    // 0x2ef600: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EF600u;
    SET_GPR_U32(ctx, 31, 0x2EF608u);
    ctx->pc = 0x2EF604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF600u;
    // 0x2ef604: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EF600u, 0x2EF608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF608u;
label_2ef608:
    // 0x2ef608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ef608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef60c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ef60cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ef610: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ef610u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef614: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ef614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ef618: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF618u;
        // 0x2ef61c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF620u;
}
