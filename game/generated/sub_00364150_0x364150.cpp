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

// Function: sub_00364150
// Address: 0x364150 - 0x364268
void sub_00364150_0x364150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364150_0x364150");
#endif

    switch (ctx->pc) {
        case 0x364194u: goto label_364194;
        case 0x36419cu: goto label_36419c;
        case 0x3641acu: goto label_3641ac;
        case 0x3641c0u: goto label_3641c0;
        case 0x3641d8u: goto label_3641d8;
        case 0x364200u: goto label_364200;
        case 0x364220u: goto label_364220;
        case 0x364244u: goto label_364244;
        default: break;
    }

    ctx->pc = 0x364150u;

    // 0x364150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364154: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36415c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x364160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x364164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x364164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364168: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x364168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36416c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36416cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364170: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x364174: 0x26511400  addiu       $s1, $s2, 0x1400
    ctx->pc = 0x364174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5120));
    // 0x364178: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x364178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36417c: 0x8e431600  lw          $v1, 0x1600($s2)
    ctx->pc = 0x36417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5632)));
    // 0x364180: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x364180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x364184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x364184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x364188: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x364188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x36418c: 0xc0d909a  jal         func_364268
    ctx->pc = 0x36418Cu;
    SET_GPR_U32(ctx, 31, 0x364194u);
    ctx->pc = 0x364190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36418Cu;
    // 0x364190: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364268u, 0x36418Cu, 0x364194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364194u;
label_364194:
    // 0x364194: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x364194u;
    SET_GPR_U32(ctx, 31, 0x36419Cu);
    ctx->pc = 0x364198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364194u;
    // 0x364198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x364194u, 0x36419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36419Cu;
label_36419c:
    // 0x36419c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x36419Cu;
    {
        const bool branch_taken_0x36419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3641A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36419Cu;
        // 0x3641a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36419c) {
            ctx->pc = 0x364248u;
            goto label_364248;
        }
    }
    ctx->pc = 0x3641A4u;
    // 0x3641a4: 0xc0d8f9e  jal         func_363E78
    ctx->pc = 0x3641A4u;
    SET_GPR_U32(ctx, 31, 0x3641ACu);
    ctx->pc = 0x3641A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641A4u;
    // 0x3641a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363E78u, 0x3641A4u, 0x3641ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641ACu;
label_3641ac:
    // 0x3641ac: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3641ACu;
    {
        const bool branch_taken_0x3641ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3641B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641ACu;
        // 0x3641b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641ac) {
            ctx->pc = 0x364248u;
            goto label_364248;
        }
    }
    ctx->pc = 0x3641B4u;
    // 0x3641b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3641b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641b8: 0xc04a48c  jal         func_129230
    ctx->pc = 0x3641B8u;
    SET_GPR_U32(ctx, 31, 0x3641C0u);
    ctx->pc = 0x3641BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641B8u;
    // 0x3641bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x3641B8u, 0x3641C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641C0u;
label_3641c0:
    // 0x3641c0: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x3641c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x3641c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3641c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3641c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3641cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3641ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3641d0: 0xc0d909a  jal         func_364268
    ctx->pc = 0x3641D0u;
    SET_GPR_U32(ctx, 31, 0x3641D8u);
    ctx->pc = 0x3641D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641D0u;
    // 0x3641d4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364268u, 0x3641D0u, 0x3641D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641D8u;
label_3641d8:
    // 0x3641d8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3641d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3641dc: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x3641dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x3641e0: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3641E0u;
    {
        const bool branch_taken_0x3641e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3641E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641E0u;
        // 0x3641e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641e0) {
            ctx->pc = 0x364248u;
            goto label_364248;
        }
    }
    ctx->pc = 0x3641E8u;
    // 0x3641e8: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x3641e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3641ec: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3641ECu;
    {
        const bool branch_taken_0x3641ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3641F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641ECu;
        // 0x3641f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641ec) {
            ctx->pc = 0x364248u;
            goto label_364248;
        }
    }
    ctx->pc = 0x3641F4u;
    // 0x3641f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3641F4u;
    {
        const bool branch_taken_0x3641f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3641F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641F4u;
        // 0x3641f8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3641f4) {
            ctx->pc = 0x364208u;
            goto label_364208;
        }
    }
    ctx->pc = 0x3641FCu;
    // 0x3641fc: 0x0  nop
    ctx->pc = 0x3641fcu;
    // NOP
label_364200:
    // 0x364200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x364204: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x364204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_364208:
    // 0x364208: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x364208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x36420c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364210: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x364210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364214: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x364214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364218: 0xc0d909a  jal         func_364268
    ctx->pc = 0x364218u;
    SET_GPR_U32(ctx, 31, 0x364220u);
    ctx->pc = 0x36421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364218u;
    // 0x36421c: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364268u, 0x364218u, 0x364220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364220u;
label_364220:
    // 0x364220: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x364220u;
    {
        const bool branch_taken_0x364220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364220) {
            ctx->pc = 0x364224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364220u;
            // 0x364224: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364200;
        }
    }
    ctx->pc = 0x364228u;
    // 0x364228: 0x8e431600  lw          $v1, 0x1600($s2)
    ctx->pc = 0x364228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5632)));
    // 0x36422c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x36422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x364230: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x364230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x364234: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364234u;
    {
        const bool branch_taken_0x364234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x364238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364234u;
        // 0x364238: 0xae431600  sw          $v1, 0x1600($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364234) {
            ctx->pc = 0x364248u;
            goto label_364248;
        }
    }
    ctx->pc = 0x36423Cu;
    // 0x36423c: 0xc049dc0  jal         func_127700
    ctx->pc = 0x36423Cu;
    SET_GPR_U32(ctx, 31, 0x364244u);
    ctx->pc = 0x364240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36423Cu;
    // 0x364240: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127700u, 0x36423Cu, 0x364244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364244u;
label_364244:
    // 0x364244: 0x0  nop
    ctx->pc = 0x364244u;
    // NOP
label_364248:
    // 0x364248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x364248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36424c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36424cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x364250: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x364250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364254: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x364254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x364258: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x364258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36425c: 0x3e00008  jr          $ra
    ctx->pc = 0x36425Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36425Cu;
        // 0x364260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36425Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364264u;
    // 0x364264: 0x0  nop
    ctx->pc = 0x364264u;
    // NOP
    ctx->pc = 0x364268u;
}
