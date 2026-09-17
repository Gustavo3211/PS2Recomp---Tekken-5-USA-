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

// Function: sub_004B9638
// Address: 0x4b9638 - 0x4b9838
void sub_004B9638_0x4b9638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9638_0x4b9638");
#endif

    switch (ctx->pc) {
        case 0x4b9638u: goto label_4b9638;
        case 0x4b963cu: goto label_4b963c;
        case 0x4b9640u: goto label_4b9640;
        case 0x4b9644u: goto label_4b9644;
        case 0x4b9648u: goto label_4b9648;
        case 0x4b964cu: goto label_4b964c;
        case 0x4b9650u: goto label_4b9650;
        case 0x4b9654u: goto label_4b9654;
        case 0x4b9658u: goto label_4b9658;
        case 0x4b965cu: goto label_4b965c;
        case 0x4b9660u: goto label_4b9660;
        case 0x4b9664u: goto label_4b9664;
        case 0x4b9668u: goto label_4b9668;
        case 0x4b966cu: goto label_4b966c;
        case 0x4b9670u: goto label_4b9670;
        case 0x4b9674u: goto label_4b9674;
        case 0x4b9678u: goto label_4b9678;
        case 0x4b967cu: goto label_4b967c;
        case 0x4b9680u: goto label_4b9680;
        case 0x4b9684u: goto label_4b9684;
        case 0x4b9688u: goto label_4b9688;
        case 0x4b968cu: goto label_4b968c;
        case 0x4b9690u: goto label_4b9690;
        case 0x4b9694u: goto label_4b9694;
        case 0x4b9698u: goto label_4b9698;
        case 0x4b969cu: goto label_4b969c;
        case 0x4b96a0u: goto label_4b96a0;
        case 0x4b96a4u: goto label_4b96a4;
        case 0x4b96a8u: goto label_4b96a8;
        case 0x4b96acu: goto label_4b96ac;
        case 0x4b96b0u: goto label_4b96b0;
        case 0x4b96b4u: goto label_4b96b4;
        case 0x4b96b8u: goto label_4b96b8;
        case 0x4b96bcu: goto label_4b96bc;
        case 0x4b96c0u: goto label_4b96c0;
        case 0x4b96c4u: goto label_4b96c4;
        case 0x4b96c8u: goto label_4b96c8;
        case 0x4b96ccu: goto label_4b96cc;
        case 0x4b96d0u: goto label_4b96d0;
        case 0x4b96d4u: goto label_4b96d4;
        case 0x4b96d8u: goto label_4b96d8;
        case 0x4b96dcu: goto label_4b96dc;
        case 0x4b96e0u: goto label_4b96e0;
        case 0x4b96e4u: goto label_4b96e4;
        case 0x4b96e8u: goto label_4b96e8;
        case 0x4b96ecu: goto label_4b96ec;
        case 0x4b96f0u: goto label_4b96f0;
        case 0x4b96f4u: goto label_4b96f4;
        case 0x4b96f8u: goto label_4b96f8;
        case 0x4b96fcu: goto label_4b96fc;
        case 0x4b9700u: goto label_4b9700;
        case 0x4b9704u: goto label_4b9704;
        case 0x4b9708u: goto label_4b9708;
        case 0x4b970cu: goto label_4b970c;
        case 0x4b9710u: goto label_4b9710;
        case 0x4b9714u: goto label_4b9714;
        case 0x4b9718u: goto label_4b9718;
        case 0x4b971cu: goto label_4b971c;
        case 0x4b9720u: goto label_4b9720;
        case 0x4b9724u: goto label_4b9724;
        case 0x4b9728u: goto label_4b9728;
        case 0x4b972cu: goto label_4b972c;
        case 0x4b9730u: goto label_4b9730;
        case 0x4b9734u: goto label_4b9734;
        case 0x4b9738u: goto label_4b9738;
        case 0x4b973cu: goto label_4b973c;
        case 0x4b9740u: goto label_4b9740;
        case 0x4b9744u: goto label_4b9744;
        case 0x4b9748u: goto label_4b9748;
        case 0x4b974cu: goto label_4b974c;
        case 0x4b9750u: goto label_4b9750;
        case 0x4b9754u: goto label_4b9754;
        case 0x4b9758u: goto label_4b9758;
        case 0x4b975cu: goto label_4b975c;
        case 0x4b9760u: goto label_4b9760;
        case 0x4b9764u: goto label_4b9764;
        case 0x4b9768u: goto label_4b9768;
        case 0x4b976cu: goto label_4b976c;
        case 0x4b9770u: goto label_4b9770;
        case 0x4b9774u: goto label_4b9774;
        case 0x4b9778u: goto label_4b9778;
        case 0x4b977cu: goto label_4b977c;
        case 0x4b9780u: goto label_4b9780;
        case 0x4b9784u: goto label_4b9784;
        case 0x4b9788u: goto label_4b9788;
        case 0x4b978cu: goto label_4b978c;
        case 0x4b9790u: goto label_4b9790;
        case 0x4b9794u: goto label_4b9794;
        case 0x4b9798u: goto label_4b9798;
        case 0x4b979cu: goto label_4b979c;
        case 0x4b97a0u: goto label_4b97a0;
        case 0x4b97a4u: goto label_4b97a4;
        case 0x4b97a8u: goto label_4b97a8;
        case 0x4b97acu: goto label_4b97ac;
        case 0x4b97b0u: goto label_4b97b0;
        case 0x4b97b4u: goto label_4b97b4;
        case 0x4b97b8u: goto label_4b97b8;
        case 0x4b97bcu: goto label_4b97bc;
        case 0x4b97c0u: goto label_4b97c0;
        case 0x4b97c4u: goto label_4b97c4;
        case 0x4b97c8u: goto label_4b97c8;
        case 0x4b97ccu: goto label_4b97cc;
        case 0x4b97d0u: goto label_4b97d0;
        case 0x4b97d4u: goto label_4b97d4;
        case 0x4b97d8u: goto label_4b97d8;
        case 0x4b97dcu: goto label_4b97dc;
        case 0x4b97e0u: goto label_4b97e0;
        case 0x4b97e4u: goto label_4b97e4;
        case 0x4b97e8u: goto label_4b97e8;
        case 0x4b97ecu: goto label_4b97ec;
        case 0x4b97f0u: goto label_4b97f0;
        case 0x4b97f4u: goto label_4b97f4;
        case 0x4b97f8u: goto label_4b97f8;
        case 0x4b97fcu: goto label_4b97fc;
        case 0x4b9800u: goto label_4b9800;
        case 0x4b9804u: goto label_4b9804;
        case 0x4b9808u: goto label_4b9808;
        case 0x4b980cu: goto label_4b980c;
        case 0x4b9810u: goto label_4b9810;
        case 0x4b9814u: goto label_4b9814;
        case 0x4b9818u: goto label_4b9818;
        case 0x4b981cu: goto label_4b981c;
        case 0x4b9820u: goto label_4b9820;
        case 0x4b9824u: goto label_4b9824;
        case 0x4b9828u: goto label_4b9828;
        case 0x4b982cu: goto label_4b982c;
        case 0x4b9830u: goto label_4b9830;
        case 0x4b9834u: goto label_4b9834;
        default: break;
    }

    ctx->pc = 0x4b9638u;

label_4b9638:
    // 0x4b9638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b9638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b963c:
    // 0x4b963c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b963cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b9640:
    // 0x4b9640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b9640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9644:
    // 0x4b9644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b9644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4b9648:
    // 0x4b9648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b9648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b964c:
    // 0x4b964c: 0xc1232f2  jal         func_48CBC8
label_4b9650:
    if (ctx->pc == 0x4B9650u) {
        ctx->pc = 0x4B9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B964Cu;
        // 0x4b9650: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B9654u;
        goto label_4b9654;
    }
    ctx->pc = 0x4B964Cu;
    SET_GPR_U32(ctx, 31, 0x4B9654u);
    ctx->pc = 0x4B9650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B964Cu;
    // 0x4b9650: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4B964Cu, 0x4B9654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9654u;
label_4b9654:
    // 0x4b9654: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b9654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4b9658:
    // 0x4b9658: 0xac620dd4  sw          $v0, 0xDD4($v1)
    ctx->pc = 0x4b9658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3540), GPR_U32(ctx, 2));
label_4b965c:
    // 0x4b965c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4b965cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4b9660:
    // 0x4b9660: 0x442006b  bltzl       $v0, . + 4 + (0x6B << 2)
label_4b9664:
    if (ctx->pc == 0x4B9664u) {
        ctx->pc = 0x4B9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9660u;
        // 0x4b9664: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B9668u;
        goto label_4b9668;
    }
    ctx->pc = 0x4B9660u;
    {
        const bool branch_taken_0x4b9660 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b9660) {
            ctx->pc = 0x4B9664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9660u;
            // 0x4b9664: 0x860301bc  lh          $v1, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B9810u;
            goto label_4b9810;
        }
    }
    ctx->pc = 0x4B9668u;
label_4b9668:
    // 0x4b9668: 0xc12b642  jal         func_4AD908
label_4b966c:
    if (ctx->pc == 0x4B966Cu) {
        ctx->pc = 0x4B966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9668u;
        // 0x4b966c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B9670u;
        goto label_4b9670;
    }
    ctx->pc = 0x4B9668u;
    SET_GPR_U32(ctx, 31, 0x4B9670u);
    ctx->pc = 0x4B966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B9668u;
    // 0x4b966c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4B9668u, 0x4B9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9670u;
label_4b9670:
    // 0x4b9670: 0xc12b5b0  jal         func_4AD6C0
label_4b9674:
    if (ctx->pc == 0x4B9674u) {
        ctx->pc = 0x4B9678u;
        goto label_4b9678;
    }
    ctx->pc = 0x4B9670u;
    SET_GPR_U32(ctx, 31, 0x4B9678u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4B9670u, 0x4B9678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9678u;
label_4b9678:
    // 0x4b9678: 0xa602015e  sh          $v0, 0x15E($s0)
    ctx->pc = 0x4b9678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 2));
label_4b967c:
    // 0x4b967c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b967cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4b9680:
    // 0x4b9680: 0x24c60db8  addiu       $a2, $a2, 0xDB8
    ctx->pc = 0x4b9680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3512));
label_4b9684:
    // 0x4b9684: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x4b9684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4b9688:
    // 0x4b9688: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b9688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4b968c:
    // 0x4b968c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b968cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_4b9690:
    // 0x4b9690: 0x2442ffe2  addiu       $v0, $v0, -0x1E
    ctx->pc = 0x4b9690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
label_4b9694:
    // 0x4b9694: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b9694u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
label_4b9698:
    // 0x4b9698: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b9698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_4b969c:
    // 0x4b969c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b969cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b96a0:
    // 0x4b96a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b96a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b96a4:
    // 0x4b96a4: 0x24e70dd0  addiu       $a3, $a3, 0xDD0
    ctx->pc = 0x4b96a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3536));
label_4b96a8:
    // 0x4b96a8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b96a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4b96ac:
    // 0x4b96ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b96acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b96b0:
    // 0x4b96b0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b96b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
label_4b96b4:
    // 0x4b96b4: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x4b96b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
label_4b96b8:
    // 0x4b96b8: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b96b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b96bc:
    // 0x4b96bc: 0x25080dcc  addiu       $t0, $t0, 0xDCC
    ctx->pc = 0x4b96bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3532));
label_4b96c0:
    // 0x4b96c0: 0x254a6ef0  addiu       $t2, $t2, 0x6EF0
    ctx->pc = 0x4b96c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28400));
label_4b96c4:
    // 0x4b96c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b96c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b96c8:
    // 0x4b96c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b96cc:
    // 0x4b96cc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b96ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_4b96d0:
    // 0x4b96d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b96d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b96d4:
    // 0x4b96d4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4b96d8:
    // 0x4b96d8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b96d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b96dc:
    // 0x4b96dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b96e0:
    // 0x4b96e0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b96e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4b96e4:
    // 0x4b96e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4b96e8:
    // 0x4b96e8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4b96e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4b96ec:
    // 0x4b96ec: 0x24216ee8  addiu       $at, $at, 0x6EE8
    ctx->pc = 0x4b96ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28392));
label_4b96f0:
    // 0x4b96f0: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4b96f4:
    // 0x4b96f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b96f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4b96f8:
    // 0x4b96f8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4b96f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4b96fc:
    // 0x4b96fc: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b96fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4b9700:
    // 0x4b9700: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4b9700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4b9704:
    // 0x4b9704: 0xa6030162  sh          $v1, 0x162($s0)
    ctx->pc = 0x4b9704u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 3));
label_4b9708:
    // 0x4b9708: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b9708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_4b970c:
    // 0x4b970c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b970cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4b9710:
    // 0x4b9710: 0xa6030164  sh          $v1, 0x164($s0)
    ctx->pc = 0x4b9710u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 3));
label_4b9714:
    // 0x4b9714: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b9714u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4b9718:
    // 0x4b9718: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4b9718u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b971c:
    // 0x4b971c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b971cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4b9720:
    // 0x4b9720: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4b9720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4b9724:
    // 0x4b9724: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4b9724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_4b9728:
    // 0x4b9728: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b9728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4b972c:
    // 0x4b972c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4b972cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4b9730:
    // 0x4b9730: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4b9730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_4b9734:
    // 0x4b9734: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b9734u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b9738:
    // 0x4b9738: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b9738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b973c:
    // 0x4b973c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b973cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4b9740:
    // 0x4b9740: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b9740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4b9744:
    // 0x4b9744: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4b9744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_4b9748:
    // 0x4b9748: 0x24216ed8  addiu       $at, $at, 0x6ED8
    ctx->pc = 0x4b9748u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28376));
label_4b974c:
    // 0x4b974c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4b974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_4b9750:
    // 0x4b9750: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b9750u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4b9754:
    // 0x4b9754: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4b9754u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4b9758:
    // 0x4b9758: 0xa603000c  sh          $v1, 0xC($s0)
    ctx->pc = 0x4b9758u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
label_4b975c:
    // 0x4b975c: 0xad0a0000  sw          $t2, 0x0($t0)
    ctx->pc = 0x4b975cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 10));
label_4b9760:
    // 0x4b9760: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4b9764:
    // 0x4b9764: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4b9764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_4b9768:
    // 0x4b9768: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b976c:
    // 0x4b976c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_4b9770:
    // 0x4b9770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b9774:
    // 0x4b9774: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b9774u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4b9778:
    // 0x4b9778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b977c:
    // 0x4b977c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b977cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b9780:
    // 0x4b9780: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4b9780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4b9784:
    // 0x4b9784: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b9784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_4b9788:
    // 0x4b9788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b9788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b978c:
    // 0x4b978c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b978cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4b9790:
    // 0x4b9790: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b9790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4b9794:
    // 0x4b9794: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4b9794u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b9798:
    // 0x4b9798: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4b9798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4b979c:
    // 0x4b979c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4b979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4b97a0:
    // 0x4b97a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4b97a4:
    // 0x4b97a4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b97a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_4b97a8:
    // 0x4b97a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b97a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b97ac:
    // 0x4b97ac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b97acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_4b97b0:
    // 0x4b97b0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4b97b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b97b4:
    // 0x4b97b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4b97b8:
    // 0x4b97b8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b97b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4b97bc:
    // 0x4b97bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4b97c0:
    // 0x4b97c0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4b97c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_4b97c4:
    // 0x4b97c4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4b97c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4b97c8:
    // 0x4b97c8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x4b97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_4b97cc:
    // 0x4b97cc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4b97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4b97d0:
    // 0x4b97d0: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4b97d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4b97d4:
    // 0x4b97d4: 0xa6030118  sh          $v1, 0x118($s0)
    ctx->pc = 0x4b97d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 3));
label_4b97d8:
    // 0x4b97d8: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4b97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4b97dc:
    // 0x4b97dc: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_4b97e0:
    // 0x4b97e0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b97e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4b97e4:
    // 0x4b97e4: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4b97e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
label_4b97e8:
    // 0x4b97e8: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_4b97ec:
    // 0x4b97ec: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4b97ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4b97f0:
    // 0x4b97f0: 0xa6030120  sh          $v1, 0x120($s0)
    ctx->pc = 0x4b97f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 3));
label_4b97f4:
    // 0x4b97f4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4b97f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_4b97f8:
    // 0x4b97f8: 0xc127e84  jal         func_49FA10
label_4b97fc:
    if (ctx->pc == 0x4B97FCu) {
        ctx->pc = 0x4B97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B97F8u;
        // 0x4b97fc: 0xa60001b6  sh          $zero, 0x1B6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B9800u;
        goto label_4b9800;
    }
    ctx->pc = 0x4B97F8u;
    SET_GPR_U32(ctx, 31, 0x4B9800u);
    ctx->pc = 0x4B97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B97F8u;
    // 0x4b97fc: 0xa60001b6  sh          $zero, 0x1B6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4B97F8u, 0x4B9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B9800u;
label_4b9800:
    // 0x4b9800: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4b9800u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4b9804:
    // 0x4b9804: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4b9804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4b9808:
    // 0x4b9808: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4b9808u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b980c:
    // 0x4b980c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4b980cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4b9810:
    // 0x4b9810: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x4b9810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_4b9814:
    // 0x4b9814: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_4b9818:
    if (ctx->pc == 0x4B9818u) {
        ctx->pc = 0x4B9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B9814u;
        // 0x4b9818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B981Cu;
        goto label_4b981c;
    }
    ctx->pc = 0x4B9814u;
    {
        const bool branch_taken_0x4b9814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9814) {
            ctx->pc = 0x4B9818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B9814u;
            // 0x4b9818: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B98FCu;
            return;
        }
    }
    ctx->pc = 0x4B981Cu;
label_4b981c:
    // 0x4b981c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4b981cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b9820:
    // 0x4b9820: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b9820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4b9824:
    // 0x4b9824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b9824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b9828:
    // 0x4b9828: 0x8c63b320  lw          $v1, -0x4CE0($v1)
    ctx->pc = 0x4b9828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947616)));
label_4b982c:
    // 0x4b982c: 0x600008  jr          $v1
label_4b9830:
    if (ctx->pc == 0x4B9830u) {
        ctx->pc = 0x4B9834u;
        goto label_4b9834;
    }
    ctx->pc = 0x4B982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B982Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4B9834u;
label_4b9834:
    // 0x4b9834: 0x0  nop
    ctx->pc = 0x4b9834u;
    // NOP
    ctx->pc = 0x4b9838u;
}
