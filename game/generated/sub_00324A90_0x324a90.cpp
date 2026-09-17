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

// Function: sub_00324A90
// Address: 0x324a90 - 0x324bc8
void sub_00324A90_0x324a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324A90_0x324a90");
#endif

    switch (ctx->pc) {
        case 0x324ae0u: goto label_324ae0;
        default: break;
    }

    ctx->pc = 0x324a90u;

    // 0x324a90: 0x24870400  addiu       $a3, $a0, 0x400
    ctx->pc = 0x324a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x324a94: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324a98: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x324a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x324a9c: 0x24860410  addiu       $a2, $a0, 0x410
    ctx->pc = 0x324a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x324aa0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x324aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324aa4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x324aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324aa8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324aac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x324aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x324ab0: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x324ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x324ab4: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x324ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x324ab8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x324ab8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324abc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x324abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324ac0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ac4: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x324ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x324ac8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x324ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x324acc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x324accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324ad0: 0x1082003b  beq         $a0, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x324AD0u;
    {
        const bool branch_taken_0x324ad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x324ad0) {
            ctx->pc = 0x324BC0u;
            goto label_324bc0;
        }
    }
    ctx->pc = 0x324AD8u;
    // 0x324ad8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x324ad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324adc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x324adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_324ae0:
    // 0x324ae0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x324ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x324ae4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x324ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324ae8: 0x54650031  bnel        $v1, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x324AE8u;
    {
        const bool branch_taken_0x324ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x324ae8) {
            ctx->pc = 0x324AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324AE8u;
            // 0x324aec: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324BB0u;
            goto label_324bb0;
        }
    }
    ctx->pc = 0x324AF0u;
    // 0x324af0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x324af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324af4: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x324af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x324af8: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x324af8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x324afc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x324afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x324b00: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x324b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x324b04: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x324b04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x324b08: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x324b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324b0c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x324B0Cu;
    {
        const bool branch_taken_0x324b0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x324b0c) {
            ctx->pc = 0x324B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324B0Cu;
            // 0x324b10: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324B28u;
            goto label_324b28;
        }
    }
    ctx->pc = 0x324B14u;
    // 0x324b14: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x324b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x324b18: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x324b18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x324b1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x324B1Cu;
    {
        const bool branch_taken_0x324b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B1Cu;
        // 0x324b20: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b1c) {
            ctx->pc = 0x324B54u;
            goto label_324b54;
        }
    }
    ctx->pc = 0x324B24u;
    // 0x324b24: 0x0  nop
    ctx->pc = 0x324b24u;
    // NOP
label_324b28:
    // 0x324b28: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324B28u;
    {
        const bool branch_taken_0x324b28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x324B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B28u;
        // 0x324b2c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b28) {
            ctx->pc = 0x324B40u;
            goto label_324b40;
        }
    }
    ctx->pc = 0x324B30u;
    // 0x324b30: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x324b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x324b34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324B34u;
    {
        const bool branch_taken_0x324b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B34u;
        // 0x324b38: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b34) {
            ctx->pc = 0x324B54u;
            goto label_324b54;
        }
    }
    ctx->pc = 0x324B3Cu;
    // 0x324b3c: 0x0  nop
    ctx->pc = 0x324b3cu;
    // NOP
label_324b40:
    // 0x324b40: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x324b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x324b44: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x324b44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x324b48: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x324b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x324b4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x324b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x324b50: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_324b54:
    // 0x324b54: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x324b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x324b58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324b5c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x324b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x324b60: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x324b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x324b64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324B64u;
    {
        const bool branch_taken_0x324b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324b64) {
            ctx->pc = 0x324B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324B64u;
            // 0x324b68: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324B78u;
            goto label_324b78;
        }
    }
    ctx->pc = 0x324B6Cu;
    // 0x324b6c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x324b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x324b70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x324B70u;
    {
        const bool branch_taken_0x324b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324B70u;
        // 0x324b74: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324b70) {
            ctx->pc = 0x324B84u;
            goto label_324b84;
        }
    }
    ctx->pc = 0x324B78u;
label_324b78:
    // 0x324b78: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x324b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x324b7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x324b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x324b80: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x324b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_324b84:
    // 0x324b84: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x324b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x324b88: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x324b88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x324b8c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x324b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x324b90: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x324b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x324b94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324b98: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x324b98u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x324b9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x324b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324ba0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x324ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x324ba4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324BA4u;
    {
        const bool branch_taken_0x324ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BA4u;
        // 0x324ba8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ba4) {
            ctx->pc = 0x324BC0u;
            goto label_324bc0;
        }
    }
    ctx->pc = 0x324BACu;
    // 0x324bac: 0x0  nop
    ctx->pc = 0x324bacu;
    // NOP
label_324bb0:
    // 0x324bb0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x324bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x324bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x324bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bb8: 0x1443ffc9  bne         $v0, $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x324BB8u;
    {
        const bool branch_taken_0x324bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BB8u;
        // 0x324bbc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324bb8) {
            ctx->pc = 0x324AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324ae0;
        }
    }
    ctx->pc = 0x324BC0u;
label_324bc0:
    // 0x324bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x324BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324BC0u;
        // 0x324bc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324BC8u;
}
