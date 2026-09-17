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

// Function: sub_00209130
// Address: 0x209130 - 0x209238
void sub_00209130_0x209130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209130_0x209130");
#endif

    switch (ctx->pc) {
        case 0x209158u: goto label_209158;
        case 0x209160u: goto label_209160;
        case 0x20916cu: goto label_20916c;
        case 0x209174u: goto label_209174;
        case 0x20917cu: goto label_20917c;
        case 0x2091a0u: goto label_2091a0;
        case 0x2091c0u: goto label_2091c0;
        case 0x209214u: goto label_209214;
        case 0x20921cu: goto label_20921c;
        default: break;
    }

    ctx->pc = 0x209130u;

    // 0x209130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209134: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209138: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20913c: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x20913cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x209140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209144: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209148: 0x2411004d  addiu       $s1, $zero, 0x4D
    ctx->pc = 0x209148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x20914c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20914cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x209150: 0xc092486  jal         func_249218
    ctx->pc = 0x209150u;
    SET_GPR_U32(ctx, 31, 0x209158u);
    ctx->pc = 0x209154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209150u;
    // 0x209154: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x209150u, 0x209158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209158u;
label_209158:
    // 0x209158: 0xc092490  jal         func_249240
    ctx->pc = 0x209158u;
    SET_GPR_U32(ctx, 31, 0x209160u);
    ctx->pc = 0x20915Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209158u;
    // 0x20915c: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x209158u, 0x209160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209160u;
label_209160:
    // 0x209160: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x209160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209164: 0xc093720  jal         func_24DC80
    ctx->pc = 0x209164u;
    SET_GPR_U32(ctx, 31, 0x20916Cu);
    ctx->pc = 0x209168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209164u;
    // 0x209168: 0xac508880  sw          $s0, -0x7780($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936704), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DC80u, 0x209164u, 0x20916Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20916Cu;
label_20916c:
    // 0x20916c: 0xc07c4c0  jal         func_1F1300
    ctx->pc = 0x20916Cu;
    SET_GPR_U32(ctx, 31, 0x209174u);
    ctx->pc = 0x209170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20916Cu;
    // 0x209170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1300u, 0x20916Cu, 0x209174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209174u;
label_209174:
    // 0x209174: 0xc089a28  jal         func_2268A0
    ctx->pc = 0x209174u;
    SET_GPR_U32(ctx, 31, 0x20917Cu);
    ctx->pc = 0x2268A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268A0u, 0x209174u, 0x20917Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20917Cu;
label_20917c:
    // 0x20917c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x209180: 0x245088d0  addiu       $s0, $v0, -0x7730
    ctx->pc = 0x209180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x209184: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209184u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x209188: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x209188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x20918c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20918Cu;
    {
        const bool branch_taken_0x20918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x209190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20918Cu;
        // 0x209190: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20918c) {
            ctx->pc = 0x2091A0u;
            goto label_2091a0;
        }
    }
    ctx->pc = 0x209194u;
    // 0x209194: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x209194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x209198: 0xc089912  jal         func_226448
    ctx->pc = 0x209198u;
    SET_GPR_U32(ctx, 31, 0x2091A0u);
    ctx->pc = 0x20919Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209198u;
    // 0x20919c: 0xa4620042  sh          $v0, 0x42($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x209198u, 0x2091A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091A0u;
label_2091a0:
    // 0x2091a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2091a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2091a4: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x2091a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x2091a8: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2091A8u;
    {
        const bool branch_taken_0x2091a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2091a8) {
            ctx->pc = 0x2091ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2091A8u;
            // 0x2091ac: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2091C4u;
            goto label_2091c4;
        }
    }
    ctx->pc = 0x2091B0u;
    // 0x2091b0: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x2091b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2091b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2091b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2091b8: 0xc089912  jal         func_226448
    ctx->pc = 0x2091B8u;
    SET_GPR_U32(ctx, 31, 0x2091C0u);
    ctx->pc = 0x2091BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2091B8u;
    // 0x2091bc: 0xa4620042  sh          $v0, 0x42($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x2091B8u, 0x2091C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2091C0u;
label_2091c0:
    // 0x2091c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2091c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2091c4:
    // 0x2091c4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2091c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2091c8: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2091c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2091cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2091ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2091d0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2091d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2091d4: 0x904301bb  lbu         $v1, 0x1BB($v0)
    ctx->pc = 0x2091d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 443)));
    // 0x2091d8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2091d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2091dc: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x2091dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x2091e0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2091e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2091e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2091e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2091e8: 0xa243001e  sb          $v1, 0x1E($s2)
    ctx->pc = 0x2091e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x2091ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2091ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2091f0: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x2091f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x2091f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2091f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2091f8: 0x904301bb  lbu         $v1, 0x1BB($v0)
    ctx->pc = 0x2091f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 443)));
    // 0x2091fc: 0xa243001f  sb          $v1, 0x1F($s2)
    ctx->pc = 0x2091fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x209200: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209204: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x209204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209208: 0xa04001bb  sb          $zero, 0x1BB($v0)
    ctx->pc = 0x209208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 0));
    // 0x20920c: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x20920Cu;
    SET_GPR_U32(ctx, 31, 0x209214u);
    ctx->pc = 0x209210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20920Cu;
    // 0x209210: 0xa06001bb  sb          $zero, 0x1BB($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 443), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x20920Cu, 0x209214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209214u;
label_209214:
    // 0x209214: 0xc085dec  jal         func_2177B0
    ctx->pc = 0x209214u;
    SET_GPR_U32(ctx, 31, 0x20921Cu);
    ctx->pc = 0x209218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209214u;
    // 0x209218: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2177B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2177B0u, 0x209214u, 0x20921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20921Cu;
label_20921c:
    // 0x20921c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20921cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209228: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x209228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20922c: 0x3e00008  jr          $ra
    ctx->pc = 0x20922Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20922Cu;
        // 0x209230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20922Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209234u;
    // 0x209234: 0x0  nop
    ctx->pc = 0x209234u;
    // NOP
    ctx->pc = 0x209238u;
}
