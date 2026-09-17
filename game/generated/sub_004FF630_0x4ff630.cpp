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

// Function: sub_004FF630
// Address: 0x4ff630 - 0x4ff730
void sub_004FF630_0x4ff630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF630_0x4ff630");
#endif

    switch (ctx->pc) {
        case 0x4ff65cu: goto label_4ff65c;
        case 0x4ff66cu: goto label_4ff66c;
        case 0x4ff67cu: goto label_4ff67c;
        case 0x4ff68cu: goto label_4ff68c;
        case 0x4ff698u: goto label_4ff698;
        case 0x4ff6ccu: goto label_4ff6cc;
        case 0x4ff6f4u: goto label_4ff6f4;
        case 0x4ff71cu: goto label_4ff71c;
        default: break;
    }

    ctx->pc = 0x4ff630u;

label_4ff630:
    // 0x4ff630: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4ff630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4ff634: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x4ff634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x4ff638: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x4ff638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x4ff63c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ff63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff640: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x4ff640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x4ff644: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4ff644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff648: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x4ff648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x4ff64c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4ff64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff650: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4ff650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x4ff654: 0xc13fdcc  jal         func_4FF730
    ctx->pc = 0x4FF654u;
    SET_GPR_U32(ctx, 31, 0x4FF65Cu);
    ctx->pc = 0x4FF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF654u;
    // 0x4ff658: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF730u, 0x4FF654u, 0x4FF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF65Cu;
label_4ff65c:
    // 0x4ff65c: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x4ff65cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x4ff660: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x4ff660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4ff664: 0xc13fdd6  jal         func_4FF758
    ctx->pc = 0x4FF664u;
    SET_GPR_U32(ctx, 31, 0x4FF66Cu);
    ctx->pc = 0x4FF668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF664u;
    // 0x4ff668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF758u, 0x4FF664u, 0x4FF66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF66Cu;
label_4ff66c:
    // 0x4ff66c: 0x86240004  lh          $a0, 0x4($s1)
    ctx->pc = 0x4ff66cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4ff670: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x4ff670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4ff674: 0xc13fde0  jal         func_4FF780
    ctx->pc = 0x4FF674u;
    SET_GPR_U32(ctx, 31, 0x4FF67Cu);
    ctx->pc = 0x4FF678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF674u;
    // 0x4ff678: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF780u, 0x4FF674u, 0x4FF67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF67Cu;
label_4ff67c:
    // 0x4ff67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ff67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff680: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4ff680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff684: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FF684u;
    SET_GPR_U32(ctx, 31, 0x4FF68Cu);
    ctx->pc = 0x4FF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF684u;
    // 0x4ff688: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE480u, 0x4FF684u, 0x4FF68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF68Cu;
label_4ff68c:
    // 0x4ff68c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ff68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff690: 0xc13fa34  jal         func_4FE8D0
    ctx->pc = 0x4FF690u;
    SET_GPR_U32(ctx, 31, 0x4FF698u);
    ctx->pc = 0x4FF694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF690u;
    // 0x4ff694: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FE8D0u, 0x4FF690u, 0x4FF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF698u;
label_4ff698:
    // 0x4ff698: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4ff698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff69c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4ff69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ff6a0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x4ff6a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ff6a4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x4ff6a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ff6a8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x4ff6a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4ff6ac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4ff6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ff6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF6B0u;
        // 0x4ff6b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF6B8u;
    // 0x4ff6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff6c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff6c4: 0xc13fb58  jal         func_4FED60
    ctx->pc = 0x4FF6C4u;
    SET_GPR_U32(ctx, 31, 0x4FF6CCu);
    ctx->pc = 0x4FF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF6C4u;
    // 0x4ff6c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FED60u, 0x4FF6C4u, 0x4FF6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF6CCu;
label_4ff6cc:
    // 0x4ff6cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff6d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff6d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff6d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF6D8u;
        // 0x4ff6dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF6E0u;
    // 0x4ff6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff6e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff6ec: 0xc13fd26  jal         func_4FF498
    ctx->pc = 0x4FF6ECu;
    SET_GPR_U32(ctx, 31, 0x4FF6F4u);
    ctx->pc = 0x4FF6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF6ECu;
    // 0x4ff6f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FF498u, 0x4FF6ECu, 0x4FF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FF6F4u;
label_4ff6f4:
    // 0x4ff6f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff6f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff700: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF700u;
        // 0x4ff704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF708u;
    // 0x4ff708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff70c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff710: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff714: 0xc13fd8c  jal         func_4FF630
    ctx->pc = 0x4FF714u;
    SET_GPR_U32(ctx, 31, 0x4FF71Cu);
    ctx->pc = 0x4FF718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF714u;
    // 0x4ff718: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF630u;
    goto label_4ff630;
    ctx->pc = 0x4FF71Cu;
label_4ff71c:
    // 0x4ff71c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff728: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF728u;
        // 0x4ff72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF730u;
}
