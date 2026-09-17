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

// Function: sub_00323368
// Address: 0x323368 - 0x3234b8
void sub_00323368_0x323368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323368_0x323368");
#endif

    switch (ctx->pc) {
        case 0x3233ccu: goto label_3233cc;
        case 0x323404u: goto label_323404;
        case 0x32342cu: goto label_32342c;
        case 0x323438u: goto label_323438;
        case 0x32345cu: goto label_32345c;
        case 0x323490u: goto label_323490;
        case 0x32349cu: goto label_32349c;
        default: break;
    }

    ctx->pc = 0x323368u;

    // 0x323368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32336c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323378: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x323378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32337c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x32337cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x323380: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x323380u;
    {
        const bool branch_taken_0x323380 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x323384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323380u;
        // 0x323384: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323380) {
            ctx->pc = 0x3233D0u;
            goto label_3233d0;
        }
    }
    ctx->pc = 0x323388u;
    // 0x323388: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x323388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x32338c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x32338cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x323390: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x323394: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x323394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x323398: 0x2442cfc8  addiu       $v0, $v0, -0x3038
    ctx->pc = 0x323398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954952));
    // 0x32339c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x32339cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3233a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3233a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3233a4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3233a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3233a8: 0xac900024  sw          $s0, 0x24($a0)
    ctx->pc = 0x3233a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 16));
    // 0x3233ac: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3233acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3233b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3233b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3233b4: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x3233b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x3233b8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x3233b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x3233bc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3233bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x3233c0: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x3233c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3233c4: 0xc0ca932  jal         func_32A4C8
    ctx->pc = 0x3233C4u;
    SET_GPR_U32(ctx, 31, 0x3233CCu);
    ctx->pc = 0x3233C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3233C4u;
    // 0x3233c8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4C8u, 0x3233C4u, 0x3233CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3233CCu;
label_3233cc:
    // 0x3233cc: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3233ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_3233d0:
    // 0x3233d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3233d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3233d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3233d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3233d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3233d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3233dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3233DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3233E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233DCu;
        // 0x3233e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3233DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3233E4u;
    // 0x3233e4: 0x0  nop
    ctx->pc = 0x3233e4u;
    // NOP
    // 0x3233e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3233e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3233ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3233ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3233f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3233f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3233f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3233f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3233f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3233f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3233fc: 0xc0c8b4c  jal         func_322D30
    ctx->pc = 0x3233FCu;
    SET_GPR_U32(ctx, 31, 0x323404u);
    ctx->pc = 0x323400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3233FCu;
    // 0x323400: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D30u, 0x3233FCu, 0x323404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323404u;
label_323404:
    // 0x323404: 0x3c026c07  lui         $v0, 0x6C07
    ctx->pc = 0x323404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27655 << 16));
    // 0x323408: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x323408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32340c: 0x34630015  ori         $v1, $v1, 0x15
    ctx->pc = 0x32340cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21);
    // 0x323410: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x323410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
    // 0x323414: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x323414u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x323418: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x323418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x32341c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323420: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x323420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x323424: 0xc0c8b72  jal         func_322DC8
    ctx->pc = 0x323424u;
    SET_GPR_U32(ctx, 31, 0x32342Cu);
    ctx->pc = 0x323428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323424u;
    // 0x323428: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DC8u, 0x323424u, 0x32342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32342Cu;
label_32342c:
    // 0x32342c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x323430: 0xc0ca956  jal         func_32A558
    ctx->pc = 0x323430u;
    SET_GPR_U32(ctx, 31, 0x323438u);
    ctx->pc = 0x323434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323430u;
    // 0x323434: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A558u, 0x323430u, 0x323438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323438u;
label_323438:
    // 0x323438: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x323438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32343c: 0x3c026009  lui         $v0, 0x6009
    ctx->pc = 0x32343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24585 << 16));
    // 0x323440: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x323440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x323444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x323444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x323448: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x323448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32344c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x32344cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x323450: 0xae04007c  sw          $a0, 0x7C($s0)
    ctx->pc = 0x323450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 4));
    // 0x323454: 0xc0ca932  jal         func_32A4C8
    ctx->pc = 0x323454u;
    SET_GPR_U32(ctx, 31, 0x32345Cu);
    ctx->pc = 0x323458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323454u;
    // 0x323458: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4C8u, 0x323454u, 0x32345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32345Cu;
label_32345c:
    // 0x32345c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x32345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323460: 0x3c02c0c0  lui         $v0, 0xC0C0
    ctx->pc = 0x323460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49344 << 16));
    // 0x323464: 0x3c06780e  lui         $a2, 0x780E
    ctx->pc = 0x323464u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30734 << 16));
    // 0x323468: 0x3442c0c0  ori         $v0, $v0, 0xC0C0
    ctx->pc = 0x323468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49344);
    // 0x32346c: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x32346cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
    // 0x323470: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x323470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x323474: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x323474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
    // 0x323478: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x323478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x32347c: 0x260500b4  addiu       $a1, $s0, 0xB4
    ctx->pc = 0x32347cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x323480: 0xae0600b0  sw          $a2, 0xB0($s0)
    ctx->pc = 0x323480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 6));
    // 0x323484: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x323484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
    // 0x323488: 0xc0c8c4e  jal         func_323138
    ctx->pc = 0x323488u;
    SET_GPR_U32(ctx, 31, 0x323490u);
    ctx->pc = 0x32348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323488u;
    // 0x32348c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323138u, 0x323488u, 0x323490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323490u;
label_323490:
    // 0x323490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323494: 0xc0c8caa  jal         func_3232A8
    ctx->pc = 0x323494u;
    SET_GPR_U32(ctx, 31, 0x32349Cu);
    ctx->pc = 0x323498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323494u;
    // 0x323498: 0x26050108  addiu       $a1, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3232A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232A8u, 0x323494u, 0x32349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32349Cu;
label_32349c:
    // 0x32349c: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x32349cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x3234a0: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x3234a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x3234a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3234a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3234a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3234a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3234ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3234acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3234b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3234B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3234B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234B0u;
        // 0x3234b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3234B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3234B8u;
}
