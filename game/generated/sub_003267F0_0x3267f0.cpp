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

// Function: sub_003267F0
// Address: 0x3267f0 - 0x3268e0
void sub_003267F0_0x3267f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267F0_0x3267f0");
#endif

    switch (ctx->pc) {
        case 0x3267f0u: goto label_3267f0;
        case 0x3267f4u: goto label_3267f4;
        case 0x3267f8u: goto label_3267f8;
        case 0x3267fcu: goto label_3267fc;
        case 0x326800u: goto label_326800;
        case 0x326804u: goto label_326804;
        case 0x326808u: goto label_326808;
        case 0x32680cu: goto label_32680c;
        case 0x326810u: goto label_326810;
        case 0x326814u: goto label_326814;
        case 0x326818u: goto label_326818;
        case 0x32681cu: goto label_32681c;
        case 0x326820u: goto label_326820;
        case 0x326824u: goto label_326824;
        case 0x326828u: goto label_326828;
        case 0x32682cu: goto label_32682c;
        case 0x326830u: goto label_326830;
        case 0x326834u: goto label_326834;
        case 0x326838u: goto label_326838;
        case 0x32683cu: goto label_32683c;
        case 0x326840u: goto label_326840;
        case 0x326844u: goto label_326844;
        case 0x326848u: goto label_326848;
        case 0x32684cu: goto label_32684c;
        case 0x326850u: goto label_326850;
        case 0x326854u: goto label_326854;
        case 0x326858u: goto label_326858;
        case 0x32685cu: goto label_32685c;
        case 0x326860u: goto label_326860;
        case 0x326864u: goto label_326864;
        case 0x326868u: goto label_326868;
        case 0x32686cu: goto label_32686c;
        case 0x326870u: goto label_326870;
        case 0x326874u: goto label_326874;
        case 0x326878u: goto label_326878;
        case 0x32687cu: goto label_32687c;
        case 0x326880u: goto label_326880;
        case 0x326884u: goto label_326884;
        case 0x326888u: goto label_326888;
        case 0x32688cu: goto label_32688c;
        case 0x326890u: goto label_326890;
        case 0x326894u: goto label_326894;
        case 0x326898u: goto label_326898;
        case 0x32689cu: goto label_32689c;
        case 0x3268a0u: goto label_3268a0;
        case 0x3268a4u: goto label_3268a4;
        case 0x3268a8u: goto label_3268a8;
        case 0x3268acu: goto label_3268ac;
        case 0x3268b0u: goto label_3268b0;
        case 0x3268b4u: goto label_3268b4;
        case 0x3268b8u: goto label_3268b8;
        case 0x3268bcu: goto label_3268bc;
        case 0x3268c0u: goto label_3268c0;
        case 0x3268c4u: goto label_3268c4;
        case 0x3268c8u: goto label_3268c8;
        case 0x3268ccu: goto label_3268cc;
        case 0x3268d0u: goto label_3268d0;
        case 0x3268d4u: goto label_3268d4;
        case 0x3268d8u: goto label_3268d8;
        case 0x3268dcu: goto label_3268dc;
        default: break;
    }

    ctx->pc = 0x3267f0u;

label_3267f0:
    // 0x3267f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3267f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3267f4:
    // 0x3267f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3267f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3267f8:
    // 0x3267f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3267f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3267fc:
    // 0x3267fc: 0x3c048100  lui         $a0, 0x8100
    ctx->pc = 0x3267fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33024 << 16));
label_326800:
    // 0x326800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_326804:
    // 0x326804: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x326804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_326808:
    // 0x326808: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x326808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_32680c:
    // 0x32680c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32680cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_326810:
    // 0x326810: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x326810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_326814:
    // 0x326814: 0xc0c952e  jal         func_3254B8
label_326818:
    if (ctx->pc == 0x326818u) {
        ctx->pc = 0x326818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326814u;
        // 0x326818: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32681Cu;
        goto label_32681c;
    }
    ctx->pc = 0x326814u;
    SET_GPR_U32(ctx, 31, 0x32681Cu);
    ctx->pc = 0x326818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326814u;
    // 0x326818: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3254B8u, 0x326814u, 0x32681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32681Cu;
label_32681c:
    // 0x32681c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x32681cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_326820:
    // 0x326820: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x326820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_326824:
    // 0x326824: 0x24a50d00  addiu       $a1, $a1, 0xD00
    ctx->pc = 0x326824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
label_326828:
    // 0x326828: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x326828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_32682c:
    // 0x32682c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x32682cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_326830:
    // 0x326830: 0x24a500d8  addiu       $a1, $a1, 0xD8
    ctx->pc = 0x326830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 216));
label_326834:
    // 0x326834: 0x3c066c02  lui         $a2, 0x6C02
    ctx->pc = 0x326834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27650 << 16));
label_326838:
    // 0x326838: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x326838u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_32683c:
    // 0x32683c: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x32683cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_326840:
    // 0x326840: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x326840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_326844:
    // 0x326844: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x326844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
label_326848:
    // 0x326848: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x326848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_32684c:
    // 0x32684c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x32684cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_326850:
    // 0x326850: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x326850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_326854:
    // 0x326854: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x326854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_326858:
    // 0x326858: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x326858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_32685c:
    // 0x32685c: 0xae070014  sw          $a3, 0x14($s0)
    ctx->pc = 0x32685cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 7));
label_326860:
    // 0x326860: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x326860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_326864:
    // 0x326864: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x326864u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_326868:
    // 0x326868: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x326868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_32686c:
    // 0x32686c: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x32686cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
label_326870:
    // 0x326870: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x326870u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_326874:
    // 0x326874: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x326874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_326878:
    // 0x326878: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x326878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_32687c:
    // 0x32687c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x32687cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_326880:
    // 0x326880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x326880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_326884:
    // 0x326884: 0x70684389  pcpyld      $t0, $v1, $t0
    ctx->pc = 0x326884u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
label_326888:
    // 0x326888: 0x7e080000  sq          $t0, 0x0($s0)
    ctx->pc = 0x326888u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 8));
label_32688c:
    // 0x32688c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x32688cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_326890:
    // 0x326890: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x326890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_326894:
    // 0x326894: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x326894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_326898:
    // 0x326898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32689c:
    // 0x32689c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x32689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3268a0:
    // 0x3268a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3268a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3268a4:
    // 0x3268a4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3268a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_3268a8:
    // 0x3268a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3268a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3268ac:
    // 0x3268ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3268b0:
    if (ctx->pc == 0x3268B0u) {
        ctx->pc = 0x3268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268ACu;
        // 0x3268b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268B4u;
        goto label_3268b4;
    }
    ctx->pc = 0x3268ACu;
    {
        const bool branch_taken_0x3268ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3268B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268ACu;
        // 0x3268b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3268ac) {
            ctx->pc = 0x3268C0u;
            goto label_3268c0;
        }
    }
    ctx->pc = 0x3268B4u;
label_3268b4:
    // 0x3268b4: 0x40f809  jalr        $v0
label_3268b8:
    if (ctx->pc == 0x3268B8u) {
        ctx->pc = 0x3268BCu;
        goto label_3268bc;
    }
    ctx->pc = 0x3268B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3268BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268B4u, 0x3268BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3268BCu;
label_3268bc:
    // 0x3268bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3268bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3268c0:
    // 0x3268c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3268c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3268c4:
    // 0x3268c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3268c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3268c8:
    // 0x3268c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3268c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3268cc:
    // 0x3268cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3268ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3268d0:
    // 0x3268d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3268d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3268d4:
    // 0x3268d4: 0x3e00008  jr          $ra
label_3268d8:
    if (ctx->pc == 0x3268D8u) {
        ctx->pc = 0x3268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268D4u;
        // 0x3268d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3268DCu;
        goto label_3268dc;
    }
    ctx->pc = 0x3268D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3268D4u;
        // 0x3268d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3268D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3268DCu;
label_3268dc:
    // 0x3268dc: 0x0  nop
    ctx->pc = 0x3268dcu;
    // NOP
    ctx->pc = 0x3268e0u;
}
