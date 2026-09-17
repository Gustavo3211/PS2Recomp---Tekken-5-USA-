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

// Function: sub_00341588
// Address: 0x341588 - 0x341648
void sub_00341588_0x341588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341588_0x341588");
#endif

    switch (ctx->pc) {
        case 0x34159cu: goto label_34159c;
        case 0x3415c0u: goto label_3415c0;
        default: break;
    }

    ctx->pc = 0x341588u;

    // 0x341588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34158c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34158cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x341590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x341590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x341594: 0xc0d05a4  jal         func_341690
    ctx->pc = 0x341594u;
    SET_GPR_U32(ctx, 31, 0x34159Cu);
    ctx->pc = 0x341598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341594u;
    // 0x341598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341690u, 0x341594u, 0x34159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34159Cu;
label_34159c:
    // 0x34159c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x34159Cu;
    {
        const bool branch_taken_0x34159c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34159Cu;
        // 0x3415a0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34159c) {
            ctx->pc = 0x341638u;
            goto label_341638;
        }
    }
    ctx->pc = 0x3415A4u;
    // 0x3415a4: 0x9607000a  lhu         $a3, 0xA($s0)
    ctx->pc = 0x3415a4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3415a8: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x3415a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3415ac: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x3415acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x3415b0: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3415B0u;
    {
        const bool branch_taken_0x3415b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415B0u;
        // 0x3415b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415b0) {
            ctx->pc = 0x341618u;
            goto label_341618;
        }
    }
    ctx->pc = 0x3415B8u;
    // 0x3415b8: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3415b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3415bc: 0x0  nop
    ctx->pc = 0x3415bcu;
    // NOP
label_3415c0:
    // 0x3415c0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x3415c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3415c4: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x3415c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3415c8: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x3415c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x3415cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3415ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3415d0: 0xa4a00004  sh          $zero, 0x4($a1)
    ctx->pc = 0x3415d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x3415d4: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x3415d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3415d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3415D8u;
    {
        const bool branch_taken_0x3415d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415D8u;
        // 0x3415dc: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415d8) {
            ctx->pc = 0x3415ECu;
            goto label_3415ec;
        }
    }
    ctx->pc = 0x3415E0u;
    // 0x3415e0: 0x90c2001e  lbu         $v0, 0x1E($a2)
    ctx->pc = 0x3415e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x3415e4: 0x54490005  bnel        $v0, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3415E4u;
    {
        const bool branch_taken_0x3415e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3415e4) {
            ctx->pc = 0x3415E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3415E4u;
            // 0x3415e8: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3415FCu;
            goto label_3415fc;
        }
    }
    ctx->pc = 0x3415ECu;
label_3415ec:
    // 0x3415ec: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3415ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3415f0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3415f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3415f4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3415f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3415f8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x3415f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_3415fc:
    // 0x3415fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3415fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x341600: 0x107202b  sltu        $a0, $t0, $a3
    ctx->pc = 0x341600u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x341604: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x341604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x341608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34160c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34160cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x341610: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x341610u;
    {
        const bool branch_taken_0x341610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x341614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341610u;
        // 0x341614: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341610) {
            ctx->pc = 0x3415C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3415c0;
        }
    }
    ctx->pc = 0x341618u;
label_341618:
    // 0x341618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34161c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34161cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341620: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x341620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x341624: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x341624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341628: 0x24a51748  addiu       $a1, $a1, 0x1748
    ctx->pc = 0x341628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5960));
    // 0x34162c: 0x80d04d6  j           func_341358
    ctx->pc = 0x34162Cu;
    ctx->pc = 0x341630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34162Cu;
    // 0x341630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341358u, 0x34162Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341634u;
    // 0x341634: 0x0  nop
    ctx->pc = 0x341634u;
    // NOP
label_341638:
    // 0x341638: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x341638u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34163c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34163cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x341640: 0x3e00008  jr          $ra
    ctx->pc = 0x341640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341640u;
        // 0x341644: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341648u;
}
