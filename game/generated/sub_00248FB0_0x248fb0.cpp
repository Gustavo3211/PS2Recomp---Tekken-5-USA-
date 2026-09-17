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

// Function: sub_00248FB0
// Address: 0x248fb0 - 0x249040
void sub_00248FB0_0x248fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248FB0_0x248fb0");
#endif

    switch (ctx->pc) {
        case 0x248fe4u: goto label_248fe4;
        case 0x248ff0u: goto label_248ff0;
        case 0x248ffcu: goto label_248ffc;
        case 0x249008u: goto label_249008;
        case 0x249014u: goto label_249014;
        case 0x249020u: goto label_249020;
        case 0x24902cu: goto label_24902c;
        default: break;
    }

    ctx->pc = 0x248fb0u;

    // 0x248fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248fb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x248fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x248fb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248fbc: 0x14a2001b  bne         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x248FBCu;
    {
        const bool branch_taken_0x248fbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x248FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FBCu;
        // 0x248fc0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fbc) {
            ctx->pc = 0x24902Cu;
            goto label_24902c;
        }
    }
    ctx->pc = 0x248FC4u;
    // 0x248fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248fc8: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x248FC8u;
    {
        const bool branch_taken_0x248fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x248FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248FC8u;
        // 0x248fcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248fc8) {
            ctx->pc = 0x249030u;
            goto label_249030;
        }
    }
    ctx->pc = 0x248FD0u;
    // 0x248fd0: 0x3c100016  lui         $s0, 0x16
    ctx->pc = 0x248fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)22 << 16));
    // 0x248fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248fd8: 0x26107000  addiu       $s0, $s0, 0x7000
    ctx->pc = 0x248fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28672));
    // 0x248fdc: 0xc092224  jal         func_248890
    ctx->pc = 0x248FDCu;
    SET_GPR_U32(ctx, 31, 0x248FE4u);
    ctx->pc = 0x248FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FDCu;
    // 0x248fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x248FDCu, 0x248FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FE4u;
label_248fe4:
    // 0x248fe4: 0x2604002c  addiu       $a0, $s0, 0x2C
    ctx->pc = 0x248fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x248fe8: 0xc092224  jal         func_248890
    ctx->pc = 0x248FE8u;
    SET_GPR_U32(ctx, 31, 0x248FF0u);
    ctx->pc = 0x248FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FE8u;
    // 0x248fec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x248FE8u, 0x248FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FF0u;
label_248ff0:
    // 0x248ff0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x248ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x248ff4: 0xc092224  jal         func_248890
    ctx->pc = 0x248FF4u;
    SET_GPR_U32(ctx, 31, 0x248FFCu);
    ctx->pc = 0x248FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248FF4u;
    // 0x248ff8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x248FF4u, 0x248FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248FFCu;
label_248ffc:
    // 0x248ffc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x248ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x249000: 0xc092224  jal         func_248890
    ctx->pc = 0x249000u;
    SET_GPR_U32(ctx, 31, 0x249008u);
    ctx->pc = 0x249004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249000u;
    // 0x249004: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x249000u, 0x249008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249008u;
label_249008:
    // 0x249008: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x249008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x24900c: 0xc092224  jal         func_248890
    ctx->pc = 0x24900Cu;
    SET_GPR_U32(ctx, 31, 0x249014u);
    ctx->pc = 0x249010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24900Cu;
    // 0x249010: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x24900Cu, 0x249014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249014u;
label_249014:
    // 0x249014: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x249014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x249018: 0xc092224  jal         func_248890
    ctx->pc = 0x249018u;
    SET_GPR_U32(ctx, 31, 0x249020u);
    ctx->pc = 0x24901Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249018u;
    // 0x24901c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x249018u, 0x249020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249020u;
label_249020:
    // 0x249020: 0x26040108  addiu       $a0, $s0, 0x108
    ctx->pc = 0x249020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    // 0x249024: 0xc092224  jal         func_248890
    ctx->pc = 0x249024u;
    SET_GPR_U32(ctx, 31, 0x24902Cu);
    ctx->pc = 0x249028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249024u;
    // 0x249028: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248890u, 0x249024u, 0x24902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24902Cu;
label_24902c:
    // 0x24902c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24902cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249030:
    // 0x249030: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249034: 0x3e00008  jr          $ra
    ctx->pc = 0x249034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249034u;
        // 0x249038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24903Cu;
    // 0x24903c: 0x0  nop
    ctx->pc = 0x24903cu;
    // NOP
    ctx->pc = 0x249040u;
}
