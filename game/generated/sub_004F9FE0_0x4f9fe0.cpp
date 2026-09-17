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

// Function: sub_004F9FE0
// Address: 0x4f9fe0 - 0x4fa048
void sub_004F9FE0_0x4f9fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9FE0_0x4f9fe0");
#endif

    switch (ctx->pc) {
        case 0x4f9ff4u: goto label_4f9ff4;
        case 0x4f9ffcu: goto label_4f9ffc;
        case 0x4fa008u: goto label_4fa008;
        case 0x4fa010u: goto label_4fa010;
        case 0x4fa018u: goto label_4fa018;
        case 0x4fa020u: goto label_4fa020;
        case 0x4fa028u: goto label_4fa028;
        case 0x4fa034u: goto label_4fa034;
        default: break;
    }

    ctx->pc = 0x4f9fe0u;

    // 0x4f9fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f9fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f9fe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f9fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f9fe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f9fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f9fec: 0xc140d5c  jal         func_503570
    ctx->pc = 0x4F9FECu;
    SET_GPR_U32(ctx, 31, 0x4F9FF4u);
    ctx->pc = 0x4F9FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9FECu;
    // 0x4f9ff0: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x503570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503570u, 0x4F9FECu, 0x4F9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9FF4u;
label_4f9ff4:
    // 0x4f9ff4: 0xc13f7cc  jal         func_4FDF30
    ctx->pc = 0x4F9FF4u;
    SET_GPR_U32(ctx, 31, 0x4F9FFCu);
    ctx->pc = 0x4F9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F9FF4u;
    // 0x4f9ff8: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FDF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FDF30u, 0x4F9FF4u, 0x4F9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F9FFCu;
label_4f9ffc:
    // 0x4f9ffc: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x4f9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x4fa000: 0xc140d5c  jal         func_503570
    ctx->pc = 0x4FA000u;
    SET_GPR_U32(ctx, 31, 0x4FA008u);
    ctx->pc = 0x4FA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA000u;
    // 0x4fa004: 0x3484ff00  ori         $a0, $a0, 0xFF00 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    ctx->in_delay_slot = false;
    ctx->pc = 0x503570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503570u, 0x4FA000u, 0x4FA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA008u;
label_4fa008:
    // 0x4fa008: 0xc13efa0  jal         func_4FBE80
    ctx->pc = 0x4FA008u;
    SET_GPR_U32(ctx, 31, 0x4FA010u);
    ctx->pc = 0x4FA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA008u;
    // 0x4fa00c: 0x2610ce8c  addiu       $s0, $s0, -0x3174 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FBE80u, 0x4FA008u, 0x4FA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA010u;
label_4fa010:
    // 0x4fa010: 0xc140d5c  jal         func_503570
    ctx->pc = 0x4FA010u;
    SET_GPR_U32(ctx, 31, 0x4FA018u);
    ctx->pc = 0x4FA014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA010u;
    // 0x4fa014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503570u, 0x4FA010u, 0x4FA018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA018u;
label_4fa018:
    // 0x4fa018: 0xc140d5e  jal         func_503578
    ctx->pc = 0x4FA018u;
    SET_GPR_U32(ctx, 31, 0x4FA020u);
    ctx->pc = 0x503578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503578u, 0x4FA018u, 0x4FA020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA020u;
label_4fa020:
    // 0x4fa020: 0xc04098c  jal         func_102630
    ctx->pc = 0x4FA020u;
    SET_GPR_U32(ctx, 31, 0x4FA028u);
    ctx->pc = 0x4FA024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA020u;
    // 0x4fa024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102630u, 0x4FA020u, 0x4FA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA028u;
label_4fa028:
    // 0x4fa028: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4fa028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x4fa02c: 0xc140d5a  jal         func_503568
    ctx->pc = 0x4FA02Cu;
    SET_GPR_U32(ctx, 31, 0x4FA034u);
    ctx->pc = 0x4FA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA02Cu;
    // 0x4fa030: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503568u, 0x4FA02Cu, 0x4FA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA034u;
label_4fa034:
    // 0x4fa034: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x4fa034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x4fa038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fa038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa03c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4fa03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fa040: 0x8140d5c  j           func_503570
    ctx->pc = 0x4FA040u;
    ctx->pc = 0x4FA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA040u;
    // 0x4fa044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503570u;
    sub_00503570_0x503570(rdram, ctx, runtime); return;
    ctx->pc = 0x4FA048u;
}
