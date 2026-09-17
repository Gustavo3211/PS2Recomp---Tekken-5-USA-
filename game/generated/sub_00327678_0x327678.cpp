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

// Function: sub_00327678
// Address: 0x327678 - 0x327768
void sub_00327678_0x327678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327678_0x327678");
#endif

    switch (ctx->pc) {
        case 0x327678u: goto label_327678;
        case 0x32767cu: goto label_32767c;
        case 0x327680u: goto label_327680;
        case 0x327684u: goto label_327684;
        case 0x327688u: goto label_327688;
        case 0x32768cu: goto label_32768c;
        case 0x327690u: goto label_327690;
        case 0x327694u: goto label_327694;
        case 0x327698u: goto label_327698;
        case 0x32769cu: goto label_32769c;
        case 0x3276a0u: goto label_3276a0;
        case 0x3276a4u: goto label_3276a4;
        case 0x3276a8u: goto label_3276a8;
        case 0x3276acu: goto label_3276ac;
        case 0x3276b0u: goto label_3276b0;
        case 0x3276b4u: goto label_3276b4;
        case 0x3276b8u: goto label_3276b8;
        case 0x3276bcu: goto label_3276bc;
        case 0x3276c0u: goto label_3276c0;
        case 0x3276c4u: goto label_3276c4;
        case 0x3276c8u: goto label_3276c8;
        case 0x3276ccu: goto label_3276cc;
        case 0x3276d0u: goto label_3276d0;
        case 0x3276d4u: goto label_3276d4;
        case 0x3276d8u: goto label_3276d8;
        case 0x3276dcu: goto label_3276dc;
        case 0x3276e0u: goto label_3276e0;
        case 0x3276e4u: goto label_3276e4;
        case 0x3276e8u: goto label_3276e8;
        case 0x3276ecu: goto label_3276ec;
        case 0x3276f0u: goto label_3276f0;
        case 0x3276f4u: goto label_3276f4;
        case 0x3276f8u: goto label_3276f8;
        case 0x3276fcu: goto label_3276fc;
        case 0x327700u: goto label_327700;
        case 0x327704u: goto label_327704;
        case 0x327708u: goto label_327708;
        case 0x32770cu: goto label_32770c;
        case 0x327710u: goto label_327710;
        case 0x327714u: goto label_327714;
        case 0x327718u: goto label_327718;
        case 0x32771cu: goto label_32771c;
        case 0x327720u: goto label_327720;
        case 0x327724u: goto label_327724;
        case 0x327728u: goto label_327728;
        case 0x32772cu: goto label_32772c;
        case 0x327730u: goto label_327730;
        case 0x327734u: goto label_327734;
        case 0x327738u: goto label_327738;
        case 0x32773cu: goto label_32773c;
        case 0x327740u: goto label_327740;
        case 0x327744u: goto label_327744;
        case 0x327748u: goto label_327748;
        case 0x32774cu: goto label_32774c;
        case 0x327750u: goto label_327750;
        case 0x327754u: goto label_327754;
        case 0x327758u: goto label_327758;
        case 0x32775cu: goto label_32775c;
        case 0x327760u: goto label_327760;
        case 0x327764u: goto label_327764;
        default: break;
    }

    ctx->pc = 0x327678u;

label_327678:
    // 0x327678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_32767c:
    // 0x32767c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_327680:
    // 0x327680: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327684:
    // 0x327684: 0x3c048100  lui         $a0, 0x8100
    ctx->pc = 0x327684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33024 << 16));
label_327688:
    // 0x327688: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_32768c:
    // 0x32768c: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x32768cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_327690:
    // 0x327690: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x327690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_327694:
    // 0x327694: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x327694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_327698:
    // 0x327698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x327698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_32769c:
    // 0x32769c: 0xc0c952e  jal         func_3254B8
label_3276a0:
    if (ctx->pc == 0x3276A0u) {
        ctx->pc = 0x3276A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32769Cu;
        // 0x3276a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3276A4u;
        goto label_3276a4;
    }
    ctx->pc = 0x32769Cu;
    SET_GPR_U32(ctx, 31, 0x3276A4u);
    ctx->pc = 0x3276A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32769Cu;
    // 0x3276a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x32769Cu, 0x3276A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3276A4u;
label_3276a4:
    // 0x3276a4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3276a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_3276a8:
    // 0x3276a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3276a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3276ac:
    // 0x3276ac: 0x24a50d00  addiu       $a1, $a1, 0xD00
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
label_3276b0:
    // 0x3276b0: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x3276b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3276b4:
    // 0x3276b4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3276b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_3276b8:
    // 0x3276b8: 0x24a500d8  addiu       $a1, $a1, 0xD8
    ctx->pc = 0x3276b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
label_3276bc:
    // 0x3276bc: 0x3c066c02  lui         $a2, 0x6C02
    ctx->pc = 0x3276bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27650 << 16));
label_3276c0:
    // 0x3276c0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x3276c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_3276c4:
    // 0x3276c4: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x3276c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_3276c8:
    // 0x3276c8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3276c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_3276cc:
    // 0x3276cc: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x3276ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_3276d0:
    // 0x3276d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3276d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3276d4:
    // 0x3276d4: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3276d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_3276d8:
    // 0x3276d8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3276d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3276dc:
    // 0x3276dc: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x3276dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_3276e0:
    // 0x3276e0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3276e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3276e4:
    // 0x3276e4: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x3276e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_3276e8:
    // 0x3276e8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3276e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_3276ec:
    // 0x3276ec: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x3276ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3276f0:
    // 0x3276f0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3276f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3276f4:
    // 0x3276f4: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x3276f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_3276f8:
    // 0x3276f8: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x3276f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_3276fc:
    // 0x3276fc: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x3276fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_327700:
    // 0x327700: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x327700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_327704:
    // 0x327704: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x327704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_327708:
    // 0x327708: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x327708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_32770c:
    // 0x32770c: 0x70684389  pcpyld      $t0, $v1, $t0
    ctx->pc = 0x32770cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
label_327710:
    // 0x327710: 0x7e080000  sq          $t0, 0x0($s0)
    ctx->pc = 0x327710u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 8));
label_327714:
    // 0x327714: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x327714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_327718:
    // 0x327718: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x327718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32771c:
    // 0x32771c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x32771cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_327720:
    // 0x327720: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327724:
    // 0x327724: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x327724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_327728:
    // 0x327728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32772c:
    // 0x32772c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x32772cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_327730:
    // 0x327730: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x327730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_327734:
    // 0x327734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_327738:
    if (ctx->pc == 0x327738u) {
        ctx->pc = 0x327738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327734u;
        // 0x327738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32773Cu;
        goto label_32773c;
    }
    ctx->pc = 0x327734u;
    {
        const bool branch_taken_0x327734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327734u;
        // 0x327738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327734) {
            ctx->pc = 0x327748u;
            goto label_327748;
        }
    }
    ctx->pc = 0x32773Cu;
label_32773c:
    // 0x32773c: 0x40f809  jalr        $v0
label_327740:
    if (ctx->pc == 0x327740u) {
        ctx->pc = 0x327744u;
        goto label_327744;
    }
    ctx->pc = 0x32773Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327744u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32773Cu, 0x327744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327744u;
label_327744:
    // 0x327744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327748:
    // 0x327748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32774c:
    // 0x32774c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32774cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_327750:
    // 0x327750: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_327754:
    // 0x327754: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_327758:
    // 0x327758: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x327758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_32775c:
    // 0x32775c: 0x3e00008  jr          $ra
label_327760:
    if (ctx->pc == 0x327760u) {
        ctx->pc = 0x327760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32775Cu;
        // 0x327760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327764u;
        goto label_327764;
    }
    ctx->pc = 0x32775Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32775Cu;
        // 0x327760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32775Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327764u;
label_327764:
    // 0x327764: 0x0  nop
    ctx->pc = 0x327764u;
    // NOP
    ctx->pc = 0x327768u;
}
