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

// Function: sub_0024B648
// Address: 0x24b648 - 0x24b728
void sub_0024B648_0x24b648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B648_0x24b648");
#endif

    switch (ctx->pc) {
        case 0x24b658u: goto label_24b658;
        case 0x24b660u: goto label_24b660;
        case 0x24b668u: goto label_24b668;
        case 0x24b684u: goto label_24b684;
        case 0x24b68cu: goto label_24b68c;
        case 0x24b694u: goto label_24b694;
        case 0x24b69cu: goto label_24b69c;
        case 0x24b6b0u: goto label_24b6b0;
        case 0x24b6b8u: goto label_24b6b8;
        case 0x24b6c0u: goto label_24b6c0;
        case 0x24b6c8u: goto label_24b6c8;
        case 0x24b6d0u: goto label_24b6d0;
        case 0x24b6d8u: goto label_24b6d8;
        case 0x24b6e0u: goto label_24b6e0;
        case 0x24b6e8u: goto label_24b6e8;
        case 0x24b6f0u: goto label_24b6f0;
        case 0x24b6f8u: goto label_24b6f8;
        case 0x24b700u: goto label_24b700;
        case 0x24b708u: goto label_24b708;
        case 0x24b710u: goto label_24b710;
        case 0x24b718u: goto label_24b718;
        default: break;
    }

    ctx->pc = 0x24b648u;

    // 0x24b648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b64c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24b64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24b650: 0xc0bc168  jal         func_2F05A0
    ctx->pc = 0x24B650u;
    SET_GPR_U32(ctx, 31, 0x24B658u);
    ctx->pc = 0x2F05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F05A0u, 0x24B650u, 0x24B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B658u;
label_24b658:
    // 0x24b658: 0xc0b7d92  jal         func_2DF648
    ctx->pc = 0x24B658u;
    SET_GPR_U32(ctx, 31, 0x24B660u);
    ctx->pc = 0x2DF648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF648u, 0x24B658u, 0x24B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B660u;
label_24b660:
    // 0x24b660: 0xc0d2d83  jal         func_34B60C
    ctx->pc = 0x24B660u;
    SET_GPR_U32(ctx, 31, 0x24B668u);
    ctx->pc = 0x34B60Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B60Cu, 0x24B660u, 0x24B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B668u;
label_24b668:
    // 0x24b668: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x24b668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x24b66c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24b66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24b670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b674: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x24b674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x24b678: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x24b678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x24b67c: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x24B67Cu;
    SET_GPR_U32(ctx, 31, 0x24B684u);
    ctx->pc = 0x24B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B67Cu;
    // 0x24b680: 0xac438874  sw          $v1, -0x778C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936692), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x24B67Cu, 0x24B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B684u;
label_24b684:
    // 0x24b684: 0xc0b7582  jal         func_2DD608
    ctx->pc = 0x24B684u;
    SET_GPR_U32(ctx, 31, 0x24B68Cu);
    ctx->pc = 0x24B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B684u;
    // 0x24b688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD608u, 0x24B684u, 0x24B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B68Cu;
label_24b68c:
    // 0x24b68c: 0xc093622  jal         func_24D888
    ctx->pc = 0x24B68Cu;
    SET_GPR_U32(ctx, 31, 0x24B694u);
    ctx->pc = 0x24D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D888u, 0x24B68Cu, 0x24B694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B694u;
label_24b694:
    // 0x24b694: 0xc093670  jal         func_24D9C0
    ctx->pc = 0x24B694u;
    SET_GPR_U32(ctx, 31, 0x24B69Cu);
    ctx->pc = 0x24D9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C0u, 0x24B694u, 0x24B69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B69Cu;
label_24b69c:
    // 0x24b69c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x24b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x24b6a0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x24b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24b6a4: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x24b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x24b6a8: 0xc0b42be  jal         func_2D0AF8
    ctx->pc = 0x24B6A8u;
    SET_GPR_U32(ctx, 31, 0x24B6B0u);
    ctx->pc = 0x24B6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6A8u;
    // 0x24b6ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AF8u, 0x24B6A8u, 0x24B6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6B0u;
label_24b6b0:
    // 0x24b6b0: 0xc0b42d0  jal         func_2D0B40
    ctx->pc = 0x24B6B0u;
    SET_GPR_U32(ctx, 31, 0x24B6B8u);
    ctx->pc = 0x2D0B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B40u, 0x24B6B0u, 0x24B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6B8u;
label_24b6b8:
    // 0x24b6b8: 0xc08e508  jal         func_239420
    ctx->pc = 0x24B6B8u;
    SET_GPR_U32(ctx, 31, 0x24B6C0u);
    ctx->pc = 0x239420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239420u, 0x24B6B8u, 0x24B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6C0u;
label_24b6c0:
    // 0x24b6c0: 0xc08b850  jal         func_22E140
    ctx->pc = 0x24B6C0u;
    SET_GPR_U32(ctx, 31, 0x24B6C8u);
    ctx->pc = 0x22E140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E140u, 0x24B6C0u, 0x24B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6C8u;
label_24b6c8:
    // 0x24b6c8: 0xc0940dc  jal         func_250370
    ctx->pc = 0x24B6C8u;
    SET_GPR_U32(ctx, 31, 0x24B6D0u);
    ctx->pc = 0x250370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250370u, 0x24B6C8u, 0x24B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6D0u;
label_24b6d0:
    // 0x24b6d0: 0xc07c3fa  jal         func_1F0FE8
    ctx->pc = 0x24B6D0u;
    SET_GPR_U32(ctx, 31, 0x24B6D8u);
    ctx->pc = 0x1F0FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0FE8u, 0x24B6D0u, 0x24B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6D8u;
label_24b6d8:
    // 0x24b6d8: 0xc08fe62  jal         func_23F988
    ctx->pc = 0x24B6D8u;
    SET_GPR_U32(ctx, 31, 0x24B6E0u);
    ctx->pc = 0x23F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F988u, 0x24B6D8u, 0x24B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6E0u;
label_24b6e0:
    // 0x24b6e0: 0xc0b42f4  jal         func_2D0BD0
    ctx->pc = 0x24B6E0u;
    SET_GPR_U32(ctx, 31, 0x24B6E8u);
    ctx->pc = 0x2D0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0BD0u, 0x24B6E0u, 0x24B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6E8u;
label_24b6e8:
    // 0x24b6e8: 0xc086f2e  jal         func_21BCB8
    ctx->pc = 0x24B6E8u;
    SET_GPR_U32(ctx, 31, 0x24B6F0u);
    ctx->pc = 0x21BCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BCB8u, 0x24B6E8u, 0x24B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6F0u;
label_24b6f0:
    // 0x24b6f0: 0xc08928a  jal         func_224A28
    ctx->pc = 0x24B6F0u;
    SET_GPR_U32(ctx, 31, 0x24B6F8u);
    ctx->pc = 0x224A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224A28u, 0x24B6F0u, 0x24B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6F8u;
label_24b6f8:
    // 0x24b6f8: 0xc0892ac  jal         func_224AB0
    ctx->pc = 0x24B6F8u;
    SET_GPR_U32(ctx, 31, 0x24B700u);
    ctx->pc = 0x224AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224AB0u, 0x24B6F8u, 0x24B700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B700u;
label_24b700:
    // 0x24b700: 0xc091b82  jal         func_246E08
    ctx->pc = 0x24B700u;
    SET_GPR_U32(ctx, 31, 0x24B708u);
    ctx->pc = 0x246E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246E08u, 0x24B700u, 0x24B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B708u;
label_24b708:
    // 0x24b708: 0xc090ef8  jal         func_243BE0
    ctx->pc = 0x24B708u;
    SET_GPR_U32(ctx, 31, 0x24B710u);
    ctx->pc = 0x243BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243BE0u, 0x24B708u, 0x24B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B710u;
label_24b710:
    // 0x24b710: 0xc08bae4  jal         func_22EB90
    ctx->pc = 0x24B710u;
    SET_GPR_U32(ctx, 31, 0x24B718u);
    ctx->pc = 0x22EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB90u, 0x24B710u, 0x24B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B718u;
label_24b718:
    // 0x24b718: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24b718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b71c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B71Cu;
        // 0x24b720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B724u;
    // 0x24b724: 0x0  nop
    ctx->pc = 0x24b724u;
    // NOP
    ctx->pc = 0x24b728u;
}
