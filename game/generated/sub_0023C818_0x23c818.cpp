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

// Function: sub_0023C818
// Address: 0x23c818 - 0x23c8d8
void sub_0023C818_0x23c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C818_0x23c818");
#endif

    switch (ctx->pc) {
        case 0x23c834u: goto label_23c834;
        case 0x23c844u: goto label_23c844;
        case 0x23c84cu: goto label_23c84c;
        case 0x23c854u: goto label_23c854;
        case 0x23c85cu: goto label_23c85c;
        case 0x23c864u: goto label_23c864;
        case 0x23c880u: goto label_23c880;
        case 0x23c88cu: goto label_23c88c;
        case 0x23c894u: goto label_23c894;
        case 0x23c89cu: goto label_23c89c;
        case 0x23c8a4u: goto label_23c8a4;
        case 0x23c8acu: goto label_23c8ac;
        case 0x23c8b4u: goto label_23c8b4;
        case 0x23c8c8u: goto label_23c8c8;
        default: break;
    }

    ctx->pc = 0x23c818u;

    // 0x23c818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c81c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23C81Cu;
    {
        const bool branch_taken_0x23c81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C81Cu;
        // 0x23c820: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c81c) {
            ctx->pc = 0x23C870u;
            goto label_23c870;
        }
    }
    ctx->pc = 0x23C824u;
    // 0x23c824: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x23c824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x23c828: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23c828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c82c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x23C82Cu;
    SET_GPR_U32(ctx, 31, 0x23C834u);
    ctx->pc = 0x23C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C82Cu;
    // 0x23c830: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x23C82Cu, 0x23C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C834u;
label_23c834:
    // 0x23c834: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c838: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x23c838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x23c83c: 0xc0919d4  jal         func_246750
    ctx->pc = 0x23C83Cu;
    SET_GPR_U32(ctx, 31, 0x23C844u);
    ctx->pc = 0x23C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C83Cu;
    // 0x23c840: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246750u, 0x23C83Cu, 0x23C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C844u;
label_23c844:
    // 0x23c844: 0xc08f10c  jal         func_23C430
    ctx->pc = 0x23C844u;
    SET_GPR_U32(ctx, 31, 0x23C84Cu);
    ctx->pc = 0x23C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C430u, 0x23C844u, 0x23C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C84Cu;
label_23c84c:
    // 0x23c84c: 0xc08f114  jal         func_23C450
    ctx->pc = 0x23C84Cu;
    SET_GPR_U32(ctx, 31, 0x23C854u);
    ctx->pc = 0x23C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C84Cu;
    // 0x23c850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C450u, 0x23C84Cu, 0x23C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C854u;
label_23c854:
    // 0x23c854: 0xc08f10c  jal         func_23C430
    ctx->pc = 0x23C854u;
    SET_GPR_U32(ctx, 31, 0x23C85Cu);
    ctx->pc = 0x23C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C430u, 0x23C854u, 0x23C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C85Cu;
label_23c85c:
    // 0x23c85c: 0xc08f1fa  jal         func_23C7E8
    ctx->pc = 0x23C85Cu;
    SET_GPR_U32(ctx, 31, 0x23C864u);
    ctx->pc = 0x23C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C85Cu;
    // 0x23c860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C7E8u, 0x23C85Cu, 0x23C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C864u;
label_23c864:
    // 0x23c864: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23C864u;
    {
        const bool branch_taken_0x23c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C864u;
        // 0x23c868: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c864) {
            ctx->pc = 0x23C8C0u;
            goto label_23c8c0;
        }
    }
    ctx->pc = 0x23C86Cu;
    // 0x23c86c: 0x0  nop
    ctx->pc = 0x23c86cu;
    // NOP
label_23c870:
    // 0x23c870: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x23c870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x23c874: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c878: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x23C878u;
    SET_GPR_U32(ctx, 31, 0x23C880u);
    ctx->pc = 0x23C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C878u;
    // 0x23c87c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x23C878u, 0x23C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C880u;
label_23c880:
    // 0x23c880: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c884: 0xc0919d4  jal         func_246750
    ctx->pc = 0x23C884u;
    SET_GPR_U32(ctx, 31, 0x23C88Cu);
    ctx->pc = 0x23C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C884u;
    // 0x23c888: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246750u, 0x23C884u, 0x23C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C88Cu;
label_23c88c:
    // 0x23c88c: 0xc08f10c  jal         func_23C430
    ctx->pc = 0x23C88Cu;
    SET_GPR_U32(ctx, 31, 0x23C894u);
    ctx->pc = 0x23C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C430u, 0x23C88Cu, 0x23C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C894u;
label_23c894:
    // 0x23c894: 0xc08f128  jal         func_23C4A0
    ctx->pc = 0x23C894u;
    SET_GPR_U32(ctx, 31, 0x23C89Cu);
    ctx->pc = 0x23C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C894u;
    // 0x23c898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C4A0u, 0x23C894u, 0x23C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C89Cu;
label_23c89c:
    // 0x23c89c: 0xc08f10c  jal         func_23C430
    ctx->pc = 0x23C89Cu;
    SET_GPR_U32(ctx, 31, 0x23C8A4u);
    ctx->pc = 0x23C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C430u, 0x23C89Cu, 0x23C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8A4u;
label_23c8a4:
    // 0x23c8a4: 0xc08f1fa  jal         func_23C7E8
    ctx->pc = 0x23C8A4u;
    SET_GPR_U32(ctx, 31, 0x23C8ACu);
    ctx->pc = 0x23C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C8A4u;
    // 0x23c8a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C7E8u, 0x23C8A4u, 0x23C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8ACu;
label_23c8ac:
    // 0x23c8ac: 0xc08eaea  jal         func_23ABA8
    ctx->pc = 0x23C8ACu;
    SET_GPR_U32(ctx, 31, 0x23C8B4u);
    ctx->pc = 0x23ABA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23ABA8u, 0x23C8ACu, 0x23C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8B4u;
label_23c8b4:
    // 0x23c8b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23c8b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c8bc: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x23c8bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_23c8c0:
    // 0x23c8c0: 0xc08b8aa  jal         func_22E2A8
    ctx->pc = 0x23C8C0u;
    SET_GPR_U32(ctx, 31, 0x23C8C8u);
    ctx->pc = 0x22E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E2A8u, 0x23C8C0u, 0x23C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C8C8u;
label_23c8c8:
    // 0x23c8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23C8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C8CCu;
        // 0x23c8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C8D4u;
    // 0x23c8d4: 0x0  nop
    ctx->pc = 0x23c8d4u;
    // NOP
    ctx->pc = 0x23c8d8u;
}
