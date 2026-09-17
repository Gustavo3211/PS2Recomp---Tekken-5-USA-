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

// Function: sub_002DBBC8
// Address: 0x2dbbc8 - 0x2dbcc0
void sub_002DBBC8_0x2dbbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBBC8_0x2dbbc8");
#endif

    switch (ctx->pc) {
        case 0x2dbc00u: goto label_2dbc00;
        case 0x2dbc38u: goto label_2dbc38;
        case 0x2dbc58u: goto label_2dbc58;
        case 0x2dbc80u: goto label_2dbc80;
        case 0x2dbc9cu: goto label_2dbc9c;
        default: break;
    }

    ctx->pc = 0x2dbbc8u;

    // 0x2dbbc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dbbcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbbd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dbbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbd4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2dbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2dbbd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dbbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dbbdc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2dbbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2dbbe0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dbbe4: 0x8c6388d0  lw          $v1, -0x7730($v1)
    ctx->pc = 0x2dbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936784)));
    // 0x2dbbe8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dbbe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbbec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dbbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dbbf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dbbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dbbf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dbbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dbbf8: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DBBF8u;
    SET_GPR_U32(ctx, 31, 0x2DBC00u);
    ctx->pc = 0x2DBBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBBF8u;
    // 0x2dbbfc: 0x84640042  lh          $a0, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DBBF8u, 0x2DBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC00u;
label_2dbc00:
    // 0x2dbc00: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2dbc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2dbc04: 0x54430028  bnel        $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DBC04u;
    {
        const bool branch_taken_0x2dbc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dbc04) {
            ctx->pc = 0x2DBC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBC04u;
            // 0x2dbc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBCA8u;
            goto label_2dbca8;
        }
    }
    ctx->pc = 0x2DBC0Cu;
    // 0x2dbc0c: 0x109840  sll         $s3, $s0, 1
    ctx->pc = 0x2dbc0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2dbc10: 0x27c1021  addu        $v0, $s3, $gp
    ctx->pc = 0x2dbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 28)));
    // 0x2dbc14: 0x8442cb68  lh          $v0, -0x3498($v0)
    ctx->pc = 0x2dbc14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953832)));
    // 0x2dbc18: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2DBC18u;
    {
        const bool branch_taken_0x2dbc18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC18u;
        // 0x2dbc1c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc18) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBC20u;
    // 0x2dbc20: 0x8e510014  lw          $s1, 0x14($s2)
    ctx->pc = 0x2dbc20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2dbc24: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2dbc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2dbc28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBC28u;
    {
        const bool branch_taken_0x2dbc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC28u;
        // 0x2dbc2c: 0x2445f2f0  addiu       $a1, $v0, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc28) {
            ctx->pc = 0x2DBC40u;
            goto label_2dbc40;
        }
    }
    ctx->pc = 0x2DBC30u;
    // 0x2dbc30: 0xc0bf32c  jal         func_2FCCB0
    ctx->pc = 0x2DBC30u;
    SET_GPR_U32(ctx, 31, 0x2DBC38u);
    ctx->pc = 0x2FCCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCCB0u, 0x2DBC30u, 0x2DBC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC38u;
label_2dbc38:
    // 0x2dbc38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DBC38u;
    {
        const bool branch_taken_0x2dbc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC38u;
        // 0x2dbc3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc38) {
            ctx->pc = 0x2DBC44u;
            goto label_2dbc44;
        }
    }
    ctx->pc = 0x2DBC40u;
label_2dbc40:
    // 0x2dbc40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dbc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dbc44:
    // 0x2dbc44: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DBC44u;
    {
        const bool branch_taken_0x2dbc44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC44u;
        // 0x2dbc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc44) {
            ctx->pc = 0x2DBCA4u;
            goto label_2dbca4;
        }
    }
    ctx->pc = 0x2DBC4Cu;
    // 0x2dbc4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dbc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc50: 0xc0b6cf4  jal         func_2DB3D0
    ctx->pc = 0x2DBC50u;
    SET_GPR_U32(ctx, 31, 0x2DBC58u);
    ctx->pc = 0x2DBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC50u;
    // 0x2dbc54: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3D0u, 0x2DBC50u, 0x2DBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC58u;
label_2dbc58:
    // 0x2dbc58: 0x27c1021  addu        $v0, $s3, $gp
    ctx->pc = 0x2dbc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 28)));
    // 0x2dbc5c: 0x9442cb68  lhu         $v0, -0x3498($v0)
    ctx->pc = 0x2dbc5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953832)));
    // 0x2dbc60: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2dbc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2dbc64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DBC64u;
    {
        const bool branch_taken_0x2dbc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC64u;
        // 0x2dbc68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc64) {
            ctx->pc = 0x2DBC88u;
            goto label_2dbc88;
        }
    }
    ctx->pc = 0x2DBC6Cu;
    // 0x2dbc6c: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2dbc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2dbc70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dbc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dbc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc78: 0xc0b6d46  jal         func_2DB518
    ctx->pc = 0x2DBC78u;
    SET_GPR_U32(ctx, 31, 0x2DBC80u);
    ctx->pc = 0x2DBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC78u;
    // 0x2dbc7c: 0x24e7f360  addiu       $a3, $a3, -0xCA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB518u, 0x2DBC78u, 0x2DBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC80u;
label_2dbc80:
    // 0x2dbc80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DBC80u;
    {
        const bool branch_taken_0x2dbc80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbc80) {
            ctx->pc = 0x2DBC9Cu;
            goto label_2dbc9c;
        }
    }
    ctx->pc = 0x2DBC88u;
label_2dbc88:
    // 0x2dbc88: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2dbc88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2dbc8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2dbc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dbc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbc94: 0xc0b6d2c  jal         func_2DB4B0
    ctx->pc = 0x2DBC94u;
    SET_GPR_U32(ctx, 31, 0x2DBC9Cu);
    ctx->pc = 0x2DBC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBC94u;
    // 0x2dbc98: 0x24e7f360  addiu       $a3, $a3, -0xCA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB4B0u, 0x2DBC94u, 0x2DBC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBC9Cu;
label_2dbc9c:
    // 0x2dbc9c: 0x27c0821  addu        $at, $s3, $gp
    ctx->pc = 0x2dbc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 28)));
    // 0x2dbca0: 0xa420cb68  sh          $zero, -0x3498($at)
    ctx->pc = 0x2dbca0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294953832), (uint16_t)GPR_U32(ctx, 0));
label_2dbca4:
    // 0x2dbca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbca8:
    // 0x2dbca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dbca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbcac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dbcacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbcb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dbcb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dbcb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dbcb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBCB8u;
        // 0x2dbcbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBCC0u;
}
