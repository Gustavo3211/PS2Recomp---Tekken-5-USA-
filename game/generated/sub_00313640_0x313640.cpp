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

// Function: sub_00313640
// Address: 0x313640 - 0x3136f8
void sub_00313640_0x313640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313640_0x313640");
#endif

    switch (ctx->pc) {
        case 0x31365cu: goto label_31365c;
        case 0x313668u: goto label_313668;
        case 0x313680u: goto label_313680;
        case 0x313694u: goto label_313694;
        case 0x3136a0u: goto label_3136a0;
        case 0x3136a8u: goto label_3136a8;
        case 0x3136b4u: goto label_3136b4;
        case 0x3136c4u: goto label_3136c4;
        case 0x3136d4u: goto label_3136d4;
        case 0x3136dcu: goto label_3136dc;
        case 0x3136e4u: goto label_3136e4;
        default: break;
    }

    ctx->pc = 0x313640u;

    // 0x313640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x313640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x313644: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x313644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x313648: 0x3c10001c  lui         $s0, 0x1C
    ctx->pc = 0x313648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)28 << 16));
    // 0x31364c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x31364cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x313650: 0x26108110  addiu       $s0, $s0, -0x7EF0
    ctx->pc = 0x313650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934800));
    // 0x313654: 0xc0cb314  jal         func_32CC50
    ctx->pc = 0x313654u;
    SET_GPR_U32(ctx, 31, 0x31365Cu);
    ctx->pc = 0x313658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313654u;
    // 0x313658: 0x8e0400b4  lw          $a0, 0xB4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC50u, 0x313654u, 0x31365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31365Cu;
label_31365c:
    // 0x31365c: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x31365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x313660: 0xc0cc106  jal         func_330418
    ctx->pc = 0x313660u;
    SET_GPR_U32(ctx, 31, 0x313668u);
    ctx->pc = 0x313664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313660u;
    // 0x313664: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x313660u, 0x313668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313668u;
label_313668:
    // 0x313668: 0x2404fff1  addiu       $a0, $zero, -0xF
    ctx->pc = 0x313668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x31366c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x31366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x313670: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x313670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x313674: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x313674u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x313678: 0xc0cc106  jal         func_330418
    ctx->pc = 0x313678u;
    SET_GPR_U32(ctx, 31, 0x313680u);
    ctx->pc = 0x31367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313678u;
    // 0x31367c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x313678u, 0x313680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313680u;
label_313680:
    // 0x313680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x313680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313684: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x313684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x313688: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x313688u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x31368c: 0xc043d88  jal         func_10F620
    ctx->pc = 0x31368Cu;
    SET_GPR_U32(ctx, 31, 0x313694u);
    ctx->pc = 0x313690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31368Cu;
    // 0x313690: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x31368Cu, 0x313694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313694u;
label_313694:
    // 0x313694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313698: 0xc0c56aa  jal         func_315AA8
    ctx->pc = 0x313698u;
    SET_GPR_U32(ctx, 31, 0x3136A0u);
    ctx->pc = 0x31369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313698u;
    // 0x31369c: 0x8f85c580  lw          $a1, -0x3A80($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315AA8u, 0x313698u, 0x3136A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136A0u;
label_3136a0:
    // 0x3136a0: 0xc043d88  jal         func_10F620
    ctx->pc = 0x3136A0u;
    SET_GPR_U32(ctx, 31, 0x3136A8u);
    ctx->pc = 0x3136A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136A0u;
    // 0x3136a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x3136A0u, 0x3136A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136A8u;
label_3136a8:
    // 0x3136a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3136a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136ac: 0xc0c56bc  jal         func_315AF0
    ctx->pc = 0x3136ACu;
    SET_GPR_U32(ctx, 31, 0x3136B4u);
    ctx->pc = 0x3136B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136ACu;
    // 0x3136b0: 0x8f85c580  lw          $a1, -0x3A80($gp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952320)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315AF0u, 0x3136ACu, 0x3136B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136B4u;
label_3136b4:
    // 0x3136b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3136b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3136b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3136bc: 0xc0cc0c2  jal         func_330308
    ctx->pc = 0x3136BCu;
    SET_GPR_U32(ctx, 31, 0x3136C4u);
    ctx->pc = 0x3136C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136BCu;
    // 0x3136c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330308u, 0x3136BCu, 0x3136C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136C4u;
label_3136c4:
    // 0x3136c4: 0x8f82c580  lw          $v0, -0x3A80($gp)
    ctx->pc = 0x3136c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952320)));
    // 0x3136c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3136c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3136cc: 0xc0cb31c  jal         func_32CC70
    ctx->pc = 0x3136CCu;
    SET_GPR_U32(ctx, 31, 0x3136D4u);
    ctx->pc = 0x3136D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3136CCu;
    // 0x3136d0: 0xaf82c580  sw          $v0, -0x3A80($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952320), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC70u, 0x3136CCu, 0x3136D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136D4u;
label_3136d4:
    // 0x3136d4: 0xc0c6870  jal         func_31A1C0
    ctx->pc = 0x3136D4u;
    SET_GPR_U32(ctx, 31, 0x3136DCu);
    ctx->pc = 0x31A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1C0u, 0x3136D4u, 0x3136DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136DCu;
label_3136dc:
    // 0x3136dc: 0xc0c6878  jal         func_31A1E0
    ctx->pc = 0x3136DCu;
    SET_GPR_U32(ctx, 31, 0x3136E4u);
    ctx->pc = 0x31A1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A1E0u, 0x3136DCu, 0x3136E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3136E4u;
label_3136e4:
    // 0x3136e4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x3136e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3136e8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3136e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3136ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3136ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3136F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136ECu;
        // 0x3136f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3136ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3136F4u;
    // 0x3136f4: 0x0  nop
    ctx->pc = 0x3136f4u;
    // NOP
    ctx->pc = 0x3136f8u;
}
