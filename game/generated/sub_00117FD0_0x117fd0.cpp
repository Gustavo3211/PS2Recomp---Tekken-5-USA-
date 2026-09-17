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

// Function: sub_00117FD0
// Address: 0x117fd0 - 0x118100
void sub_00117FD0_0x117fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117FD0_0x117fd0");
#endif

    switch (ctx->pc) {
        case 0x117fe4u: goto label_117fe4;
        case 0x117ff4u: goto label_117ff4;
        case 0x11801cu: goto label_11801c;
        case 0x118050u: goto label_118050;
        case 0x118070u: goto label_118070;
        case 0x118088u: goto label_118088;
        case 0x118098u: goto label_118098;
        case 0x1180dcu: goto label_1180dc;
        default: break;
    }

    ctx->pc = 0x117fd0u;

    // 0x117fd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117fd4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x117fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x117fd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117fdc: 0xc045e5a  jal         func_117968
    ctx->pc = 0x117FDCu;
    SET_GPR_U32(ctx, 31, 0x117FE4u);
    ctx->pc = 0x117FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FDCu;
    // 0x117fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117968u, 0x117FDCu, 0x117FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FE4u;
label_117fe4:
    // 0x117fe4: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x117FE4u;
    {
        const bool branch_taken_0x117fe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x117FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FE4u;
        // 0x117fe8: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117fe4) {
            ctx->pc = 0x118060u;
            goto label_118060;
        }
    }
    ctx->pc = 0x117FECu;
    // 0x117fec: 0xc045e9a  jal         func_117A68
    ctx->pc = 0x117FECu;
    SET_GPR_U32(ctx, 31, 0x117FF4u);
    ctx->pc = 0x117A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A68u, 0x117FECu, 0x117FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FF4u;
label_117ff4:
    // 0x117ff4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x117FF4u;
    {
        const bool branch_taken_0x117ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117ff4) {
            ctx->pc = 0x117FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117FF4u;
            // 0x117ff8: 0x3c02001f  lui         $v0, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118008u;
            goto label_118008;
        }
    }
    ctx->pc = 0x117FFCu;
    // 0x117ffc: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x117ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x118000: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x118000u;
    {
        const bool branch_taken_0x118000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118000u;
        // 0x118004: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x118000) {
            ctx->pc = 0x118060u;
            goto label_118060;
        }
    }
    ctx->pc = 0x118008u;
label_118008:
    // 0x118008: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x118008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11800c: 0x2450bd08  addiu       $s0, $v0, -0x42F8
    ctx->pc = 0x11800cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950152));
    // 0x118010: 0x240600fc  addiu       $a2, $zero, 0xFC
    ctx->pc = 0x118010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x118014: 0xc04a58e  jal         func_129638
    ctx->pc = 0x118014u;
    SET_GPR_U32(ctx, 31, 0x11801Cu);
    ctx->pc = 0x118018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118014u;
    // 0x118018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x118014u, 0x11801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11801Cu;
label_11801c:
    // 0x11801c: 0x2603fff8  addiu       $v1, $s0, -0x8
    ctx->pc = 0x11801cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x118020: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x118020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x118024: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x118024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118028: 0xa0600103  sb          $zero, 0x103($v1)
    ctx->pc = 0x118028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 259), (uint8_t)GPR_U32(ctx, 0));
    // 0x11802c: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x11802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x118030: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x118030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x118034: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x118034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x118038: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x118038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11803c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x11803cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x118040: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x118040u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118044: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x118044u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118048: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x118048u;
    SET_GPR_U32(ctx, 31, 0x118050u);
    ctx->pc = 0x11804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118048u;
    // 0x11804c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x118048u, 0x118050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118050u;
label_118050:
    // 0x118050: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118050u;
    {
        const bool branch_taken_0x118050 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x118050) {
            ctx->pc = 0x118054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118050u;
            // 0x118054: 0x8e02fff8  lw          $v0, -0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118060u;
            goto label_118060;
        }
    }
    ctx->pc = 0x118058u;
    // 0x118058: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x118058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x11805c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_118060:
    // 0x118060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x118060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118064: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x118064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118068: 0x3e00008  jr          $ra
    ctx->pc = 0x118068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118068u;
        // 0x11806c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118070u;
label_118070:
    // 0x118070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x118074: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x118074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x118078: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11807c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11807cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118080: 0xc045e5a  jal         func_117968
    ctx->pc = 0x118080u;
    SET_GPR_U32(ctx, 31, 0x118088u);
    ctx->pc = 0x118084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118080u;
    // 0x118084: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117968u, 0x118080u, 0x118088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118088u;
label_118088:
    // 0x118088: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x118088u;
    {
        const bool branch_taken_0x118088 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118088u;
        // 0x11808c: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118088) {
            ctx->pc = 0x1180ECu;
            goto label_1180ec;
        }
    }
    ctx->pc = 0x118090u;
    // 0x118090: 0xc045e9a  jal         func_117A68
    ctx->pc = 0x118090u;
    SET_GPR_U32(ctx, 31, 0x118098u);
    ctx->pc = 0x117A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A68u, 0x118090u, 0x118098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118098u;
label_118098:
    // 0x118098: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x118098u;
    {
        const bool branch_taken_0x118098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118098u;
        // 0x11809c: 0x3c10001f  lui         $s0, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118098) {
            ctx->pc = 0x1180ACu;
            goto label_1180ac;
        }
    }
    ctx->pc = 0x1180A0u;
    // 0x1180a0: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1180a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1180a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1180A4u;
    {
        const bool branch_taken_0x1180a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180A4u;
        // 0x1180a8: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180a4) {
            ctx->pc = 0x1180ECu;
            goto label_1180ec;
        }
    }
    ctx->pc = 0x1180ACu;
label_1180ac:
    // 0x1180ac: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x1180acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x1180b0: 0x2607bd00  addiu       $a3, $s0, -0x4300
    ctx->pc = 0x1180b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950144));
    // 0x1180b4: 0xae11bd00  sw          $s1, -0x4300($s0)
    ctx->pc = 0x1180b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950144), GPR_U32(ctx, 17));
    // 0x1180b8: 0x2484bf00  addiu       $a0, $a0, -0x4100
    ctx->pc = 0x1180b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950656));
    // 0x1180bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1180bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1180c0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1180c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1180c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1180c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180c8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1180cc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1180ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1180d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1180d4: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1180D4u;
    SET_GPR_U32(ctx, 31, 0x1180DCu);
    ctx->pc = 0x1180D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1180D4u;
    // 0x1180d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1180D4u, 0x1180DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1180DCu;
label_1180dc:
    // 0x1180dc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1180DCu;
    {
        const bool branch_taken_0x1180dc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1180dc) {
            ctx->pc = 0x1180E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1180DCu;
            // 0x1180e0: 0x8e02bd00  lw          $v0, -0x4300($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1180ECu;
            goto label_1180ec;
        }
    }
    ctx->pc = 0x1180E4u;
    // 0x1180e4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1180e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1180e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1180e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1180ec:
    // 0x1180ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1180ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1180f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1180f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1180f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1180f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1180f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1180F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180F8u;
        // 0x1180fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1180F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118100u;
}
