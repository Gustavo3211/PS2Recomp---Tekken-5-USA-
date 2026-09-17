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

// Function: sub_00209488
// Address: 0x209488 - 0x209590
void sub_00209488_0x209488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209488_0x209488");
#endif

    switch (ctx->pc) {
        case 0x209498u: goto label_209498;
        case 0x2094a8u: goto label_2094a8;
        case 0x2094b8u: goto label_2094b8;
        case 0x2094c0u: goto label_2094c0;
        case 0x2094d4u: goto label_2094d4;
        case 0x2094e0u: goto label_2094e0;
        case 0x2094e8u: goto label_2094e8;
        case 0x209554u: goto label_209554;
        default: break;
    }

    ctx->pc = 0x209488u;

    // 0x209488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20948c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209490: 0xc0a947c  jal         func_2A51F0
    ctx->pc = 0x209490u;
    SET_GPR_U32(ctx, 31, 0x209498u);
    ctx->pc = 0x2A51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51F0u, 0x209490u, 0x209498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209498u;
label_209498:
    // 0x209498: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x209498u;
    {
        const bool branch_taken_0x209498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x209498) {
            ctx->pc = 0x20949Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x209498u;
            // 0x20949c: 0x8f8298c4  lw          $v0, -0x673C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2094F8u;
            goto label_2094f8;
        }
    }
    ctx->pc = 0x2094A0u;
    // 0x2094a0: 0xc0a9478  jal         func_2A51E0
    ctx->pc = 0x2094A0u;
    SET_GPR_U32(ctx, 31, 0x2094A8u);
    ctx->pc = 0x2A51E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A51E0u, 0x2094A0u, 0x2094A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094A8u;
label_2094a8:
    // 0x2094a8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2094A8u;
    {
        const bool branch_taken_0x2094a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2094a8) {
            ctx->pc = 0x2094ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2094A8u;
            // 0x2094ac: 0x8f8298c4  lw          $v0, -0x673C($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2094F8u;
            goto label_2094f8;
        }
    }
    ctx->pc = 0x2094B0u;
    // 0x2094b0: 0xc0a3af8  jal         func_28EBE0
    ctx->pc = 0x2094B0u;
    SET_GPR_U32(ctx, 31, 0x2094B8u);
    ctx->pc = 0x28EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBE0u, 0x2094B0u, 0x2094B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094B8u;
label_2094b8:
    // 0x2094b8: 0xc0a9488  jal         func_2A5220
    ctx->pc = 0x2094B8u;
    SET_GPR_U32(ctx, 31, 0x2094C0u);
    ctx->pc = 0x2A5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5220u, 0x2094B8u, 0x2094C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094C0u;
label_2094c0:
    // 0x2094c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2094C0u;
    {
        const bool branch_taken_0x2094c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094C0u;
        // 0x2094c4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094c0) {
            ctx->pc = 0x2094F4u;
            goto label_2094f4;
        }
    }
    ctx->pc = 0x2094C8u;
    // 0x2094c8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2094c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2094cc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2094CCu;
    SET_GPR_U32(ctx, 31, 0x2094D4u);
    ctx->pc = 0x2094D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094CCu;
    // 0x2094d0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2094CCu, 0x2094D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094D4u;
label_2094d4:
    // 0x2094d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2094d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094d8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2094D8u;
    SET_GPR_U32(ctx, 31, 0x2094E0u);
    ctx->pc = 0x2094DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094D8u;
    // 0x2094dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2094D8u, 0x2094E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094E0u;
label_2094e0:
    // 0x2094e0: 0xc0a94c2  jal         func_2A5308
    ctx->pc = 0x2094E0u;
    SET_GPR_U32(ctx, 31, 0x2094E8u);
    ctx->pc = 0x2094E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094E0u;
    // 0x2094e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5308u, 0x2094E0u, 0x2094E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094E8u;
label_2094e8:
    // 0x2094e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2094e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2094ec: 0xaf8398c8  sw          $v1, -0x6738($gp)
    ctx->pc = 0x2094ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940872), GPR_U32(ctx, 3));
    // 0x2094f0: 0xaf8098d0  sw          $zero, -0x6730($gp)
    ctx->pc = 0x2094f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940880), GPR_U32(ctx, 0));
label_2094f4:
    // 0x2094f4: 0x8f8298c4  lw          $v0, -0x673C($gp)
    ctx->pc = 0x2094f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940868)));
label_2094f8:
    // 0x2094f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2094F8u;
    {
        const bool branch_taken_0x2094f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2094FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094F8u;
        // 0x2094fc: 0x8f8298d0  lw          $v0, -0x6730($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094f8) {
            ctx->pc = 0x20950Cu;
            goto label_20950c;
        }
    }
    ctx->pc = 0x209500u;
    // 0x209500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209504: 0xaf8298c0  sw          $v0, -0x6740($gp)
    ctx->pc = 0x209504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940864), GPR_U32(ctx, 2));
    // 0x209508: 0x8f8298d0  lw          $v0, -0x6730($gp)
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940880)));
label_20950c:
    // 0x20950c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20950Cu;
    {
        const bool branch_taken_0x20950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20950Cu;
        // 0x209510: 0x8f8298b8  lw          $v0, -0x6748($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20950c) {
            ctx->pc = 0x209520u;
            goto label_209520;
        }
    }
    ctx->pc = 0x209514u;
    // 0x209514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209518: 0xaf8298cc  sw          $v0, -0x6734($gp)
    ctx->pc = 0x209518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940876), GPR_U32(ctx, 2));
    // 0x20951c: 0x8f8298b8  lw          $v0, -0x6748($gp)
    ctx->pc = 0x20951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940856)));
label_209520:
    // 0x209520: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209520u;
    {
        const bool branch_taken_0x209520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209520u;
        // 0x209524: 0x8f8298c0  lw          $v0, -0x6740($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940864)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209520) {
            ctx->pc = 0x209534u;
            goto label_209534;
        }
    }
    ctx->pc = 0x209528u;
    // 0x209528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20952c: 0xaf8298b4  sw          $v0, -0x674C($gp)
    ctx->pc = 0x20952cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940852), GPR_U32(ctx, 2));
    // 0x209530: 0x8f8298c0  lw          $v0, -0x6740($gp)
    ctx->pc = 0x209530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940864)));
label_209534:
    // 0x209534: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209534u;
    {
        const bool branch_taken_0x209534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209534u;
        // 0x209538: 0x8f8298cc  lw          $v0, -0x6734($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209534) {
            ctx->pc = 0x20954Cu;
            goto label_20954c;
        }
    }
    ctx->pc = 0x20953Cu;
    // 0x20953c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20953Cu;
    {
        const bool branch_taken_0x20953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20953Cu;
        // 0x209540: 0x8f8298b4  lw          $v0, -0x674C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20953c) {
            ctx->pc = 0x20954Cu;
            goto label_20954c;
        }
    }
    ctx->pc = 0x209544u;
    // 0x209544: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x209544u;
    {
        const bool branch_taken_0x209544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209544u;
        // 0x209548: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209544) {
            ctx->pc = 0x209584u;
            goto label_209584;
        }
    }
    ctx->pc = 0x20954Cu;
label_20954c:
    // 0x20954c: 0xc07e26e  jal         func_1F89B8
    ctx->pc = 0x20954Cu;
    SET_GPR_U32(ctx, 31, 0x209554u);
    ctx->pc = 0x209550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20954Cu;
    // 0x209550: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F89B8u, 0x20954Cu, 0x209554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209554u;
label_209554:
    // 0x209554: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x209554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x209558: 0x8f839730  lw          $v1, -0x68D0($gp)
    ctx->pc = 0x209558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940464)));
    // 0x20955c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209560: 0x8c4623b4  lw          $a2, 0x23B4($v0)
    ctx->pc = 0x209560u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x209564: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x209564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x209568: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20956c: 0xaca088b0  sw          $zero, -0x7750($a1)
    ctx->pc = 0x20956cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A88B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A88B0u, _value); } while (0);
    // 0x209570: 0xa08083c4  sb          $zero, -0x7C3C($a0)
    ctx->pc = 0x209570u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3A83C4u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3A83C4u, _value); } while (0);
    // 0x209574: 0xaf839730  sw          $v1, -0x68D0($gp)
    ctx->pc = 0x209574u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940464), GPR_U32(ctx, 3));
    // 0x209578: 0xaf8098ac  sw          $zero, -0x6754($gp)
    ctx->pc = 0x209578u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940844), GPR_U32(ctx, 0));
    // 0x20957c: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x20957cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
    // 0x209580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209584:
    // 0x209584: 0x3e00008  jr          $ra
    ctx->pc = 0x209584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209584u;
        // 0x209588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20958Cu;
    // 0x20958c: 0x0  nop
    ctx->pc = 0x20958cu;
    // NOP
    ctx->pc = 0x209590u;
}
