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

// Function: sub_0033E768
// Address: 0x33e768 - 0x33e838
void sub_0033E768_0x33e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E768_0x33e768");
#endif

    switch (ctx->pc) {
        case 0x33e768u: goto label_33e768;
        case 0x33e76cu: goto label_33e76c;
        case 0x33e770u: goto label_33e770;
        case 0x33e774u: goto label_33e774;
        case 0x33e778u: goto label_33e778;
        case 0x33e77cu: goto label_33e77c;
        case 0x33e780u: goto label_33e780;
        case 0x33e784u: goto label_33e784;
        case 0x33e788u: goto label_33e788;
        case 0x33e78cu: goto label_33e78c;
        case 0x33e790u: goto label_33e790;
        case 0x33e794u: goto label_33e794;
        case 0x33e798u: goto label_33e798;
        case 0x33e79cu: goto label_33e79c;
        case 0x33e7a0u: goto label_33e7a0;
        case 0x33e7a4u: goto label_33e7a4;
        case 0x33e7a8u: goto label_33e7a8;
        case 0x33e7acu: goto label_33e7ac;
        case 0x33e7b0u: goto label_33e7b0;
        case 0x33e7b4u: goto label_33e7b4;
        case 0x33e7b8u: goto label_33e7b8;
        case 0x33e7bcu: goto label_33e7bc;
        case 0x33e7c0u: goto label_33e7c0;
        case 0x33e7c4u: goto label_33e7c4;
        case 0x33e7c8u: goto label_33e7c8;
        case 0x33e7ccu: goto label_33e7cc;
        case 0x33e7d0u: goto label_33e7d0;
        case 0x33e7d4u: goto label_33e7d4;
        case 0x33e7d8u: goto label_33e7d8;
        case 0x33e7dcu: goto label_33e7dc;
        case 0x33e7e0u: goto label_33e7e0;
        case 0x33e7e4u: goto label_33e7e4;
        case 0x33e7e8u: goto label_33e7e8;
        case 0x33e7ecu: goto label_33e7ec;
        case 0x33e7f0u: goto label_33e7f0;
        case 0x33e7f4u: goto label_33e7f4;
        case 0x33e7f8u: goto label_33e7f8;
        case 0x33e7fcu: goto label_33e7fc;
        case 0x33e800u: goto label_33e800;
        case 0x33e804u: goto label_33e804;
        case 0x33e808u: goto label_33e808;
        case 0x33e80cu: goto label_33e80c;
        case 0x33e810u: goto label_33e810;
        case 0x33e814u: goto label_33e814;
        case 0x33e818u: goto label_33e818;
        case 0x33e81cu: goto label_33e81c;
        case 0x33e820u: goto label_33e820;
        case 0x33e824u: goto label_33e824;
        case 0x33e828u: goto label_33e828;
        case 0x33e82cu: goto label_33e82c;
        case 0x33e830u: goto label_33e830;
        case 0x33e834u: goto label_33e834;
        default: break;
    }

    ctx->pc = 0x33e768u;

label_33e768:
    // 0x33e768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e76c:
    // 0x33e76c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33e770:
    // 0x33e770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e774:
    // 0x33e774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e778:
    // 0x33e778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e77c:
    // 0x33e77c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e780:
    // 0x33e780: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33e780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33e784:
    // 0x33e784: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e788:
    // 0x33e788: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e78c:
    // 0x33e78c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e78cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e790:
    // 0x33e790: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e794:
    // 0x33e794: 0x40f809  jalr        $v0
label_33e798:
    if (ctx->pc == 0x33E798u) {
        ctx->pc = 0x33E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E794u;
        // 0x33e798: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E79Cu;
        goto label_33e79c;
    }
    ctx->pc = 0x33E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E79Cu);
        ctx->pc = 0x33E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E794u;
        // 0x33e798: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E794u, 0x33E79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E79Cu;
label_33e79c:
    // 0x33e79c: 0xc0cf398  jal         func_33CE60
label_33e7a0:
    if (ctx->pc == 0x33E7A0u) {
        ctx->pc = 0x33E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E79Cu;
        // 0x33e7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7A4u;
        goto label_33e7a4;
    }
    ctx->pc = 0x33E79Cu;
    SET_GPR_U32(ctx, 31, 0x33E7A4u);
    ctx->pc = 0x33E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E79Cu;
    // 0x33e7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE60u, 0x33E79Cu, 0x33E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7A4u;
label_33e7a4:
    // 0x33e7a4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e7a8:
    // 0x33e7a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33e7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e7ac:
    // 0x33e7ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x33e7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_33e7b0:
    // 0x33e7b0: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e7b4:
    // 0x33e7b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e7b8:
    // 0x33e7b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e7bc:
    // 0x33e7bc: 0x40f809  jalr        $v0
label_33e7c0:
    if (ctx->pc == 0x33E7C0u) {
        ctx->pc = 0x33E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7BCu;
        // 0x33e7c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7C4u;
        goto label_33e7c4;
    }
    ctx->pc = 0x33E7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E7C4u);
        ctx->pc = 0x33E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7BCu;
        // 0x33e7c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E7BCu, 0x33E7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E7C4u;
label_33e7c4:
    // 0x33e7c4: 0xc0cf394  jal         func_33CE50
label_33e7c8:
    if (ctx->pc == 0x33E7C8u) {
        ctx->pc = 0x33E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7C4u;
        // 0x33e7c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7CCu;
        goto label_33e7cc;
    }
    ctx->pc = 0x33E7C4u;
    SET_GPR_U32(ctx, 31, 0x33E7CCu);
    ctx->pc = 0x33E7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7C4u;
    // 0x33e7c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE50u, 0x33E7C4u, 0x33E7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7CCu;
label_33e7cc:
    // 0x33e7cc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e7d0:
    // 0x33e7d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33e7d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e7d4:
    // 0x33e7d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33e7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33e7d8:
    // 0x33e7d8: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e7dc:
    // 0x33e7dc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e7e0:
    // 0x33e7e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e7e4:
    // 0x33e7e4: 0x40f809  jalr        $v0
label_33e7e8:
    if (ctx->pc == 0x33E7E8u) {
        ctx->pc = 0x33E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7E4u;
        // 0x33e7e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7ECu;
        goto label_33e7ec;
    }
    ctx->pc = 0x33E7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E7ECu);
        ctx->pc = 0x33E7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7E4u;
        // 0x33e7e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E7E4u, 0x33E7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E7ECu;
label_33e7ec:
    // 0x33e7ec: 0xc0cf392  jal         func_33CE48
label_33e7f0:
    if (ctx->pc == 0x33E7F0u) {
        ctx->pc = 0x33E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E7ECu;
        // 0x33e7f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E7F4u;
        goto label_33e7f4;
    }
    ctx->pc = 0x33E7ECu;
    SET_GPR_U32(ctx, 31, 0x33E7F4u);
    ctx->pc = 0x33E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E7ECu;
    // 0x33e7f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CE48u, 0x33E7ECu, 0x33E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E7F4u;
label_33e7f4:
    // 0x33e7f4: 0xde030070  ld          $v1, 0x70($s0)
    ctx->pc = 0x33e7f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
label_33e7f8:
    // 0x33e7f8: 0x3c04ffc0  lui         $a0, 0xFFC0
    ctx->pc = 0x33e7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65472 << 16));
label_33e7fc:
    // 0x33e7fc: 0x348400fc  ori         $a0, $a0, 0xFC
    ctx->pc = 0x33e7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)252);
label_33e800:
    // 0x33e800: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33e800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_33e804:
    // 0x33e804: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x33e804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_33e808:
    // 0x33e808: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33e808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_33e80c:
    // 0x33e80c: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x33e80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_33e810:
    // 0x33e810: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x33e810u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_33e814:
    // 0x33e814: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33e814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_33e818:
    // 0x33e818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e81c:
    // 0x33e81c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x33e81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_33e820:
    // 0x33e820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e824:
    // 0x33e824: 0x711025  or          $v0, $v1, $s1
    ctx->pc = 0x33e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_33e828:
    // 0x33e828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e82c:
    // 0x33e82c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33e82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e830:
    // 0x33e830: 0x3e00008  jr          $ra
label_33e834:
    if (ctx->pc == 0x33E834u) {
        ctx->pc = 0x33E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E830u;
        // 0x33e834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E838u;
        goto label_fallthrough_0x33e830;
    }
    ctx->pc = 0x33E830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E830u;
        // 0x33e834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33e830:
    ctx->pc = 0x33E838u;
}
