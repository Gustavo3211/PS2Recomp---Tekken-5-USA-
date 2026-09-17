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

// Function: sub_004AA4F8
// Address: 0x4aa4f8 - 0x4aa680
void sub_004AA4F8_0x4aa4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA4F8_0x4aa4f8");
#endif

    switch (ctx->pc) {
        case 0x4aa580u: goto label_4aa580;
        case 0x4aa590u: goto label_4aa590;
        case 0x4aa5a0u: goto label_4aa5a0;
        case 0x4aa5acu: goto label_4aa5ac;
        case 0x4aa638u: goto label_4aa638;
        case 0x4aa650u: goto label_4aa650;
        default: break;
    }

    ctx->pc = 0x4aa4f8u;

label_4aa4f8:
    // 0x4aa4f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aa4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aa4fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4aa4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4aa500: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4aa500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4aa504: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4aa504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4aa508: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4aa508u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4aa50c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4aa50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4aa510: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4aa510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa514: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4aa514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4aa518: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4aa518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa51c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4aa51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4aa520: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4aa520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4aa524: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4aa524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa528: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x4aa528u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4aa52c: 0x84880066  lh          $t0, 0x66($a0)
    ctx->pc = 0x4aa52cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x4aa530: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4aa530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aa534: 0x84820064  lh          $v0, 0x64($a0)
    ctx->pc = 0x4aa534u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x4aa538: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x4aa538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4aa53c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4aa53cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa540: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4aa540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4aa544: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4aa544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa548: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aa548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aa54c: 0x8e690000  lw          $t1, 0x0($s3)
    ctx->pc = 0x4aa54cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4aa550: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4aa550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4aa554: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4aa554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4aa558: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4aa558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4aa55c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4aa55cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4aa560: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4aa560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4aa564: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4aa564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa568: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x4aa568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x4aa56c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4aa56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4aa570: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x4aa570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x4aa574: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4aa574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4aa578: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA578u;
    SET_GPR_U32(ctx, 31, 0x4AA580u);
    ctx->pc = 0x4AA57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA578u;
    // 0x4aa57c: 0xafaa000c  sw          $t2, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA578u, 0x4AA580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA580u;
label_4aa580:
    // 0x4aa580: 0x27b10008  addiu       $s1, $sp, 0x8
    ctx->pc = 0x4aa580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4aa584: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x4aa584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x4aa588: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA588u;
    SET_GPR_U32(ctx, 31, 0x4AA590u);
    ctx->pc = 0x4AA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA588u;
    // 0x4aa58c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA588u, 0x4AA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA590u;
label_4aa590:
    // 0x4aa590: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4aa590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4aa594: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4aa594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa598: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA598u;
    SET_GPR_U32(ctx, 31, 0x4AA5A0u);
    ctx->pc = 0x4AA59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA598u;
    // 0x4aa59c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA598u, 0x4AA5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA5A0u;
label_4aa5a0:
    // 0x4aa5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aa5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa5a4: 0xc12a700  jal         func_4A9C00
    ctx->pc = 0x4AA5A4u;
    SET_GPR_U32(ctx, 31, 0x4AA5ACu);
    ctx->pc = 0x4AA5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA5A4u;
    // 0x4aa5a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9C00u, 0x4AA5A4u, 0x4AA5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA5ACu;
label_4aa5ac:
    // 0x4aa5ac: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4aa5acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa5b0: 0x87a5000c  lh          $a1, 0xC($sp)
    ctx->pc = 0x4aa5b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aa5b4: 0x87a40010  lh          $a0, 0x10($sp)
    ctx->pc = 0x4aa5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa5b8: 0x87a60004  lh          $a2, 0x4($sp)
    ctx->pc = 0x4aa5b8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4aa5bc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x4aa5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4aa5c0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x4aa5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4aa5c4: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x4aa5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4aa5c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4aa5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa5cc: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4aa5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4aa5d0: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x4aa5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4aa5d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4aa5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa5d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aa5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aa5dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aa5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aa5e0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4aa5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4aa5e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4aa5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4aa5e8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4aa5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4aa5ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4aa5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa5f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4aa5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4aa5f4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4aa5f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4aa5f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4aa5f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4aa5fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4aa5fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4aa600: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4aa600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4aa604: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AA604u;
        // 0x4aa608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AA604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AA60Cu;
    // 0x4aa60c: 0x0  nop
    ctx->pc = 0x4aa60cu;
    // NOP
    // 0x4aa610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aa610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aa614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aa614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aa618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4aa618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4aa61c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aa61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa620: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4aa620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4aa624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4aa624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa628: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4aa628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4aa62c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aa62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aa630: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4AA630u;
    SET_GPR_U32(ctx, 31, 0x4AA638u);
    ctx->pc = 0x4AA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA630u;
    // 0x4aa634: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4AA630u, 0x4AA638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AA638u;
label_4aa638:
    // 0x4aa638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4aa638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa63c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa644: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa648: 0xc12a93e  jal         func_4AA4F8
    ctx->pc = 0x4AA648u;
    SET_GPR_U32(ctx, 31, 0x4AA650u);
    ctx->pc = 0x4AA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA648u;
    // 0x4aa64c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4F8u;
    goto label_4aa4f8;
    ctx->pc = 0x4AA650u;
label_4aa650:
    // 0x4aa650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aa650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa654: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4aa654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4aa658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4aa65c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4aa65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4aa660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa664: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4aa664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa668: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4aa668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4aa66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4aa66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa670: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4aa670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa674: 0x812a8f8  j           func_4AA3E0
    ctx->pc = 0x4AA674u;
    ctx->pc = 0x4AA678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AA674u;
    // 0x4aa678: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA3E0u;
    sub_004AA3E0_0x4aa3e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4AA67Cu;
    // 0x4aa67c: 0x0  nop
    ctx->pc = 0x4aa67cu;
    // NOP
    ctx->pc = 0x4aa680u;
}
