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

// Function: sub_00208BE8
// Address: 0x208be8 - 0x208d68
void sub_00208BE8_0x208be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208BE8_0x208be8");
#endif

    switch (ctx->pc) {
        case 0x208d40u: goto label_208d40;
        case 0x208d58u: goto label_208d58;
        default: break;
    }

    ctx->pc = 0x208be8u;

    // 0x208be8: 0x8f829728  lw          $v0, -0x68D8($gp)
    ctx->pc = 0x208be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940456)));
    // 0x208bec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x208becu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x208bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x208bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x208bf4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208BF4u;
    {
        const bool branch_taken_0x208bf4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x208BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BF4u;
        // 0x208bf8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bf4) {
            ctx->pc = 0x208C10u;
            goto label_208c10;
        }
    }
    ctx->pc = 0x208BFCu;
    // 0x208bfc: 0x8c87069c  lw          $a3, 0x69C($a0)
    ctx->pc = 0x208bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x208c00: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x208C00u;
    {
        const bool branch_taken_0x208c00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C00u;
        // 0x208c04: 0x8ca6069c  lw          $a2, 0x69C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c00) {
            ctx->pc = 0x208C18u;
            goto label_208c18;
        }
    }
    ctx->pc = 0x208C08u;
    // 0x208c08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x208C08u;
    {
        const bool branch_taken_0x208c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C08u;
        // 0x208c0c: 0x6402b  sltu        $t0, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c08) {
            ctx->pc = 0x208C18u;
            goto label_208c18;
        }
    }
    ctx->pc = 0x208C10u;
label_208c10:
    // 0x208c10: 0x8c87069c  lw          $a3, 0x69C($a0)
    ctx->pc = 0x208c10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x208c14: 0x8ca6069c  lw          $a2, 0x69C($a1)
    ctx->pc = 0x208c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1692)));
label_208c18:
    // 0x208c18: 0x54e60005  bnel        $a3, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x208C18u;
    {
        const bool branch_taken_0x208c18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x208c18) {
            ctx->pc = 0x208C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C18u;
            // 0x208c1c: 0x948306a8  lhu         $v1, 0x6A8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C30u;
            goto label_208c30;
        }
    }
    ctx->pc = 0x208C20u;
    // 0x208c20: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x208C20u;
    {
        const bool branch_taken_0x208c20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x208c20) {
            ctx->pc = 0x208C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C20u;
            // 0x208c24: 0x948306a8  lhu         $v1, 0x6A8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208C30u;
            goto label_208c30;
        }
    }
    ctx->pc = 0x208C28u;
    // 0x208c28: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x208C28u;
    {
        const bool branch_taken_0x208c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C28u;
        // 0x208c2c: 0x35080026  ori         $t0, $t0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c28) {
            ctx->pc = 0x208D08u;
            goto label_208d08;
        }
    }
    ctx->pc = 0x208C30u;
label_208c30:
    // 0x208c30: 0x94a206a8  lhu         $v0, 0x6A8($a1)
    ctx->pc = 0x208c30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1704)));
    // 0x208c34: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x208C34u;
    {
        const bool branch_taken_0x208c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C34u;
        // 0x208c38: 0xc7102a  slt         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c34) {
            ctx->pc = 0x208C58u;
            goto label_208c58;
        }
    }
    ctx->pc = 0x208C3Cu;
    // 0x208c3c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x208C3Cu;
    {
        const bool branch_taken_0x208c3c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C3Cu;
        // 0x208c40: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c3c) {
            ctx->pc = 0x208C5Cu;
            goto label_208c5c;
        }
    }
    ctx->pc = 0x208C44u;
    // 0x208c44: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x208C44u;
    {
        const bool branch_taken_0x208c44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x208c44) {
            ctx->pc = 0x208C5Cu;
            goto label_208c5c;
        }
    }
    ctx->pc = 0x208C4Cu;
    // 0x208c4c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x208C4Cu;
    {
        const bool branch_taken_0x208c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C4Cu;
        // 0x208c50: 0x35080020  ori         $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c4c) {
            ctx->pc = 0x208D08u;
            goto label_208d08;
        }
    }
    ctx->pc = 0x208C54u;
    // 0x208c54: 0x0  nop
    ctx->pc = 0x208c54u;
    // NOP
label_208c58:
    // 0x208c58: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x208c58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_208c5c:
    // 0x208c5c: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x208c5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x208c60: 0x248488d0  addiu       $a0, $a0, -0x7730
    ctx->pc = 0x208c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936784));
    // 0x208c64: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x208c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x208c68: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x208c68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x208c6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208c70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x208c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x208c74: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x208c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x208c78: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x208c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208c7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x208c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208c80: 0x8c83069c  lw          $v1, 0x69C($a0)
    ctx->pc = 0x208c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x208c84: 0x54600021  bnel        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x208C84u;
    {
        const bool branch_taken_0x208c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x208c84) {
            ctx->pc = 0x208C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208C84u;
            // 0x208c88: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208D0Cu;
            goto label_208d0c;
        }
    }
    ctx->pc = 0x208C8Cu;
    // 0x208c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208c90: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x208c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x208c94: 0xaf82c8c4  sw          $v0, -0x373C($gp)
    ctx->pc = 0x208c94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953156), GPR_U32(ctx, 2));
    // 0x208c98: 0x94c206a8  lhu         $v0, 0x6A8($a2)
    ctx->pc = 0x208c98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1704)));
    // 0x208c9c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x208C9Cu;
    {
        const bool branch_taken_0x208c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x208CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208C9Cu;
        // 0x208ca0: 0x35080002  ori         $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208c9c) {
            ctx->pc = 0x208CC0u;
            goto label_208cc0;
        }
    }
    ctx->pc = 0x208CA4u;
    // 0x208ca4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x208ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x208ca8: 0x246383c0  addiu       $v1, $v1, -0x7C40
    ctx->pc = 0x208ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935488));
    // 0x208cac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x208cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x208cb0: 0x35080008  ori         $t0, $t0, 0x8
    ctx->pc = 0x208cb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x208cb4: 0x24630035  addiu       $v1, $v1, 0x35
    ctx->pc = 0x208cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 53));
    // 0x208cb8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x208CB8u;
    {
        const bool branch_taken_0x208cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CB8u;
        // 0x208cbc: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cb8) {
            ctx->pc = 0x208CF8u;
            goto label_208cf8;
        }
    }
    ctx->pc = 0x208CC0u;
label_208cc0:
    // 0x208cc0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x208cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x208cc4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x208CC4u;
    {
        const bool branch_taken_0x208cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CC4u;
        // 0x208cc8: 0x3c07003b  lui         $a3, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cc4) {
            ctx->pc = 0x208D0Cu;
            goto label_208d0c;
        }
    }
    ctx->pc = 0x208CCCu;
    // 0x208ccc: 0x94c3003c  lhu         $v1, 0x3C($a2)
    ctx->pc = 0x208cccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x208cd0: 0x24e483c0  addiu       $a0, $a3, -0x7C40
    ctx->pc = 0x208cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935488));
    // 0x208cd4: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x208cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x208cd8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208CD8u;
    {
        const bool branch_taken_0x208cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CD8u;
        // 0x208cdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208cd8) {
            ctx->pc = 0x208CECu;
            goto label_208cec;
        }
    }
    ctx->pc = 0x208CE0u;
    // 0x208ce0: 0x9083002b  lbu         $v1, 0x2B($a0)
    ctx->pc = 0x208ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 43)));
    // 0x208ce4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208CE4u;
    {
        const bool branch_taken_0x208ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x208CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208CE4u;
        // 0x208ce8: 0x8ce383c0  lw          $v1, -0x7C40($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ce4) {
            ctx->pc = 0x208D10u;
            goto label_208d10;
        }
    }
    ctx->pc = 0x208CECu;
label_208cec:
    // 0x208cec: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x208cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x208cf0: 0x35080010  ori         $t0, $t0, 0x10
    ctx->pc = 0x208cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16);
    // 0x208cf4: 0x24630033  addiu       $v1, $v1, 0x33
    ctx->pc = 0x208cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 51));
label_208cf8:
    // 0x208cf8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x208cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x208cfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x208cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x208d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208D00u;
    {
        const bool branch_taken_0x208d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D00u;
        // 0x208d04: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d00) {
            ctx->pc = 0x208D0Cu;
            goto label_208d0c;
        }
    }
    ctx->pc = 0x208D08u;
label_208d08:
    // 0x208d08: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x208d08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
label_208d0c:
    // 0x208d0c: 0x8ce383c0  lw          $v1, -0x7C40($a3)
    ctx->pc = 0x208d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294935488)));
label_208d10:
    // 0x208d10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x208d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x208d14: 0xaf88c8c0  sw          $t0, -0x3740($gp)
    ctx->pc = 0x208d14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953152), GPR_U32(ctx, 8));
    // 0x208d18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x208D18u;
    {
        const bool branch_taken_0x208d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x208D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D18u;
        // 0x208d1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d18) {
            ctx->pc = 0x208D2Cu;
            goto label_208d2c;
        }
    }
    ctx->pc = 0x208D20u;
    // 0x208d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x208d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208d24: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x208D24u;
    {
        const bool branch_taken_0x208d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x208d24) {
            ctx->pc = 0x208D30u;
            goto label_208d30;
        }
    }
    ctx->pc = 0x208D2Cu;
label_208d2c:
    // 0x208d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208d30:
    // 0x208d30: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x208D30u;
    {
        const bool branch_taken_0x208d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x208D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D30u;
        // 0x208d34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208d30) {
            ctx->pc = 0x208D5Cu;
            goto label_208d5c;
        }
    }
    ctx->pc = 0x208D38u;
    // 0x208d38: 0xc0821a4  jal         func_208690
    ctx->pc = 0x208D38u;
    SET_GPR_U32(ctx, 31, 0x208D40u);
    ctx->pc = 0x208690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208690u, 0x208D38u, 0x208D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D40u;
label_208d40:
    // 0x208d40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x208d44: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x208d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x208d48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x208d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x208d4c: 0x8c844538  lw          $a0, 0x4538($a0)
    ctx->pc = 0x208d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17720)));
    // 0x208d50: 0xc091aa6  jal         func_246A98
    ctx->pc = 0x208D50u;
    SET_GPR_U32(ctx, 31, 0x208D58u);
    ctx->pc = 0x246A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A98u, 0x208D50u, 0x208D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208D58u;
label_208d58:
    // 0x208d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208d5c:
    // 0x208d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x208D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208D5Cu;
        // 0x208d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208D64u;
    // 0x208d64: 0x0  nop
    ctx->pc = 0x208d64u;
    // NOP
    ctx->pc = 0x208d68u;
}
