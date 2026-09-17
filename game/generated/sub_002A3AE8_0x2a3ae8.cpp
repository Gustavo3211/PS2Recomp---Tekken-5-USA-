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

// Function: sub_002A3AE8
// Address: 0x2a3ae8 - 0x2a3b88
void sub_002A3AE8_0x2a3ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3AE8_0x2a3ae8");
#endif

    switch (ctx->pc) {
        case 0x2a3b38u: goto label_2a3b38;
        default: break;
    }

    ctx->pc = 0x2a3ae8u;

    // 0x2a3ae8: 0x24840150  addiu       $a0, $a0, 0x150
    ctx->pc = 0x2a3ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x2a3aec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3af0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A3AF0u;
    {
        const bool branch_taken_0x2a3af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3AF0u;
        // 0x2a3af4: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3af0) {
            ctx->pc = 0x2A3B0Cu;
            goto label_2a3b0c;
        }
    }
    ctx->pc = 0x2A3AF8u;
    // 0x2a3af8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a3afc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a3afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b00: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3b04: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A3B04u;
    {
        const bool branch_taken_0x2a3b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B04u;
        // 0x2a3b08: 0x2d220003  sltiu       $v0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b04) {
            ctx->pc = 0x2A3B1Cu;
            goto label_2a3b1c;
        }
    }
    ctx->pc = 0x2A3B0Cu;
label_2a3b0c:
    // 0x2a3b0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a3b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b14: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a3b18: 0x2d220003  sltiu       $v0, $t1, 0x3
    ctx->pc = 0x2a3b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2a3b1c:
    // 0x2a3b1c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A3B1Cu;
    {
        const bool branch_taken_0x2a3b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B1Cu;
        // 0x2a3b20: 0x24c5000c  addiu       $a1, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b1c) {
            ctx->pc = 0x2A3B80u;
            goto label_2a3b80;
        }
    }
    ctx->pc = 0x2A3B24u;
    // 0x2a3b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b28: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2a3b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3b2c: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2a3b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a3b30: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2a3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a3b34: 0x0  nop
    ctx->pc = 0x2a3b34u;
    // NOP
label_2a3b38:
    // 0x2a3b38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a3b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a3b3c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a3b40: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x2a3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2a3b44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3B44u;
    {
        const bool branch_taken_0x2a3b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B44u;
        // 0x2a3b48: 0x28c40003  slti        $a0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b44) {
            ctx->pc = 0x2A3B58u;
            goto label_2a3b58;
        }
    }
    ctx->pc = 0x2A3B4Cu;
    // 0x2a3b4c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a3b50: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a3b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a3b54: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a3b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a3b58:
    // 0x2a3b58: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A3B58u;
    {
        const bool branch_taken_0x2a3b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3B58u;
        // 0x2a3b5c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3b58) {
            ctx->pc = 0x2A3B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3b38;
        }
    }
    ctx->pc = 0x2A3B60u;
    // 0x2a3b60: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2a3b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2a3b64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2a3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a3b68: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x2a3b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x2a3b6c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A3B6Cu;
    {
        const bool branch_taken_0x2a3b6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b6c) {
            ctx->pc = 0x2A3B80u;
            goto label_2a3b80;
        }
    }
    ctx->pc = 0x2A3B74u;
    // 0x2a3b74: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a3b78: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a3b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a3b7c: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
label_2a3b80:
    // 0x2a3b80: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3B88u;
}
