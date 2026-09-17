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

// Function: sub_00324BC8
// Address: 0x324bc8 - 0x324cf8
void sub_00324BC8_0x324bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324BC8_0x324bc8");
#endif

    switch (ctx->pc) {
        case 0x324c18u: goto label_324c18;
        default: break;
    }

    ctx->pc = 0x324bc8u;

    // 0x324bc8: 0x24870400  addiu       $a3, $a0, 0x400
    ctx->pc = 0x324bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x324bcc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x324bccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x324bd0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x324bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x324bd4: 0x24860410  addiu       $a2, $a0, 0x410
    ctx->pc = 0x324bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x324bd8: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x324bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324bdc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x324bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x324be0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324be4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x324be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x324be8: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x324be8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x324bec: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x324becu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x324bf0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x324bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bf4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x324bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x324bf8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324bfc: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x324bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x324c00: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x324c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x324c04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x324c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324c08: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x324C08u;
    {
        const bool branch_taken_0x324c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x324c08) {
            ctx->pc = 0x324CF0u;
            goto label_324cf0;
        }
    }
    ctx->pc = 0x324C10u;
    // 0x324c10: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x324c10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324c14: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x324c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_324c18:
    // 0x324c18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x324c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x324c1c: 0x54450030  bnel        $v0, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x324C1Cu;
    {
        const bool branch_taken_0x324c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x324c1c) {
            ctx->pc = 0x324C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324C1Cu;
            // 0x324c20: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324CE0u;
            goto label_324ce0;
        }
    }
    ctx->pc = 0x324C24u;
    // 0x324c24: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x324c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324c28: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x324c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x324c2c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x324c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x324c30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x324c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x324c34: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x324c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x324c38: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x324c38u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x324c3c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x324c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324c40: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x324C40u;
    {
        const bool branch_taken_0x324c40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x324c40) {
            ctx->pc = 0x324C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324C40u;
            // 0x324c44: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324C58u;
            goto label_324c58;
        }
    }
    ctx->pc = 0x324C48u;
    // 0x324c48: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x324c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x324c4c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x324c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x324c50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x324C50u;
    {
        const bool branch_taken_0x324c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C50u;
        // 0x324c54: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c50) {
            ctx->pc = 0x324C84u;
            goto label_324c84;
        }
    }
    ctx->pc = 0x324C58u;
label_324c58:
    // 0x324c58: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324C58u;
    {
        const bool branch_taken_0x324c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x324C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C58u;
        // 0x324c5c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c58) {
            ctx->pc = 0x324C70u;
            goto label_324c70;
        }
    }
    ctx->pc = 0x324C60u;
    // 0x324c60: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x324c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x324c64: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324C64u;
    {
        const bool branch_taken_0x324c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324C64u;
        // 0x324c68: 0xac660004  sw          $a2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324c64) {
            ctx->pc = 0x324C84u;
            goto label_324c84;
        }
    }
    ctx->pc = 0x324C6Cu;
    // 0x324c6c: 0x0  nop
    ctx->pc = 0x324c6cu;
    // NOP
label_324c70:
    // 0x324c70: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x324c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x324c74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x324c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x324c78: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x324c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x324c7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x324c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x324c80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x324c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_324c84:
    // 0x324c84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x324c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x324c88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x324c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x324c8c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x324c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x324c90: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x324c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x324c94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324C94u;
    {
        const bool branch_taken_0x324c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324c94) {
            ctx->pc = 0x324C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324C94u;
            // 0x324c98: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324CA8u;
            goto label_324ca8;
        }
    }
    ctx->pc = 0x324C9Cu;
    // 0x324c9c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x324c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x324ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x324CA0u;
    {
        const bool branch_taken_0x324ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CA0u;
        // 0x324ca4: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ca0) {
            ctx->pc = 0x324CB4u;
            goto label_324cb4;
        }
    }
    ctx->pc = 0x324CA8u;
label_324ca8:
    // 0x324ca8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x324ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x324cac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x324cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x324cb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x324cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_324cb4:
    // 0x324cb4: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x324cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x324cb8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x324cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x324cbc: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x324cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x324cc0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x324cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x324cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x324cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x324cc8: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x324cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x324ccc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x324cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324cd0: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x324cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x324cd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x324CD4u;
    {
        const bool branch_taken_0x324cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CD4u;
        // 0x324cd8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324cd4) {
            ctx->pc = 0x324CF0u;
            goto label_324cf0;
        }
    }
    ctx->pc = 0x324CDCu;
    // 0x324cdc: 0x0  nop
    ctx->pc = 0x324cdcu;
    // NOP
label_324ce0:
    // 0x324ce0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x324ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x324ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x324ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324ce8: 0x1443ffcb  bne         $v0, $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x324CE8u;
    {
        const bool branch_taken_0x324ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x324CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CE8u;
        // 0x324cec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324ce8) {
            ctx->pc = 0x324C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324c18;
        }
    }
    ctx->pc = 0x324CF0u;
label_324cf0:
    // 0x324cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x324CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324CF0u;
        // 0x324cf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324CF8u;
}
