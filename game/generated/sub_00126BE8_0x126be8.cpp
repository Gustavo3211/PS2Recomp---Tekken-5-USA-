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

// Function: sub_00126BE8
// Address: 0x126be8 - 0x126d10
void sub_00126BE8_0x126be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126BE8_0x126be8");
#endif

    switch (ctx->pc) {
        case 0x126be8u: goto label_126be8;
        case 0x126becu: goto label_126bec;
        case 0x126bf0u: goto label_126bf0;
        case 0x126bf4u: goto label_126bf4;
        case 0x126bf8u: goto label_126bf8;
        case 0x126bfcu: goto label_126bfc;
        case 0x126c00u: goto label_126c00;
        case 0x126c04u: goto label_126c04;
        case 0x126c08u: goto label_126c08;
        case 0x126c0cu: goto label_126c0c;
        case 0x126c10u: goto label_126c10;
        case 0x126c14u: goto label_126c14;
        case 0x126c18u: goto label_126c18;
        case 0x126c1cu: goto label_126c1c;
        case 0x126c20u: goto label_126c20;
        case 0x126c24u: goto label_126c24;
        case 0x126c28u: goto label_126c28;
        case 0x126c2cu: goto label_126c2c;
        case 0x126c30u: goto label_126c30;
        case 0x126c34u: goto label_126c34;
        case 0x126c38u: goto label_126c38;
        case 0x126c3cu: goto label_126c3c;
        case 0x126c40u: goto label_126c40;
        case 0x126c44u: goto label_126c44;
        case 0x126c48u: goto label_126c48;
        case 0x126c4cu: goto label_126c4c;
        case 0x126c50u: goto label_126c50;
        case 0x126c54u: goto label_126c54;
        case 0x126c58u: goto label_126c58;
        case 0x126c5cu: goto label_126c5c;
        case 0x126c60u: goto label_126c60;
        case 0x126c64u: goto label_126c64;
        case 0x126c68u: goto label_126c68;
        case 0x126c6cu: goto label_126c6c;
        case 0x126c70u: goto label_126c70;
        case 0x126c74u: goto label_126c74;
        case 0x126c78u: goto label_126c78;
        case 0x126c7cu: goto label_126c7c;
        case 0x126c80u: goto label_126c80;
        case 0x126c84u: goto label_126c84;
        case 0x126c88u: goto label_126c88;
        case 0x126c8cu: goto label_126c8c;
        case 0x126c90u: goto label_126c90;
        case 0x126c94u: goto label_126c94;
        case 0x126c98u: goto label_126c98;
        case 0x126c9cu: goto label_126c9c;
        case 0x126ca0u: goto label_126ca0;
        case 0x126ca4u: goto label_126ca4;
        case 0x126ca8u: goto label_126ca8;
        case 0x126cacu: goto label_126cac;
        case 0x126cb0u: goto label_126cb0;
        case 0x126cb4u: goto label_126cb4;
        case 0x126cb8u: goto label_126cb8;
        case 0x126cbcu: goto label_126cbc;
        case 0x126cc0u: goto label_126cc0;
        case 0x126cc4u: goto label_126cc4;
        case 0x126cc8u: goto label_126cc8;
        case 0x126cccu: goto label_126ccc;
        case 0x126cd0u: goto label_126cd0;
        case 0x126cd4u: goto label_126cd4;
        case 0x126cd8u: goto label_126cd8;
        case 0x126cdcu: goto label_126cdc;
        case 0x126ce0u: goto label_126ce0;
        case 0x126ce4u: goto label_126ce4;
        case 0x126ce8u: goto label_126ce8;
        case 0x126cecu: goto label_126cec;
        case 0x126cf0u: goto label_126cf0;
        case 0x126cf4u: goto label_126cf4;
        case 0x126cf8u: goto label_126cf8;
        case 0x126cfcu: goto label_126cfc;
        case 0x126d00u: goto label_126d00;
        case 0x126d04u: goto label_126d04;
        case 0x126d08u: goto label_126d08;
        case 0x126d0cu: goto label_126d0c;
        default: break;
    }

    ctx->pc = 0x126be8u;

label_126be8:
    // 0x126be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x126be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_126bec:
    // 0x126bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_126bf0:
    // 0x126bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x126bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_126bf4:
    // 0x126bf4: 0xc048762  jal         func_121D88
label_126bf8:
    if (ctx->pc == 0x126BF8u) {
        ctx->pc = 0x126BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BF4u;
        // 0x126bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126BFCu;
        goto label_126bfc;
    }
    ctx->pc = 0x126BF4u;
    SET_GPR_U32(ctx, 31, 0x126BFCu);
    ctx->pc = 0x126BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BF4u;
    // 0x126bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121D88u, 0x126BF4u, 0x126BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BFCu;
label_126bfc:
    // 0x126bfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126c00:
    // 0x126c00: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x126c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_126c04:
    // 0x126c04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126c08:
    // 0x126c08: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x126c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126c0c:
    // 0x126c0c: 0x6445ffff  daddiu      $a1, $v0, -0x1
    ctx->pc = 0x126c0cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_126c10:
    // 0x126c10: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_126c14:
    if (ctx->pc == 0x126C14u) {
        ctx->pc = 0x126C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C10u;
        // 0x126c14: 0xfe050020  sd          $a1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C18u;
        goto label_126c18;
    }
    ctx->pc = 0x126C10u;
    {
        const bool branch_taken_0x126c10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x126C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C10u;
        // 0x126c14: 0xfe050020  sd          $a1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c10) {
            ctx->pc = 0x126C24u;
            goto label_126c24;
        }
    }
    ctx->pc = 0x126C18u;
label_126c18:
    // 0x126c18: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x126c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_126c1c:
    // 0x126c1c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_126c20:
    if (ctx->pc == 0x126C20u) {
        ctx->pc = 0x126C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C1Cu;
        // 0x126c20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C24u;
        goto label_126c24;
    }
    ctx->pc = 0x126C1Cu;
    {
        const bool branch_taken_0x126c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c1c) {
            ctx->pc = 0x126C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C1Cu;
            // 0x126c20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D04u;
            goto label_126d04;
        }
    }
    ctx->pc = 0x126C24u;
label_126c24:
    // 0x126c24: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_126c28:
    if (ctx->pc == 0x126C28u) {
        ctx->pc = 0x126C2Cu;
        goto label_126c2c;
    }
    ctx->pc = 0x126C24u;
    {
        const bool branch_taken_0x126c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c24) {
            ctx->pc = 0x126CA4u;
            goto label_126ca4;
        }
    }
    ctx->pc = 0x126C2Cu;
label_126c2c:
    // 0x126c2c: 0x56030035  bnel        $s0, $v1, . + 4 + (0x35 << 2)
label_126c30:
    if (ctx->pc == 0x126C30u) {
        ctx->pc = 0x126C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C2Cu;
        // 0x126c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C34u;
        goto label_126c34;
    }
    ctx->pc = 0x126C2Cu;
    {
        const bool branch_taken_0x126c2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x126c2c) {
            ctx->pc = 0x126C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C2Cu;
            // 0x126c30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D04u;
            goto label_126d04;
        }
    }
    ctx->pc = 0x126C34u;
label_126c34:
    // 0x126c34: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x126c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_126c38:
    // 0x126c38: 0x50a00032  beql        $a1, $zero, . + 4 + (0x32 << 2)
label_126c3c:
    if (ctx->pc == 0x126C3Cu) {
        ctx->pc = 0x126C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C38u;
        // 0x126c3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C40u;
        goto label_126c40;
    }
    ctx->pc = 0x126C38u;
    {
        const bool branch_taken_0x126c38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c38) {
            ctx->pc = 0x126C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C38u;
            // 0x126c3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D04u;
            goto label_126d04;
        }
    }
    ctx->pc = 0x126C40u;
label_126c40:
    // 0x126c40: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_126c44:
    // 0x126c44: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_126c48:
    if (ctx->pc == 0x126C48u) {
        ctx->pc = 0x126C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C44u;
        // 0x126c48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C4Cu;
        goto label_126c4c;
    }
    ctx->pc = 0x126C44u;
    {
        const bool branch_taken_0x126c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c44) {
            ctx->pc = 0x126C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C44u;
            // 0x126c48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126D04u;
            goto label_126d04;
        }
    }
    ctx->pc = 0x126C4Cu;
label_126c4c:
    // 0x126c4c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126c50:
    // 0x126c50: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_126c54:
    if (ctx->pc == 0x126C54u) {
        ctx->pc = 0x126C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C50u;
        // 0x126c54: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C58u;
        goto label_126c58;
    }
    ctx->pc = 0x126C50u;
    {
        const bool branch_taken_0x126c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C50u;
        // 0x126c54: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c50) {
            ctx->pc = 0x126C8Cu;
            goto label_126c8c;
        }
    }
    ctx->pc = 0x126C58u;
label_126c58:
    // 0x126c58: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_126c5c:
    if (ctx->pc == 0x126C5Cu) {
        ctx->pc = 0x126C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C58u;
        // 0x126c5c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C60u;
        goto label_126c60;
    }
    ctx->pc = 0x126C58u;
    {
        const bool branch_taken_0x126c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126c58) {
            ctx->pc = 0x126C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C58u;
            // 0x126c5c: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C90u;
            goto label_126c90;
        }
    }
    ctx->pc = 0x126C60u;
label_126c60:
    // 0x126c60: 0x24640018  addiu       $a0, $v1, 0x18
    ctx->pc = 0x126c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_126c64:
    // 0x126c64: 0x0  nop
    ctx->pc = 0x126c64u;
    // NOP
label_126c68:
    // 0x126c68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x126c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126c6c:
    // 0x126c6c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_126c70:
    if (ctx->pc == 0x126C70u) {
        ctx->pc = 0x126C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C6Cu;
        // 0x126c70: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C74u;
        goto label_126c74;
    }
    ctx->pc = 0x126C6Cu;
    {
        const bool branch_taken_0x126c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c6c) {
            ctx->pc = 0x126C70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C6Cu;
            // 0x126c70: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C90u;
            goto label_126c90;
        }
    }
    ctx->pc = 0x126C74u;
label_126c74:
    // 0x126c74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x126c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_126c78:
    // 0x126c78: 0x0  nop
    ctx->pc = 0x126c78u;
    // NOP
label_126c7c:
    // 0x126c7c: 0x0  nop
    ctx->pc = 0x126c7cu;
    // NOP
label_126c80:
    // 0x126c80: 0x0  nop
    ctx->pc = 0x126c80u;
    // NOP
label_126c84:
    // 0x126c84: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_126c88:
    if (ctx->pc == 0x126C88u) {
        ctx->pc = 0x126C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C84u;
        // 0x126c88: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126C8Cu;
        goto label_126c8c;
    }
    ctx->pc = 0x126C84u;
    {
        const bool branch_taken_0x126c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126c84) {
            ctx->pc = 0x126C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126C84u;
            // 0x126c88: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126c68;
        }
    }
    ctx->pc = 0x126C8Cu;
label_126c8c:
    // 0x126c8c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x126c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_126c90:
    // 0x126c90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x126c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126c94:
    // 0x126c94: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x126c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_126c98:
    // 0x126c98: 0x10000019  b           . + 4 + (0x19 << 2)
label_126c9c:
    if (ctx->pc == 0x126C9Cu) {
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C98u;
        // 0x126c9c: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CA0u;
        goto label_126ca0;
    }
    ctx->pc = 0x126C98u;
    {
        const bool branch_taken_0x126c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C98u;
        // 0x126c9c: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c98) {
            ctx->pc = 0x126D00u;
            goto label_126d00;
        }
    }
    ctx->pc = 0x126CA0u;
label_126ca0:
    // 0x126ca0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x126ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126ca4:
    // 0x126ca4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_126ca8:
    if (ctx->pc == 0x126CA8u) {
        ctx->pc = 0x126CACu;
        goto label_126cac;
    }
    ctx->pc = 0x126CA4u;
    {
        const bool branch_taken_0x126ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ca4) {
            ctx->pc = 0x126CBCu;
            goto label_126cbc;
        }
    }
    ctx->pc = 0x126CACu;
label_126cac:
    // 0x126cac: 0x5470fffc  bnel        $v1, $s0, . + 4 + (-0x4 << 2)
label_126cb0:
    if (ctx->pc == 0x126CB0u) {
        ctx->pc = 0x126CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CACu;
        // 0x126cb0: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CB4u;
        goto label_126cb4;
    }
    ctx->pc = 0x126CACu;
    {
        const bool branch_taken_0x126cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x126cac) {
            ctx->pc = 0x126CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126CACu;
            // 0x126cb0: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126ca0;
        }
    }
    ctx->pc = 0x126CB4u;
label_126cb4:
    // 0x126cb4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_126cb8:
    if (ctx->pc == 0x126CB8u) {
        ctx->pc = 0x126CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB4u;
        // 0x126cb8: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CBCu;
        goto label_126cbc;
    }
    ctx->pc = 0x126CB4u;
    {
        const bool branch_taken_0x126cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126cb4) {
            ctx->pc = 0x126CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126CB4u;
            // 0x126cb8: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126CC8u;
            goto label_126cc8;
        }
    }
    ctx->pc = 0x126CBCu;
label_126cbc:
    // 0x126cbc: 0xc049a82  jal         func_126A08
label_126cc0:
    if (ctx->pc == 0x126CC0u) {
        ctx->pc = 0x126CC4u;
        goto label_126cc4;
    }
    ctx->pc = 0x126CBCu;
    SET_GPR_U32(ctx, 31, 0x126CC4u);
    ctx->pc = 0x126A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A08u, 0x126CBCu, 0x126CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CC4u;
label_126cc4:
    // 0x126cc4: 0x0  nop
    ctx->pc = 0x126cc4u;
    // NOP
label_126cc8:
    // 0x126cc8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x126cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_126ccc:
    // 0x126ccc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_126cd0:
    if (ctx->pc == 0x126CD0u) {
        ctx->pc = 0x126CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CCCu;
        // 0x126cd0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CD4u;
        goto label_126cd4;
    }
    ctx->pc = 0x126CCCu;
    {
        const bool branch_taken_0x126ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CCCu;
        // 0x126cd0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ccc) {
            ctx->pc = 0x126CE0u;
            goto label_126ce0;
        }
    }
    ctx->pc = 0x126CD4u;
label_126cd4:
    // 0x126cd4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x126cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_126cd8:
    // 0x126cd8: 0x60f809  jalr        $v1
label_126cdc:
    if (ctx->pc == 0x126CDCu) {
        ctx->pc = 0x126CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD8u;
        // 0x126cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CE0u;
        goto label_126ce0;
    }
    ctx->pc = 0x126CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x126CE0u);
        ctx->pc = 0x126CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CD8u;
        // 0x126cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CD8u, 0x126CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126CE0u;
label_126ce0:
    // 0x126ce0: 0xc04987a  jal         func_1261E8
label_126ce4:
    if (ctx->pc == 0x126CE4u) {
        ctx->pc = 0x126CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CE0u;
        // 0x126ce4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CE8u;
        goto label_126ce8;
    }
    ctx->pc = 0x126CE0u;
    SET_GPR_U32(ctx, 31, 0x126CE8u);
    ctx->pc = 0x126CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CE0u;
    // 0x126ce4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1261E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1261E8u, 0x126CE0u, 0x126CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CE8u;
label_126ce8:
    // 0x126ce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_126cec:
    if (ctx->pc == 0x126CECu) {
        ctx->pc = 0x126CF0u;
        goto label_126cf0;
    }
    ctx->pc = 0x126CE8u;
    {
        const bool branch_taken_0x126ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126ce8) {
            ctx->pc = 0x126CF8u;
            goto label_126cf8;
        }
    }
    ctx->pc = 0x126CF0u;
label_126cf0:
    // 0x126cf0: 0xc048882  jal         func_122208
label_126cf4:
    if (ctx->pc == 0x126CF4u) {
        ctx->pc = 0x126CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CF0u;
        // 0x126cf4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126CF8u;
        goto label_126cf8;
    }
    ctx->pc = 0x126CF0u;
    SET_GPR_U32(ctx, 31, 0x126CF8u);
    ctx->pc = 0x126CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CF0u;
    // 0x126cf4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122208u, 0x126CF0u, 0x126CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CF8u;
label_126cf8:
    // 0x126cf8: 0xc048882  jal         func_122208
label_126cfc:
    if (ctx->pc == 0x126CFCu) {
        ctx->pc = 0x126CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CF8u;
        // 0x126cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D00u;
        goto label_126d00;
    }
    ctx->pc = 0x126CF8u;
    SET_GPR_U32(ctx, 31, 0x126D00u);
    ctx->pc = 0x126CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126CF8u;
    // 0x126cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122208u, 0x126CF8u, 0x126D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D00u;
label_126d00:
    // 0x126d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126d04:
    // 0x126d04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x126d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_126d08:
    // 0x126d08: 0x3e00008  jr          $ra
label_126d0c:
    if (ctx->pc == 0x126D0Cu) {
        ctx->pc = 0x126D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D08u;
        // 0x126d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126D10u;
        goto label_fallthrough_0x126d08;
    }
    ctx->pc = 0x126D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D08u;
        // 0x126d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x126d08:
    ctx->pc = 0x126D10u;
}
