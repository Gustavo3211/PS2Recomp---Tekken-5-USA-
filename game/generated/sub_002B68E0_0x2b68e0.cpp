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

// Function: sub_002B68E0
// Address: 0x2b68e0 - 0x2b69b0
void sub_002B68E0_0x2b68e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B68E0_0x2b68e0");
#endif

    switch (ctx->pc) {
        case 0x2b6954u: goto label_2b6954;
        case 0x2b695cu: goto label_2b695c;
        case 0x2b696cu: goto label_2b696c;
        case 0x2b6974u: goto label_2b6974;
        case 0x2b697cu: goto label_2b697c;
        case 0x2b6990u: goto label_2b6990;
        case 0x2b69a0u: goto label_2b69a0;
        default: break;
    }

    ctx->pc = 0x2b68e0u;

    // 0x2b68e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b68e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68e8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b68e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2b68ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b68ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b68f4: 0xae080028  sw          $t0, 0x28($s0)
    ctx->pc = 0x2b68f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 8));
    // 0x2b68f8: 0xae09002c  sw          $t1, 0x2C($s0)
    ctx->pc = 0x2b68f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 9));
    // 0x2b68fc: 0xae070034  sw          $a3, 0x34($s0)
    ctx->pc = 0x2b68fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 7));
    // 0x2b6900: 0xae0a0044  sw          $t2, 0x44($s0)
    ctx->pc = 0x2b6900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 10));
    // 0x2b6904: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2b6904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2b6908: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x2b6908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2b690c: 0xae06001c  sw          $a2, 0x1C($s0)
    ctx->pc = 0x2b690cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 6));
    // 0x2b6910: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b6910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6914: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2b6914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2b6918: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2b6918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2b691c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b691cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b6920: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b6920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b6924: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2b6924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2b6928: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b6928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b692c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2b692cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2b6930: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2b6930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2b6934: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2b6934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2b6938: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2b6938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2b693c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2b693cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2b6940: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2b6940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2b6944: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2b6944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2b6948: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2b6948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2b694c: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B694Cu;
    SET_GPR_U32(ctx, 31, 0x2B6954u);
    ctx->pc = 0x2B6950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B694Cu;
    // 0x2b6950: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B694Cu, 0x2B6954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6954u;
label_2b6954:
    // 0x2b6954: 0xc0add08  jal         func_2B7420
    ctx->pc = 0x2B6954u;
    SET_GPR_U32(ctx, 31, 0x2B695Cu);
    ctx->pc = 0x2B6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6954u;
    // 0x2b6958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7420u, 0x2B6954u, 0x2B695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B695Cu;
label_2b695c:
    // 0x2b695c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b695cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6960: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x2b6960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2b6964: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B6964u;
    SET_GPR_U32(ctx, 31, 0x2B696Cu);
    ctx->pc = 0x2B6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6964u;
    // 0x2b6968: 0x27a6000c  addiu       $a2, $sp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B6964u, 0x2B696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B696Cu;
label_2b696c:
    // 0x2b696c: 0xc0add08  jal         func_2B7420
    ctx->pc = 0x2B696Cu;
    SET_GPR_U32(ctx, 31, 0x2B6974u);
    ctx->pc = 0x2B6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B696Cu;
    // 0x2b6970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7420u, 0x2B696Cu, 0x2B6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6974u;
label_2b6974:
    // 0x2b6974: 0xc0adccc  jal         func_2B7330
    ctx->pc = 0x2B6974u;
    SET_GPR_U32(ctx, 31, 0x2B697Cu);
    ctx->pc = 0x2B6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6974u;
    // 0x2b6978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7330u, 0x2B6974u, 0x2B697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B697Cu;
label_2b697c:
    // 0x2b697c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6980: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2b6980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6984: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2b6984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2b6988: 0xc0adb78  jal         func_2B6DE0
    ctx->pc = 0x2B6988u;
    SET_GPR_U32(ctx, 31, 0x2B6990u);
    ctx->pc = 0x2B698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6988u;
    // 0x2b698c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DE0u, 0x2B6988u, 0x2B6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6990u;
label_2b6990:
    // 0x2b6990: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b6990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6998: 0xc0add08  jal         func_2B7420
    ctx->pc = 0x2B6998u;
    SET_GPR_U32(ctx, 31, 0x2B69A0u);
    ctx->pc = 0x2B699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6998u;
    // 0x2b699c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7420u, 0x2B6998u, 0x2B69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B69A0u;
label_2b69a0:
    // 0x2b69a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b69a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b69a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b69a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b69a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B69A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B69ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B69A8u;
        // 0x2b69ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B69A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B69B0u;
}
