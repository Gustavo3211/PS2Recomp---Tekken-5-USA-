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

// Function: sub_00D060D0
// Address: 0xd060d0 - 0xd06370
void sub_00D060D0_0xd060d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00D060D0_0xd060d0");
#endif

    switch (ctx->pc) {
        case 0xd060f4u: goto label_d060f4;
        case 0xd060fcu: goto label_d060fc;
        case 0xd06104u: goto label_d06104;
        case 0xd06124u: goto label_d06124;
        case 0xd06138u: goto label_d06138;
        case 0xd06140u: goto label_d06140;
        case 0xd06148u: goto label_d06148;
        case 0xd06150u: goto label_d06150;
        case 0xd06158u: goto label_d06158;
        case 0xd06168u: goto label_d06168;
        case 0xd06170u: goto label_d06170;
        case 0xd06178u: goto label_d06178;
        case 0xd06180u: goto label_d06180;
        case 0xd061a0u: goto label_d061a0;
        case 0xd061b0u: goto label_d061b0;
        case 0xd061b8u: goto label_d061b8;
        case 0xd061c0u: goto label_d061c0;
        case 0xd061c8u: goto label_d061c8;
        case 0xd061d0u: goto label_d061d0;
        case 0xd061d8u: goto label_d061d8;
        case 0xd061e0u: goto label_d061e0;
        case 0xd061e8u: goto label_d061e8;
        case 0xd061f0u: goto label_d061f0;
        case 0xd061fcu: goto label_d061fc;
        case 0xd06218u: goto label_d06218;
        case 0xd06220u: goto label_d06220;
        case 0xd06228u: goto label_d06228;
        case 0xd0623cu: goto label_d0623c;
        case 0xd06258u: goto label_d06258;
        case 0xd06260u: goto label_d06260;
        case 0xd06268u: goto label_d06268;
        case 0xd06280u: goto label_d06280;
        case 0xd062a0u: goto label_d062a0;
        case 0xd062a8u: goto label_d062a8;
        case 0xd062b8u: goto label_d062b8;
        case 0xd062c0u: goto label_d062c0;
        case 0xd062c8u: goto label_d062c8;
        case 0xd062d8u: goto label_d062d8;
        case 0xd062fcu: goto label_d062fc;
        case 0xd06308u: goto label_d06308;
        case 0xd06310u: goto label_d06310;
        case 0xd06320u: goto label_d06320;
        case 0xd06340u: goto label_d06340;
        case 0xd06348u: goto label_d06348;
        case 0xd06350u: goto label_d06350;
        default: break;
    }

    ctx->pc = 0xd060d0u;

    // 0xd060d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0xd060d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0xd060d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0xd060d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0xd060d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0xd060d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0xd060dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0xd060dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0xd060e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0xd060e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0xd060e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0xd060e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0xd060e8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0xd060e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0xd060ec: 0xc0449ca  jal         func_112728
    ctx->pc = 0xD060ECu;
    SET_GPR_U32(ctx, 31, 0xD060F4u);
    ctx->pc = 0xD060F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD060ECu;
    // 0xd060f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0xD060ECu, 0xD060F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD060F4u;
label_d060f4:
    // 0xd060f4: 0xc047134  jal         func_11C4D0
    ctx->pc = 0xD060F4u;
    SET_GPR_U32(ctx, 31, 0xD060FCu);
    ctx->pc = 0xD060F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD060F4u;
    // 0xd060f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C4D0u, 0xD060F4u, 0xD060FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD060FCu;
label_d060fc:
    // 0xd060fc: 0xc047322  jal         func_11CC88
    ctx->pc = 0xD060FCu;
    SET_GPR_U32(ctx, 31, 0xD06104u);
    ctx->pc = 0x11CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC88u, 0xD060FCu, 0xD06104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06104u;
label_d06104:
    // 0xd06104: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0xd06104u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06108: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0xd06108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0xd0610c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0xD0610Cu;
    {
        const bool branch_taken_0xd0610c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD06110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD0610Cu;
        // 0xd06110: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0xd0610c) {
            ctx->pc = 0xD06130u;
            goto label_d06130;
        }
    }
    ctx->pc = 0xD06114u;
    // 0xd06114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0xD06114u;
    {
        const bool branch_taken_0xd06114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0xd06114) {
            ctx->pc = 0xD06130u;
            goto label_d06130;
        }
    }
    ctx->pc = 0xD0611Cu;
    // 0xd0611c: 0xc04735a  jal         func_11CD68
    ctx->pc = 0xD0611Cu;
    SET_GPR_U32(ctx, 31, 0xD06124u);
    ctx->pc = 0xD06120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD0611Cu;
    // 0xd06120: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD68u, 0xD0611Cu, 0xD06124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06124u;
label_d06124:
    // 0xd06124: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0xD06124u;
    {
        const bool branch_taken_0xd06124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD06128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06124u;
        // 0xd06128: 0x3c1000d1  lui         $s0, 0xD1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)209 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06124) {
            ctx->pc = 0xD06140u;
            goto label_d06140;
        }
    }
    ctx->pc = 0xD0612Cu;
    // 0xd0612c: 0x0  nop
    ctx->pc = 0xd0612cu;
    // NOP
label_d06130:
    // 0xd06130: 0xc04735a  jal         func_11CD68
    ctx->pc = 0xD06130u;
    SET_GPR_U32(ctx, 31, 0xD06138u);
    ctx->pc = 0xD06134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06130u;
    // 0xd06134: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD68u, 0xD06130u, 0xD06138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06138u;
label_d06138:
    // 0xd06138: 0x3c1000d1  lui         $s0, 0xD1
    ctx->pc = 0xd06138u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)209 << 16));
    // 0xd0613c: 0x0  nop
    ctx->pc = 0xd0613cu;
    // NOP
label_d06140:
    // 0xd06140: 0xc046226  jal         func_118898
    ctx->pc = 0xD06140u;
    SET_GPR_U32(ctx, 31, 0xD06148u);
    ctx->pc = 0xD06144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06140u;
    // 0xd06144: 0x26046380  addiu       $a0, $s0, 0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0xD06140u, 0xD06148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06148u;
label_d06148:
    // 0xd06148: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0xD06148u;
    {
        const bool branch_taken_0xd06148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0xd06148) {
            ctx->pc = 0xD06140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06140;
        }
    }
    ctx->pc = 0xD06150u;
label_d06150:
    // 0xd06150: 0xc046212  jal         func_118848
    ctx->pc = 0xD06150u;
    SET_GPR_U32(ctx, 31, 0xD06158u);
    ctx->pc = 0x118848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118848u, 0xD06150u, 0xD06158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06158u;
label_d06158:
    // 0xd06158: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0xD06158u;
    {
        const bool branch_taken_0xd06158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0xd06158) {
            ctx->pc = 0xD06150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06150;
        }
    }
    ctx->pc = 0xD06160u;
    // 0xd06160: 0xc3417a0  jal         func_D05E80
    ctx->pc = 0xD06160u;
    SET_GPR_U32(ctx, 31, 0xD06168u);
    ctx->pc = 0xD06164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06160u;
    // 0xd06164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD05E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD05E80u, 0xD06160u, 0xD06168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06168u;
label_d06168:
    // 0xd06168: 0xc0449ca  jal         func_112728
    ctx->pc = 0xD06168u;
    SET_GPR_U32(ctx, 31, 0xD06170u);
    ctx->pc = 0xD0616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06168u;
    // 0xd0616c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0xD06168u, 0xD06170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06170u;
label_d06170:
    // 0xd06170: 0xc047134  jal         func_11C4D0
    ctx->pc = 0xD06170u;
    SET_GPR_U32(ctx, 31, 0xD06178u);
    ctx->pc = 0xD06174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06170u;
    // 0xd06174: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C4D0u, 0xD06170u, 0xD06178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06178u;
label_d06178:
    // 0xd06178: 0xc047322  jal         func_11CC88
    ctx->pc = 0xD06178u;
    SET_GPR_U32(ctx, 31, 0xD06180u);
    ctx->pc = 0x11CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC88u, 0xD06178u, 0xD06180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06180u;
label_d06180:
    // 0xd06180: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0xd06180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06184: 0x28620012  slti        $v0, $v1, 0x12
    ctx->pc = 0xd06184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0xd06188: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0xD06188u;
    {
        const bool branch_taken_0xd06188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD0618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06188u;
        // 0xd0618c: 0x28620014  slti        $v0, $v1, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06188) {
            ctx->pc = 0xD061A8u;
            goto label_d061a8;
        }
    }
    ctx->pc = 0xD06190u;
    // 0xd06190: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0xD06190u;
    {
        const bool branch_taken_0xd06190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0xd06190) {
            ctx->pc = 0xD061A8u;
            goto label_d061a8;
        }
    }
    ctx->pc = 0xD06198u;
    // 0xd06198: 0xc04735a  jal         func_11CD68
    ctx->pc = 0xD06198u;
    SET_GPR_U32(ctx, 31, 0xD061A0u);
    ctx->pc = 0xD0619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06198u;
    // 0xd0619c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD68u, 0xD06198u, 0xD061A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061A0u;
label_d061a0:
    // 0xd061a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0xD061A0u;
    {
        const bool branch_taken_0xd061a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0xd061a0) {
            ctx->pc = 0xD061B0u;
            goto label_d061b0;
        }
    }
    ctx->pc = 0xD061A8u;
label_d061a8:
    // 0xd061a8: 0xc04735a  jal         func_11CD68
    ctx->pc = 0xD061A8u;
    SET_GPR_U32(ctx, 31, 0xD061B0u);
    ctx->pc = 0xD061ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD061A8u;
    // 0xd061ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD68u, 0xD061A8u, 0xD061B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061B0u;
label_d061b0:
    // 0xd061b0: 0xc047274  jal         func_11C9D0
    ctx->pc = 0xD061B0u;
    SET_GPR_U32(ctx, 31, 0xD061B8u);
    ctx->pc = 0xD061B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD061B0u;
    // 0xd061b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C9D0u, 0xD061B0u, 0xD061B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061B8u;
label_d061b8:
    // 0xd061b8: 0xc0449ca  jal         func_112728
    ctx->pc = 0xD061B8u;
    SET_GPR_U32(ctx, 31, 0xD061C0u);
    ctx->pc = 0xD061BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD061B8u;
    // 0xd061bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112728u, 0xD061B8u, 0xD061C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061C0u;
label_d061c0:
    // 0xd061c0: 0xc045ebe  jal         func_117AF8
    ctx->pc = 0xD061C0u;
    SET_GPR_U32(ctx, 31, 0xD061C8u);
    ctx->pc = 0xD061C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD061C0u;
    // 0xd061c4: 0x3c1000d1  lui         $s0, 0xD1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)209 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AF8u, 0xD061C0u, 0xD061C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061C8u;
label_d061c8:
    // 0xd061c8: 0xc0450a2  jal         func_114288
    ctx->pc = 0xD061C8u;
    SET_GPR_U32(ctx, 31, 0xD061D0u);
    ctx->pc = 0x114288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114288u, 0xD061C8u, 0xD061D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061D0u;
label_d061d0:
    // 0xd061d0: 0xc045d06  jal         func_117418
    ctx->pc = 0xD061D0u;
    SET_GPR_U32(ctx, 31, 0xD061D8u);
    ctx->pc = 0x117418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117418u, 0xD061D0u, 0xD061D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061D8u;
label_d061d8:
    // 0xd061d8: 0xc04098c  jal         func_102630
    ctx->pc = 0xD061D8u;
    SET_GPR_U32(ctx, 31, 0xD061E0u);
    ctx->pc = 0xD061DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD061D8u;
    // 0xd061dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0xD061D8u, 0xD061E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061E0u;
label_d061e0:
    // 0xd061e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0xD061E0u;
    {
        const bool branch_taken_0xd061e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD061E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD061E0u;
        // 0xd061e4: 0x26046398  addiu       $a0, $s0, 0x6398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25496));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd061e0) {
            ctx->pc = 0xD061F4u;
            goto label_d061f4;
        }
    }
    ctx->pc = 0xD061E8u;
label_d061e8:
    // 0xd061e8: 0xc044106  jal         func_110418
    ctx->pc = 0xD061E8u;
    SET_GPR_U32(ctx, 31, 0xD061F0u);
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0xD061E8u, 0xD061F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061F0u;
label_d061f0:
    // 0xd061f0: 0x26046398  addiu       $a0, $s0, 0x6398
    ctx->pc = 0xd061f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25496));
label_d061f4:
    // 0xd061f4: 0xc04513c  jal         func_1144F0
    ctx->pc = 0xD061F4u;
    SET_GPR_U32(ctx, 31, 0xD061FCu);
    ctx->pc = 0xD061F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD061F4u;
    // 0xd061f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0xD061F4u, 0xD061FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD061FCu;
label_d061fc:
    // 0xd061fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0xd061fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06200: 0x620fff9  bltz        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0xD06200u;
    {
        const bool branch_taken_0xd06200 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0xD06204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06200u;
        // 0xd06204: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06200) {
            ctx->pc = 0xD061E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d061e8;
        }
    }
    ctx->pc = 0xD06208u;
    // 0xd06208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd06208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd0620c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0xd0620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0xd06210: 0xc04523e  jal         func_1148F8
    ctx->pc = 0xD06210u;
    SET_GPR_U32(ctx, 31, 0xD06218u);
    ctx->pc = 0xD06214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06210u;
    // 0xd06214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0xD06210u, 0xD06218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06218u;
label_d06218:
    // 0xd06218: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0xD06218u;
    {
        const bool branch_taken_0xd06218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD0621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06218u;
        // 0xd0621c: 0x3c1300d5  lui         $s3, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)213 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06218) {
            ctx->pc = 0xD06228u;
            goto label_d06228;
        }
    }
    ctx->pc = 0xD06220u;
label_d06220:
    // 0xd06220: 0xc044106  jal         func_110418
    ctx->pc = 0xD06220u;
    SET_GPR_U32(ctx, 31, 0xD06228u);
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0xD06220u, 0xD06228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06228u;
label_d06228:
    // 0xd06228: 0x26706600  addiu       $s0, $s3, 0x6600
    ctx->pc = 0xd06228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 26112));
    // 0xd0622c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd0622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0xd06230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06234: 0xc0452ce  jal         func_114B38
    ctx->pc = 0xD06234u;
    SET_GPR_U32(ctx, 31, 0xD0623Cu);
    ctx->pc = 0xD06238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06234u;
    // 0xd06238: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0xD06234u, 0xD0623Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD0623Cu;
label_d0623c:
    // 0xd0623c: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0xd0623cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0xd06240: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0xD06240u;
    {
        const bool branch_taken_0xd06240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD06244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06240u;
        // 0xd06244: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06240) {
            ctx->pc = 0xD06220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06220;
        }
    }
    ctx->pc = 0xD06248u;
    // 0xd06248: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0xd06248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0xd0624c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd0624cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06250: 0xc04523e  jal         func_1148F8
    ctx->pc = 0xD06250u;
    SET_GPR_U32(ctx, 31, 0xD06258u);
    ctx->pc = 0xD06254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06250u;
    // 0xd06254: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0xD06250u, 0xD06258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06258u;
label_d06258:
    // 0xd06258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0xD06258u;
    {
        const bool branch_taken_0xd06258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD0625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06258u;
        // 0xd0625c: 0x3c1400d5  lui         $s4, 0xD5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)213 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06258) {
            ctx->pc = 0xD06268u;
            goto label_d06268;
        }
    }
    ctx->pc = 0xD06260u;
label_d06260:
    // 0xd06260: 0xc044106  jal         func_110418
    ctx->pc = 0xD06260u;
    SET_GPR_U32(ctx, 31, 0xD06268u);
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0xD06260u, 0xD06268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06268u;
label_d06268:
    // 0xd06268: 0x26706600  addiu       $s0, $s3, 0x6600
    ctx->pc = 0xd06268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 26112));
    // 0xd0626c: 0x26926900  addiu       $s2, $s4, 0x6900
    ctx->pc = 0xd0626cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 26880));
    // 0xd06270: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0xd06270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0xd06274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd06274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06278: 0xc0452ce  jal         func_114B38
    ctx->pc = 0xD06278u;
    SET_GPR_U32(ctx, 31, 0xD06280u);
    ctx->pc = 0xD0627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06278u;
    // 0xd0627c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0xD06278u, 0xD06280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06280u;
label_d06280:
    // 0xd06280: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0xd06280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0xd06284: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0xd06284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0xd06288: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0xD06288u;
    {
        const bool branch_taken_0xd06288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD0628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06288u;
        // 0xd0628c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06288) {
            ctx->pc = 0xD06260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06260;
        }
    }
    ctx->pc = 0xD06290u;
    // 0xd06290: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0xd06290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0xd06294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0xd06294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06298: 0xc341804  jal         func_D06010
    ctx->pc = 0xD06298u;
    SET_GPR_U32(ctx, 31, 0xD062A0u);
    ctx->pc = 0xD0629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06298u;
    // 0xd0629c: 0x24a50180  addiu       $a1, $a1, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD06010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD06010u, 0xD06298u, 0xD062A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD062A0u;
label_d062a0:
    // 0xd062a0: 0xc043d88  jal         func_10F620
    ctx->pc = 0xD062A0u;
    SET_GPR_U32(ctx, 31, 0xD062A8u);
    ctx->pc = 0xD062A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD062A0u;
    // 0xd062a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0xD062A0u, 0xD062A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD062A8u;
label_d062a8:
    // 0xd062a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd062a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd062ac: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0xd062acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0xd062b0: 0xc04523e  jal         func_1148F8
    ctx->pc = 0xD062B0u;
    SET_GPR_U32(ctx, 31, 0xD062B8u);
    ctx->pc = 0xD062B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD062B0u;
    // 0xd062b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0xD062B0u, 0xD062B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD062B8u;
label_d062b8:
    // 0xd062b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0xD062B8u;
    {
        const bool branch_taken_0xd062b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD062BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD062B8u;
        // 0xd062bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd062b8) {
            ctx->pc = 0xD062CCu;
            goto label_d062cc;
        }
    }
    ctx->pc = 0xD062C0u;
label_d062c0:
    // 0xd062c0: 0xc044106  jal         func_110418
    ctx->pc = 0xD062C0u;
    SET_GPR_U32(ctx, 31, 0xD062C8u);
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0xD062C0u, 0xD062C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD062C8u;
label_d062c8:
    // 0xd062c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd062c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_d062cc:
    // 0xd062cc: 0x26656600  addiu       $a1, $s3, 0x6600
    ctx->pc = 0xd062ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 26112));
    // 0xd062d0: 0xc0452ce  jal         func_114B38
    ctx->pc = 0xD062D0u;
    SET_GPR_U32(ctx, 31, 0xD062D8u);
    ctx->pc = 0xD062D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD062D0u;
    // 0xd062d4: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0xD062D0u, 0xD062D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD062D8u;
label_d062d8:
    // 0xd062d8: 0x2c420200  sltiu       $v0, $v0, 0x200
    ctx->pc = 0xd062d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0xd062dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0xD062DCu;
    {
        const bool branch_taken_0xd062dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD062E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD062DCu;
        // 0xd062e0: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd062dc) {
            ctx->pc = 0xD062C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d062c0;
        }
    }
    ctx->pc = 0xD062E4u;
    // 0xd062e4: 0x26626600  addiu       $v0, $s3, 0x6600
    ctx->pc = 0xd062e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 26112));
    // 0xd062e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd062e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd062ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0xd062ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0xd062f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0xd062f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd062f4: 0xc04523e  jal         func_1148F8
    ctx->pc = 0xD062F4u;
    SET_GPR_U32(ctx, 31, 0xD062FCu);
    ctx->pc = 0xD062F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD062F4u;
    // 0xd062f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0xD062F4u, 0xD062FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD062FCu;
label_d062fc:
    // 0xd062fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0xD062FCu;
    {
        const bool branch_taken_0xd062fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0xD06300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD062FCu;
        // 0xd06300: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd062fc) {
            ctx->pc = 0xD06314u;
            goto label_d06314;
        }
    }
    ctx->pc = 0xD06304u;
    // 0xd06304: 0x0  nop
    ctx->pc = 0xd06304u;
    // NOP
label_d06308:
    // 0xd06308: 0xc044106  jal         func_110418
    ctx->pc = 0xD06308u;
    SET_GPR_U32(ctx, 31, 0xD06310u);
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0xD06308u, 0xD06310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06310u;
label_d06310:
    // 0xd06310: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0xd06310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_d06314:
    // 0xd06314: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0xd06314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0xd06318: 0xc0452ce  jal         func_114B38
    ctx->pc = 0xD06318u;
    SET_GPR_U32(ctx, 31, 0xD06320u);
    ctx->pc = 0xD0631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06318u;
    // 0xd0631c: 0x26856900  addiu       $a1, $s4, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0xD06318u, 0xD06320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06320u;
label_d06320:
    // 0xd06320: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0xd06320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0xd06324: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0xd06324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0xd06328: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0xD06328u;
    {
        const bool branch_taken_0xd06328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0xD0632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06328u;
        // 0xd0632c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0xd06328) {
            ctx->pc = 0xD06308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_d06308;
        }
    }
    ctx->pc = 0xD06330u;
    // 0xd06330: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0xd06330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0xd06334: 0x26846900  addiu       $a0, $s4, 0x6900
    ctx->pc = 0xd06334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 26880));
    // 0xd06338: 0xc341804  jal         func_D06010
    ctx->pc = 0xD06338u;
    SET_GPR_U32(ctx, 31, 0xD06340u);
    ctx->pc = 0xD0633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06338u;
    // 0xd0633c: 0x24a58000  addiu       $a1, $a1, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD06010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD06010u, 0xD06338u, 0xD06340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06340u;
label_d06340:
    // 0xd06340: 0xc043d88  jal         func_10F620
    ctx->pc = 0xD06340u;
    SET_GPR_U32(ctx, 31, 0xD06348u);
    ctx->pc = 0xD06344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06340u;
    // 0xd06344: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0xD06340u, 0xD06348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06348u;
label_d06348:
    // 0xd06348: 0xc0451e0  jal         func_114780
    ctx->pc = 0xD06348u;
    SET_GPR_U32(ctx, 31, 0xD06350u);
    ctx->pc = 0xD0634Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0xD06348u;
    // 0xd0634c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114780u, 0xD06348u, 0xD06350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0xD06350u;
label_d06350:
    // 0xd06350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0xd06350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0xd06354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0xd06354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0xd06358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0xd06358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0xd0635c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0xd0635cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0xd06360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0xd06360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0xd06364: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0xd06364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0xd06368: 0x3e00008  jr          $ra
    ctx->pc = 0xD06368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0xD0636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0xD06368u;
        // 0xd0636c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0xD06368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0xD06370u;
}
