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

// Function: sub_00240768
// Address: 0x240768 - 0x240848
void sub_00240768_0x240768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240768_0x240768");
#endif

    switch (ctx->pc) {
        case 0x240784u: goto label_240784;
        case 0x240794u: goto label_240794;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f4u: goto label_2407f4;
        default: break;
    }

    ctx->pc = 0x240768u;

    // 0x240768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24076c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24076cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24077c: 0xc0c5a6a  jal         func_3169A8
    ctx->pc = 0x24077Cu;
    SET_GPR_U32(ctx, 31, 0x240784u);
    ctx->pc = 0x240780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24077Cu;
    // 0x240780: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3169A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3169A8u, 0x24077Cu, 0x240784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240784u;
label_240784:
    // 0x240784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240784u;
    {
        const bool branch_taken_0x240784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240784u;
        // 0x240788: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240784) {
            ctx->pc = 0x24079Cu;
            goto label_24079c;
        }
    }
    ctx->pc = 0x24078Cu;
    // 0x24078c: 0xc0c59b5  jal         func_3166D4
    ctx->pc = 0x24078Cu;
    SET_GPR_U32(ctx, 31, 0x240794u);
    ctx->pc = 0x3166D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3166D4u, 0x24078Cu, 0x240794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240794u;
label_240794:
    // 0x240794: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x240794u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x240798: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x240798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_24079c:
    // 0x24079c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2407a0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2407a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2407a4: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2407a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2407a8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2407a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2407ac: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2407acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2407b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2407b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2407b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2407b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2407bc: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x2407BCu;
    SET_GPR_U32(ctx, 31, 0x2407C4u);
    ctx->pc = 0x2407C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407BCu;
    // 0x2407c0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x2407BCu, 0x2407C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407C4u;
label_2407c4:
    // 0x2407c4: 0x5220001c  beql        $s1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2407C4u;
    {
        const bool branch_taken_0x2407c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407c4) {
            ctx->pc = 0x2407C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2407C4u;
            // 0x2407c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240838u;
            goto label_240838;
        }
    }
    ctx->pc = 0x2407CCu;
    // 0x2407cc: 0xc0c59c2  jal         func_316708
    ctx->pc = 0x2407CCu;
    SET_GPR_U32(ctx, 31, 0x2407D4u);
    ctx->pc = 0x316708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316708u, 0x2407CCu, 0x2407D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407D4u;
label_2407d4:
    // 0x2407d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2407d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2407d8: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x2407d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x2407dc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2407dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2407e0: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2407e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2407e4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2407E4u;
    SET_GPR_U32(ctx, 31, 0x2407ECu);
    ctx->pc = 0x2407E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407E4u;
    // 0x2407e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2407E4u, 0x2407ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407ECu;
label_2407ec:
    // 0x2407ec: 0xc0b76a0  jal         func_2DDA80
    ctx->pc = 0x2407ECu;
    SET_GPR_U32(ctx, 31, 0x2407F4u);
    ctx->pc = 0x2407F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407ECu;
    // 0x2407f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDA80u, 0x2407ECu, 0x2407F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407F4u;
label_2407f4:
    // 0x2407f4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2407f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2407f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2407fc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2407FCu;
    {
        const bool branch_taken_0x2407fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407FCu;
        // 0x240800: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407fc) {
            ctx->pc = 0x240830u;
            goto label_240830;
        }
    }
    ctx->pc = 0x240804u;
    // 0x240804: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x240804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x240808: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x240808u;
    {
        const bool branch_taken_0x240808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240808) {
            ctx->pc = 0x24080Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240808u;
            // 0x24080c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240820u;
            goto label_240820;
        }
    }
    ctx->pc = 0x240810u;
    // 0x240810: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x240810u;
    {
        const bool branch_taken_0x240810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240810u;
        // 0x240814: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240810) {
            ctx->pc = 0x240830u;
            goto label_240830;
        }
    }
    ctx->pc = 0x240818u;
    // 0x240818: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x240818u;
    {
        const bool branch_taken_0x240818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240818u;
        // 0x24081c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240818) {
            ctx->pc = 0x240838u;
            goto label_240838;
        }
    }
    ctx->pc = 0x240820u;
label_240820:
    // 0x240820: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240820u;
    {
        const bool branch_taken_0x240820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240820u;
        // 0x240824: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240820) {
            ctx->pc = 0x240830u;
            goto label_240830;
        }
    }
    ctx->pc = 0x240828u;
    // 0x240828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x240828u;
    {
        const bool branch_taken_0x240828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240828u;
        // 0x24082c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240828) {
            ctx->pc = 0x240838u;
            goto label_240838;
        }
    }
    ctx->pc = 0x240830u;
label_240830:
    // 0x240830: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x240830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x240834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240838:
    // 0x240838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24083c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240840: 0x3e00008  jr          $ra
    ctx->pc = 0x240840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240840u;
        // 0x240844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240848u;
}
