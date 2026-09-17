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

// Function: sub_00499698
// Address: 0x499698 - 0x499948
void sub_00499698_0x499698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499698_0x499698");
#endif

    switch (ctx->pc) {
        case 0x4996b4u: goto label_4996b4;
        case 0x4996bcu: goto label_4996bc;
        case 0x4996c4u: goto label_4996c4;
        case 0x4996ccu: goto label_4996cc;
        case 0x4996d4u: goto label_4996d4;
        case 0x4996dcu: goto label_4996dc;
        case 0x499710u: goto label_499710;
        case 0x499718u: goto label_499718;
        case 0x499730u: goto label_499730;
        case 0x499738u: goto label_499738;
        case 0x499740u: goto label_499740;
        case 0x499838u: goto label_499838;
        case 0x499888u: goto label_499888;
        case 0x4998f4u: goto label_4998f4;
        case 0x4998fcu: goto label_4998fc;
        case 0x499904u: goto label_499904;
        case 0x499910u: goto label_499910;
        case 0x499924u: goto label_499924;
        case 0x49992cu: goto label_49992c;
        default: break;
    }

    ctx->pc = 0x499698u;

    // 0x499698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x499698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49969c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4996a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4996a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4996a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4996a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4996a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4996a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4996ac: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x4996ACu;
    SET_GPR_U32(ctx, 31, 0x4996B4u);
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x4996ACu, 0x4996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996B4u;
label_4996b4:
    // 0x4996b4: 0xc123c54  jal         func_48F150
    ctx->pc = 0x4996B4u;
    SET_GPR_U32(ctx, 31, 0x4996BCu);
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x4996B4u, 0x4996BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996BCu;
label_4996bc:
    // 0x4996bc: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4996BCu;
    SET_GPR_U32(ctx, 31, 0x4996C4u);
    ctx->pc = 0x4996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4996BCu;
    // 0x4996c0: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4996BCu, 0x4996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996C4u;
label_4996c4:
    // 0x4996c4: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4996C4u;
    SET_GPR_U32(ctx, 31, 0x4996CCu);
    ctx->pc = 0x4996C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4996C4u;
    // 0x4996c8: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4996C4u, 0x4996CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996CCu;
label_4996cc:
    // 0x4996cc: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4996CCu;
    SET_GPR_U32(ctx, 31, 0x4996D4u);
    ctx->pc = 0x4996D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4996CCu;
    // 0x4996d0: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4996CCu, 0x4996D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996D4u;
label_4996d4:
    // 0x4996d4: 0xc124cc6  jal         func_493318
    ctx->pc = 0x4996D4u;
    SET_GPR_U32(ctx, 31, 0x4996DCu);
    ctx->pc = 0x493318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493318u, 0x4996D4u, 0x4996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4996DCu;
label_4996dc:
    // 0x4996dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4996DCu;
    {
        const bool branch_taken_0x4996dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4996E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996DCu;
        // 0x4996e0: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996dc) {
            ctx->pc = 0x4996F8u;
            goto label_4996f8;
        }
    }
    ctx->pc = 0x4996E4u;
    // 0x4996e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4996e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4996e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4996ec: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x4996ECu;
    {
        const bool branch_taken_0x4996ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4996F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4996ECu;
        // 0x4996f0: 0xa462d68a  sh          $v0, -0x2976($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294956682), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4996ec) {
            ctx->pc = 0x49992Cu;
            goto label_49992c;
        }
    }
    ctx->pc = 0x4996F4u;
    // 0x4996f4: 0x0  nop
    ctx->pc = 0x4996f4u;
    // NOP
label_4996f8:
    // 0x4996f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x4996f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4996fc: 0x2650d680  addiu       $s0, $s2, -0x2980
    ctx->pc = 0x4996fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x499700: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x499700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x499704: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x499704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499708: 0xc124910  jal         func_492440
    ctx->pc = 0x499708u;
    SET_GPR_U32(ctx, 31, 0x499710u);
    ctx->pc = 0x49970Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499708u;
    // 0x49970c: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x499708u, 0x499710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499710u;
label_499710:
    // 0x499710: 0xc12211a  jal         func_488468
    ctx->pc = 0x499710u;
    SET_GPR_U32(ctx, 31, 0x499718u);
    ctx->pc = 0x488468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488468u, 0x499710u, 0x499718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499718u;
label_499718:
    // 0x499718: 0xa611220e  sh          $s1, 0x220E($s0)
    ctx->pc = 0x499718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 17));
    // 0x49971c: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x49971cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
    // 0x499720: 0xa600220a  sh          $zero, 0x220A($s0)
    ctx->pc = 0x499720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8714), (uint16_t)GPR_U32(ctx, 0));
    // 0x499724: 0xa60021fe  sh          $zero, 0x21FE($s0)
    ctx->pc = 0x499724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
    // 0x499728: 0xc124c68  jal         func_4931A0
    ctx->pc = 0x499728u;
    SET_GPR_U32(ctx, 31, 0x499730u);
    ctx->pc = 0x49972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499728u;
    // 0x49972c: 0xa6002212  sh          $zero, 0x2212($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8722), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931A0u, 0x499728u, 0x499730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499730u;
label_499730:
    // 0x499730: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x499730u;
    SET_GPR_U32(ctx, 31, 0x499738u);
    ctx->pc = 0x499734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499730u;
    // 0x499734: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x499730u, 0x499738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499738u;
label_499738:
    // 0x499738: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x499738u;
    SET_GPR_U32(ctx, 31, 0x499740u);
    ctx->pc = 0x49973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499738u;
    // 0x49973c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x499738u, 0x499740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499740u;
label_499740:
    // 0x499740: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x499740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x499744: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x499744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499748: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x499748u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49974c: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x49974cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x499750: 0x3c051600  lui         $a1, 0x1600
    ctx->pc = 0x499750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5632 << 16));
    // 0x499754: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x499754u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x499758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x499758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49975c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49975cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x499760: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x499760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x499764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x499764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499768: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x499768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49976c: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x49976cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x499770: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x499770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x499774: 0xa4510030  sh          $s1, 0x30($v0)
    ctx->pc = 0x499774u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 17));
    // 0x499778: 0x34e704b0  ori         $a3, $a3, 0x4B0
    ctx->pc = 0x499778u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1200);
    // 0x49977c: 0x3c080960  lui         $t0, 0x960
    ctx->pc = 0x49977cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2400 << 16));
    // 0x499780: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x499780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499784: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x499784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x499788: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x499788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x49978c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x499790: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x499790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x499794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x499794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x499798: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x499798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49979c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49979cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997a0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4997a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4997a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4997a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4997a8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4997a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4997ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4997acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4997b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4997b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4997b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4997b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997b8: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x4997b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4997bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4997bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997c0: 0xa4460024  sh          $a2, 0x24($v0)
    ctx->pc = 0x4997c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 6));
    // 0x4997c4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4997c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997c8: 0xa4600026  sh          $zero, 0x26($v1)
    ctx->pc = 0x4997c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4997cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4997ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997d0: 0xa4460028  sh          $a2, 0x28($v0)
    ctx->pc = 0x4997d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 6));
    // 0x4997d4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4997d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997d8: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x4997d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4997dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4997dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997e0: 0xa446002c  sh          $a2, 0x2C($v0)
    ctx->pc = 0x4997e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 6));
    // 0x4997e4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4997e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997e8: 0xa46a002e  sh          $t2, 0x2E($v1)
    ctx->pc = 0x4997e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 10));
    // 0x4997ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4997ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997f0: 0xa44b0118  sh          $t3, 0x118($v0)
    ctx->pc = 0x4997f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 11));
    // 0x4997f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4997f8: 0xa460011a  sh          $zero, 0x11A($v1)
    ctx->pc = 0x4997f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 282), (uint16_t)GPR_U32(ctx, 0));
    // 0x4997fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4997fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499800: 0xa440011c  sh          $zero, 0x11C($v0)
    ctx->pc = 0x499800u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x499804: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x499804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499808: 0x24630124  addiu       $v1, $v1, 0x124
    ctx->pc = 0x499808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
    // 0x49980c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x49980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x499810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x499810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x499814: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x499814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x499818: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x499818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49981c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49981cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499820: 0x24840128  addiu       $a0, $a0, 0x128
    ctx->pc = 0x499820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
    // 0x499824: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x499824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x499828: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x499828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49982c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x49982cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x499830: 0xc124620  jal         func_491880
    ctx->pc = 0x499830u;
    SET_GPR_U32(ctx, 31, 0x499838u);
    ctx->pc = 0x499834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499830u;
    // 0x499834: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x499830u, 0x499838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499838u;
label_499838:
    // 0x499838: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x499838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49983c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x49983cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x499840: 0x24670b1c  addiu       $a3, $v1, 0xB1C
    ctx->pc = 0x499840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2844));
    // 0x499844: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x499844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x499848: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x499848u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B1Cu));
    // 0x49984c: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x49984cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
    // 0x499850: 0x24630b20  addiu       $v1, $v1, 0xB20
    ctx->pc = 0x499850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2848));
    // 0x499854: 0x34069800  ori         $a2, $zero, 0x9800
    ctx->pc = 0x499854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x499858: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x499858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49985c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49985cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499860: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x499860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0B20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B20u, _value); } while (0);
    // 0x499864: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x499864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x499868: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x499868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x49986c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x49986cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x499870: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x499870u;
    {
        const bool branch_taken_0x499870 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x499870) {
            ctx->pc = 0x4998ECu;
            goto label_4998ec;
        }
    }
    ctx->pc = 0x499878u;
    // 0x499878: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x499878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49987c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49987cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x499880: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x499880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499884: 0x0  nop
    ctx->pc = 0x499884u;
    // NOP
label_499888:
    // 0x499888: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x499888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49988c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x499890: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x499890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x499894: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x499894u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499898: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x499898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x49989c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49989cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4998a0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4998a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4998a4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4998a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4998a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4998ac: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4998acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4998b0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4998b4: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4998b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4998b8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x4998b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4998bc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4998bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4998c0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4998c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4998c4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4998c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4998c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4998c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4998cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4998ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4998d0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4998d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4998d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4998d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4998d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4998d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4998dc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4998dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4998e0: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4998e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4998e4: 0x441ffe8  bgez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x4998E4u;
    {
        const bool branch_taken_0x4998e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4998E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4998E4u;
        // 0x4998e8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4998e4) {
            ctx->pc = 0x499888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499888;
        }
    }
    ctx->pc = 0x4998ECu;
label_4998ec:
    // 0x4998ec: 0xc1258da  jal         func_496368
    ctx->pc = 0x4998ECu;
    SET_GPR_U32(ctx, 31, 0x4998F4u);
    ctx->pc = 0x496368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x496368u, 0x4998ECu, 0x4998F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4998F4u;
label_4998f4:
    // 0x4998f4: 0xc124910  jal         func_492440
    ctx->pc = 0x4998F4u;
    SET_GPR_U32(ctx, 31, 0x4998FCu);
    ctx->pc = 0x4998F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4998F4u;
    // 0x4998f8: 0x3c040013  lui         $a0, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4998F4u, 0x4998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4998FCu;
label_4998fc:
    // 0x4998fc: 0xc124910  jal         func_492440
    ctx->pc = 0x4998FCu;
    SET_GPR_U32(ctx, 31, 0x499904u);
    ctx->pc = 0x499900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4998FCu;
    // 0x499900: 0x3c040014  lui         $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4998FCu, 0x499904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499904u;
label_499904:
    // 0x499904: 0x2642d680  addiu       $v0, $s2, -0x2980
    ctx->pc = 0x499904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x499908: 0xc124620  jal         func_491880
    ctx->pc = 0x499908u;
    SET_GPR_U32(ctx, 31, 0x499910u);
    ctx->pc = 0x49990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499908u;
    // 0x49990c: 0xa440000e  sh          $zero, 0xE($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x499908u, 0x499910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499910u;
label_499910:
    // 0x499910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x499910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499914: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x499914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x499918: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x499918u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49991c: 0xc12460a  jal         func_491828
    ctx->pc = 0x49991Cu;
    SET_GPR_U32(ctx, 31, 0x499924u);
    ctx->pc = 0x499920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49991Cu;
    // 0x499920: 0xa423e820  sh          $v1, -0x17E0($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491828u, 0x49991Cu, 0x499924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499924u;
label_499924:
    // 0x499924: 0xc123228  jal         func_48C8A0
    ctx->pc = 0x499924u;
    SET_GPR_U32(ctx, 31, 0x49992Cu);
    ctx->pc = 0x48C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C8A0u, 0x499924u, 0x49992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49992Cu;
label_49992c:
    // 0x49992c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49992cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499930: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x499930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x499934: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x499934u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499938: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x499938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49993c: 0x3e00008  jr          $ra
    ctx->pc = 0x49993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49993Cu;
        // 0x499940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499944u;
    // 0x499944: 0x0  nop
    ctx->pc = 0x499944u;
    // NOP
    ctx->pc = 0x499948u;
}
