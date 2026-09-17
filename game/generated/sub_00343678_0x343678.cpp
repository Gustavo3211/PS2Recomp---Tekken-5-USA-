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

// Function: sub_00343678
// Address: 0x343678 - 0x3438d8
void sub_00343678_0x343678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343678_0x343678");
#endif

    switch (ctx->pc) {
        case 0x343678u: goto label_343678;
        case 0x34367cu: goto label_34367c;
        case 0x343680u: goto label_343680;
        case 0x343684u: goto label_343684;
        case 0x343688u: goto label_343688;
        case 0x34368cu: goto label_34368c;
        case 0x343690u: goto label_343690;
        case 0x343694u: goto label_343694;
        case 0x343698u: goto label_343698;
        case 0x34369cu: goto label_34369c;
        case 0x3436a0u: goto label_3436a0;
        case 0x3436a4u: goto label_3436a4;
        case 0x3436a8u: goto label_3436a8;
        case 0x3436acu: goto label_3436ac;
        case 0x3436b0u: goto label_3436b0;
        case 0x3436b4u: goto label_3436b4;
        case 0x3436b8u: goto label_3436b8;
        case 0x3436bcu: goto label_3436bc;
        case 0x3436c0u: goto label_3436c0;
        case 0x3436c4u: goto label_3436c4;
        case 0x3436c8u: goto label_3436c8;
        case 0x3436ccu: goto label_3436cc;
        case 0x3436d0u: goto label_3436d0;
        case 0x3436d4u: goto label_3436d4;
        case 0x3436d8u: goto label_3436d8;
        case 0x3436dcu: goto label_3436dc;
        case 0x3436e0u: goto label_3436e0;
        case 0x3436e4u: goto label_3436e4;
        case 0x3436e8u: goto label_3436e8;
        case 0x3436ecu: goto label_3436ec;
        case 0x3436f0u: goto label_3436f0;
        case 0x3436f4u: goto label_3436f4;
        case 0x3436f8u: goto label_3436f8;
        case 0x3436fcu: goto label_3436fc;
        case 0x343700u: goto label_343700;
        case 0x343704u: goto label_343704;
        case 0x343708u: goto label_343708;
        case 0x34370cu: goto label_34370c;
        case 0x343710u: goto label_343710;
        case 0x343714u: goto label_343714;
        case 0x343718u: goto label_343718;
        case 0x34371cu: goto label_34371c;
        case 0x343720u: goto label_343720;
        case 0x343724u: goto label_343724;
        case 0x343728u: goto label_343728;
        case 0x34372cu: goto label_34372c;
        case 0x343730u: goto label_343730;
        case 0x343734u: goto label_343734;
        case 0x343738u: goto label_343738;
        case 0x34373cu: goto label_34373c;
        case 0x343740u: goto label_343740;
        case 0x343744u: goto label_343744;
        case 0x343748u: goto label_343748;
        case 0x34374cu: goto label_34374c;
        case 0x343750u: goto label_343750;
        case 0x343754u: goto label_343754;
        case 0x343758u: goto label_343758;
        case 0x34375cu: goto label_34375c;
        case 0x343760u: goto label_343760;
        case 0x343764u: goto label_343764;
        case 0x343768u: goto label_343768;
        case 0x34376cu: goto label_34376c;
        case 0x343770u: goto label_343770;
        case 0x343774u: goto label_343774;
        case 0x343778u: goto label_343778;
        case 0x34377cu: goto label_34377c;
        case 0x343780u: goto label_343780;
        case 0x343784u: goto label_343784;
        case 0x343788u: goto label_343788;
        case 0x34378cu: goto label_34378c;
        case 0x343790u: goto label_343790;
        case 0x343794u: goto label_343794;
        case 0x343798u: goto label_343798;
        case 0x34379cu: goto label_34379c;
        case 0x3437a0u: goto label_3437a0;
        case 0x3437a4u: goto label_3437a4;
        case 0x3437a8u: goto label_3437a8;
        case 0x3437acu: goto label_3437ac;
        case 0x3437b0u: goto label_3437b0;
        case 0x3437b4u: goto label_3437b4;
        case 0x3437b8u: goto label_3437b8;
        case 0x3437bcu: goto label_3437bc;
        case 0x3437c0u: goto label_3437c0;
        case 0x3437c4u: goto label_3437c4;
        case 0x3437c8u: goto label_3437c8;
        case 0x3437ccu: goto label_3437cc;
        case 0x3437d0u: goto label_3437d0;
        case 0x3437d4u: goto label_3437d4;
        case 0x3437d8u: goto label_3437d8;
        case 0x3437dcu: goto label_3437dc;
        case 0x3437e0u: goto label_3437e0;
        case 0x3437e4u: goto label_3437e4;
        case 0x3437e8u: goto label_3437e8;
        case 0x3437ecu: goto label_3437ec;
        case 0x3437f0u: goto label_3437f0;
        case 0x3437f4u: goto label_3437f4;
        case 0x3437f8u: goto label_3437f8;
        case 0x3437fcu: goto label_3437fc;
        case 0x343800u: goto label_343800;
        case 0x343804u: goto label_343804;
        case 0x343808u: goto label_343808;
        case 0x34380cu: goto label_34380c;
        case 0x343810u: goto label_343810;
        case 0x343814u: goto label_343814;
        case 0x343818u: goto label_343818;
        case 0x34381cu: goto label_34381c;
        case 0x343820u: goto label_343820;
        case 0x343824u: goto label_343824;
        case 0x343828u: goto label_343828;
        case 0x34382cu: goto label_34382c;
        case 0x343830u: goto label_343830;
        case 0x343834u: goto label_343834;
        case 0x343838u: goto label_343838;
        case 0x34383cu: goto label_34383c;
        case 0x343840u: goto label_343840;
        case 0x343844u: goto label_343844;
        case 0x343848u: goto label_343848;
        case 0x34384cu: goto label_34384c;
        case 0x343850u: goto label_343850;
        case 0x343854u: goto label_343854;
        case 0x343858u: goto label_343858;
        case 0x34385cu: goto label_34385c;
        case 0x343860u: goto label_343860;
        case 0x343864u: goto label_343864;
        case 0x343868u: goto label_343868;
        case 0x34386cu: goto label_34386c;
        case 0x343870u: goto label_343870;
        case 0x343874u: goto label_343874;
        case 0x343878u: goto label_343878;
        case 0x34387cu: goto label_34387c;
        case 0x343880u: goto label_343880;
        case 0x343884u: goto label_343884;
        case 0x343888u: goto label_343888;
        case 0x34388cu: goto label_34388c;
        case 0x343890u: goto label_343890;
        case 0x343894u: goto label_343894;
        case 0x343898u: goto label_343898;
        case 0x34389cu: goto label_34389c;
        case 0x3438a0u: goto label_3438a0;
        case 0x3438a4u: goto label_3438a4;
        case 0x3438a8u: goto label_3438a8;
        case 0x3438acu: goto label_3438ac;
        case 0x3438b0u: goto label_3438b0;
        case 0x3438b4u: goto label_3438b4;
        case 0x3438b8u: goto label_3438b8;
        case 0x3438bcu: goto label_3438bc;
        case 0x3438c0u: goto label_3438c0;
        case 0x3438c4u: goto label_3438c4;
        case 0x3438c8u: goto label_3438c8;
        case 0x3438ccu: goto label_3438cc;
        case 0x3438d0u: goto label_3438d0;
        case 0x3438d4u: goto label_3438d4;
        default: break;
    }

    ctx->pc = 0x343678u;

label_343678:
    // 0x343678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x343678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34367c:
    // 0x34367c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x34367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_343680:
    // 0x343680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_343684:
    // 0x343684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x343684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343688:
    // 0x343688: 0x2484fd40  addiu       $a0, $a0, -0x2C0
    ctx->pc = 0x343688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966592));
label_34368c:
    // 0x34368c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34368cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343690:
    // 0x343690: 0x80dd9ba  j           func_3766E8
label_343694:
    if (ctx->pc == 0x343694u) {
        ctx->pc = 0x343694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343690u;
        // 0x343694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343698u;
        goto label_343698;
    }
    ctx->pc = 0x343690u;
    ctx->pc = 0x343694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343690u;
    // 0x343694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3766E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3766E8u, 0x343690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x343698u;
label_343698:
    // 0x343698: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x343698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_34369c:
    // 0x34369c: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x34369cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
label_3436a0:
    // 0x3436a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3436a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3436a4:
    // 0x3436a4: 0x2484fd40  addiu       $a0, $a0, -0x2C0
    ctx->pc = 0x3436a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966592));
label_3436a8:
    // 0x3436a8: 0x24c6fd50  addiu       $a2, $a2, -0x2B0
    ctx->pc = 0x3436a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966608));
label_3436ac:
    // 0x3436ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3436acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3436b0:
    // 0x3436b0: 0xc0dd9c0  jal         func_376700
label_3436b4:
    if (ctx->pc == 0x3436B4u) {
        ctx->pc = 0x3436B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436B0u;
        // 0x3436b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436B8u;
        goto label_3436b8;
    }
    ctx->pc = 0x3436B0u;
    SET_GPR_U32(ctx, 31, 0x3436B8u);
    ctx->pc = 0x3436B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436B0u;
    // 0x3436b4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376700u, 0x3436B0u, 0x3436B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436B8u;
label_3436b8:
    // 0x3436b8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3436b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_3436bc:
    // 0x3436bc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3436bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3436c0:
    // 0x3436c0: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x3436c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_3436c4:
    // 0x3436c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3436c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3436c8:
    // 0x3436c8: 0x24460024  addiu       $a2, $v0, 0x24
    ctx->pc = 0x3436c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_3436cc:
    // 0x3436cc: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x3436ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_3436d0:
    // 0x3436d0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3436d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3436d4:
    // 0x3436d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3436d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3436d8:
    // 0x3436d8: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x3436d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
label_3436dc:
    // 0x3436dc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x3436dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_3436e0:
    // 0x3436e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3436e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3436e4:
    // 0x3436e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3436e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3436e8:
    // 0x3436e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3436e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3436ec:
    // 0x3436ec: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3436ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_3436f0:
    // 0x3436f0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3436f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3436f4:
    // 0x3436f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3436f8:
    if (ctx->pc == 0x3436F8u) {
        ctx->pc = 0x3436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436F4u;
        // 0x3436f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436FCu;
        goto label_3436fc;
    }
    ctx->pc = 0x3436F4u;
    {
        const bool branch_taken_0x3436f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3436F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436F4u;
        // 0x3436f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3436f4) {
            ctx->pc = 0x3436D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3436d8;
        }
    }
    ctx->pc = 0x3436FCu;
label_3436fc:
    // 0x3436fc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3436fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_343700:
    // 0x343700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343704:
    // 0x343704: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x343704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
label_343708:
    // 0x343708: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x343708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_34370c:
    // 0x34370c: 0x2445fff0  addiu       $a1, $v0, -0x10
    ctx->pc = 0x34370cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_343710:
    // 0x343710: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x343710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_343714:
    // 0x343714: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x343714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_343718:
    // 0x343718: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x343718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_34371c:
    // 0x34371c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x34371cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
label_343720:
    // 0x343720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x343720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_343724:
    // 0x343724: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x343724u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_343728:
    // 0x343728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x343728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_34372c:
    // 0x34372c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x34372cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_343730:
    // 0x343730: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x343730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_343734:
    // 0x343734: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x343734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_343738:
    // 0x343738: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x343738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_34373c:
    // 0x34373c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34373cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_343740:
    // 0x343740: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x343740u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_343744:
    // 0x343744: 0x3e00008  jr          $ra
label_343748:
    if (ctx->pc == 0x343748u) {
        ctx->pc = 0x343748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343744u;
        // 0x343748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34374Cu;
        goto label_34374c;
    }
    ctx->pc = 0x343744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343744u;
        // 0x343748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34374Cu;
label_34374c:
    // 0x34374c: 0x0  nop
    ctx->pc = 0x34374cu;
    // NOP
label_343750:
    // 0x343750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x343750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_343754:
    // 0x343754: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x343754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_343758:
    // 0x343758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x343758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34375c:
    // 0x34375c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_343760:
    // 0x343760: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x343760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_343764:
    // 0x343764: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x343764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_343768:
    // 0x343768: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x343768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34376c:
    // 0x34376c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x34376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_343770:
    // 0x343770: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x343770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_343774:
    // 0x343774: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x343774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_343778:
    // 0x343778: 0xc0c8864  jal         func_322190
label_34377c:
    if (ctx->pc == 0x34377Cu) {
        ctx->pc = 0x34377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343778u;
        // 0x34377c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343780u;
        goto label_343780;
    }
    ctx->pc = 0x343778u;
    SET_GPR_U32(ctx, 31, 0x343780u);
    ctx->pc = 0x34377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343778u;
    // 0x34377c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x343778u, 0x343780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343780u;
label_343780:
    // 0x343780: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x343780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343784:
    // 0x343784: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x343784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_343788:
    // 0x343788: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x343788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34378c:
    // 0x34378c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34378cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343790:
    // 0x343790: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x343790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_343794:
    // 0x343794: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x343794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_343798:
    // 0x343798: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x343798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_34379c:
    // 0x34379c: 0x40f809  jalr        $v0
label_3437a0:
    if (ctx->pc == 0x3437A0u) {
        ctx->pc = 0x3437A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34379Cu;
        // 0x3437a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437A4u;
        goto label_3437a4;
    }
    ctx->pc = 0x34379Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3437A4u);
        ctx->pc = 0x3437A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34379Cu;
        // 0x3437a0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34379Cu, 0x3437A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3437A4u;
label_3437a4:
    // 0x3437a4: 0x32860003  andi        $a2, $s4, 0x3
    ctx->pc = 0x3437a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
label_3437a8:
    // 0x3437a8: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x3437a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_3437ac:
    // 0x3437ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3437acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3437b0:
    // 0x3437b0: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x3437b0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3437b4:
    // 0x3437b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3437b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3437b8:
    // 0x3437b8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3437b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3437bc:
    // 0x3437bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3437bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3437c0:
    // 0x3437c0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_3437c4:
    if (ctx->pc == 0x3437C4u) {
        ctx->pc = 0x3437C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437C0u;
        // 0x3437c4: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437C8u;
        goto label_3437c8;
    }
    ctx->pc = 0x3437C0u;
    {
        const bool branch_taken_0x3437c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3437C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437C0u;
        // 0x3437c4: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437c0) {
            ctx->pc = 0x3438B8u;
            goto label_3438b8;
        }
    }
    ctx->pc = 0x3437C8u;
label_3437c8:
    // 0x3437c8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3437c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3437cc:
    // 0x3437cc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x3437ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_3437d0:
    // 0x3437d0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x3437d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3437d4:
    // 0x3437d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3437d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3437d8:
    // 0x3437d8: 0x40f809  jalr        $v0
label_3437dc:
    if (ctx->pc == 0x3437DCu) {
        ctx->pc = 0x3437DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437D8u;
        // 0x3437dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437E0u;
        goto label_3437e0;
    }
    ctx->pc = 0x3437D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3437E0u);
        ctx->pc = 0x3437DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437D8u;
        // 0x3437dc: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3437D8u, 0x3437E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3437E0u;
label_3437e0:
    // 0x3437e0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_3437e4:
    if (ctx->pc == 0x3437E4u) {
        ctx->pc = 0x3437E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437E0u;
        // 0x3437e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437E8u;
        goto label_3437e8;
    }
    ctx->pc = 0x3437E0u;
    {
        const bool branch_taken_0x3437e0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3437E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437E0u;
        // 0x3437e4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437e0) {
            ctx->pc = 0x3437F0u;
            goto label_3437f0;
        }
    }
    ctx->pc = 0x3437E8u;
label_3437e8:
    // 0x3437e8: 0x10000033  b           . + 4 + (0x33 << 2)
label_3437ec:
    if (ctx->pc == 0x3437ECu) {
        ctx->pc = 0x3437ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437E8u;
        // 0x3437ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3437F0u;
        goto label_3437f0;
    }
    ctx->pc = 0x3437E8u;
    {
        const bool branch_taken_0x3437e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3437ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437E8u;
        // 0x3437ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437e8) {
            ctx->pc = 0x3438B8u;
            goto label_3438b8;
        }
    }
    ctx->pc = 0x3437F0u;
label_3437f0:
    // 0x3437f0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3437f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3437f4:
    // 0x3437f4: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x3437f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
label_3437f8:
    // 0x3437f8: 0x2908024  and         $s0, $s4, $s0
    ctx->pc = 0x3437f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 16));
label_3437fc:
    // 0x3437fc: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x3437fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_343800:
    // 0x343800: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x343800u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_343804:
    // 0x343804: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x343804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_343808:
    // 0x343808: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x343808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_34380c:
    // 0x34380c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x34380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_343810:
    // 0x343810: 0x60f809  jalr        $v1
label_343814:
    if (ctx->pc == 0x343814u) {
        ctx->pc = 0x343814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343810u;
        // 0x343814: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343818u;
        goto label_343818;
    }
    ctx->pc = 0x343810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x343818u);
        ctx->pc = 0x343814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343810u;
        // 0x343814: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343810u, 0x343818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x343818u;
label_343818:
    // 0x343818: 0xc0d0d9e  jal         func_343678
label_34381c:
    if (ctx->pc == 0x34381Cu) {
        ctx->pc = 0x34381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343818u;
        // 0x34381c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343820u;
        goto label_343820;
    }
    ctx->pc = 0x343818u;
    SET_GPR_U32(ctx, 31, 0x343820u);
    ctx->pc = 0x34381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343818u;
    // 0x34381c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343678u;
    goto label_343678;
    ctx->pc = 0x343820u;
label_343820:
    // 0x343820: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x343820u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_343824:
    // 0x343824: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x343824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_343828:
    // 0x343828: 0xc0d0e56  jal         func_343958
label_34382c:
    if (ctx->pc == 0x34382Cu) {
        ctx->pc = 0x34382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343828u;
        // 0x34382c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343830u;
        goto label_343830;
    }
    ctx->pc = 0x343828u;
    SET_GPR_U32(ctx, 31, 0x343830u);
    ctx->pc = 0x34382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343828u;
    // 0x34382c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343958u, 0x343828u, 0x343830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343830u;
label_343830:
    // 0x343830: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x343830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_343834:
    // 0x343834: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x343834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_343838:
    // 0x343838: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x343838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_34383c:
    // 0x34383c: 0x2463fe10  addiu       $v1, $v1, -0x1F0
    ctx->pc = 0x34383cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966800));
label_343840:
    // 0x343840: 0x2488fe20  addiu       $t0, $a0, -0x1E0
    ctx->pc = 0x343840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966816));
label_343844:
    // 0x343844: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x343844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_343848:
    // 0x343848: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x343848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_34384c:
    // 0x34384c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x34384cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_343850:
    // 0x343850: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x343850u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_343854:
    // 0x343854: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x343854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_343858:
    // 0x343858: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x343858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_34385c:
    // 0x34385c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x34385cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_343860:
    // 0x343860: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x343860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_343864:
    // 0x343864: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x343864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_343868:
    // 0x343868: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x343868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_34386c:
    // 0x34386c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x34386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_343870:
    // 0x343870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_343874:
    if (ctx->pc == 0x343874u) {
        ctx->pc = 0x343874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343870u;
        // 0x343874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343878u;
        goto label_343878;
    }
    ctx->pc = 0x343870u;
    {
        const bool branch_taken_0x343870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343870u;
        // 0x343874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343870) {
            ctx->pc = 0x343888u;
            goto label_343888;
        }
    }
    ctx->pc = 0x343878u;
label_343878:
    // 0x343878: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x343878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_34387c:
    // 0x34387c: 0x10000006  b           . + 4 + (0x6 << 2)
label_343880:
    if (ctx->pc == 0x343880u) {
        ctx->pc = 0x343880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34387Cu;
        // 0x343880: 0xacc70004  sw          $a3, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343884u;
        goto label_343884;
    }
    ctx->pc = 0x34387Cu;
    {
        const bool branch_taken_0x34387c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34387Cu;
        // 0x343880: 0xacc70004  sw          $a3, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34387c) {
            ctx->pc = 0x343898u;
            goto label_343898;
        }
    }
    ctx->pc = 0x343884u;
label_343884:
    // 0x343884: 0x0  nop
    ctx->pc = 0x343884u;
    // NOP
label_343888:
    // 0x343888: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x343888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_34388c:
    // 0x34388c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x34388cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_343890:
    // 0x343890: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x343890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_343894:
    // 0x343894: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x343894u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_343898:
    // 0x343898: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x343898u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_34389c:
    // 0x34389c: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x34389cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
label_3438a0:
    // 0x3438a0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3438a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3438a4:
    // 0x3438a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3438a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3438a8:
    // 0x3438a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3438ac:
    // 0x3438ac: 0xc0d0fc4  jal         func_343F10
label_3438b0:
    if (ctx->pc == 0x3438B0u) {
        ctx->pc = 0x3438B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438ACu;
        // 0x3438b0: 0xad02000c  sw          $v0, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3438B4u;
        goto label_3438b4;
    }
    ctx->pc = 0x3438ACu;
    SET_GPR_U32(ctx, 31, 0x3438B4u);
    ctx->pc = 0x3438B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3438ACu;
    // 0x3438b0: 0xad02000c  sw          $v0, 0xC($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343F10u, 0x3438ACu, 0x3438B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438B4u;
label_3438b4:
    // 0x3438b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3438b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3438b8:
    // 0x3438b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3438b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3438bc:
    // 0x3438bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3438bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3438c0:
    // 0x3438c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3438c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3438c4:
    // 0x3438c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3438c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3438c8:
    // 0x3438c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3438c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3438cc:
    // 0x3438cc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3438ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3438d0:
    // 0x3438d0: 0x3e00008  jr          $ra
label_3438d4:
    if (ctx->pc == 0x3438D4u) {
        ctx->pc = 0x3438D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438D0u;
        // 0x3438d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3438D8u;
        goto label_fallthrough_0x3438d0;
    }
    ctx->pc = 0x3438D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3438D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438D0u;
        // 0x3438d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3438D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3438d0:
    ctx->pc = 0x3438D8u;
}
