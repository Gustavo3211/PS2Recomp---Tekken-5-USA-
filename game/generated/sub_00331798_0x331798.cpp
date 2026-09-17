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

// Function: sub_00331798
// Address: 0x331798 - 0x331970
void sub_00331798_0x331798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331798_0x331798");
#endif

    switch (ctx->pc) {
        case 0x331798u: goto label_331798;
        case 0x33179cu: goto label_33179c;
        case 0x3317a0u: goto label_3317a0;
        case 0x3317a4u: goto label_3317a4;
        case 0x3317a8u: goto label_3317a8;
        case 0x3317acu: goto label_3317ac;
        case 0x3317b0u: goto label_3317b0;
        case 0x3317b4u: goto label_3317b4;
        case 0x3317b8u: goto label_3317b8;
        case 0x3317bcu: goto label_3317bc;
        case 0x3317c0u: goto label_3317c0;
        case 0x3317c4u: goto label_3317c4;
        case 0x3317c8u: goto label_3317c8;
        case 0x3317ccu: goto label_3317cc;
        case 0x3317d0u: goto label_3317d0;
        case 0x3317d4u: goto label_3317d4;
        case 0x3317d8u: goto label_3317d8;
        case 0x3317dcu: goto label_3317dc;
        case 0x3317e0u: goto label_3317e0;
        case 0x3317e4u: goto label_3317e4;
        case 0x3317e8u: goto label_3317e8;
        case 0x3317ecu: goto label_3317ec;
        case 0x3317f0u: goto label_3317f0;
        case 0x3317f4u: goto label_3317f4;
        case 0x3317f8u: goto label_3317f8;
        case 0x3317fcu: goto label_3317fc;
        case 0x331800u: goto label_331800;
        case 0x331804u: goto label_331804;
        case 0x331808u: goto label_331808;
        case 0x33180cu: goto label_33180c;
        case 0x331810u: goto label_331810;
        case 0x331814u: goto label_331814;
        case 0x331818u: goto label_331818;
        case 0x33181cu: goto label_33181c;
        case 0x331820u: goto label_331820;
        case 0x331824u: goto label_331824;
        case 0x331828u: goto label_331828;
        case 0x33182cu: goto label_33182c;
        case 0x331830u: goto label_331830;
        case 0x331834u: goto label_331834;
        case 0x331838u: goto label_331838;
        case 0x33183cu: goto label_33183c;
        case 0x331840u: goto label_331840;
        case 0x331844u: goto label_331844;
        case 0x331848u: goto label_331848;
        case 0x33184cu: goto label_33184c;
        case 0x331850u: goto label_331850;
        case 0x331854u: goto label_331854;
        case 0x331858u: goto label_331858;
        case 0x33185cu: goto label_33185c;
        case 0x331860u: goto label_331860;
        case 0x331864u: goto label_331864;
        case 0x331868u: goto label_331868;
        case 0x33186cu: goto label_33186c;
        case 0x331870u: goto label_331870;
        case 0x331874u: goto label_331874;
        case 0x331878u: goto label_331878;
        case 0x33187cu: goto label_33187c;
        case 0x331880u: goto label_331880;
        case 0x331884u: goto label_331884;
        case 0x331888u: goto label_331888;
        case 0x33188cu: goto label_33188c;
        case 0x331890u: goto label_331890;
        case 0x331894u: goto label_331894;
        case 0x331898u: goto label_331898;
        case 0x33189cu: goto label_33189c;
        case 0x3318a0u: goto label_3318a0;
        case 0x3318a4u: goto label_3318a4;
        case 0x3318a8u: goto label_3318a8;
        case 0x3318acu: goto label_3318ac;
        case 0x3318b0u: goto label_3318b0;
        case 0x3318b4u: goto label_3318b4;
        case 0x3318b8u: goto label_3318b8;
        case 0x3318bcu: goto label_3318bc;
        case 0x3318c0u: goto label_3318c0;
        case 0x3318c4u: goto label_3318c4;
        case 0x3318c8u: goto label_3318c8;
        case 0x3318ccu: goto label_3318cc;
        case 0x3318d0u: goto label_3318d0;
        case 0x3318d4u: goto label_3318d4;
        case 0x3318d8u: goto label_3318d8;
        case 0x3318dcu: goto label_3318dc;
        case 0x3318e0u: goto label_3318e0;
        case 0x3318e4u: goto label_3318e4;
        case 0x3318e8u: goto label_3318e8;
        case 0x3318ecu: goto label_3318ec;
        case 0x3318f0u: goto label_3318f0;
        case 0x3318f4u: goto label_3318f4;
        case 0x3318f8u: goto label_3318f8;
        case 0x3318fcu: goto label_3318fc;
        case 0x331900u: goto label_331900;
        case 0x331904u: goto label_331904;
        case 0x331908u: goto label_331908;
        case 0x33190cu: goto label_33190c;
        case 0x331910u: goto label_331910;
        case 0x331914u: goto label_331914;
        case 0x331918u: goto label_331918;
        case 0x33191cu: goto label_33191c;
        case 0x331920u: goto label_331920;
        case 0x331924u: goto label_331924;
        case 0x331928u: goto label_331928;
        case 0x33192cu: goto label_33192c;
        case 0x331930u: goto label_331930;
        case 0x331934u: goto label_331934;
        case 0x331938u: goto label_331938;
        case 0x33193cu: goto label_33193c;
        case 0x331940u: goto label_331940;
        case 0x331944u: goto label_331944;
        case 0x331948u: goto label_331948;
        case 0x33194cu: goto label_33194c;
        case 0x331950u: goto label_331950;
        case 0x331954u: goto label_331954;
        case 0x331958u: goto label_331958;
        case 0x33195cu: goto label_33195c;
        case 0x331960u: goto label_331960;
        case 0x331964u: goto label_331964;
        case 0x331968u: goto label_331968;
        case 0x33196cu: goto label_33196c;
        default: break;
    }

    ctx->pc = 0x331798u;

label_331798:
    // 0x331798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33179c:
    // 0x33179c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33179cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_3317a0:
    // 0x3317a0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3317a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3317a4:
    // 0x3317a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3317a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3317a8:
    // 0x3317a8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3317a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_3317ac:
    // 0x3317ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3317acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3317b0:
    // 0x3317b0: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x3317b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
label_3317b4:
    // 0x3317b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3317b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3317b8:
    // 0x3317b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3317b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3317bc:
    // 0x3317bc: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x3317bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3317c0:
    // 0x3317c0: 0x262200a0  addiu       $v0, $s1, 0xA0
    ctx->pc = 0x3317c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3317c4:
    // 0x3317c4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3317c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3317c8:
    // 0x3317c8: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3317c8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_3317cc:
    // 0x3317cc: 0x7e240000  sq          $a0, 0x0($s1)
    ctx->pc = 0x3317ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 4));
label_3317d0:
    // 0x3317d0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3317d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_3317d4:
    // 0x3317d4: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x3317d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
label_3317d8:
    // 0x3317d8: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x3317d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
label_3317dc:
    // 0x3317dc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3317dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_3317e0:
    // 0x3317e0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3317e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_3317e4:
    // 0x3317e4: 0x34a58006  ori         $a1, $a1, 0x8006
    ctx->pc = 0x3317e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32774);
label_3317e8:
    // 0x3317e8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x3317e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3317ec:
    // 0x3317ec: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x3317ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3317f0:
    // 0x3317f0: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x3317f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_3317f4:
    // 0x3317f4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x3317f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_3317f8:
    // 0x3317f8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3317f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3317fc:
    // 0x3317fc: 0x26100034  addiu       $s0, $s0, 0x34
    ctx->pc = 0x3317fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_331800:
    // 0x331800: 0xfe250020  sd          $a1, 0x20($s1)
    ctx->pc = 0x331800u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 5));
label_331804:
    // 0x331804: 0xfe260028  sd          $a2, 0x28($s1)
    ctx->pc = 0x331804u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 6));
label_331808:
    // 0x331808: 0xfe270038  sd          $a3, 0x38($s1)
    ctx->pc = 0x331808u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 7));
label_33180c:
    // 0x33180c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x33180cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_331810:
    // 0x331810: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x331810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_331814:
    // 0x331814: 0xc0c8864  jal         func_322190
label_331818:
    if (ctx->pc == 0x331818u) {
        ctx->pc = 0x331818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331814u;
        // 0x331818: 0xfe200030  sd          $zero, 0x30($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33181Cu;
        goto label_33181c;
    }
    ctx->pc = 0x331814u;
    SET_GPR_U32(ctx, 31, 0x33181Cu);
    ctx->pc = 0x331818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331814u;
    // 0x331818: 0xfe200030  sd          $zero, 0x30($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x331814u, 0x33181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33181Cu;
label_33181c:
    // 0x33181c: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x33181cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_331820:
    // 0x331820: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x331820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331824:
    // 0x331824: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x331824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_331828:
    // 0x331828: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x331828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_33182c:
    // 0x33182c: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x33182cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_331830:
    // 0x331830: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x331830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_331834:
    // 0x331834: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x331834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_331838:
    // 0x331838: 0x40f809  jalr        $v0
label_33183c:
    if (ctx->pc == 0x33183Cu) {
        ctx->pc = 0x33183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331838u;
        // 0x33183c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x331840u;
        goto label_331840;
    }
    ctx->pc = 0x331838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x331840u);
        ctx->pc = 0x33183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331838u;
        // 0x33183c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331838u, 0x331840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x331840u;
label_331840:
    // 0x331840: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x331840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_331844:
    // 0x331844: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x331844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_331848:
    // 0x331848: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x331848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_33184c:
    // 0x33184c: 0x24080043  addiu       $t0, $zero, 0x43
    ctx->pc = 0x33184cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_331850:
    // 0x331850: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x331850u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
label_331854:
    // 0x331854: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x331854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
label_331858:
    // 0x331858: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x331858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_33185c:
    // 0x33185c: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x33185cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_331860:
    // 0x331860: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x331860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_331864:
    // 0x331864: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x331864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_331868:
    // 0x331868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x331868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_33186c:
    // 0x33186c: 0xfe250048  sd          $a1, 0x48($s1)
    ctx->pc = 0x33186cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 5));
label_331870:
    // 0x331870: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_331874:
    // 0x331874: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x331874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_331878:
    // 0x331878: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x331878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_33187c:
    // 0x33187c: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x33187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
label_331880:
    // 0x331880: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x331880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_331884:
    // 0x331884: 0xfe260050  sd          $a2, 0x50($s1)
    ctx->pc = 0x331884u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 6));
label_331888:
    // 0x331888: 0xfe280058  sd          $t0, 0x58($s1)
    ctx->pc = 0x331888u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 8));
label_33188c:
    // 0x33188c: 0xfe290060  sd          $t1, 0x60($s1)
    ctx->pc = 0x33188cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 9));
label_331890:
    // 0x331890: 0xfe270068  sd          $a3, 0x68($s1)
    ctx->pc = 0x331890u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 7));
label_331894:
    // 0x331894: 0xc0cd584  jal         func_335610
label_331898:
    if (ctx->pc == 0x331898u) {
        ctx->pc = 0x331898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331894u;
        // 0x331898: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33189Cu;
        goto label_33189c;
    }
    ctx->pc = 0x331894u;
    SET_GPR_U32(ctx, 31, 0x33189Cu);
    ctx->pc = 0x331898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331894u;
    // 0x331898: 0xfe220040  sd          $v0, 0x40($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x331894u, 0x33189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33189Cu;
label_33189c:
    // 0x33189c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x33189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_3318a0:
    // 0x3318a0: 0xfe230078  sd          $v1, 0x78($s1)
    ctx->pc = 0x3318a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 3));
label_3318a4:
    // 0x3318a4: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x3318a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3318a8:
    // 0x3318a8: 0xc0cd584  jal         func_335610
label_3318ac:
    if (ctx->pc == 0x3318ACu) {
        ctx->pc = 0x3318ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318A8u;
        // 0x3318ac: 0xfe220070  sd          $v0, 0x70($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3318B0u;
        goto label_3318b0;
    }
    ctx->pc = 0x3318A8u;
    SET_GPR_U32(ctx, 31, 0x3318B0u);
    ctx->pc = 0x3318ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3318A8u;
    // 0x3318ac: 0xfe220070  sd          $v0, 0x70($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x3318A8u, 0x3318B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3318B0u;
label_3318b0:
    // 0x3318b0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3318b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_3318b4:
    // 0x3318b4: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x3318b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
label_3318b8:
    // 0x3318b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3318b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3318bc:
    // 0x3318bc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x3318bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_3318c0:
    // 0x3318c0: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x3318c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_3318c4:
    // 0x3318c4: 0xfe220080  sd          $v0, 0x80($s1)
    ctx->pc = 0x3318c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 2));
label_3318c8:
    // 0x3318c8: 0xfe240088  sd          $a0, 0x88($s1)
    ctx->pc = 0x3318c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 4));
label_3318cc:
    // 0x3318cc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x3318ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_3318d0:
    // 0x3318d0: 0x2232824  and         $a1, $s1, $v1
    ctx->pc = 0x3318d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
label_3318d4:
    // 0x3318d4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x3318d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_3318d8:
    // 0x3318d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3318dc:
    // 0x3318dc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_3318e0:
    if (ctx->pc == 0x3318E0u) {
        ctx->pc = 0x3318E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318DCu;
        // 0x3318e0: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3318E4u;
        goto label_3318e4;
    }
    ctx->pc = 0x3318DCu;
    {
        const bool branch_taken_0x3318dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3318E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318DCu;
        // 0x3318e0: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318dc) {
            ctx->pc = 0x3318F8u;
            goto label_3318f8;
        }
    }
    ctx->pc = 0x3318E4u;
label_3318e4:
    // 0x3318e4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x3318e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_3318e8:
    // 0x3318e8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3318e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3318ec:
    // 0x3318ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_3318f0:
    if (ctx->pc == 0x3318F0u) {
        ctx->pc = 0x3318F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318ECu;
        // 0x3318f0: 0x2221025  or          $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3318F4u;
        goto label_3318f4;
    }
    ctx->pc = 0x3318ECu;
    {
        const bool branch_taken_0x3318ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3318F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3318ECu;
        // 0x3318f0: 0x2221025  or          $v0, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3318ec) {
            ctx->pc = 0x331908u;
            goto label_331908;
        }
    }
    ctx->pc = 0x3318F4u;
label_3318f4:
    // 0x3318f4: 0x0  nop
    ctx->pc = 0x3318f4u;
    // NOP
label_3318f8:
    // 0x3318f8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x3318f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_3318fc:
    // 0x3318fc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3318fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_331900:
    // 0x331900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x331900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_331904:
    // 0x331904: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x331904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_331908:
    // 0x331908: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_33190c:
    // 0x33190c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_331910:
    // 0x331910: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x331910u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_331914:
    // 0x331914: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x331914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_331918:
    // 0x331918: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x331918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_33191c:
    // 0x33191c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_331920:
    // 0x331920: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_331924:
    if (ctx->pc == 0x331924u) {
        ctx->pc = 0x331924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331920u;
        // 0x331924: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x331928u;
        goto label_331928;
    }
    ctx->pc = 0x331920u;
    {
        const bool branch_taken_0x331920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331920) {
            ctx->pc = 0x331924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331920u;
            // 0x331924: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331938u;
            goto label_331938;
        }
    }
    ctx->pc = 0x331928u;
label_331928:
    // 0x331928: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x331928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
label_33192c:
    // 0x33192c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x33192cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_331930:
    // 0x331930: 0x10000004  b           . + 4 + (0x4 << 2)
label_331934:
    if (ctx->pc == 0x331934u) {
        ctx->pc = 0x331934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331930u;
        // 0x331934: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x331938u;
        goto label_331938;
    }
    ctx->pc = 0x331930u;
    {
        const bool branch_taken_0x331930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331930u;
        // 0x331934: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331930) {
            ctx->pc = 0x331944u;
            goto label_331944;
        }
    }
    ctx->pc = 0x331938u;
label_331938:
    // 0x331938: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x331938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_33193c:
    // 0x33193c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_331940:
    // 0x331940: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x331940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_331944:
    // 0x331944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_331948:
    // 0x331948: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x331948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33194c:
    // 0x33194c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33194cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331950:
    // 0x331950: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x331950u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_331954:
    // 0x331954: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x331954u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_331958:
    // 0x331958: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x331958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_33195c:
    // 0x33195c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33195cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_331960:
    // 0x331960: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x331960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_331964:
    // 0x331964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x331964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_331968:
    // 0x331968: 0x3e00008  jr          $ra
label_33196c:
    if (ctx->pc == 0x33196Cu) {
        ctx->pc = 0x33196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331968u;
        // 0x33196c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x331970u;
        goto label_fallthrough_0x331968;
    }
    ctx->pc = 0x331968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331968u;
        // 0x33196c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x331968:
    ctx->pc = 0x331970u;
}
