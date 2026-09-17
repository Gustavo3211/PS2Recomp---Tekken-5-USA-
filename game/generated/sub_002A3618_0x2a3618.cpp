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

// Function: sub_002A3618
// Address: 0x2a3618 - 0x2a3ae8
void sub_002A3618_0x2a3618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3618_0x2a3618");
#endif

    switch (ctx->pc) {
        case 0x2a364cu: goto label_2a364c;
        case 0x2a36c8u: goto label_2a36c8;
        case 0x2a36e4u: goto label_2a36e4;
        case 0x2a372cu: goto label_2a372c;
        case 0x2a3744u: goto label_2a3744;
        case 0x2a38e0u: goto label_2a38e0;
        case 0x2a38f4u: goto label_2a38f4;
        case 0x2a3934u: goto label_2a3934;
        case 0x2a3944u: goto label_2a3944;
        case 0x2a39e0u: goto label_2a39e0;
        case 0x2a39f4u: goto label_2a39f4;
        case 0x2a3a4cu: goto label_2a3a4c;
        case 0x2a3a5cu: goto label_2a3a5c;
        case 0x2a3a94u: goto label_2a3a94;
        case 0x2a3ab8u: goto label_2a3ab8;
        default: break;
    }

    ctx->pc = 0x2a3618u;

    // 0x2a3618: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a3618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a361c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2a361cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2a3620: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a3620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a3624: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2a3624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2a3628: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2a3628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2a362c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2a362cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2a3630: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2a3630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2a3634: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2a3634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2a3638: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2a3638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2a363c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2a363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2a3640: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2a3640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2a3644: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x2A3644u;
    SET_GPR_U32(ctx, 31, 0x2A364Cu);
    ctx->pc = 0x2A3648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3644u;
    // 0x2a3648: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x2A3644u, 0x2A364Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A364Cu;
label_2a364c:
    // 0x2a364c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a364cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a3650: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a3650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3654: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3658u;
    {
        const bool branch_taken_0x2a3658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3658u;
        // 0x2a365c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3658) {
            ctx->pc = 0x2A3670u;
            goto label_2a3670;
        }
    }
    ctx->pc = 0x2A3660u;
    // 0x2a3660: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3664: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3668: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3668u;
    {
        const bool branch_taken_0x2a3668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3668) {
            ctx->pc = 0x2A366Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3668u;
            // 0x2a366c: 0x8e020158  lw          $v0, 0x158($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3680u;
            goto label_2a3680;
        }
    }
    ctx->pc = 0x2A3670u;
label_2a3670:
    // 0x2a3670: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a3670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a3674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3678: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a367c: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x2a367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_2a3680:
    // 0x2a3680: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a3680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a3684: 0x2463d610  addiu       $v1, $v1, -0x29F0
    ctx->pc = 0x2a3684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956560));
    // 0x2a3688: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a3688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a368c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2a368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3694: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2a3694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a3698: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x2a3698u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a369c: 0x12600106  beqz        $s3, . + 4 + (0x106 << 2)
    ctx->pc = 0x2A369Cu;
    {
        const bool branch_taken_0x2a369c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A369Cu;
        // 0x2a36a0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a369c) {
            ctx->pc = 0x2A3AB8u;
            goto label_2a3ab8;
        }
    }
    ctx->pc = 0x2A36A4u;
    // 0x2a36a4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2a36a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2a36a8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2a36a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a36acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a36b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a36b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a36b4: 0x186000f0  blez        $v1, . + 4 + (0xF0 << 2)
    ctx->pc = 0x2A36B4u;
    {
        const bool branch_taken_0x2a36b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2A36B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36B4u;
        // 0x2a36b8: 0x8c57008c  lw          $s7, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36b4) {
            ctx->pc = 0x2A3A78u;
            goto label_2a3a78;
        }
    }
    ctx->pc = 0x2A36BCu;
    // 0x2a36bc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2a36bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2a36c0: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2a36c0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2a36c4: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x2a36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
label_2a36c8:
    // 0x2a36c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2a36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2a36cc: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x2a36ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x2a36d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a36d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a36d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a36d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a36dc: 0xc0a5d52  jal         func_297548
    ctx->pc = 0x2A36DCu;
    SET_GPR_U32(ctx, 31, 0x2A36E4u);
    ctx->pc = 0x2A36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A36DCu;
    // 0x2a36e0: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297548u, 0x2A36DCu, 0x2A36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36E4u;
label_2a36e4:
    // 0x2a36e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2a36e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a36e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2a36e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a36ec: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x2a36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x2a36f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2a36f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2a36f4: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2a36f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a36f8: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2A36F8u;
    {
        const bool branch_taken_0x2a36f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2A36FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36F8u;
        // 0x2a36fc: 0x27c4d238  addiu       $a0, $fp, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36f8) {
            ctx->pc = 0x2A3748u;
            goto label_2a3748;
        }
    }
    ctx->pc = 0x2A3700u;
    // 0x2a3700: 0x3c0380df  lui         $v1, 0x80DF
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32991 << 16));
    // 0x2a3704: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x2a3704u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x2a3708: 0x3463cfcf  ori         $v1, $v1, 0xCFCF
    ctx->pc = 0x2a3708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53199);
    // 0x2a370c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3710: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a3710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a3714: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3718: 0x2d71026  xor         $v0, $s6, $s7
    ctx->pc = 0x2a3718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ GPR_U64(ctx, 23));
    // 0x2a371c: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x2a371cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x2a3720: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2a3720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a3724: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A3724u;
    SET_GPR_U32(ctx, 31, 0x2A372Cu);
    ctx->pc = 0x2A3728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3724u;
    // 0x2a3728: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3724u, 0x2A372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A372Cu;
label_2a372c:
    // 0x2a372c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a3730: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a3730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a3734: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2a3734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a3738: 0x24844038  addiu       $a0, $a0, 0x4038
    ctx->pc = 0x2a3738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16440));
    // 0x2a373c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A373Cu;
    SET_GPR_U32(ctx, 31, 0x2A3744u);
    ctx->pc = 0x2A3740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A373Cu;
    // 0x2a3740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A373Cu, 0x2A3744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3744u;
label_2a3744:
    // 0x2a3744: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2a3744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2a3748:
    // 0x2a3748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a374c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A374Cu;
    {
        const bool branch_taken_0x2a374c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A374Cu;
        // 0x2a3750: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a374c) {
            ctx->pc = 0x2A37A0u;
            goto label_2a37a0;
        }
    }
    ctx->pc = 0x2A3754u;
    // 0x2a3754: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3754u;
    {
        const bool branch_taken_0x2a3754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3754u;
        // 0x2a3758: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3754) {
            ctx->pc = 0x2A3770u;
            goto label_2a3770;
        }
    }
    ctx->pc = 0x2A375Cu;
    // 0x2a375c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A375Cu;
    {
        const bool branch_taken_0x2a375c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A375Cu;
        // 0x2a3760: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a375c) {
            ctx->pc = 0x2A3780u;
            goto label_2a3780;
        }
    }
    ctx->pc = 0x2A3764u;
    // 0x2a3764: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2A3764u;
    {
        const bool branch_taken_0x2a3764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3764u;
        // 0x2a3768: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3764) {
            ctx->pc = 0x2A3A64u;
            goto label_2a3a64;
        }
    }
    ctx->pc = 0x2A376Cu;
    // 0x2a376c: 0x0  nop
    ctx->pc = 0x2a376cu;
    // NOP
label_2a3770:
    // 0x2a3770: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2A3770u;
    {
        const bool branch_taken_0x2a3770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3770u;
        // 0x2a3774: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3770) {
            ctx->pc = 0x2A3950u;
            goto label_2a3950;
        }
    }
    ctx->pc = 0x2A3778u;
    // 0x2a3778: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x2A3778u;
    {
        const bool branch_taken_0x2a3778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3778u;
        // 0x2a377c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3778) {
            ctx->pc = 0x2A3A64u;
            goto label_2a3a64;
        }
    }
    ctx->pc = 0x2A3780u;
label_2a3780:
    // 0x2a3780: 0x56d700b8  bnel        $s6, $s7, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2A3780u;
    {
        const bool branch_taken_0x2a3780 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 23));
        if (branch_taken_0x2a3780) {
            ctx->pc = 0x2A3784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3780u;
            // 0x2a3784: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3A64u;
            goto label_2a3a64;
        }
    }
    ctx->pc = 0x2A3788u;
    // 0x2a3788: 0x8e710010  lw          $s1, 0x10($s3)
    ctx->pc = 0x2a3788u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a378c: 0x27c4d238  addiu       $a0, $fp, -0x2DC8
    ctx->pc = 0x2a378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
    // 0x2a3790: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3794: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a3794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a3798: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2A3798u;
    {
        const bool branch_taken_0x2a3798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3798u;
        // 0x2a379c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3798) {
            ctx->pc = 0x2A392Cu;
            goto label_2a392c;
        }
    }
    ctx->pc = 0x2A37A0u;
label_2a37a0:
    // 0x2a37a0: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x2a37a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x2a37a4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2a37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a37a8: 0x34420027  ori         $v0, $v0, 0x27
    ctx->pc = 0x2a37a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
    // 0x2a37ac: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2A37ACu;
    {
        const bool branch_taken_0x2a37ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37ACu;
        // 0x2a37b0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37ac) {
            ctx->pc = 0x2A3898u;
            goto label_2a3898;
        }
    }
    ctx->pc = 0x2A37B4u;
    // 0x2a37b4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A37B4u;
    {
        const bool branch_taken_0x2a37b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A37B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37B4u;
        // 0x2a37b8: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37b4) {
            ctx->pc = 0x2A3810u;
            goto label_2a3810;
        }
    }
    ctx->pc = 0x2A37BCu;
    // 0x2a37bc: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x2a37bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x2a37c0: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2A37C0u;
    {
        const bool branch_taken_0x2a37c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A37C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C0u;
        // 0x2a37c4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37c0) {
            ctx->pc = 0x2A3898u;
            goto label_2a3898;
        }
    }
    ctx->pc = 0x2A37C8u;
    // 0x2a37c8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A37C8u;
    {
        const bool branch_taken_0x2a37c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A37CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37C8u;
        // 0x2a37cc: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37c8) {
            ctx->pc = 0x2A37F0u;
            goto label_2a37f0;
        }
    }
    ctx->pc = 0x2A37D0u;
    // 0x2a37d0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2a37d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2a37d4: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2A37D4u;
    {
        const bool branch_taken_0x2a37d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A37D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37D4u;
        // 0x2a37d8: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37d4) {
            ctx->pc = 0x2A3888u;
            goto label_2a3888;
        }
    }
    ctx->pc = 0x2A37DCu;
    // 0x2a37dc: 0x3442000f  ori         $v0, $v0, 0xF
    ctx->pc = 0x2a37dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
    // 0x2a37e0: 0x50620030  beql        $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2A37E0u;
    {
        const bool branch_taken_0x2a37e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a37e0) {
            ctx->pc = 0x2A37E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A37E0u;
            // 0x2a37e4: 0x8e9003f0  lw          $s0, 0x3F0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A37E8u;
    // 0x2a37e8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2A37E8u;
    {
        const bool branch_taken_0x2a37e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37E8u;
        // 0x2a37ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37e8) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A37F0u;
label_2a37f0:
    // 0x2a37f0: 0x34420015  ori         $v0, $v0, 0x15
    ctx->pc = 0x2a37f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21);
    // 0x2a37f4: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2A37F4u;
    {
        const bool branch_taken_0x2a37f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A37F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37F4u;
        // 0x2a37f8: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37f4) {
            ctx->pc = 0x2A38A0u;
            goto label_2a38a0;
        }
    }
    ctx->pc = 0x2A37FCu;
    // 0x2a37fc: 0x34420021  ori         $v0, $v0, 0x21
    ctx->pc = 0x2a37fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33);
    // 0x2a3800: 0x50620028  beql        $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A3800u;
    {
        const bool branch_taken_0x2a3800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3800) {
            ctx->pc = 0x2A3804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3800u;
            // 0x2a3804: 0x8e900400  lw          $s0, 0x400($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3808u;
    // 0x2a3808: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2A3808u;
    {
        const bool branch_taken_0x2a3808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3808u;
        // 0x2a380c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3808) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3810u;
label_2a3810:
    // 0x2a3810: 0x3442003a  ori         $v0, $v0, 0x3A
    ctx->pc = 0x2a3810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58);
    // 0x2a3814: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A3814u;
    {
        const bool branch_taken_0x2a3814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3814u;
        // 0x2a3818: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3814) {
            ctx->pc = 0x2A3890u;
            goto label_2a3890;
        }
    }
    ctx->pc = 0x2A381Cu;
    // 0x2a381c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A381Cu;
    {
        const bool branch_taken_0x2a381c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A381Cu;
        // 0x2a3820: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a381c) {
            ctx->pc = 0x2A3848u;
            goto label_2a3848;
        }
    }
    ctx->pc = 0x2A3824u;
    // 0x2a3824: 0x3442002a  ori         $v0, $v0, 0x2A
    ctx->pc = 0x2a3824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
    // 0x2a3828: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A3828u;
    {
        const bool branch_taken_0x2a3828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3828u;
        // 0x2a382c: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3828) {
            ctx->pc = 0x2A38A0u;
            goto label_2a38a0;
        }
    }
    ctx->pc = 0x2A3830u;
    // 0x2a3830: 0x34420036  ori         $v0, $v0, 0x36
    ctx->pc = 0x2a3830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54);
    // 0x2a3834: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2A3834u;
    {
        const bool branch_taken_0x2a3834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3834) {
            ctx->pc = 0x2A3838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3834u;
            // 0x2a3838: 0x8e900404  lw          $s0, 0x404($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A383Cu;
    // 0x2a383c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2A383Cu;
    {
        const bool branch_taken_0x2a383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A383Cu;
        // 0x2a3840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a383c) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3844u;
    // 0x2a3844: 0x0  nop
    ctx->pc = 0x2a3844u;
    // NOP
label_2a3848:
    // 0x2a3848: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2a3848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2a384c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A384Cu;
    {
        const bool branch_taken_0x2a384c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A384Cu;
        // 0x2a3850: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a384c) {
            ctx->pc = 0x2A38A0u;
            goto label_2a38a0;
        }
    }
    ctx->pc = 0x2A3854u;
    // 0x2a3854: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3854u;
    {
        const bool branch_taken_0x2a3854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3854u;
        // 0x2a3858: 0x3c02000b  lui         $v0, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3854) {
            ctx->pc = 0x2A3870u;
            goto label_2a3870;
        }
    }
    ctx->pc = 0x2A385Cu;
    // 0x2a385c: 0x3442003d  ori         $v0, $v0, 0x3D
    ctx->pc = 0x2a385cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61);
    // 0x2a3860: 0x50620010  beql        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A3860u;
    {
        const bool branch_taken_0x2a3860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3860) {
            ctx->pc = 0x2A3864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3860u;
            // 0x2a3864: 0x8e9003f8  lw          $s0, 0x3F8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3868u;
    // 0x2a3868: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A3868u;
    {
        const bool branch_taken_0x2a3868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3868u;
        // 0x2a386c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3868) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3870u;
label_2a3870:
    // 0x2a3870: 0x3442008b  ori         $v0, $v0, 0x8B
    ctx->pc = 0x2a3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)139);
    // 0x2a3874: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A3874u;
    {
        const bool branch_taken_0x2a3874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3874) {
            ctx->pc = 0x2A3878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3874u;
            // 0x2a3878: 0x8e9003f4  lw          $s0, 0x3F4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A387Cu;
    // 0x2a387c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2A387Cu;
    {
        const bool branch_taken_0x2a387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A387Cu;
        // 0x2a3880: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a387c) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3884u;
    // 0x2a3884: 0x0  nop
    ctx->pc = 0x2a3884u;
    // NOP
label_2a3888:
    // 0x2a3888: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3888u;
    {
        const bool branch_taken_0x2a3888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A388Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3888u;
        // 0x2a388c: 0x8e9003e8  lw          $s0, 0x3E8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3888) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3890u;
label_2a3890:
    // 0x2a3890: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3890u;
    {
        const bool branch_taken_0x2a3890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3890u;
        // 0x2a3894: 0x8e9003f0  lw          $s0, 0x3F0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3890) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A3898u;
label_2a3898:
    // 0x2a3898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A3898u;
    {
        const bool branch_taken_0x2a3898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3898u;
        // 0x2a389c: 0x8e9003f8  lw          $s0, 0x3F8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3898) {
            ctx->pc = 0x2A38A4u;
            goto label_2a38a4;
        }
    }
    ctx->pc = 0x2A38A0u;
label_2a38a0:
    // 0x2a38a0: 0x8e9003fc  lw          $s0, 0x3FC($s4)
    ctx->pc = 0x2a38a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1020)));
label_2a38a4:
    // 0x2a38a4: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2a38a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2a38a8: 0x27d5d238  addiu       $s5, $fp, -0x2DC8
    ctx->pc = 0x2a38a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
    // 0x2a38ac: 0x8e690008  lw          $t1, 0x8($s3)
    ctx->pc = 0x2a38acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a38b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a38b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a38b8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2a38b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a38bc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2a38bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2a38c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a38c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a38c4: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2a38c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a38c8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a38c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a38cc: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x2a38ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x2a38d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a38d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a38d4: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x2a38d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a38d8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A38D8u;
    SET_GPR_U32(ctx, 31, 0x2A38E0u);
    ctx->pc = 0x2A38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38D8u;
    // 0x2a38dc: 0x8d310000  lw          $s1, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A38D8u, 0x2A38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38E0u;
label_2a38e0:
    // 0x2a38e0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a38e4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a38e8: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x2a38e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x2a38ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A38ECu;
    SET_GPR_U32(ctx, 31, 0x2A38F4u);
    ctx->pc = 0x2A38F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A38ECu;
    // 0x2a38f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A38ECu, 0x2A38F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38F4u;
label_2a38f4:
    // 0x2a38f4: 0x16d7005a  bne         $s6, $s7, . + 4 + (0x5A << 2)
    ctx->pc = 0x2A38F4u;
    {
        const bool branch_taken_0x2a38f4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 23));
        ctx->pc = 0x2A38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38F4u;
        // 0x2a38f8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a38f4) {
            ctx->pc = 0x2A3A60u;
            goto label_2a3a60;
        }
    }
    ctx->pc = 0x2A38FCu;
    // 0x2a38fc: 0x92630014  lbu         $v1, 0x14($s3)
    ctx->pc = 0x2a38fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a3900: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x2a3900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3904u;
    {
        const bool branch_taken_0x2a3904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3904u;
        // 0x2a3908: 0x8e620010  lw          $v0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3904) {
            ctx->pc = 0x2A3914u;
            goto label_2a3914;
        }
    }
    ctx->pc = 0x2A390Cu;
    // 0x2a390c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x2a390cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2a3910: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2a3910u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2a3914:
    // 0x2a3914: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2a3914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3918: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a391c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a391cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a3920: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2a3920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a3924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3928: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a3928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a392c:
    // 0x2a392c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A392Cu;
    SET_GPR_U32(ctx, 31, 0x2A3934u);
    ctx->pc = 0x2A3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A392Cu;
    // 0x2a3930: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A392Cu, 0x2A3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3934u;
label_2a3934:
    // 0x2a3934: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a3934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a3938: 0x24844048  addiu       $a0, $a0, 0x4048
    ctx->pc = 0x2a3938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16456));
    // 0x2a393c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A393Cu;
    SET_GPR_U32(ctx, 31, 0x2A3944u);
    ctx->pc = 0x2A3940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A393Cu;
    // 0x2a3940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A393Cu, 0x2A3944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3944u;
label_2a3944:
    // 0x2a3944: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x2A3944u;
    {
        const bool branch_taken_0x2a3944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3944u;
        // 0x2a3948: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3944) {
            ctx->pc = 0x2A3A60u;
            goto label_2a3a60;
        }
    }
    ctx->pc = 0x2A394Cu;
    // 0x2a394c: 0x0  nop
    ctx->pc = 0x2a394cu;
    // NOP
label_2a3950:
    // 0x2a3950: 0x56d70044  bnel        $s6, $s7, . + 4 + (0x44 << 2)
    ctx->pc = 0x2A3950u;
    {
        const bool branch_taken_0x2a3950 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 23));
        if (branch_taken_0x2a3950) {
            ctx->pc = 0x2A3954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A3950u;
            // 0x2a3954: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A3A64u;
            goto label_2a3a64;
        }
    }
    ctx->pc = 0x2A3958u;
    // 0x2a3958: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x2a3958u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2a395c: 0x3c04fff4  lui         $a0, 0xFFF4
    ctx->pc = 0x2a395cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65524 << 16));
    // 0x2a3960: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x2a3960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2a3964: 0x3484ffe8  ori         $a0, $a0, 0xFFE8
    ctx->pc = 0x2a3964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65512);
    // 0x2a3968: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x2a3968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2a396c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a3970: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2a3970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a3974: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x2a3974u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2a3978: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x2a3978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2a397c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2a397cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2a3980: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a3980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a3984: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a3984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a3988: 0x2cc3002f  sltiu       $v1, $a2, 0x2F
    ctx->pc = 0x2a3988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x2a398c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A398Cu;
    {
        const bool branch_taken_0x2a398c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A398Cu;
        // 0x2a3990: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a398c) {
            ctx->pc = 0x2A39C0u;
            goto label_2a39c0;
        }
    }
    ctx->pc = 0x2A3994u;
    // 0x2a3994: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a3994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a3998: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a3998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a399c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a39a0: 0x8c63d300  lw          $v1, -0x2D00($v1)
    ctx->pc = 0x2a39a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955776)));
    // 0x2a39a4: 0x600008  jr          $v1
    ctx->pc = 0x2A39A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A39B0u: goto label_2a39b0;
            case 0x2A39B8u: goto label_2a39b8;
            case 0x2A39C0u: goto label_2a39c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A39A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A39ACu;
    // 0x2a39ac: 0x0  nop
    ctx->pc = 0x2a39acu;
    // NOP
label_2a39b0:
    // 0x2a39b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A39B0u;
    {
        const bool branch_taken_0x2a39b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39B0u;
        // 0x2a39b4: 0x8e920020  lw          $s2, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39b0) {
            ctx->pc = 0x2A39C4u;
            goto label_2a39c4;
        }
    }
    ctx->pc = 0x2A39B8u;
label_2a39b8:
    // 0x2a39b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A39B8u;
    {
        const bool branch_taken_0x2a39b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39B8u;
        // 0x2a39bc: 0x8e920024  lw          $s2, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39b8) {
            ctx->pc = 0x2A39C4u;
            goto label_2a39c4;
        }
    }
    ctx->pc = 0x2A39C0u;
label_2a39c0:
    // 0x2a39c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a39c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a39c4:
    // 0x2a39c4: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2A39C4u;
    {
        const bool branch_taken_0x2a39c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39C4u;
        // 0x2a39c8: 0x27c4d238  addiu       $a0, $fp, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39c4) {
            ctx->pc = 0x2A39F4u;
            goto label_2a39f4;
        }
    }
    ctx->pc = 0x2A39CCu;
    // 0x2a39cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a39ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a39d0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a39d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a39d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a39d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a39d8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A39D8u;
    SET_GPR_U32(ctx, 31, 0x2A39E0u);
    ctx->pc = 0x2A39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39D8u;
    // 0x2a39dc: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A39D8u, 0x2A39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39E0u;
label_2a39e0:
    // 0x2a39e0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a39e4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2a39e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a39e8: 0x24844040  addiu       $a0, $a0, 0x4040
    ctx->pc = 0x2a39e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16448));
    // 0x2a39ec: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A39ECu;
    SET_GPR_U32(ctx, 31, 0x2A39F4u);
    ctx->pc = 0x2A39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A39ECu;
    // 0x2a39f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A39ECu, 0x2A39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A39F4u;
label_2a39f4:
    // 0x2a39f4: 0x92630014  lbu         $v1, 0x14($s3)
    ctx->pc = 0x2a39f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a39f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a39fc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A39FCu;
    {
        const bool branch_taken_0x2a39fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A3A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A39FCu;
        // 0x2a3a00: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a39fc) {
            ctx->pc = 0x2A3A10u;
            goto label_2a3a10;
        }
    }
    ctx->pc = 0x2A3A04u;
    // 0x2a3a04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2A3A04u;
    {
        const bool branch_taken_0x2a3a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A04u;
        // 0x2a3a08: 0x8e710010  lw          $s1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a04) {
            ctx->pc = 0x2A3A34u;
            goto label_2a3a34;
        }
    }
    ctx->pc = 0x2A3A0Cu;
    // 0x2a3a0c: 0x0  nop
    ctx->pc = 0x2a3a0cu;
    // NOP
label_2a3a10:
    // 0x2a3a10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a3a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a14: 0x92630014  lbu         $v1, 0x14($s3)
    ctx->pc = 0x2a3a14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2a3a18: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x2a3a18u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2a3a1c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2a3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2a3a20: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2a3a20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2a3a24: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x2a3a24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2a3a28: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2a3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a3a2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a3a30: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2a3a30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3a34:
    // 0x2a3a34: 0x27c4d238  addiu       $a0, $fp, -0x2DC8
    ctx->pc = 0x2a3a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
    // 0x2a3a38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3a3c: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a3a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a3a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a44: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A3A44u;
    SET_GPR_U32(ctx, 31, 0x2A3A4Cu);
    ctx->pc = 0x2A3A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A44u;
    // 0x2a3a48: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3A44u, 0x2A3A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A4Cu;
label_2a3a4c:
    // 0x2a3a4c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a3a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a3a50: 0x24844048  addiu       $a0, $a0, 0x4048
    ctx->pc = 0x2a3a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16456));
    // 0x2a3a54: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A3A54u;
    SET_GPR_U32(ctx, 31, 0x2A3A5Cu);
    ctx->pc = 0x2A3A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A54u;
    // 0x2a3a58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3A54u, 0x2A3A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A5Cu;
label_2a3a5c:
    // 0x2a3a5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2a3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2a3a60:
    // 0x2a3a60: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2a3a60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2a3a64:
    // 0x2a3a64: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x2a3a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a3a68: 0x1440ff17  bnez        $v0, . + 4 + (-0xE9 << 2)
    ctx->pc = 0x2A3A68u;
    {
        const bool branch_taken_0x2a3a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A68u;
        // 0x2a3a6c: 0x26730018  addiu       $s3, $s3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a68) {
            ctx->pc = 0x2A36C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a36c8;
        }
    }
    ctx->pc = 0x2A3A70u;
    // 0x2a3a70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3A70u;
    {
        const bool branch_taken_0x2a3a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3A70u;
        // 0x2a3a74: 0x27c4d238  addiu       $a0, $fp, -0x2DC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3a70) {
            ctx->pc = 0x2A3A80u;
            goto label_2a3a80;
        }
    }
    ctx->pc = 0x2A3A78u;
label_2a3a78:
    // 0x2a3a78: 0x3c1e0048  lui         $fp, 0x48
    ctx->pc = 0x2a3a78u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)72 << 16));
    // 0x2a3a7c: 0x27c4d238  addiu       $a0, $fp, -0x2DC8
    ctx->pc = 0x2a3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955576));
label_2a3a80:
    // 0x2a3a80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a3a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3a84: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a3a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a3a88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a3a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3a8c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A3A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A3A94u);
    ctx->pc = 0x2A3A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3A8Cu;
    // 0x2a3a90: 0x2408006e  addiu       $t0, $zero, 0x6E (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3A8Cu, 0x2A3A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3A94u;
label_2a3a94:
    // 0x2a3a94: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a3a98: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x2a3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x2a3a9c: 0x3c06000b  lui         $a2, 0xB
    ctx->pc = 0x2a3a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
    // 0x2a3aa0: 0x3c07000b  lui         $a3, 0xB
    ctx->pc = 0x2a3aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)11 << 16));
    // 0x2a3aa4: 0x24844050  addiu       $a0, $a0, 0x4050
    ctx->pc = 0x2a3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16464));
    // 0x2a3aa8: 0x34a50049  ori         $a1, $a1, 0x49
    ctx->pc = 0x2a3aa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)73);
    // 0x2a3aac: 0x34c6004a  ori         $a2, $a2, 0x4A
    ctx->pc = 0x2a3aacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)74);
    // 0x2a3ab0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A3AB0u;
    SET_GPR_U32(ctx, 31, 0x2A3AB8u);
    ctx->pc = 0x2A3AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3AB0u;
    // 0x2a3ab4: 0x34e7004b  ori         $a3, $a3, 0x4B (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)75);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A3AB0u, 0x2A3AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3AB8u;
label_2a3ab8:
    // 0x2a3ab8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2a3ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3abc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2a3abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a3ac0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2a3ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3ac4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2a3ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a3ac8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3acc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2a3accu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a3ad0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2a3ad0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3ad4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2a3ad4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a3ad8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2a3ad8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3adc: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2a3adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a3ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AE0u;
        // 0x2a3ae4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3AE8u;
}
