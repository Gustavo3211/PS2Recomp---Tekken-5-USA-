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

// Function: sub_00339AD8
// Address: 0x339ad8 - 0x339b98
void sub_00339AD8_0x339ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339AD8_0x339ad8");
#endif

    switch (ctx->pc) {
        case 0x339b08u: goto label_339b08;
        case 0x339b58u: goto label_339b58;
        default: break;
    }

    ctx->pc = 0x339ad8u;

    // 0x339ad8: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x339ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x339adc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x339adcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x339ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ae4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x339AE4u;
    {
        const bool branch_taken_0x339ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AE4u;
        // 0x339ae8: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ae4) {
            ctx->pc = 0x339B40u;
            goto label_339b40;
        }
    }
    ctx->pc = 0x339AECu;
    // 0x339aec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x339aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x339af0: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x339AF0u;
    {
        const bool branch_taken_0x339af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x339af0) {
            ctx->pc = 0x339AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339AF0u;
            // 0x339af4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B08u;
            goto label_339b08;
        }
    }
    ctx->pc = 0x339AF8u;
    // 0x339af8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x339afc: 0x10460010  beq         $v0, $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x339AFCu;
    {
        const bool branch_taken_0x339afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x339afc) {
            ctx->pc = 0x339B40u;
            goto label_339b40;
        }
    }
    ctx->pc = 0x339B04u;
    // 0x339b04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x339b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_339b08:
    // 0x339b08: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x339b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x339b0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x339B0Cu;
    {
        const bool branch_taken_0x339b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B0Cu;
        // 0x339b10: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b0c) {
            ctx->pc = 0x339B40u;
            goto label_339b40;
        }
    }
    ctx->pc = 0x339B14u;
    // 0x339b14: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x339b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x339b18: 0x0  nop
    ctx->pc = 0x339b18u;
    // NOP
    // 0x339b1c: 0x0  nop
    ctx->pc = 0x339b1cu;
    // NOP
    // 0x339b20: 0x0  nop
    ctx->pc = 0x339b20u;
    // NOP
    // 0x339b24: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x339B24u;
    {
        const bool branch_taken_0x339b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x339b24) {
            ctx->pc = 0x339B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339B24u;
            // 0x339b28: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339b08;
        }
    }
    ctx->pc = 0x339B2Cu;
    // 0x339b2c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x339b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x339b30: 0x0  nop
    ctx->pc = 0x339b30u;
    // NOP
    // 0x339b34: 0x0  nop
    ctx->pc = 0x339b34u;
    // NOP
    // 0x339b38: 0x5446fff3  bnel        $v0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x339B38u;
    {
        const bool branch_taken_0x339b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x339b38) {
            ctx->pc = 0x339B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339B38u;
            // 0x339b3c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339b08;
        }
    }
    ctx->pc = 0x339B40u;
label_339b40:
    // 0x339b40: 0x11090013  beq         $t0, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x339B40u;
    {
        const bool branch_taken_0x339b40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x339B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B40u;
        // 0x339b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b40) {
            ctx->pc = 0x339B90u;
            goto label_339b90;
        }
    }
    ctx->pc = 0x339B48u;
    // 0x339b48: 0x24e50008  addiu       $a1, $a3, 0x8
    ctx->pc = 0x339b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x339b4c: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x339b4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x339b50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x339B50u;
    {
        const bool branch_taken_0x339b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B50u;
        // 0x339b54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b50) {
            ctx->pc = 0x339B84u;
            goto label_339b84;
        }
    }
    ctx->pc = 0x339B58u;
label_339b58:
    // 0x339b58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x339b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x339b5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x339b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x339b60: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x339b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x339b64: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x339b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x339b68: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x339b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x339b6c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x339b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x339b70: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x339b70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b74: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x339b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x339b78: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x339b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x339b7c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x339B7Cu;
    {
        const bool branch_taken_0x339b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B7Cu;
        // 0x339b80: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b7c) {
            ctx->pc = 0x339B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339b58;
        }
    }
    ctx->pc = 0x339B84u;
label_339b84:
    // 0x339b84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x339b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x339b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339b8c: 0xac830080  sw          $v1, 0x80($a0)
    ctx->pc = 0x339b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
label_339b90:
    // 0x339b90: 0x3e00008  jr          $ra
    ctx->pc = 0x339B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339B98u;
}
