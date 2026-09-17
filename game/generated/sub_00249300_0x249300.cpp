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

// Function: sub_00249300
// Address: 0x249300 - 0x249478
void sub_00249300_0x249300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249300_0x249300");
#endif

    switch (ctx->pc) {
        case 0x249324u: goto label_249324;
        case 0x249338u: goto label_249338;
        case 0x24935cu: goto label_24935c;
        case 0x24939cu: goto label_24939c;
        case 0x2493acu: goto label_2493ac;
        case 0x2493bcu: goto label_2493bc;
        case 0x2493d0u: goto label_2493d0;
        default: break;
    }

    ctx->pc = 0x249300u;

    // 0x249300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249304: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x249304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x249308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24930c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24930cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x249310: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x249310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x249314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x249318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24931c: 0xc0d674e  jal         func_359D38
    ctx->pc = 0x24931Cu;
    SET_GPR_U32(ctx, 31, 0x249324u);
    ctx->pc = 0x249320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24931Cu;
    // 0x249320: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D38u, 0x24931Cu, 0x249324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249324u;
label_249324:
    // 0x249324: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x249324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x249328: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x249328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x24932c: 0x247114f8  addiu       $s1, $v1, 0x14F8
    ctx->pc = 0x24932cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5368));
    // 0x249330: 0x24537180  addiu       $s3, $v0, 0x7180
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 29056));
    // 0x249334: 0x0  nop
    ctx->pc = 0x249334u;
    // NOP
label_249338:
    // 0x249338: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x249338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24933c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24933cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x249340: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x249344: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x249348: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x249348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24934c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x24934cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x249350: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x249354: 0xc0d6786  jal         func_359E18
    ctx->pc = 0x249354u;
    SET_GPR_U32(ctx, 31, 0x24935Cu);
    ctx->pc = 0x249358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249354u;
    // 0x249358: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E18u, 0x249354u, 0x24935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24935Cu;
label_24935c:
    // 0x24935c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x249360: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x249364: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x249364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x249368: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x249368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24936c: 0x2a470003  slti        $a3, $s2, 0x3
    ctx->pc = 0x24936cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x249370: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x249370u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x249374: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x249378: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x249378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x24937c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x24937cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x249380: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x249380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x249384: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x249384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x249388: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x249388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x24938c: 0x14e0ffea  bnez        $a3, . + 4 + (-0x16 << 2)
    ctx->pc = 0x24938Cu;
    {
        const bool branch_taken_0x24938c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x249390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24938Cu;
        // 0x249390: 0xae060048  sw          $a2, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24938c) {
            ctx->pc = 0x249338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249338;
        }
    }
    ctx->pc = 0x249394u;
    // 0x249394: 0xc0d69dc  jal         func_35A770
    ctx->pc = 0x249394u;
    SET_GPR_U32(ctx, 31, 0x24939Cu);
    ctx->pc = 0x35A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A770u, 0x249394u, 0x24939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24939Cu;
label_24939c:
    // 0x24939c: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x2493a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2493a4: 0xc0d6b60  jal         func_35AD80
    ctx->pc = 0x2493A4u;
    SET_GPR_U32(ctx, 31, 0x2493ACu);
    ctx->pc = 0x2493A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493A4u;
    // 0x2493a8: 0x24847300  addiu       $a0, $a0, 0x7300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AD80u, 0x2493A4u, 0x2493ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493ACu;
label_2493ac:
    // 0x2493ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2493acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2493b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2493b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2493b4: 0xc0d6762  jal         func_359D88
    ctx->pc = 0x2493B4u;
    SET_GPR_U32(ctx, 31, 0x2493BCu);
    ctx->pc = 0x2493B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493B4u;
    // 0x2493b8: 0xaf82a9c0  sw          $v0, -0x5640($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D88u, 0x2493B4u, 0x2493BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493BCu;
label_2493bc:
    // 0x2493bc: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2493bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2493c0: 0x24637480  addiu       $v1, $v1, 0x7480
    ctx->pc = 0x2493c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29824));
    // 0x2493c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2493c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2493c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2493cc: 0x0  nop
    ctx->pc = 0x2493ccu;
    // NOP
label_2493d0:
    // 0x2493d0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2493d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2493d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2493d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2493d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2493d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2493dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2493e0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2493e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2493e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2493e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2493e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2493ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2493f0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2493f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2493f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2493f8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2493f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249400: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249400u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x249404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249408: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249408u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24940c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249410: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249410u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x249414: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249418: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24941c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249420: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249420u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x249424: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249428: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24942c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249430: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x249434: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x249434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249438: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249438u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24943c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24943cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249440: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x249440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x249444: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x249448: 0x2c820800  sltiu       $v0, $a0, 0x800
    ctx->pc = 0x249448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x24944c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24944cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x249450: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x249450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x249454: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x249454u;
    {
        const bool branch_taken_0x249454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249454u;
        // 0x249458: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249454) {
            ctx->pc = 0x2493D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2493d0;
        }
    }
    ctx->pc = 0x24945Cu;
    // 0x24945c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24945cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249464: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249464u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249468: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x249468u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24946c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249470: 0x3e00008  jr          $ra
    ctx->pc = 0x249470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249470u;
        // 0x249474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249478u;
}
