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

// Function: sub_002146D8
// Address: 0x2146d8 - 0x2147f0
void sub_002146D8_0x2146d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002146D8_0x2146d8");
#endif

    switch (ctx->pc) {
        case 0x214708u: goto label_214708;
        case 0x214718u: goto label_214718;
        case 0x214728u: goto label_214728;
        case 0x214770u: goto label_214770;
        case 0x2147d8u: goto label_2147d8;
        default: break;
    }

    ctx->pc = 0x2146d8u;

    // 0x2146d8: 0x9382c900  lbu         $v0, -0x3700($gp)
    ctx->pc = 0x2146d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294953216)));
    // 0x2146dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2146dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2146e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2146e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2146e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2146e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2146e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2146ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2146ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2146f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2146f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2146f4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2146F4u;
    {
        const bool branch_taken_0x2146f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2146F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2146F4u;
        // 0x2146f8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2146f4) {
            ctx->pc = 0x214768u;
            goto label_214768;
        }
    }
    ctx->pc = 0x2146FCu;
    // 0x2146fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2146fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214700: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214700u;
    SET_GPR_U32(ctx, 31, 0x214708u);
    ctx->pc = 0x214704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214700u;
    // 0x214704: 0xa382c900  sb          $v0, -0x3700($gp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294953216), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214700u, 0x214708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214708u;
label_214708:
    // 0x214708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21470c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21470cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214710: 0xc085148  jal         func_214520
    ctx->pc = 0x214710u;
    SET_GPR_U32(ctx, 31, 0x214718u);
    ctx->pc = 0x214714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214710u;
    // 0x214714: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214520u, 0x214710u, 0x214718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214718u;
label_214718:
    // 0x214718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21471c: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x21471cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x214720: 0x2626000d  addiu       $a2, $s1, 0xD
    ctx->pc = 0x214720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
    // 0x214724: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x214724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_214728:
    // 0x214728: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x214728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x21472c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x214730: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x214730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x214734: 0x28a40003  slti        $a0, $a1, 0x3
    ctx->pc = 0x214734u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x214738: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x214738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21473c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x21473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x214740: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x214740u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x214744: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x214744u;
    {
        const bool branch_taken_0x214744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214744u;
        // 0x214748: 0xa0680000  sb          $t0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214744) {
            ctx->pc = 0x214728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214728;
        }
    }
    ctx->pc = 0x21474Cu;
    // 0x21474c: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x21474cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x214750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x214754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x214758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21475c: 0x8082fd0  j           func_20BF40
    ctx->pc = 0x21475Cu;
    ctx->pc = 0x214760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21475Cu;
    // 0x214760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF40u;
    sub_0020BF40_0x20bf40(rdram, ctx, runtime); return;
    ctx->pc = 0x214764u;
    // 0x214764: 0x0  nop
    ctx->pc = 0x214764u;
    // NOP
label_214768:
    // 0x214768: 0xc0863ea  jal         func_218FA8
    ctx->pc = 0x214768u;
    SET_GPR_U32(ctx, 31, 0x214770u);
    ctx->pc = 0x218FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FA8u, 0x214768u, 0x214770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214770u;
label_214770:
    // 0x214770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x214770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214774: 0x24a2ffe3  addiu       $v0, $a1, -0x1D
    ctx->pc = 0x214774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967267));
    // 0x214778: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x214778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x21477c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21477Cu;
    {
        const bool branch_taken_0x21477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21477Cu;
        // 0x214780: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21477c) {
            ctx->pc = 0x214790u;
            goto label_214790;
        }
    }
    ctx->pc = 0x214784u;
    // 0x214784: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x214784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x214788: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x214788u;
    {
        const bool branch_taken_0x214788 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x21478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214788u;
        // 0x21478c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214788) {
            ctx->pc = 0x2147CCu;
            goto label_2147cc;
        }
    }
    ctx->pc = 0x214790u;
label_214790:
    // 0x214790: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214790u;
    {
        const bool branch_taken_0x214790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x214794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214790u;
        // 0x214794: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214790) {
            ctx->pc = 0x2147A4u;
            goto label_2147a4;
        }
    }
    ctx->pc = 0x214798u;
    // 0x214798: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x214798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21479c: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21479Cu;
    {
        const bool branch_taken_0x21479c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2147A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21479Cu;
        // 0x2147a0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21479c) {
            ctx->pc = 0x2147CCu;
            goto label_2147cc;
        }
    }
    ctx->pc = 0x2147A4u;
label_2147a4:
    // 0x2147a4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2147A4u;
    {
        const bool branch_taken_0x2147a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2147A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147A4u;
        // 0x2147a8: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147a4) {
            ctx->pc = 0x2147B8u;
            goto label_2147b8;
        }
    }
    ctx->pc = 0x2147ACu;
    // 0x2147ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2147acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2147b0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2147B0u;
    {
        const bool branch_taken_0x2147b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2147B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147B0u;
        // 0x2147b4: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147b0) {
            ctx->pc = 0x2147CCu;
            goto label_2147cc;
        }
    }
    ctx->pc = 0x2147B8u;
label_2147b8:
    // 0x2147b8: 0x54a20008  bnel        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2147B8u;
    {
        const bool branch_taken_0x2147b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2147b8) {
            ctx->pc = 0x2147BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2147B8u;
            // 0x2147bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2147DCu;
            goto label_2147dc;
        }
    }
    ctx->pc = 0x2147C0u;
    // 0x2147c0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2147c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2147c4: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2147C4u;
    {
        const bool branch_taken_0x2147c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2147C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147C4u;
        // 0x2147c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2147c4) {
            ctx->pc = 0x2147DCu;
            goto label_2147dc;
        }
    }
    ctx->pc = 0x2147CCu;
label_2147cc:
    // 0x2147cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2147ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2147d0: 0xc085148  jal         func_214520
    ctx->pc = 0x2147D0u;
    SET_GPR_U32(ctx, 31, 0x2147D8u);
    ctx->pc = 0x2147D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2147D0u;
    // 0x2147d4: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214520u, 0x2147D0u, 0x2147D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2147D8u;
label_2147d8:
    // 0x2147d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2147d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2147dc:
    // 0x2147dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2147dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2147e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2147e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2147e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2147E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2147E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2147E4u;
        // 0x2147e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2147E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2147ECu;
    // 0x2147ec: 0x0  nop
    ctx->pc = 0x2147ecu;
    // NOP
    ctx->pc = 0x2147f0u;
}
