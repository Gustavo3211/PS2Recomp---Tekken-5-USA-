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

// Function: sub_00368538
// Address: 0x368538 - 0x368708
void sub_00368538_0x368538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368538_0x368538");
#endif

    switch (ctx->pc) {
        case 0x368584u: goto label_368584;
        case 0x3685a0u: goto label_3685a0;
        case 0x3685b8u: goto label_3685b8;
        case 0x3685c8u: goto label_3685c8;
        case 0x368610u: goto label_368610;
        case 0x368628u: goto label_368628;
        case 0x368644u: goto label_368644;
        case 0x368654u: goto label_368654;
        case 0x3686a4u: goto label_3686a4;
        case 0x3686c0u: goto label_3686c0;
        case 0x3686d8u: goto label_3686d8;
        case 0x3686e8u: goto label_3686e8;
        default: break;
    }

    ctx->pc = 0x368538u;

    // 0x368538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x368538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36853c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x368540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x368540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368544: 0x80d7b34  j           func_35ECD0
    ctx->pc = 0x368544u;
    ctx->pc = 0x368548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368544u;
    // 0x368548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35ECD0u;
    sub_0035ECD0_0x35ecd0(rdram, ctx, runtime); return;
    ctx->pc = 0x36854Cu;
    // 0x36854c: 0x0  nop
    ctx->pc = 0x36854cu;
    // NOP
    // 0x368550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368558: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x368558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36855c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x36855cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x368560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x368568: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x368568u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36856c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36856cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368570: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x368570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368578: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x368578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36857c: 0xc04a520  jal         func_129480
    ctx->pc = 0x36857Cu;
    SET_GPR_U32(ctx, 31, 0x368584u);
    ctx->pc = 0x368580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36857Cu;
    // 0x368580: 0x24a55098  addiu       $a1, $a1, 0x5098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x36857Cu, 0x368584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368584u;
label_368584:
    // 0x368584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x368588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36858c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36858Cu;
    {
        const bool branch_taken_0x36858c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36858Cu;
        // 0x368590: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36858c) {
            ctx->pc = 0x3685B0u;
            goto label_3685b0;
        }
    }
    ctx->pc = 0x368594u;
    // 0x368594: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368598: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368598u;
    SET_GPR_U32(ctx, 31, 0x3685A0u);
    ctx->pc = 0x36859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368598u;
    // 0x36859c: 0x24847bd8  addiu       $a0, $a0, 0x7BD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368598u, 0x3685A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685A0u;
label_3685a0:
    // 0x3685a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3685a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3685A4u;
    {
        const bool branch_taken_0x3685a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3685A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685A4u;
        // 0x3685a8: 0x34420028  ori         $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685a4) {
            ctx->pc = 0x3685CCu;
            goto label_3685cc;
        }
    }
    ctx->pc = 0x3685ACu;
    // 0x3685ac: 0x0  nop
    ctx->pc = 0x3685acu;
    // NOP
label_3685b0:
    // 0x3685b0: 0xc0d7c98  jal         func_35F260
    ctx->pc = 0x3685B0u;
    SET_GPR_U32(ctx, 31, 0x3685B8u);
    ctx->pc = 0x3685B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685B0u;
    // 0x3685b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F260u, 0x3685B0u, 0x3685B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685B8u;
label_3685b8:
    // 0x3685b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3685B8u;
    {
        const bool branch_taken_0x3685b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3685BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685B8u;
        // 0x3685bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685b8) {
            ctx->pc = 0x3685CCu;
            goto label_3685cc;
        }
    }
    ctx->pc = 0x3685C0u;
    // 0x3685c0: 0xc0d7c74  jal         func_35F1D0
    ctx->pc = 0x3685C0u;
    SET_GPR_U32(ctx, 31, 0x3685C8u);
    ctx->pc = 0x3685C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685C0u;
    // 0x3685c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x3685C0u, 0x3685C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685C8u;
label_3685c8:
    // 0x3685c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3685c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3685cc:
    // 0x3685cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3685ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3685d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3685d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3685d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3685d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3685d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3685d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3685dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3685DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3685E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685DCu;
        // 0x3685e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3685DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3685E4u;
    // 0x3685e4: 0x0  nop
    ctx->pc = 0x3685e4u;
    // NOP
    // 0x3685e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3685e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3685ec: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x3685ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x3685f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3685f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3685f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3685f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3685f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3685fc: 0x24455098  addiu       $a1, $v0, 0x5098
    ctx->pc = 0x3685fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20632));
    // 0x368600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368608: 0xc04a520  jal         func_129480
    ctx->pc = 0x368608u;
    SET_GPR_U32(ctx, 31, 0x368610u);
    ctx->pc = 0x36860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368608u;
    // 0x36860c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x368608u, 0x368610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368610u;
label_368610:
    // 0x368610: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x368610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x368614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x368614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x368618u;
    {
        const bool branch_taken_0x368618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368618u;
        // 0x36861c: 0x24847bd8  addiu       $a0, $a0, 0x7BD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368618) {
            ctx->pc = 0x368638u;
            goto label_368638;
        }
    }
    ctx->pc = 0x368620u;
    // 0x368620: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x368620u;
    SET_GPR_U32(ctx, 31, 0x368628u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x368620u, 0x368628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368628u;
label_368628:
    // 0x368628: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x368628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x36862c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x36862Cu;
    {
        const bool branch_taken_0x36862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36862Cu;
        // 0x368630: 0x34420028  ori         $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36862c) {
            ctx->pc = 0x368658u;
            goto label_368658;
        }
    }
    ctx->pc = 0x368634u;
    // 0x368634: 0x0  nop
    ctx->pc = 0x368634u;
    // NOP
label_368638:
    // 0x368638: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x368638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36863c: 0xc0d7ca0  jal         func_35F280
    ctx->pc = 0x36863Cu;
    SET_GPR_U32(ctx, 31, 0x368644u);
    ctx->pc = 0x368640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36863Cu;
    // 0x368640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F280u, 0x36863Cu, 0x368644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368644u;
label_368644:
    // 0x368644: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x368644u;
    {
        const bool branch_taken_0x368644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368644u;
        // 0x368648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368644) {
            ctx->pc = 0x368658u;
            goto label_368658;
        }
    }
    ctx->pc = 0x36864Cu;
    // 0x36864c: 0xc0d7c74  jal         func_35F1D0
    ctx->pc = 0x36864Cu;
    SET_GPR_U32(ctx, 31, 0x368654u);
    ctx->pc = 0x368650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36864Cu;
    // 0x368650: 0x96240000  lhu         $a0, 0x0($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x36864Cu, 0x368654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368654u;
label_368654:
    // 0x368654: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368654u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_368658:
    // 0x368658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36865c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36865cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368664: 0x3e00008  jr          $ra
    ctx->pc = 0x368664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368664u;
        // 0x368668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36866Cu;
    // 0x36866c: 0x0  nop
    ctx->pc = 0x36866cu;
    // NOP
    // 0x368670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368678: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x368678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36867c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x36867cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x368680: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368684: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x368688: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x368688u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36868c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x36868cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368690: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x368690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368698: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x368698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36869c: 0xc04a520  jal         func_129480
    ctx->pc = 0x36869Cu;
    SET_GPR_U32(ctx, 31, 0x3686A4u);
    ctx->pc = 0x3686A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36869Cu;
    // 0x3686a0: 0x24a55098  addiu       $a1, $a1, 0x5098 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x36869Cu, 0x3686A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686A4u;
label_3686a4:
    // 0x3686a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3686a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3686a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3686a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3686ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3686ACu;
    {
        const bool branch_taken_0x3686ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3686B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686ACu;
        // 0x3686b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686ac) {
            ctx->pc = 0x3686D0u;
            goto label_3686d0;
        }
    }
    ctx->pc = 0x3686B4u;
    // 0x3686b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3686b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3686b8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x3686B8u;
    SET_GPR_U32(ctx, 31, 0x3686C0u);
    ctx->pc = 0x3686BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686B8u;
    // 0x3686bc: 0x24847c10  addiu       $a0, $a0, 0x7C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x3686B8u, 0x3686C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686C0u;
label_3686c0:
    // 0x3686c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3686c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3686c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3686C4u;
    {
        const bool branch_taken_0x3686c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3686C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686C4u;
        // 0x3686c8: 0x34420028  ori         $v0, $v0, 0x28 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686c4) {
            ctx->pc = 0x3686ECu;
            goto label_3686ec;
        }
    }
    ctx->pc = 0x3686CCu;
    // 0x3686cc: 0x0  nop
    ctx->pc = 0x3686ccu;
    // NOP
label_3686d0:
    // 0x3686d0: 0xc0d79ec  jal         func_35E7B0
    ctx->pc = 0x3686D0u;
    SET_GPR_U32(ctx, 31, 0x3686D8u);
    ctx->pc = 0x3686D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686D0u;
    // 0x3686d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E7B0u, 0x3686D0u, 0x3686D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686D8u;
label_3686d8:
    // 0x3686d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3686D8u;
    {
        const bool branch_taken_0x3686d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3686DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686D8u;
        // 0x3686dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3686d8) {
            ctx->pc = 0x3686ECu;
            goto label_3686ec;
        }
    }
    ctx->pc = 0x3686E0u;
    // 0x3686e0: 0xc0d7c74  jal         func_35F1D0
    ctx->pc = 0x3686E0u;
    SET_GPR_U32(ctx, 31, 0x3686E8u);
    ctx->pc = 0x3686E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3686E0u;
    // 0x3686e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F1D0u, 0x3686E0u, 0x3686E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3686E8u;
label_3686e8:
    // 0x3686e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3686e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3686ec:
    // 0x3686ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3686ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3686f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3686f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3686f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3686f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3686f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3686f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3686fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3686FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3686FCu;
        // 0x368700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3686FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368704u;
    // 0x368704: 0x0  nop
    ctx->pc = 0x368704u;
    // NOP
    ctx->pc = 0x368708u;
}
