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

// Function: sub_0021C858
// Address: 0x21c858 - 0x21c940
void sub_0021C858_0x21c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C858_0x21c858");
#endif

    switch (ctx->pc) {
        case 0x21c880u: goto label_21c880;
        case 0x21c88cu: goto label_21c88c;
        case 0x21c8ecu: goto label_21c8ec;
        case 0x21c914u: goto label_21c914;
        case 0x21c920u: goto label_21c920;
        default: break;
    }

    ctx->pc = 0x21c858u;

    // 0x21c858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21c85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21c868: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21c86c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c870: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21c874: 0x92040032  lbu         $a0, 0x32($s0)
    ctx->pc = 0x21c874u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x21c878: 0xc086644  jal         func_219910
    ctx->pc = 0x21C878u;
    SET_GPR_U32(ctx, 31, 0x21C880u);
    ctx->pc = 0x21C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C878u;
    // 0x21c87c: 0x9211002d  lbu         $s1, 0x2D($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219910u, 0x21C878u, 0x21C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C880u;
label_21c880:
    // 0x21c880: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21c880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c884: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x21C884u;
    SET_GPR_U32(ctx, 31, 0x21C88Cu);
    ctx->pc = 0x21C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C884u;
    // 0x21c888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x21C884u, 0x21C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C88Cu;
label_21c88c:
    // 0x21c88c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c890: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x21c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x21c894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21c894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c898: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x21c898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21c89c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x21c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x21c8a0: 0x92060031  lbu         $a2, 0x31($s0)
    ctx->pc = 0x21c8a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x21c8a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c8a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21c8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21c8ac: 0x244700fc  addiu       $a3, $v0, 0xFC
    ctx->pc = 0x21c8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 252));
    // 0x21c8b0: 0x14d1000b  bne         $a2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x21C8B0u;
    {
        const bool branch_taken_0x21c8b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x21C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8B0u;
        // 0x21c8b4: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8b0) {
            ctx->pc = 0x21C8E0u;
            goto label_21c8e0;
        }
    }
    ctx->pc = 0x21C8B8u;
    // 0x21c8b8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x21c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x21c8bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21c8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21c8c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21c8c4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x21c8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x21c8c8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21c8cc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x21c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21c8d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21c8d4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x21c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x21c8d8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21C8D8u;
    {
        const bool branch_taken_0x21c8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8D8u;
        // 0x21c8dc: 0xac44886c  sw          $a0, -0x7794($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8d8) {
            ctx->pc = 0x21C920u;
            goto label_21c920;
        }
    }
    ctx->pc = 0x21C8E0u;
label_21c8e0:
    // 0x21c8e0: 0xae1200dc  sw          $s2, 0xDC($s0)
    ctx->pc = 0x21c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 18));
    // 0x21c8e4: 0xc088040  jal         func_220100
    ctx->pc = 0x21C8E4u;
    SET_GPR_U32(ctx, 31, 0x21C8ECu);
    ctx->pc = 0x21C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C8E4u;
    // 0x21c8e8: 0xae1100d8  sw          $s1, 0xD8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220100u, 0x21C8E4u, 0x21C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8ECu;
label_21c8ec:
    // 0x21c8ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21c8f0: 0x24428858  addiu       $v0, $v0, -0x77A8
    ctx->pc = 0x21c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x21c8f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21c8f8: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x21c8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x21c8fc: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x21c8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x21c900: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x21c900u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x21c904: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c908: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x21c908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x21c90c: 0xc087684  jal         func_21DA10
    ctx->pc = 0x21C90Cu;
    SET_GPR_U32(ctx, 31, 0x21C914u);
    ctx->pc = 0x21C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C90Cu;
    // 0x21c910: 0xac450050  sw          $a1, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DA10u, 0x21C90Cu, 0x21C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C914u;
label_21c914:
    // 0x21c914: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x21c918: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x21C918u;
    SET_GPR_U32(ctx, 31, 0x21C920u);
    ctx->pc = 0x21C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C918u;
    // 0x21c91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x21C918u, 0x21C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C920u;
label_21c920:
    // 0x21c920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c924: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c924u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21c928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c92c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21c92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21c930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21c930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c934: 0x3e00008  jr          $ra
    ctx->pc = 0x21C934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C934u;
        // 0x21c938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C93Cu;
    // 0x21c93c: 0x0  nop
    ctx->pc = 0x21c93cu;
    // NOP
    ctx->pc = 0x21c940u;
}
