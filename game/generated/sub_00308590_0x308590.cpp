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

// Function: sub_00308590
// Address: 0x308590 - 0x3086d8
void sub_00308590_0x308590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308590_0x308590");
#endif

    switch (ctx->pc) {
        case 0x3085acu: goto label_3085ac;
        case 0x3085b8u: goto label_3085b8;
        case 0x3085d8u: goto label_3085d8;
        case 0x308654u: goto label_308654;
        case 0x308680u: goto label_308680;
        case 0x308690u: goto label_308690;
        case 0x3086c4u: goto label_3086c4;
        default: break;
    }

    ctx->pc = 0x308590u;

    // 0x308590: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x308590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x308594: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x308594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x308598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30859c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x30859cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x3085a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3085a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3085a4: 0xc0b6fa2  jal         func_2DBE88
    ctx->pc = 0x3085A4u;
    SET_GPR_U32(ctx, 31, 0x3085ACu);
    ctx->pc = 0x3085A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085A4u;
    // 0x3085a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE88u, 0x3085A4u, 0x3085ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085ACu;
label_3085ac:
    // 0x3085ac: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3085acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3085b0: 0xc0b2a18  jal         func_2CA860
    ctx->pc = 0x3085B0u;
    SET_GPR_U32(ctx, 31, 0x3085B8u);
    ctx->pc = 0x3085B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085B0u;
    // 0x3085b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA860u, 0x3085B0u, 0x3085B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085B8u;
label_3085b8:
    // 0x3085b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3085b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3085bc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3085bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3085c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3085c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3085c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3085c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3085c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3085c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3085cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3085ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3085d0: 0xc0b7208  jal         func_2DC820
    ctx->pc = 0x3085D0u;
    SET_GPR_U32(ctx, 31, 0x3085D8u);
    ctx->pc = 0x3085D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3085D0u;
    // 0x3085d4: 0x3a28821  addu        $s1, $sp, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC820u, 0x3085D0u, 0x3085D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3085D8u;
label_3085d8:
    // 0x3085d8: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x3085d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3085dc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x3085dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3085e0: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x3085e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3085e4: 0x29260004  slti        $a2, $t1, 0x4
    ctx->pc = 0x3085e4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3085e8: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x3085e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3085ec: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3085ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3085f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3085f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3085f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3085f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3085f8: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x3085f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3085fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3085fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x308600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x308604: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x308604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x308608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x308608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30860c: 0x5200016  bltz        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30860Cu;
    {
        const bool branch_taken_0x30860c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x308610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30860Cu;
        // 0x308610: 0x2448001c  addiu       $t0, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30860c) {
            ctx->pc = 0x308668u;
            goto label_308668;
        }
    }
    ctx->pc = 0x308614u;
    // 0x308614: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x308614u;
    {
        const bool branch_taken_0x308614 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x308618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308614u;
        // 0x308618: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308614) {
            ctx->pc = 0x308630u;
            goto label_308630;
        }
    }
    ctx->pc = 0x30861Cu;
    // 0x30861c: 0x29220007  slti        $v0, $t1, 0x7
    ctx->pc = 0x30861cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x308620: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x308620u;
    {
        const bool branch_taken_0x308620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308620u;
        // 0x308624: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308620) {
            ctx->pc = 0x30866Cu;
            goto label_30866c;
        }
    }
    ctx->pc = 0x308628u;
    // 0x308628: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x308628u;
    {
        const bool branch_taken_0x308628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308628u;
        // 0x30862c: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308628) {
            ctx->pc = 0x308660u;
            goto label_308660;
        }
    }
    ctx->pc = 0x308630u;
label_308630:
    // 0x308630: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x308630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x308634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308638: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x308638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x30863c: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x30863cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x308640: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x308640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308644: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x308644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x308648: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x308648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30864c: 0xc0b71d4  jal         func_2DC750
    ctx->pc = 0x30864Cu;
    SET_GPR_U32(ctx, 31, 0x308654u);
    ctx->pc = 0x308650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30864Cu;
    // 0x308650: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC750u, 0x30864Cu, 0x308654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308654u;
label_308654:
    // 0x308654: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x308654u;
    {
        const bool branch_taken_0x308654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308654u;
        // 0x308658: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308654) {
            ctx->pc = 0x30866Cu;
            goto label_30866c;
        }
    }
    ctx->pc = 0x30865Cu;
    // 0x30865c: 0x0  nop
    ctx->pc = 0x30865cu;
    // NOP
label_308660:
    // 0x308660: 0x1311021  addu        $v0, $t1, $s1
    ctx->pc = 0x308660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
    // 0x308664: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x308664u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
label_308668:
    // 0x308668: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x308668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_30866c:
    // 0x30866c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30866cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308670: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x308670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x308674: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x308674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308678: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x308678u;
    SET_GPR_U32(ctx, 31, 0x308680u);
    ctx->pc = 0x30867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308678u;
    // 0x30867c: 0x84650042  lh          $a1, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x308678u, 0x308680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308680u;
label_308680:
    // 0x308680: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x308680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x308684: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x308684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x308688: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x308688u;
    SET_GPR_U32(ctx, 31, 0x308690u);
    ctx->pc = 0x30868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308688u;
    // 0x30868c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x308688u, 0x308690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308690u;
label_308690:
    // 0x308690: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x308690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x308694: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x308694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308698: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x308698u;
    {
        const bool branch_taken_0x308698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308698) {
            ctx->pc = 0x30869Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308698u;
            // 0x30869c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3086B4u;
            goto label_3086b4;
        }
    }
    ctx->pc = 0x3086A0u;
    // 0x3086a0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3086a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3086a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3086a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3086a8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3086A8u;
    {
        const bool branch_taken_0x3086a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3086a8) {
            ctx->pc = 0x3086BCu;
            goto label_3086bc;
        }
    }
    ctx->pc = 0x3086B0u;
    // 0x3086b0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x3086b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_3086b4:
    // 0x3086b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3086b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x3086b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_3086bc:
    // 0x3086bc: 0xc0b8a74  jal         func_2E29D0
    ctx->pc = 0x3086BCu;
    SET_GPR_U32(ctx, 31, 0x3086C4u);
    ctx->pc = 0x2E29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E29D0u, 0x3086BCu, 0x3086C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3086C4u;
label_3086c4:
    // 0x3086c4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3086c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3086c8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3086c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3086cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3086ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3086d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3086D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3086D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086D0u;
        // 0x3086d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3086D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3086D8u;
}
