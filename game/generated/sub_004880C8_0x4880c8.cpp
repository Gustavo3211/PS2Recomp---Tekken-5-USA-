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

// Function: sub_004880C8
// Address: 0x4880c8 - 0x4882e0
void sub_004880C8_0x4880c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004880C8_0x4880c8");
#endif

    switch (ctx->pc) {
        case 0x4880c8u: goto label_4880c8;
        case 0x4880ccu: goto label_4880cc;
        case 0x4880d0u: goto label_4880d0;
        case 0x4880d4u: goto label_4880d4;
        case 0x4880d8u: goto label_4880d8;
        case 0x4880dcu: goto label_4880dc;
        case 0x4880e0u: goto label_4880e0;
        case 0x4880e4u: goto label_4880e4;
        case 0x4880e8u: goto label_4880e8;
        case 0x4880ecu: goto label_4880ec;
        case 0x4880f0u: goto label_4880f0;
        case 0x4880f4u: goto label_4880f4;
        case 0x4880f8u: goto label_4880f8;
        case 0x4880fcu: goto label_4880fc;
        case 0x488100u: goto label_488100;
        case 0x488104u: goto label_488104;
        case 0x488108u: goto label_488108;
        case 0x48810cu: goto label_48810c;
        case 0x488110u: goto label_488110;
        case 0x488114u: goto label_488114;
        case 0x488118u: goto label_488118;
        case 0x48811cu: goto label_48811c;
        case 0x488120u: goto label_488120;
        case 0x488124u: goto label_488124;
        case 0x488128u: goto label_488128;
        case 0x48812cu: goto label_48812c;
        case 0x488130u: goto label_488130;
        case 0x488134u: goto label_488134;
        case 0x488138u: goto label_488138;
        case 0x48813cu: goto label_48813c;
        case 0x488140u: goto label_488140;
        case 0x488144u: goto label_488144;
        case 0x488148u: goto label_488148;
        case 0x48814cu: goto label_48814c;
        case 0x488150u: goto label_488150;
        case 0x488154u: goto label_488154;
        case 0x488158u: goto label_488158;
        case 0x48815cu: goto label_48815c;
        case 0x488160u: goto label_488160;
        case 0x488164u: goto label_488164;
        case 0x488168u: goto label_488168;
        case 0x48816cu: goto label_48816c;
        case 0x488170u: goto label_488170;
        case 0x488174u: goto label_488174;
        case 0x488178u: goto label_488178;
        case 0x48817cu: goto label_48817c;
        case 0x488180u: goto label_488180;
        case 0x488184u: goto label_488184;
        case 0x488188u: goto label_488188;
        case 0x48818cu: goto label_48818c;
        case 0x488190u: goto label_488190;
        case 0x488194u: goto label_488194;
        case 0x488198u: goto label_488198;
        case 0x48819cu: goto label_48819c;
        case 0x4881a0u: goto label_4881a0;
        case 0x4881a4u: goto label_4881a4;
        case 0x4881a8u: goto label_4881a8;
        case 0x4881acu: goto label_4881ac;
        case 0x4881b0u: goto label_4881b0;
        case 0x4881b4u: goto label_4881b4;
        case 0x4881b8u: goto label_4881b8;
        case 0x4881bcu: goto label_4881bc;
        case 0x4881c0u: goto label_4881c0;
        case 0x4881c4u: goto label_4881c4;
        case 0x4881c8u: goto label_4881c8;
        case 0x4881ccu: goto label_4881cc;
        case 0x4881d0u: goto label_4881d0;
        case 0x4881d4u: goto label_4881d4;
        case 0x4881d8u: goto label_4881d8;
        case 0x4881dcu: goto label_4881dc;
        case 0x4881e0u: goto label_4881e0;
        case 0x4881e4u: goto label_4881e4;
        case 0x4881e8u: goto label_4881e8;
        case 0x4881ecu: goto label_4881ec;
        case 0x4881f0u: goto label_4881f0;
        case 0x4881f4u: goto label_4881f4;
        case 0x4881f8u: goto label_4881f8;
        case 0x4881fcu: goto label_4881fc;
        case 0x488200u: goto label_488200;
        case 0x488204u: goto label_488204;
        case 0x488208u: goto label_488208;
        case 0x48820cu: goto label_48820c;
        case 0x488210u: goto label_488210;
        case 0x488214u: goto label_488214;
        case 0x488218u: goto label_488218;
        case 0x48821cu: goto label_48821c;
        case 0x488220u: goto label_488220;
        case 0x488224u: goto label_488224;
        case 0x488228u: goto label_488228;
        case 0x48822cu: goto label_48822c;
        case 0x488230u: goto label_488230;
        case 0x488234u: goto label_488234;
        case 0x488238u: goto label_488238;
        case 0x48823cu: goto label_48823c;
        case 0x488240u: goto label_488240;
        case 0x488244u: goto label_488244;
        case 0x488248u: goto label_488248;
        case 0x48824cu: goto label_48824c;
        case 0x488250u: goto label_488250;
        case 0x488254u: goto label_488254;
        case 0x488258u: goto label_488258;
        case 0x48825cu: goto label_48825c;
        case 0x488260u: goto label_488260;
        case 0x488264u: goto label_488264;
        case 0x488268u: goto label_488268;
        case 0x48826cu: goto label_48826c;
        case 0x488270u: goto label_488270;
        case 0x488274u: goto label_488274;
        case 0x488278u: goto label_488278;
        case 0x48827cu: goto label_48827c;
        case 0x488280u: goto label_488280;
        case 0x488284u: goto label_488284;
        case 0x488288u: goto label_488288;
        case 0x48828cu: goto label_48828c;
        case 0x488290u: goto label_488290;
        case 0x488294u: goto label_488294;
        case 0x488298u: goto label_488298;
        case 0x48829cu: goto label_48829c;
        case 0x4882a0u: goto label_4882a0;
        case 0x4882a4u: goto label_4882a4;
        case 0x4882a8u: goto label_4882a8;
        case 0x4882acu: goto label_4882ac;
        case 0x4882b0u: goto label_4882b0;
        case 0x4882b4u: goto label_4882b4;
        case 0x4882b8u: goto label_4882b8;
        case 0x4882bcu: goto label_4882bc;
        case 0x4882c0u: goto label_4882c0;
        case 0x4882c4u: goto label_4882c4;
        case 0x4882c8u: goto label_4882c8;
        case 0x4882ccu: goto label_4882cc;
        case 0x4882d0u: goto label_4882d0;
        case 0x4882d4u: goto label_4882d4;
        case 0x4882d8u: goto label_4882d8;
        case 0x4882dcu: goto label_4882dc;
        default: break;
    }

    ctx->pc = 0x4880c8u;

label_4880c8:
    // 0x4880c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4880c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4880cc:
    // 0x4880cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4880ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4880d0:
    // 0x4880d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4880d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4880d4:
    // 0x4880d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4880d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4880d8:
    // 0x4880d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4880d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4880dc:
    // 0x4880dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4880dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4880e0:
    // 0x4880e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4880e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_4880e4:
    // 0x4880e4: 0xc122248  jal         func_488920
label_4880e8:
    if (ctx->pc == 0x4880E8u) {
        ctx->pc = 0x4880E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880E4u;
        // 0x4880e8: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880ECu;
        goto label_4880ec;
    }
    ctx->pc = 0x4880E4u;
    SET_GPR_U32(ctx, 31, 0x4880ECu);
    ctx->pc = 0x4880E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880E4u;
    // 0x4880e8: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488920u, 0x4880E4u, 0x4880ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880ECu;
label_4880ec:
    // 0x4880ec: 0xc124998  jal         func_492660
label_4880f0:
    if (ctx->pc == 0x4880F0u) {
        ctx->pc = 0x4880F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880ECu;
        // 0x4880f0: 0x3c140084  lui         $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880F4u;
        goto label_4880f4;
    }
    ctx->pc = 0x4880ECu;
    SET_GPR_U32(ctx, 31, 0x4880F4u);
    ctx->pc = 0x4880F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880ECu;
    // 0x4880f0: 0x3c140084  lui         $s4, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)132 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492660u, 0x4880ECu, 0x4880F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880F4u;
label_4880f4:
    // 0x4880f4: 0xc1220b8  jal         func_4882E0
label_4880f8:
    if (ctx->pc == 0x4880F8u) {
        ctx->pc = 0x4880F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4880F4u;
        // 0x4880f8: 0x3c130073  lui         $s3, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4880FCu;
        goto label_4880fc;
    }
    ctx->pc = 0x4880F4u;
    SET_GPR_U32(ctx, 31, 0x4880FCu);
    ctx->pc = 0x4880F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4880F4u;
    // 0x4880f8: 0x3c130073  lui         $s3, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4882E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4882E0u, 0x4880F4u, 0x4880FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4880FCu;
label_4880fc:
    // 0x4880fc: 0xc14436e  jal         func_510DB8
label_488100:
    if (ctx->pc == 0x488100u) {
        ctx->pc = 0x488104u;
        goto label_488104;
    }
    ctx->pc = 0x4880FCu;
    SET_GPR_U32(ctx, 31, 0x488104u);
    ctx->pc = 0x510DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x510DB8u, 0x4880FCu, 0x488104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488104u;
label_488104:
    // 0x488104: 0xc122030  jal         func_4880C0
label_488108:
    if (ctx->pc == 0x488108u) {
        ctx->pc = 0x48810Cu;
        goto label_48810c;
    }
    ctx->pc = 0x488104u;
    SET_GPR_U32(ctx, 31, 0x48810Cu);
    ctx->pc = 0x4880C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4880C0u, 0x488104u, 0x48810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48810Cu;
label_48810c:
    // 0x48810c: 0x0  nop
    ctx->pc = 0x48810cu;
    // NOP
label_488110:
    // 0x488110: 0xc124620  jal         func_491880
label_488114:
    if (ctx->pc == 0x488114u) {
        ctx->pc = 0x488114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488110u;
        // 0x488114: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488118u;
        goto label_488118;
    }
    ctx->pc = 0x488110u;
    SET_GPR_U32(ctx, 31, 0x488118u);
    ctx->pc = 0x488114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488110u;
    // 0x488114: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x488110u, 0x488118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488118u;
label_488118:
    // 0x488118: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x488118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
label_48811c:
    // 0x48811c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x48811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_488120:
    // 0x488120: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x488120u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_488124:
    // 0x488124: 0xa420e806  sh          $zero, -0x17FA($at)
    ctx->pc = 0x488124u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961158), (uint16_t)GPR_U32(ctx, 0));
label_488128:
    // 0x488128: 0xc140d5c  jal         func_503570
label_48812c:
    if (ctx->pc == 0x48812Cu) {
        ctx->pc = 0x48812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488128u;
        // 0x48812c: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488130u;
        goto label_488130;
    }
    ctx->pc = 0x488128u;
    SET_GPR_U32(ctx, 31, 0x488130u);
    ctx->pc = 0x48812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488128u;
    // 0x48812c: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x503570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503570u, 0x488128u, 0x488130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488130u;
label_488130:
    // 0x488130: 0xc122842  jal         func_48A108
label_488134:
    if (ctx->pc == 0x488134u) {
        ctx->pc = 0x488138u;
        goto label_488138;
    }
    ctx->pc = 0x488130u;
    SET_GPR_U32(ctx, 31, 0x488138u);
    ctx->pc = 0x48A108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A108u, 0x488130u, 0x488138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488138u;
label_488138:
    // 0x488138: 0xc140d5c  jal         func_503570
label_48813c:
    if (ctx->pc == 0x48813Cu) {
        ctx->pc = 0x48813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488138u;
        // 0x48813c: 0x3404ff00  ori         $a0, $zero, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x488140u;
        goto label_488140;
    }
    ctx->pc = 0x488138u;
    SET_GPR_U32(ctx, 31, 0x488140u);
    ctx->pc = 0x48813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488138u;
    // 0x48813c: 0x3404ff00  ori         $a0, $zero, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x503570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503570u, 0x488138u, 0x488140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488140u;
label_488140:
    // 0x488140: 0xc122000  jal         func_488000
label_488144:
    if (ctx->pc == 0x488144u) {
        ctx->pc = 0x488148u;
        goto label_488148;
    }
    ctx->pc = 0x488140u;
    SET_GPR_U32(ctx, 31, 0x488148u);
    ctx->pc = 0x488000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488000u, 0x488140u, 0x488148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488148u;
label_488148:
    // 0x488148: 0xc1237e8  jal         func_48DFA0
label_48814c:
    if (ctx->pc == 0x48814Cu) {
        ctx->pc = 0x488150u;
        goto label_488150;
    }
    ctx->pc = 0x488148u;
    SET_GPR_U32(ctx, 31, 0x488150u);
    ctx->pc = 0x48DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48DFA0u, 0x488148u, 0x488150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488150u;
label_488150:
    // 0x488150: 0x2683c6c0  addiu       $v1, $s4, -0x3940
    ctx->pc = 0x488150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952640));
label_488154:
    // 0x488154: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x488154u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
label_488158:
    // 0x488158: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x488158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_48815c:
    // 0x48815c: 0x2404383e  addiu       $a0, $zero, 0x383E
    ctx->pc = 0x48815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14398));
label_488160:
    // 0x488160: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x488160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_488164:
    // 0x488164: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x488164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_488168:
    // 0x488168: 0x2444003e  addiu       $a0, $v0, 0x3E
    ctx->pc = 0x488168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
label_48816c:
    // 0x48816c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x48816cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_488170:
    // 0x488170: 0xc124620  jal         func_491880
label_488174:
    if (ctx->pc == 0x488174u) {
        ctx->pc = 0x488174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488170u;
        // 0x488174: 0xae040040  sw          $a0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488178u;
        goto label_488178;
    }
    ctx->pc = 0x488170u;
    SET_GPR_U32(ctx, 31, 0x488178u);
    ctx->pc = 0x488174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488170u;
    // 0x488174: 0xae040040  sw          $a0, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x488170u, 0x488178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488178u;
label_488178:
    // 0x488178: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x488178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
label_48817c:
    // 0x48817c: 0xc124620  jal         func_491880
label_488180:
    if (ctx->pc == 0x488180u) {
        ctx->pc = 0x488180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48817Cu;
        // 0x488180: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488184u;
        goto label_488184;
    }
    ctx->pc = 0x48817Cu;
    SET_GPR_U32(ctx, 31, 0x488184u);
    ctx->pc = 0x488180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48817Cu;
    // 0x488180: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x48817Cu, 0x488184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488184u;
label_488184:
    // 0x488184: 0xc122284  jal         func_488A10
label_488188:
    if (ctx->pc == 0x488188u) {
        ctx->pc = 0x488188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488184u;
        // 0x488188: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48818Cu;
        goto label_48818c;
    }
    ctx->pc = 0x488184u;
    SET_GPR_U32(ctx, 31, 0x48818Cu);
    ctx->pc = 0x488188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488184u;
    // 0x488188: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A10u, 0x488184u, 0x48818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48818Cu;
label_48818c:
    // 0x48818c: 0xc124958  jal         func_492560
label_488190:
    if (ctx->pc == 0x488190u) {
        ctx->pc = 0x488190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48818Cu;
        // 0x488190: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488194u;
        goto label_488194;
    }
    ctx->pc = 0x48818Cu;
    SET_GPR_U32(ctx, 31, 0x488194u);
    ctx->pc = 0x488190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48818Cu;
    // 0x488190: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492560u, 0x48818Cu, 0x488194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488194u;
label_488194:
    // 0x488194: 0xc124988  jal         func_492620
label_488198:
    if (ctx->pc == 0x488198u) {
        ctx->pc = 0x48819Cu;
        goto label_48819c;
    }
    ctx->pc = 0x488194u;
    SET_GPR_U32(ctx, 31, 0x48819Cu);
    ctx->pc = 0x492620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492620u, 0x488194u, 0x48819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48819Cu;
label_48819c:
    // 0x48819c: 0xc123992  jal         func_48E648
label_4881a0:
    if (ctx->pc == 0x4881A0u) {
        ctx->pc = 0x4881A4u;
        goto label_4881a4;
    }
    ctx->pc = 0x48819Cu;
    SET_GPR_U32(ctx, 31, 0x4881A4u);
    ctx->pc = 0x48E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E648u, 0x48819Cu, 0x4881A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881A4u;
label_4881a4:
    // 0x4881a4: 0x86030008  lh          $v1, 0x8($s0)
    ctx->pc = 0x4881a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_4881a8:
    // 0x4881a8: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x4881a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_4881ac:
    // 0x4881ac: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_4881b0:
    if (ctx->pc == 0x4881B0u) {
        ctx->pc = 0x4881B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881ACu;
        // 0x4881b0: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4881B4u;
        goto label_4881b4;
    }
    ctx->pc = 0x4881ACu;
    {
        const bool branch_taken_0x4881ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4881ac) {
            ctx->pc = 0x4881B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4881ACu;
            // 0x4881b0: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x4881B4u;
label_4881b4:
    // 0x4881b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4881b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4881b8:
    // 0x4881b8: 0x26639b50  addiu       $v1, $s3, -0x64B0
    ctx->pc = 0x4881b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941520));
label_4881bc:
    // 0x4881bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4881bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4881c0:
    // 0x4881c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4881c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4881c4:
    // 0x4881c4: 0x800008  jr          $a0
label_4881c8:
    if (ctx->pc == 0x4881C8u) {
        ctx->pc = 0x4881CCu;
        goto label_4881cc;
    }
    ctx->pc = 0x4881C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4881C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4881CCu;
label_4881cc:
    // 0x4881cc: 0x0  nop
    ctx->pc = 0x4881ccu;
    // NOP
label_4881d0:
    // 0x4881d0: 0xc124630  jal         func_4918C0
label_4881d4:
    if (ctx->pc == 0x4881D4u) {
        ctx->pc = 0x4881D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881D0u;
        // 0x4881d4: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4881D8u;
        goto label_4881d8;
    }
    ctx->pc = 0x4881D0u;
    SET_GPR_U32(ctx, 31, 0x4881D8u);
    ctx->pc = 0x4881D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881D0u;
    // 0x4881d4: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918C0u, 0x4881D0u, 0x4881D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881D8u;
label_4881d8:
    // 0x4881d8: 0x10000018  b           . + 4 + (0x18 << 2)
label_4881dc:
    if (ctx->pc == 0x4881DCu) {
        ctx->pc = 0x4881E0u;
        goto label_4881e0;
    }
    ctx->pc = 0x4881D8u;
    {
        const bool branch_taken_0x4881d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4881d8) {
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x4881E0u;
label_4881e0:
    // 0x4881e0: 0xc1239a8  jal         func_48E6A0
label_4881e4:
    if (ctx->pc == 0x4881E4u) {
        ctx->pc = 0x4881E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881E0u;
        // 0x4881e4: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4881E8u;
        goto label_4881e8;
    }
    ctx->pc = 0x4881E0u;
    SET_GPR_U32(ctx, 31, 0x4881E8u);
    ctx->pc = 0x4881E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881E0u;
    // 0x4881e4: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E6A0u, 0x4881E0u, 0x4881E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881E8u;
label_4881e8:
    // 0x4881e8: 0x10000014  b           . + 4 + (0x14 << 2)
label_4881ec:
    if (ctx->pc == 0x4881ECu) {
        ctx->pc = 0x4881F0u;
        goto label_4881f0;
    }
    ctx->pc = 0x4881E8u;
    {
        const bool branch_taken_0x4881e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4881e8) {
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x4881F0u;
label_4881f0:
    // 0x4881f0: 0xc127926  jal         func_49E498
label_4881f4:
    if (ctx->pc == 0x4881F4u) {
        ctx->pc = 0x4881F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4881F0u;
        // 0x4881f4: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4881F8u;
        goto label_4881f8;
    }
    ctx->pc = 0x4881F0u;
    SET_GPR_U32(ctx, 31, 0x4881F8u);
    ctx->pc = 0x4881F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4881F0u;
    // 0x4881f4: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E498u, 0x4881F0u, 0x4881F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4881F8u;
label_4881f8:
    // 0x4881f8: 0x10000010  b           . + 4 + (0x10 << 2)
label_4881fc:
    if (ctx->pc == 0x4881FCu) {
        ctx->pc = 0x488200u;
        goto label_488200;
    }
    ctx->pc = 0x4881F8u;
    {
        const bool branch_taken_0x4881f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4881f8) {
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x488200u;
label_488200:
    // 0x488200: 0xc12a650  jal         func_4A9940
label_488204:
    if (ctx->pc == 0x488204u) {
        ctx->pc = 0x488204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488200u;
        // 0x488204: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488208u;
        goto label_488208;
    }
    ctx->pc = 0x488200u;
    SET_GPR_U32(ctx, 31, 0x488208u);
    ctx->pc = 0x488204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488200u;
    // 0x488204: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9940u, 0x488200u, 0x488208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488208u;
label_488208:
    // 0x488208: 0x1000000c  b           . + 4 + (0xC << 2)
label_48820c:
    if (ctx->pc == 0x48820Cu) {
        ctx->pc = 0x488210u;
        goto label_488210;
    }
    ctx->pc = 0x488208u;
    {
        const bool branch_taken_0x488208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488208) {
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x488210u;
label_488210:
    // 0x488210: 0xc123ac8  jal         func_48EB20
label_488214:
    if (ctx->pc == 0x488214u) {
        ctx->pc = 0x488214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488210u;
        // 0x488214: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488218u;
        goto label_488218;
    }
    ctx->pc = 0x488210u;
    SET_GPR_U32(ctx, 31, 0x488218u);
    ctx->pc = 0x488214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488210u;
    // 0x488214: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EB20u, 0x488210u, 0x488218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488218u;
label_488218:
    // 0x488218: 0x10000008  b           . + 4 + (0x8 << 2)
label_48821c:
    if (ctx->pc == 0x48821Cu) {
        ctx->pc = 0x488220u;
        goto label_488220;
    }
    ctx->pc = 0x488218u;
    {
        const bool branch_taken_0x488218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488218) {
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x488220u;
label_488220:
    // 0x488220: 0xc122c76  jal         func_48B1D8
label_488224:
    if (ctx->pc == 0x488224u) {
        ctx->pc = 0x488224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488220u;
        // 0x488224: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488228u;
        goto label_488228;
    }
    ctx->pc = 0x488220u;
    SET_GPR_U32(ctx, 31, 0x488228u);
    ctx->pc = 0x488224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488220u;
    // 0x488224: 0x2650d680  addiu       $s0, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B1D8u, 0x488220u, 0x488228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488228u;
label_488228:
    // 0x488228: 0x10000004  b           . + 4 + (0x4 << 2)
label_48822c:
    if (ctx->pc == 0x48822Cu) {
        ctx->pc = 0x488230u;
        goto label_488230;
    }
    ctx->pc = 0x488228u;
    {
        const bool branch_taken_0x488228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488228) {
            ctx->pc = 0x48823Cu;
            goto label_48823c;
        }
    }
    ctx->pc = 0x488230u;
label_488230:
    // 0x488230: 0xc140da2  jal         func_503688
label_488234:
    if (ctx->pc == 0x488234u) {
        ctx->pc = 0x488238u;
        goto label_488238;
    }
    ctx->pc = 0x488230u;
    SET_GPR_U32(ctx, 31, 0x488238u);
    ctx->pc = 0x503688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503688u, 0x488230u, 0x488238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488238u;
label_488238:
    // 0x488238: 0x2650d680  addiu       $s0, $s2, -0x2980
    ctx->pc = 0x488238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
label_48823c:
    // 0x48823c: 0xc140d6a  jal         func_5035A8
label_488240:
    if (ctx->pc == 0x488240u) {
        ctx->pc = 0x488240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48823Cu;
        // 0x488240: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488244u;
        goto label_488244;
    }
    ctx->pc = 0x48823Cu;
    SET_GPR_U32(ctx, 31, 0x488244u);
    ctx->pc = 0x488240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48823Cu;
    // 0x488240: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5035A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5035A8u, 0x48823Cu, 0x488244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488244u;
label_488244:
    // 0x488244: 0xc1234d2  jal         func_48D348
label_488248:
    if (ctx->pc == 0x488248u) {
        ctx->pc = 0x488248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488244u;
        // 0x488248: 0xa60000b8  sh          $zero, 0xB8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 184), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48824Cu;
        goto label_48824c;
    }
    ctx->pc = 0x488244u;
    SET_GPR_U32(ctx, 31, 0x48824Cu);
    ctx->pc = 0x488248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488244u;
    // 0x488248: 0xa60000b8  sh          $zero, 0xB8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 184), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D348u, 0x488244u, 0x48824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48824Cu;
label_48824c:
    // 0x48824c: 0xc1232ba  jal         func_48CAE8
label_488250:
    if (ctx->pc == 0x488250u) {
        ctx->pc = 0x488254u;
        goto label_488254;
    }
    ctx->pc = 0x48824Cu;
    SET_GPR_U32(ctx, 31, 0x488254u);
    ctx->pc = 0x48CAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CAE8u, 0x48824Cu, 0x488254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488254u;
label_488254:
    // 0x488254: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x488254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_488258:
    // 0x488258: 0xc124980  jal         func_492600
label_48825c:
    if (ctx->pc == 0x48825Cu) {
        ctx->pc = 0x48825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488258u;
        // 0x48825c: 0xa4510000  sh          $s1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488260u;
        goto label_488260;
    }
    ctx->pc = 0x488258u;
    SET_GPR_U32(ctx, 31, 0x488260u);
    ctx->pc = 0x48825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488258u;
    // 0x48825c: 0xa4510000  sh          $s1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492600u, 0x488258u, 0x488260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488260u;
label_488260:
    // 0x488260: 0xc1246a0  jal         func_491A80
label_488264:
    if (ctx->pc == 0x488264u) {
        ctx->pc = 0x488268u;
        goto label_488268;
    }
    ctx->pc = 0x488260u;
    SET_GPR_U32(ctx, 31, 0x488268u);
    ctx->pc = 0x491A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491A80u, 0x488260u, 0x488268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488268u;
label_488268:
    // 0x488268: 0xc1248f0  jal         func_4923C0
label_48826c:
    if (ctx->pc == 0x48826Cu) {
        ctx->pc = 0x488270u;
        goto label_488270;
    }
    ctx->pc = 0x488268u;
    SET_GPR_U32(ctx, 31, 0x488270u);
    ctx->pc = 0x4923C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4923C0u, 0x488268u, 0x488270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488270u;
label_488270:
    // 0x488270: 0xc129c30  jal         func_4A70C0
label_488274:
    if (ctx->pc == 0x488274u) {
        ctx->pc = 0x488278u;
        goto label_488278;
    }
    ctx->pc = 0x488270u;
    SET_GPR_U32(ctx, 31, 0x488278u);
    ctx->pc = 0x4A70C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A70C0u, 0x488270u, 0x488278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488278u;
label_488278:
    // 0x488278: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x488278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_48827c:
    // 0x48827c: 0xc124968  jal         func_4925A0
label_488280:
    if (ctx->pc == 0x488280u) {
        ctx->pc = 0x488280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48827Cu;
        // 0x488280: 0xa4510000  sh          $s1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488284u;
        goto label_488284;
    }
    ctx->pc = 0x48827Cu;
    SET_GPR_U32(ctx, 31, 0x488284u);
    ctx->pc = 0x488280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48827Cu;
    // 0x488280: 0xa4510000  sh          $s1, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4925A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4925A0u, 0x48827Cu, 0x488284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488284u;
label_488284:
    // 0x488284: 0xc12202e  jal         func_4880B8
label_488288:
    if (ctx->pc == 0x488288u) {
        ctx->pc = 0x48828Cu;
        goto label_48828c;
    }
    ctx->pc = 0x488284u;
    SET_GPR_U32(ctx, 31, 0x48828Cu);
    ctx->pc = 0x4880B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4880B8u, 0x488284u, 0x48828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48828Cu;
label_48828c:
    // 0x48828c: 0xc1248ea  jal         func_4923A8
label_488290:
    if (ctx->pc == 0x488290u) {
        ctx->pc = 0x488294u;
        goto label_488294;
    }
    ctx->pc = 0x48828Cu;
    SET_GPR_U32(ctx, 31, 0x488294u);
    ctx->pc = 0x4923A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4923A8u, 0x48828Cu, 0x488294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488294u;
label_488294:
    // 0x488294: 0xc144e74  jal         func_5139D0
label_488298:
    if (ctx->pc == 0x488298u) {
        ctx->pc = 0x48829Cu;
        goto label_48829c;
    }
    ctx->pc = 0x488294u;
    SET_GPR_U32(ctx, 31, 0x48829Cu);
    ctx->pc = 0x5139D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5139D0u, 0x488294u, 0x48829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48829Cu;
label_48829c:
    // 0x48829c: 0xc13e998  jal         func_4FA660
label_4882a0:
    if (ctx->pc == 0x4882A0u) {
        ctx->pc = 0x4882A4u;
        goto label_4882a4;
    }
    ctx->pc = 0x48829Cu;
    SET_GPR_U32(ctx, 31, 0x4882A4u);
    ctx->pc = 0x4FA660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FA660u, 0x48829Cu, 0x4882A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882A4u;
label_4882a4:
    // 0x4882a4: 0xc123caa  jal         func_48F2A8
label_4882a8:
    if (ctx->pc == 0x4882A8u) {
        ctx->pc = 0x4882ACu;
        goto label_4882ac;
    }
    ctx->pc = 0x4882A4u;
    SET_GPR_U32(ctx, 31, 0x4882ACu);
    ctx->pc = 0x48F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F2A8u, 0x4882A4u, 0x4882ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882ACu;
label_4882ac:
    // 0x4882ac: 0x1000ff98  b           . + 4 + (-0x68 << 2)
label_4882b0:
    if (ctx->pc == 0x4882B0u) {
        ctx->pc = 0x4882B4u;
        goto label_4882b4;
    }
    ctx->pc = 0x4882ACu;
    {
        const bool branch_taken_0x4882ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4882ac) {
            ctx->pc = 0x488110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488110;
        }
    }
    ctx->pc = 0x4882B4u;
label_4882b4:
    // 0x4882b4: 0x0  nop
    ctx->pc = 0x4882b4u;
    // NOP
label_4882b8:
    // 0x4882b8: 0xc140d60  jal         func_503580
label_4882bc:
    if (ctx->pc == 0x4882BCu) {
        ctx->pc = 0x4882C0u;
        goto label_4882c0;
    }
    ctx->pc = 0x4882B8u;
    SET_GPR_U32(ctx, 31, 0x4882C0u);
    ctx->pc = 0x503580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503580u, 0x4882B8u, 0x4882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4882C0u;
label_4882c0:
    // 0x4882c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4882c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4882c4:
    // 0x4882c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4882c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4882c8:
    // 0x4882c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4882c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4882cc:
    // 0x4882cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4882ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4882d0:
    // 0x4882d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4882d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4882d4:
    // 0x4882d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4882d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4882d8:
    // 0x4882d8: 0x3e00008  jr          $ra
label_4882dc:
    if (ctx->pc == 0x4882DCu) {
        ctx->pc = 0x4882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882D8u;
        // 0x4882dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4882E0u;
        goto label_fallthrough_0x4882d8;
    }
    ctx->pc = 0x4882D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4882DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4882D8u;
        // 0x4882dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4882D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4882d8:
    ctx->pc = 0x4882E0u;
}
