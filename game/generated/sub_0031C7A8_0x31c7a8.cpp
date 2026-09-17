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

// Function: sub_0031C7A8
// Address: 0x31c7a8 - 0x31c8b0
void sub_0031C7A8_0x31c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C7A8_0x31c7a8");
#endif

    switch (ctx->pc) {
        case 0x31c80cu: goto label_31c80c;
        case 0x31c83cu: goto label_31c83c;
        default: break;
    }

    ctx->pc = 0x31c7a8u;

    // 0x31c7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31c7ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c7b0: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x31c7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x31c7b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31c7b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31c7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31c7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31c7c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31c7c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31c7c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31c7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c7cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31c7d0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31c7d4: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x31c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x31c7d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c7dc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31c7dcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31c7e0: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x31c7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x31c7e4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31c7e8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31c7e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31c7ec: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x31c7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x31c7f0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x31c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31c7f4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31c7f8: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x31c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x31c7fc: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x31c7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x31c800: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x31c800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x31c804: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31C804u;
    SET_GPR_U32(ctx, 31, 0x31C80Cu);
    ctx->pc = 0x31C808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C804u;
    // 0x31c808: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31C804u, 0x31C80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C80Cu;
label_31c80c:
    // 0x31c80c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x31c80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31c810: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31c810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31c814: 0x3a230001  xori        $v1, $s1, 0x1
    ctx->pc = 0x31c814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x31c818: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x31c818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x31c81c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31c81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31c820: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x31c820u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x31c824: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x31C824u;
    {
        const bool branch_taken_0x31c824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C824u;
        // 0x31c828: 0x2404004f  addiu       $a0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c824) {
            ctx->pc = 0x31C830u;
            goto label_31c830;
        }
    }
    ctx->pc = 0x31C82Cu;
    // 0x31c82c: 0xfe050020  sd          $a1, 0x20($s0)
    ctx->pc = 0x31c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
label_31c830:
    // 0x31c830: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x31c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x31c834: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31C834u;
    SET_GPR_U32(ctx, 31, 0x31C83Cu);
    ctx->pc = 0x31C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C834u;
    // 0x31c838: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31C834u, 0x31C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C83Cu;
label_31c83c:
    // 0x31c83c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x31c83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31c840: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x31c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x31c844: 0x32240002  andi        $a0, $s1, 0x2
    ctx->pc = 0x31c844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x31c848: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31c848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31c84c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31C84Cu;
    {
        const bool branch_taken_0x31c84c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C84Cu;
        // 0x31c850: 0xfe020030  sd          $v0, 0x30($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c84c) {
            ctx->pc = 0x31C858u;
            goto label_31c858;
        }
    }
    ctx->pc = 0x31C854u;
    // 0x31c854: 0xfe030030  sd          $v1, 0x30($s0)
    ctx->pc = 0x31c854u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 3));
label_31c858:
    // 0x31c858: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x31c858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x31c85c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x31c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x31c860: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x31c860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x31c864: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x31c864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x31c868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c86c: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x31c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x31c870: 0x3403fe00  ori         $v1, $zero, 0xFE00
    ctx->pc = 0x31c870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x31c874: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x31c874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x31c878: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x31c878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x31c87c: 0x24020306  addiu       $v0, $zero, 0x306
    ctx->pc = 0x31c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x31c880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31c880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31c884: 0x9e440004  lwu         $a0, 0x4($s2)
    ctx->pc = 0x31c884u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x31c888: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31c888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31c88c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31c88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31c890: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x31c890u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    // 0x31c894: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x31c894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x31c898: 0xfe040050  sd          $a0, 0x50($s0)
    ctx->pc = 0x31c898u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 4));
    // 0x31c89c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31c89cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31c8a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31c8a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31c8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31C8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8A4u;
        // 0x31c8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C8ACu;
    // 0x31c8ac: 0x0  nop
    ctx->pc = 0x31c8acu;
    // NOP
    ctx->pc = 0x31c8b0u;
}
