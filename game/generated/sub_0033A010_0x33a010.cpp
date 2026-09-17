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

// Function: sub_0033A010
// Address: 0x33a010 - 0x33a298
void sub_0033A010_0x33a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A010_0x33a010");
#endif

    switch (ctx->pc) {
        case 0x33a054u: goto label_33a054;
        case 0x33a0e8u: goto label_33a0e8;
        case 0x33a128u: goto label_33a128;
        case 0x33a160u: goto label_33a160;
        case 0x33a1f0u: goto label_33a1f0;
        case 0x33a230u: goto label_33a230;
        case 0x33a270u: goto label_33a270;
        default: break;
    }

    ctx->pc = 0x33a010u;

    // 0x33a010: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x33a010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a014: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x33a014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x33a018: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x33a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x33a01c: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x33a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33a020: 0x540c3  sra         $t0, $a1, 3
    ctx->pc = 0x33a020u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 3));
    // 0x33a024: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x33a024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33a028: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x33A028u;
    {
        const bool branch_taken_0x33a028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a028) {
            ctx->pc = 0x33A17Cu;
            goto label_33a17c;
        }
    }
    ctx->pc = 0x33A030u;
    // 0x33a030: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x33a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x33a034: 0x240a00ff  addiu       $t2, $zero, 0xFF
    ctx->pc = 0x33a034u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a038: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x33a038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33a03c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A03Cu;
    {
        const bool branch_taken_0x33a03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A03Cu;
        // 0x33a040: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a03c) {
            ctx->pc = 0x33A050u;
            goto label_33a050;
        }
    }
    ctx->pc = 0x33A044u;
    // 0x33a044: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33A044u;
    {
        const bool branch_taken_0x33a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A044u;
        // 0x33a048: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a044) {
            ctx->pc = 0x33A07Cu;
            goto label_33a07c;
        }
    }
    ctx->pc = 0x33A04Cu;
    // 0x33a04c: 0x0  nop
    ctx->pc = 0x33a04cu;
    // NOP
label_33a050:
    // 0x33a050: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x33a050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_33a054:
    // 0x33a054: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x33a054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33a058: 0x2c830100  sltiu       $v1, $a0, 0x100
    ctx->pc = 0x33a058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x33a05c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A05Cu;
    {
        const bool branch_taken_0x33a05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A05Cu;
        // 0x33a060: 0x491021  addu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a05c) {
            ctx->pc = 0x33A07Cu;
            goto label_33a07c;
        }
    }
    ctx->pc = 0x33A064u;
    // 0x33a064: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x33a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33a068: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x33a068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33a06c: 0x0  nop
    ctx->pc = 0x33a06cu;
    // NOP
    // 0x33a070: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33A070u;
    {
        const bool branch_taken_0x33a070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a070) {
            ctx->pc = 0x33A074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A070u;
            // 0x33a074: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a054;
        }
    }
    ctx->pc = 0x33A078u;
    // 0x33a078: 0x248affff  addiu       $t2, $a0, -0x1
    ctx->pc = 0x33a078u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_33a07c:
    // 0x33a07c: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x33a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x33a080: 0x25260004  addiu       $a2, $t1, 0x4
    ctx->pc = 0x33a080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x33a084: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x33a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33a088: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x33a088u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x33a08c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x33a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33a090: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x33a090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x33a094: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a098: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x33a098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x33a09c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a0a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x33a0a4: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x33a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x33a0a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a0ac: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x33a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x33a0b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x33a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33a0b4: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x33a0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33a0b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33a0bc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x33a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33a0c0: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x33a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33a0c4: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x33a0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x33a0c8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x33a0c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x33a0cc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x33a0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x33a0d0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33A0D0u;
    {
        const bool branch_taken_0x33a0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0D0u;
        // 0x33a0d4: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0d0) {
            ctx->pc = 0x33A110u;
            goto label_33a110;
        }
    }
    ctx->pc = 0x33A0D8u;
    // 0x33a0d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x33a0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a0dc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33A0DCu;
    {
        const bool branch_taken_0x33a0dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0DCu;
        // 0x33a0e0: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0dc) {
            ctx->pc = 0x33A144u;
            goto label_33a144;
        }
    }
    ctx->pc = 0x33A0E4u;
    // 0x33a0e4: 0x0  nop
    ctx->pc = 0x33a0e4u;
    // NOP
label_33a0e8:
    // 0x33a0e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x33a0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a0ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a0f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33a0f4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x33a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a0f8: 0x0  nop
    ctx->pc = 0x33a0f8u;
    // NOP
    // 0x33a0fc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A0FCu;
    {
        const bool branch_taken_0x33a0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A0FCu;
        // 0x33a100: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a0fc) {
            ctx->pc = 0x33A0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a0e8;
        }
    }
    ctx->pc = 0x33A104u;
    // 0x33a104: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33A104u;
    {
        const bool branch_taken_0x33a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A104u;
        // 0x33a108: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a104) {
            ctx->pc = 0x33A148u;
            goto label_33a148;
        }
    }
    ctx->pc = 0x33A10Cu;
    // 0x33a10c: 0x0  nop
    ctx->pc = 0x33a10cu;
    // NOP
label_33a110:
    // 0x33a110: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x33a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x33a114: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x33a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x33a118: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33a118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a11c: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A11Cu;
    {
        const bool branch_taken_0x33a11c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A11Cu;
        // 0x33a120: 0x2446ffff  addiu       $a2, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a11c) {
            ctx->pc = 0x33A144u;
            goto label_33a144;
        }
    }
    ctx->pc = 0x33A124u;
    // 0x33a124: 0x0  nop
    ctx->pc = 0x33a124u;
    // NOP
label_33a128:
    // 0x33a128: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x33a128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a12c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a130: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x33a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x33a134: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x33a134u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a138: 0x0  nop
    ctx->pc = 0x33a138u;
    // NOP
    // 0x33a13c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A13Cu;
    {
        const bool branch_taken_0x33a13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A13Cu;
        // 0x33a140: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a13c) {
            ctx->pc = 0x33A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a128;
        }
    }
    ctx->pc = 0x33A144u;
label_33a144:
    // 0x33a144: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x33a144u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_33a148:
    // 0x33a148: 0x2d420100  sltiu       $v0, $t2, 0x100
    ctx->pc = 0x33a148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x33a14c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33A14Cu;
    {
        const bool branch_taken_0x33a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A14Cu;
        // 0x33a150: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a14c) {
            ctx->pc = 0x33A17Cu;
            goto label_33a17c;
        }
    }
    ctx->pc = 0x33A154u;
    // 0x33a154: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x33a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x33a158: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x33a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a15c: 0x0  nop
    ctx->pc = 0x33a15cu;
    // NOP
label_33a160:
    // 0x33a160: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a164: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x33a164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x33a168: 0x2d430100  sltiu       $v1, $t2, 0x100
    ctx->pc = 0x33a168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x33a16c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a170: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33a170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33a174: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A174u;
    {
        const bool branch_taken_0x33a174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A174u;
        // 0x33a178: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a174) {
            ctx->pc = 0x33A160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a160;
        }
    }
    ctx->pc = 0x33A17Cu;
label_33a17c:
    // 0x33a17c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A184u;
    // 0x33a184: 0x0  nop
    ctx->pc = 0x33a184u;
    // NOP
    // 0x33a188: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x33a188u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a18c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x33a18cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a190: 0xb10c0  sll         $v0, $t3, 3
    ctx->pc = 0x33a190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x33a194: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x33a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x33a198: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x33a198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a19c: 0x8d0a0004  lw          $t2, 0x4($t0)
    ctx->pc = 0x33a19cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x33a1a0: 0x1140003a  beqz        $t2, . + 4 + (0x3A << 2)
    ctx->pc = 0x33A1A0u;
    {
        const bool branch_taken_0x33a1a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1A0u;
        // 0x33a1a4: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1a0) {
            ctx->pc = 0x33A28Cu;
            goto label_33a28c;
        }
    }
    ctx->pc = 0x33A1A8u;
    // 0x33a1a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x33a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33a1ac: 0x8da60004  lw          $a2, 0x4($t5)
    ctx->pc = 0x33a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x33a1b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33a1b4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x33a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x33a1b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x33a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33a1bc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x33a1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33a1c0: 0x8dac0008  lw          $t4, 0x8($t5)
    ctx->pc = 0x33a1c0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x33a1c4: 0xc54821  addu        $t1, $a2, $a1
    ctx->pc = 0x33a1c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33a1c8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x33a1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33a1cc: 0x1222824  and         $a1, $t1, $v0
    ctx->pc = 0x33a1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x33a1d0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x33a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x33a1d4: 0x1842023  subu        $a0, $t4, $a0
    ctx->pc = 0x33a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x33a1d8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x33a1d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x33a1dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33a1e0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33A1E0u;
    {
        const bool branch_taken_0x33a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1E0u;
        // 0x33a1e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1e0) {
            ctx->pc = 0x33A218u;
            goto label_33a218;
        }
    }
    ctx->pc = 0x33A1E8u;
    // 0x33a1e8: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33A1E8u;
    {
        const bool branch_taken_0x33a1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A1E8u;
        // 0x33a1ec: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a1e8) {
            ctx->pc = 0x33A254u;
            goto label_33a254;
        }
    }
    ctx->pc = 0x33A1F0u;
label_33a1f0:
    // 0x33a1f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x33a1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a1f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a1f8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x33a1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x33a1fc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x33a1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a200: 0x0  nop
    ctx->pc = 0x33a200u;
    // NOP
    // 0x33a204: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A204u;
    {
        const bool branch_taken_0x33a204 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A204u;
        // 0x33a208: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a204) {
            ctx->pc = 0x33A1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a1f0;
        }
    }
    ctx->pc = 0x33A20Cu;
    // 0x33a20c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x33A20Cu;
    {
        const bool branch_taken_0x33a20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A20Cu;
        // 0x33a210: 0x8d0a0004  lw          $t2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a20c) {
            ctx->pc = 0x33A250u;
            goto label_33a250;
        }
    }
    ctx->pc = 0x33A214u;
    // 0x33a214: 0x0  nop
    ctx->pc = 0x33a214u;
    // NOP
label_33a218:
    // 0x33a218: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x33a218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x33a21c: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x33a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x33a220: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x33a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33a224: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x33A224u;
    {
        const bool branch_taken_0x33a224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A224u;
        // 0x33a228: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a224) {
            ctx->pc = 0x33A254u;
            goto label_33a254;
        }
    }
    ctx->pc = 0x33A22Cu;
    // 0x33a22c: 0x0  nop
    ctx->pc = 0x33a22cu;
    // NOP
label_33a230:
    // 0x33a230: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x33a230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33a234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33a234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33a238: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x33a238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x33a23c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x33a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a240: 0x0  nop
    ctx->pc = 0x33a240u;
    // NOP
    // 0x33a244: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A244u;
    {
        const bool branch_taken_0x33a244 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A244u;
        // 0x33a248: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a244) {
            ctx->pc = 0x33A230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a230;
        }
    }
    ctx->pc = 0x33A24Cu;
    // 0x33a24c: 0x8d0a0004  lw          $t2, 0x4($t0)
    ctx->pc = 0x33a24cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_33a250:
    // 0x33a250: 0x8dac0008  lw          $t4, 0x8($t5)
    ctx->pc = 0x33a250u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_33a254:
    // 0x33a254: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33a254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a258: 0x18a1823  subu        $v1, $t4, $t2
    ctx->pc = 0x33a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x33a25c: 0x4b5823  subu        $t3, $v0, $t3
    ctx->pc = 0x33a25cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x33a260: 0xada30008  sw          $v1, 0x8($t5)
    ctx->pc = 0x33a260u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 3));
    // 0x33a264: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x33a264u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x33a268: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A268u;
    {
        const bool branch_taken_0x33a268 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A268u;
        // 0x33a26c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a268) {
            ctx->pc = 0x33A28Cu;
            goto label_33a28c;
        }
    }
    ctx->pc = 0x33A270u;
label_33a270:
    // 0x33a270: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x33a270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33a274: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x33a274u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x33a278: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x33a278u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x33a27c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x33a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x33a280: 0x0  nop
    ctx->pc = 0x33a280u;
    // NOP
    // 0x33a284: 0x1560fffa  bnez        $t3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A284u;
    {
        const bool branch_taken_0x33a284 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A284u;
        // 0x33a288: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a284) {
            ctx->pc = 0x33A270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a270;
        }
    }
    ctx->pc = 0x33A28Cu;
label_33a28c:
    // 0x33a28c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A294u;
    // 0x33a294: 0x0  nop
    ctx->pc = 0x33a294u;
    // NOP
    ctx->pc = 0x33a298u;
}
