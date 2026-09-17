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

// Function: sub_00104FD0
// Address: 0x104fd0 - 0x1053f0
void sub_00104FD0_0x104fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104FD0_0x104fd0");
#endif

    switch (ctx->pc) {
        case 0x1050a4u: goto label_1050a4;
        case 0x105330u: goto label_105330;
        case 0x10533cu: goto label_10533c;
        case 0x105380u: goto label_105380;
        case 0x105390u: goto label_105390;
        default: break;
    }

    ctx->pc = 0x104fd0u;

    // 0x104fd0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x104fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x104fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104fd8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x104fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x104fdc: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x104fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x104fe0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x104fe0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fe4: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x104fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x104fe8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x104fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fec: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x104fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x104ff0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x104ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ff4: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x104ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x104ff8: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x104ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x104ffc: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x104ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x105000: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x105000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x105004: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x105004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x105008: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x105008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x10500c: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x10500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x105010: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105010u;
    {
        const bool branch_taken_0x105010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105010u;
        // 0x105014: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105010) {
            ctx->pc = 0x10502Cu;
            goto label_10502c;
        }
    }
    ctx->pc = 0x105018u;
    // 0x105018: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x105018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x10501c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x10501cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105020: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x105020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x105024u;
    {
        const bool branch_taken_0x105024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105024u;
        // 0x105028: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105024) {
            ctx->pc = 0x105034u;
            goto label_105034;
        }
    }
    ctx->pc = 0x10502Cu;
label_10502c:
    // 0x10502c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x10502cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105030: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x105030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_105034:
    // 0x105034: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x105034u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x105038: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x105038u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10503c: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x10503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x105040: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x105040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x105044: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x105044u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x105048: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x105048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x10504c: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x10504Cu;
    {
        const bool branch_taken_0x10504c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x105050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10504Cu;
        // 0x105050: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10504c) {
            ctx->pc = 0x1050E0u;
            goto label_1050e0;
        }
    }
    ctx->pc = 0x105054u;
    // 0x105054: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x105054u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x105058: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x105058u;
    {
        const bool branch_taken_0x105058 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x105058) {
            ctx->pc = 0x10505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105058u;
            // 0x10505c: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x105060u;
    // 0x105060: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x105060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x105064: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x105064u;
    {
        const bool branch_taken_0x105064 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x105064) {
            ctx->pc = 0x105068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105064u;
            // 0x105068: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x10506Cu;
    // 0x10506c: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x10506cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x105070: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x105070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x105074: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x105074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x105078: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x105078u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x10507c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x10507cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x105080: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x105080u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x105084: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x105084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x105088: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x105088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x10508c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x10508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x105090: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x105090u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x105094: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x105094u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x105098: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x105098u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x10509c: 0xc047fca  jal         func_11FF28
    ctx->pc = 0x10509Cu;
    SET_GPR_U32(ctx, 31, 0x1050A4u);
    ctx->pc = 0x1050A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10509Cu;
    // 0x1050a0: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF28u, 0x10509Cu, 0x1050A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050A4u;
label_1050a4:
    // 0x1050a4: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x1050a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x1050a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1050a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1050ac: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x1050acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1050b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1050b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1050b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1050b8: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x1050b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x1050bc: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x1050bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1050c0: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x1050c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1050c4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1050C4u;
    {
        const bool branch_taken_0x1050c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050C4u;
        // 0x1050c8: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050c4) {
            ctx->pc = 0x1050ECu;
            goto label_1050ec;
        }
    }
    ctx->pc = 0x1050CCu;
    // 0x1050cc: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1050ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1050d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1050d4: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x1050d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x1050d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1050D8u;
    {
        const bool branch_taken_0x1050d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050D8u;
        // 0x1050dc: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050d8) {
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x1050E0u;
label_1050e0:
    // 0x1050e0: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x1050e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1050e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1050E4u;
    {
        const bool branch_taken_0x1050e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1050E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1050E4u;
        // 0x1050e8: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1050e4) {
            ctx->pc = 0x1050F0u;
            goto label_1050f0;
        }
    }
    ctx->pc = 0x1050ECu;
label_1050ec:
    // 0x1050ec: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x1050ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1050f0:
    // 0x1050f0: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x1050f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x1050f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1050f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1050f8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1050F8u;
    {
        const bool branch_taken_0x1050f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1050f8) {
            ctx->pc = 0x1050FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1050F8u;
            // 0x1050fc: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105120u;
            goto label_105120;
        }
    }
    ctx->pc = 0x105100u;
    // 0x105100: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x105100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x105104: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105104u;
    {
        const bool branch_taken_0x105104 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x105104) {
            ctx->pc = 0x105108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105104u;
            // 0x105108: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105120u;
            goto label_105120;
        }
    }
    ctx->pc = 0x10510Cu;
    // 0x10510c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x10510cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x105110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105114: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x105114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x105118: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x105118u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x10511c: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x10511cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_105120:
    // 0x105120: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x105120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105124: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x105124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x105128: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x105128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x10512c: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x10512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x105130: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x105130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x105134: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x105134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x105138: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x105138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10513c: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x10513cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x105140: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x105144: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x105144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x105148: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x105148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x10514c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10514cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x105150: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x105150u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x105154: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x105154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x105158: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x105158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10515c: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x10515cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x105160: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x105160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x105164: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x105164u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x105168: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x105168u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x10516c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x10516cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x105170: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x105170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x105174: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x105174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x105178: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x105178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x10517c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x10517cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x105180: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x105180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x105184: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x105184u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x105188: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x105188u;
    {
        const bool branch_taken_0x105188 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105188u;
        // 0x10518c: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105188) {
            ctx->pc = 0x1051ECu;
            goto label_1051ec;
        }
    }
    ctx->pc = 0x105190u;
    // 0x105190: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x105190u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x105194: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x105194u;
    {
        const bool branch_taken_0x105194 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x105194) {
            ctx->pc = 0x105198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105194u;
            // 0x105198: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1051F4u;
            goto label_1051f4;
        }
    }
    ctx->pc = 0x10519Cu;
    // 0x10519c: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x10519Cu;
    {
        const bool branch_taken_0x10519c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x10519c) {
            ctx->pc = 0x1051A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10519Cu;
            // 0x1051a0: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1051F4u;
            goto label_1051f4;
        }
    }
    ctx->pc = 0x1051A4u;
    // 0x1051a4: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x1051a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1051a8: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1051a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1051ac: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x1051acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1051b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1051b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1051b4: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x1051b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x1051b8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1051b8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1051bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1051bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1051c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1051c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1051c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1051c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1051c8: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x1051c8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x1051cc: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x1051ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x1051d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1051d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1051d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1051D4u;
    {
        const bool branch_taken_0x1051d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051D4u;
        // 0x1051d8: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051d4) {
            ctx->pc = 0x1051F4u;
            goto label_1051f4;
        }
    }
    ctx->pc = 0x1051DCu;
    // 0x1051dc: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1051dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1051e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1051e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1051e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1051E4u;
    {
        const bool branch_taken_0x1051e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1051E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1051E4u;
        // 0x1051e8: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1051e4) {
            ctx->pc = 0x1051F4u;
            goto label_1051f4;
        }
    }
    ctx->pc = 0x1051ECu;
label_1051ec:
    // 0x1051ec: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x1051ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x1051f0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x1051f0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_1051f4:
    // 0x1051f4: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x1051f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1051f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1051fc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1051FCu;
    {
        const bool branch_taken_0x1051fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1051fc) {
            ctx->pc = 0x105200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1051FCu;
            // 0x105200: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105224u;
            goto label_105224;
        }
    }
    ctx->pc = 0x105204u;
    // 0x105204: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x105204u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x105208: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105208u;
    {
        const bool branch_taken_0x105208 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x105208) {
            ctx->pc = 0x10520Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105208u;
            // 0x10520c: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105224u;
            goto label_105224;
        }
    }
    ctx->pc = 0x105210u;
    // 0x105210: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x105210u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x105214: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x105214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105218: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x105218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x10521c: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x10521cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x105220: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x105220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_105224:
    // 0x105224: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x105224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105228: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x105228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x10522c: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x10522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x105230: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x105230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x105234: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x105234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x105238: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x105238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x10523c: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x10523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x105240: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x105240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x105244: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x105244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x105248: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x105248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x10524c: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x10524cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x105250: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x105250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x105254: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x105254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x105258: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x105258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x10525c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x10525cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x105260: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x105260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x105264: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x105264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x105268: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x105268u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x10526c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x10526cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x105270: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x105270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x105274: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x105274u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x105278: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x10527c: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x10527cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x105280: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x105280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x105284: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x105284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x105288: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x105288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x10528c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x10528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x105290: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x105290u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x105294: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x105294u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x105298: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x105298u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x10529c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10529cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1052a0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1052a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1052a4: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x1052a4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x1052a8: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x1052a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x1052ac: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x1052acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x1052b0: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x1052b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x1052b4: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x1052b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x1052b8: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x1052b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x1052bc: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x1052bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x1052c0: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x1052c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x1052c4: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x1052c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x1052c8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1052C8u;
    {
        const bool branch_taken_0x1052c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052C8u;
        // 0x1052cc: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052c8) {
            ctx->pc = 0x1052F4u;
            goto label_1052f4;
        }
    }
    ctx->pc = 0x1052D0u;
    // 0x1052d0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x1052d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x1052d4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1052d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1052d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1052d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1052dc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1052DCu;
    {
        const bool branch_taken_0x1052dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1052E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052DCu;
        // 0x1052e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052dc) {
            ctx->pc = 0x10530Cu;
            goto label_10530c;
        }
    }
    ctx->pc = 0x1052E4u;
    // 0x1052e4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1052e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1052e8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1052e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1052ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1052ECu;
    {
        const bool branch_taken_0x1052ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052ECu;
        // 0x1052f0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052ec) {
            ctx->pc = 0x10530Cu;
            goto label_10530c;
        }
    }
    ctx->pc = 0x1052F4u;
label_1052f4:
    // 0x1052f4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x1052f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1052f8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1052f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1052fc: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x1052fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x105300: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x105300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x105304: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x105304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x105308: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x105308u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10530c:
    // 0x10530c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x10530Cu;
    {
        const bool branch_taken_0x10530c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10530c) {
            ctx->pc = 0x105310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10530Cu;
            // 0x105310: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105348u;
            goto label_105348;
        }
    }
    ctx->pc = 0x105314u;
    // 0x105314: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x105314u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x105318: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x105318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10531c: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x10531cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x105320: 0x24c6d8e8  addiu       $a2, $a2, -0x2718
    ctx->pc = 0x105320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957288));
    // 0x105324: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x105324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105328: 0xc044766  jal         func_111D98
    ctx->pc = 0x105328u;
    SET_GPR_U32(ctx, 31, 0x105330u);
    ctx->pc = 0x10532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105328u;
    // 0x10532c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D98u, 0x105328u, 0x105330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105330u;
label_105330:
    // 0x105330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x105330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105334: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x105334u;
    SET_GPR_U32(ctx, 31, 0x10533Cu);
    ctx->pc = 0x105338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105334u;
    // 0x105338: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x105334u, 0x10533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10533Cu;
label_10533c:
    // 0x10533c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10533Cu;
    {
        const bool branch_taken_0x10533c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10533Cu;
        // 0x105340: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10533c) {
            ctx->pc = 0x1053C4u;
            goto label_1053c4;
        }
    }
    ctx->pc = 0x105344u;
    // 0x105344: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x105344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_105348:
    // 0x105348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x105348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10534c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x10534Cu;
    {
        const bool branch_taken_0x10534c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10534Cu;
        // 0x105350: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10534c) {
            ctx->pc = 0x1053C4u;
            goto label_1053c4;
        }
    }
    ctx->pc = 0x105354u;
    // 0x105354: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x105354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x105358: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x105358u;
    {
        const bool branch_taken_0x105358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x105358) {
            ctx->pc = 0x10535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105358u;
            // 0x10535c: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1053C8u;
            goto label_1053c8;
        }
    }
    ctx->pc = 0x105360u;
    // 0x105360: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x105360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x105364: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x105364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x105368: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x105368u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x10536c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x10536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x105370: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105370u;
    {
        const bool branch_taken_0x105370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105370u;
        // 0x105374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105370) {
            ctx->pc = 0x105388u;
            goto label_105388;
        }
    }
    ctx->pc = 0x105378u;
    // 0x105378: 0xc0415c0  jal         func_105700
    ctx->pc = 0x105378u;
    SET_GPR_U32(ctx, 31, 0x105380u);
    ctx->pc = 0x10537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105378u;
    // 0x10537c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105700u, 0x105378u, 0x105380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105380u;
label_105380:
    // 0x105380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105380u;
    {
        const bool branch_taken_0x105380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105380u;
        // 0x105384: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105380) {
            ctx->pc = 0x105394u;
            goto label_105394;
        }
    }
    ctx->pc = 0x105388u;
label_105388:
    // 0x105388: 0xc0412a0  jal         func_104A80
    ctx->pc = 0x105388u;
    SET_GPR_U32(ctx, 31, 0x105390u);
    ctx->pc = 0x10538Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105388u;
    // 0x10538c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A80u, 0x105388u, 0x105390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105390u;
label_105390:
    // 0x105390: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x105390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_105394:
    // 0x105394: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x105394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105398: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10539c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x10539cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x1053a0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1053a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1053a4: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1053A4u;
    {
        const bool branch_taken_0x1053a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1053A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053A4u;
        // 0x1053a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053a4) {
            ctx->pc = 0x1053BCu;
            goto label_1053bc;
        }
    }
    ctx->pc = 0x1053ACu;
    // 0x1053ac: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x1053acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x1053b0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x1053b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x1053b4: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x1053b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x1053b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1053b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1053bc:
    // 0x1053bc: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x1053bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x1053c0: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x1053c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_1053c4:
    // 0x1053c4: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x1053c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_1053c8:
    // 0x1053c8: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x1053c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1053cc: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x1053ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1053d0: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x1053d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1053d4: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1053d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1053d8: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x1053d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1053dc: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x1053dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1053e0: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x1053e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1053e4: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x1053e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1053e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1053E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1053ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053E8u;
        // 0x1053ec: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1053E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1053F0u;
}
