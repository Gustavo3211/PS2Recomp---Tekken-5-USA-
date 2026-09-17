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

// Function: sub_002B3830
// Address: 0x2b3830 - 0x2b39d8
void sub_002B3830_0x2b3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3830_0x2b3830");
#endif

    switch (ctx->pc) {
        case 0x2b38b4u: goto label_2b38b4;
        case 0x2b38d0u: goto label_2b38d0;
        case 0x2b38f8u: goto label_2b38f8;
        case 0x2b390cu: goto label_2b390c;
        case 0x2b3928u: goto label_2b3928;
        case 0x2b3980u: goto label_2b3980;
        case 0x2b399cu: goto label_2b399c;
        default: break;
    }

    ctx->pc = 0x2b3830u;

    // 0x2b3830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b3830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b3834: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x2b3834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x2b3838: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b383c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b383cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3840: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2b3840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2b3844: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b3844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3848: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2b3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2b384c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2b384cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3850: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2b3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2b3854: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2b3854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3858: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b385c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b385cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b3860: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b3860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b3864: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2b3864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2b3868: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b3868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2b386c: 0xae960050  sw          $s6, 0x50($s4)
    ctx->pc = 0x2b386cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 22));
    // 0x2b3870: 0xae950054  sw          $s5, 0x54($s4)
    ctx->pc = 0x2b3870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 21));
    // 0x2b3874: 0xae91005c  sw          $s1, 0x5C($s4)
    ctx->pc = 0x2b3874u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 17));
    // 0x2b3878: 0xae8000c4  sw          $zero, 0xC4($s4)
    ctx->pc = 0x2b3878u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 0));
    // 0x2b387c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2b387cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2b3880: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x2b3880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2b3884: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3884u;
    {
        const bool branch_taken_0x2b3884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B3888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3884u;
        // 0x2b3888: 0x3c04003e  lui         $a0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3884) {
            ctx->pc = 0x2B38ACu;
            goto label_2b38ac;
        }
    }
    ctx->pc = 0x2B388Cu;
    // 0x2b388c: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x2b388cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2b3890: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2b3890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2b3894: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3894u;
    {
        const bool branch_taken_0x2b3894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3894) {
            ctx->pc = 0x2B38ACu;
            goto label_2b38ac;
        }
    }
    ctx->pc = 0x2B389Cu;
    // 0x2b389c: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x2b389cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2b38a0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2b38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2b38a4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B38A4u;
    {
        const bool branch_taken_0x2b38a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38A4u;
        // 0x2b38a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38a4) {
            ctx->pc = 0x2B38B8u;
            goto label_2b38b8;
        }
    }
    ctx->pc = 0x2B38ACu;
label_2b38ac:
    // 0x2b38ac: 0xc0b7cfa  jal         func_2DF3E8
    ctx->pc = 0x2B38ACu;
    SET_GPR_U32(ctx, 31, 0x2B38B4u);
    ctx->pc = 0x2B38B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B38ACu;
    // 0x2b38b0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF3E8u, 0x2B38ACu, 0x2B38B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38B4u;
label_2b38b4:
    // 0x2b38b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b38b8:
    // 0x2b38b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b38b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b38bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38c0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b38c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2b38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b38c8: 0xc0acfba  jal         func_2B3EE8
    ctx->pc = 0x2B38C8u;
    SET_GPR_U32(ctx, 31, 0x2B38D0u);
    ctx->pc = 0x2B38CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B38C8u;
    // 0x2b38cc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3EE8u, 0x2B38C8u, 0x2B38D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38D0u;
label_2b38d0:
    // 0x2b38d0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2b38d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b38d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b38d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38d8: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x2b38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2b38dc: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B38DCu;
    {
        const bool branch_taken_0x2b38dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38DCu;
        // 0x2b38e0: 0x8fb70000  lw          $s7, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38dc) {
            ctx->pc = 0x2B3950u;
            goto label_2b3950;
        }
    }
    ctx->pc = 0x2B38E4u;
    // 0x2b38e4: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x2b38e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2b38e8: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B38E8u;
    {
        const bool branch_taken_0x2b38e8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B38ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38E8u;
        // 0x2b38ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38e8) {
            ctx->pc = 0x2B3918u;
            goto label_2b3918;
        }
    }
    ctx->pc = 0x2B38F0u;
    // 0x2b38f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b38f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38f4: 0x0  nop
    ctx->pc = 0x2b38f4u;
    // NOP
label_2b38f8:
    // 0x2b38f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b38f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b38fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b38fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3900: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2b3900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3904: 0xc0acfc0  jal         func_2B3F00
    ctx->pc = 0x2B3904u;
    SET_GPR_U32(ctx, 31, 0x2B390Cu);
    ctx->pc = 0x2B3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3904u;
    // 0x2b3908: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F00u, 0x2B3904u, 0x2B390Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B390Cu;
label_2b390c:
    // 0x2b390c: 0x270102a  slt         $v0, $s3, $s0
    ctx->pc = 0x2b390cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2b3910: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B3910u;
    {
        const bool branch_taken_0x2b3910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3910u;
        // 0x2b3914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3910) {
            ctx->pc = 0x2B38F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b38f8;
        }
    }
    ctx->pc = 0x2B3918u;
label_2b3918:
    // 0x2b3918: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3918u;
    {
        const bool branch_taken_0x2b3918 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2B391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3918u;
        // 0x2b391c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3918) {
            ctx->pc = 0x2B3948u;
            goto label_2b3948;
        }
    }
    ctx->pc = 0x2B3920u;
    // 0x2b3920: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b3920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3924: 0x0  nop
    ctx->pc = 0x2b3924u;
    // NOP
label_2b3928:
    // 0x2b3928: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b3928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b392c: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x2b392cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b3930: 0x0  nop
    ctx->pc = 0x2b3930u;
    // NOP
    // 0x2b3934: 0x0  nop
    ctx->pc = 0x2b3934u;
    // NOP
    // 0x2b3938: 0x0  nop
    ctx->pc = 0x2b3938u;
    // NOP
    // 0x2b393c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B393Cu;
    {
        const bool branch_taken_0x2b393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B393Cu;
        // 0x2b3940: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b393c) {
            ctx->pc = 0x2B3928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3928;
        }
    }
    ctx->pc = 0x2B3944u;
    // 0x2b3944: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b3944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b3948:
    // 0x2b3948: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x2b3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x2b394c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2b394cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_2b3950:
    // 0x2b3950: 0x2f12821  addu        $a1, $s7, $s1
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2b3954: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b3954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3958: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3958u;
    {
        const bool branch_taken_0x2b3958 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B395Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3958u;
        // 0x2b395c: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3958) {
            ctx->pc = 0x2B3974u;
            goto label_2b3974;
        }
    }
    ctx->pc = 0x2B3960u;
    // 0x2b3960: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2b3960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b3964: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x2b3964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b3968: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x2b3968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2b396c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b3970: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b3970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b3974:
    // 0x2b3974: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3974u;
    {
        const bool branch_taken_0x2b3974 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2B3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3974u;
        // 0x2b3978: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3974) {
            ctx->pc = 0x2B39A8u;
            goto label_2b39a8;
        }
    }
    ctx->pc = 0x2B397Cu;
    // 0x2b397c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2b397cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2b3980:
    // 0x2b3980: 0x2152821  addu        $a1, $s0, $s5
    ctx->pc = 0x2b3980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x2b3984: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b3984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b3988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b3988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b398c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b3990: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2b3990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3994: 0xc0c82b8  jal         func_320AE0
    ctx->pc = 0x2B3994u;
    SET_GPR_U32(ctx, 31, 0x2B399Cu);
    ctx->pc = 0x2B3998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3994u;
    // 0x2b3998: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320AE0u, 0x2B3994u, 0x2B399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B399Cu;
label_2b399c:
    // 0x2b399c: 0x212182a  slt         $v1, $s0, $s2
    ctx->pc = 0x2b399cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2b39a0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2B39A0u;
    {
        const bool branch_taken_0x2b39a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39A0u;
        // 0x2b39a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b39a0) {
            ctx->pc = 0x2B3980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b3980;
        }
    }
    ctx->pc = 0x2B39A8u;
label_2b39a8:
    // 0x2b39a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b39a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b39ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b39acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b39b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b39b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b39b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b39b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b39b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2b39b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b39bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2b39bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b39c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2b39c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b39c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2b39c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b39c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b39c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b39cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B39CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B39D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B39CCu;
        // 0x2b39d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B39CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B39D4u;
    // 0x2b39d4: 0x0  nop
    ctx->pc = 0x2b39d4u;
    // NOP
    ctx->pc = 0x2b39d8u;
}
