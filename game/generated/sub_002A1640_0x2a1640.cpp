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

// Function: sub_002A1640
// Address: 0x2a1640 - 0x2a1748
void sub_002A1640_0x2a1640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1640_0x2a1640");
#endif

    switch (ctx->pc) {
        case 0x2a16d4u: goto label_2a16d4;
        case 0x2a16ecu: goto label_2a16ec;
        case 0x2a1734u: goto label_2a1734;
        default: break;
    }

    ctx->pc = 0x2a1640u;

    // 0x2a1640: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a1640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a1644: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a1644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1648: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2a1648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2a164c: 0x588c0  sll         $s1, $a1, 3
    ctx->pc = 0x2a164cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2a1650: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2a1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2a1654: 0x2252823  subu        $a1, $s1, $a1
    ctx->pc = 0x2a1654u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2a1658: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a165c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2a165cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2a1660: 0x8c83016c  lw          $v1, 0x16C($a0)
    ctx->pc = 0x2a1660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 364)));
    // 0x2a1664: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2a1664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1668: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2a1668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a166c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A166Cu;
    {
        const bool branch_taken_0x2a166c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A166Cu;
        // 0x2a1670: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a166c) {
            ctx->pc = 0x2A1688u;
            goto label_2a1688;
        }
    }
    ctx->pc = 0x2A1674u;
    // 0x2a1674: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a1678: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A1678u;
    {
        const bool branch_taken_0x2a1678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1678u;
        // 0x2a167c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1678) {
            ctx->pc = 0x2A16A8u;
            goto label_2a16a8;
        }
    }
    ctx->pc = 0x2A1680u;
    // 0x2a1680: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2A1680u;
    {
        const bool branch_taken_0x2a1680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1680u;
        // 0x2a1684: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1680) {
            ctx->pc = 0x2A16C0u;
            goto label_2a16c0;
        }
    }
    ctx->pc = 0x2A1688u;
label_2a1688:
    // 0x2a1688: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a1688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a168c: 0x2442ffe9  addiu       $v0, $v0, -0x17
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967273));
    // 0x2a1690: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2a1690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a1694: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A1694u;
    {
        const bool branch_taken_0x2a1694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1694) {
            ctx->pc = 0x2A1698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A1694u;
            // 0x2a1698: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A16B8u;
            goto label_2a16b8;
        }
    }
    ctx->pc = 0x2A169Cu;
    // 0x2a169c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A169Cu;
    {
        const bool branch_taken_0x2a169c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A169Cu;
        // 0x2a16a0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a169c) {
            ctx->pc = 0x2A16BCu;
            goto label_2a16bc;
        }
    }
    ctx->pc = 0x2A16A4u;
    // 0x2a16a4: 0x0  nop
    ctx->pc = 0x2a16a4u;
    // NOP
label_2a16a8:
    // 0x2a16a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a16ac: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2a16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a16b0: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2a16b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2a16b4: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x2a16b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_2a16b8:
    // 0x2a16b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2a16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2a16bc:
    // 0x2a16bc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2a16bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2a16c0:
    // 0x2a16c0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2a16c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2a16c4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2a16c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2a16c8: 0x8ca5cb58  lw          $a1, -0x34A8($a1)
    ctx->pc = 0x2a16c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953816)));
    // 0x2a16cc: 0xc04a58e  jal         func_129638
    ctx->pc = 0x2A16CCu;
    SET_GPR_U32(ctx, 31, 0x2A16D4u);
    ctx->pc = 0x2A16D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16CCu;
    // 0x2a16d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x2A16CCu, 0x2A16D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16D4u;
label_2a16d4:
    // 0x2a16d4: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2a16d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2a16d8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a16d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a16dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a16dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a16e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2a16e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a16e4: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x2A16E4u;
    SET_GPR_U32(ctx, 31, 0x2A16ECu);
    ctx->pc = 0x2A16E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A16E4u;
    // 0x2a16e8: 0xa3a00050  sb          $zero, 0x50($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x2A16E4u, 0x2A16ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A16ECu;
label_2a16ec:
    // 0x2a16ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2a16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2a16f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a16f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a16f4: 0x3c0780ff  lui         $a3, 0x80FF
    ctx->pc = 0x2a16f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33023 << 16));
    // 0x2a16f8: 0x2442cbe0  addiu       $v0, $v0, -0x3420
    ctx->pc = 0x2a16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953952));
    // 0x2a16fc: 0x27ac0010  addiu       $t4, $sp, 0x10
    ctx->pc = 0x2a16fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a1700: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2a1700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a1704: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2a1704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2a1708: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x2a1708u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a170c: 0x2484cbd0  addiu       $a0, $a0, -0x3430
    ctx->pc = 0x2a170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953936));
    // 0x2a1710: 0x8c6a0004  lw          $t2, 0x4($v1)
    ctx->pc = 0x2a1710u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a1714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a1714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1718: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x2a1718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2a171c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a171cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a1720: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a1720u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1724: 0x240b006e  addiu       $t3, $zero, 0x6E
    ctx->pc = 0x2a1724u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2a1728: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x2a1728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x2a172c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2A172Cu;
    SET_GPR_U32(ctx, 31, 0x2A1734u);
    ctx->pc = 0x2A1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A172Cu;
    // 0x2a1730: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2A172Cu, 0x2A1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1734u;
label_2a1734:
    // 0x2a1734: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2a1734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1738: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2a1738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a173c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a1740: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1740u;
        // 0x2a1744: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1748u;
}
