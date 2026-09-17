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

// Function: sub_00330970
// Address: 0x330970 - 0x330aa0
void sub_00330970_0x330970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330970_0x330970");
#endif

    switch (ctx->pc) {
        case 0x3309d8u: goto label_3309d8;
        case 0x330a44u: goto label_330a44;
        default: break;
    }

    ctx->pc = 0x330970u;

    // 0x330970: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x330970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x330974: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x330974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x330978: 0x55202  srl         $t2, $a1, 8
    ctx->pc = 0x330978u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x33097c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x33097cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x330980: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x330980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x330984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x330984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x330988: 0x8c460050  lw          $a2, 0x50($v0)
    ctx->pc = 0x330988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x33098c: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x33098cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x330990: 0x500003f  bltz        $t0, . + 4 + (0x3F << 2)
    ctx->pc = 0x330990u;
    {
        const bool branch_taken_0x330990 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x330994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330990u;
        // 0x330994: 0x24890450  addiu       $t1, $a0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330990) {
            ctx->pc = 0x330A90u;
            goto label_330a90;
        }
    }
    ctx->pc = 0x330998u;
    // 0x330998: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x330998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33099c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x33099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3309a0: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3309a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3309a4: 0x62400a  movz        $t0, $v1, $v0
    ctx->pc = 0x3309a4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
    // 0x3309a8: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x3309a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x3309ac: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x3309acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x3309b0: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x3309b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x3309b4: 0x1143001b  beq         $t2, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3309B4u;
    {
        const bool branch_taken_0x3309b4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 3));
        ctx->pc = 0x3309B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309B4u;
        // 0x3309b8: 0x28c20000  slti        $v0, $a2, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309b4) {
            ctx->pc = 0x330A24u;
            goto label_330a24;
        }
    }
    ctx->pc = 0x3309BCu;
    // 0x3309bc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3309bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3309c0: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x3309c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x3309c4: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x3309c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3309c8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3309C8u;
    {
        const bool branch_taken_0x3309c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3309CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3309C8u;
        // 0x3309cc: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3309c8) {
            ctx->pc = 0x330A10u;
            goto label_330a10;
        }
    }
    ctx->pc = 0x3309D0u;
    // 0x3309d0: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x3309d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3309d4: 0x0  nop
    ctx->pc = 0x3309d4u;
    // NOP
label_3309d8:
    // 0x3309d8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3309d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3309dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3309dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3309e0: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x3309e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3309e4: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x3309e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x3309e8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3309e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3309ec: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x3309ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x3309f0: 0x6a182b  sltu        $v1, $v1, $t2
    ctx->pc = 0x3309f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3309f4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3309F4u;
    {
        const bool branch_taken_0x3309f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3309f4) {
            ctx->pc = 0x3309F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3309F4u;
            // 0x3309f8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330A00u;
            goto label_330a00;
        }
    }
    ctx->pc = 0x3309FCu;
    // 0x3309fc: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3309fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_330a00:
    // 0x330a00: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x330a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x330a04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x330A04u;
    {
        const bool branch_taken_0x330a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A04u;
        // 0x330a08: 0xc71821  addu        $v1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a04) {
            ctx->pc = 0x3309D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3309d8;
        }
    }
    ctx->pc = 0x330A0Cu;
    // 0x330a0c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x330a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_330a10:
    // 0x330a10: 0x82140  sll         $a0, $t0, 5
    ctx->pc = 0x330a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x330a14: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x330a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x330a18: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x330a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x330a1c: 0x1543001d  bne         $t2, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x330A1Cu;
    {
        const bool branch_taken_0x330a1c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        ctx->pc = 0x330A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A1Cu;
        // 0x330a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a1c) {
            ctx->pc = 0x330A94u;
            goto label_330a94;
        }
    }
    ctx->pc = 0x330A24u;
label_330a24:
    // 0x330a24: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x330a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x330a28: 0x90620017  lbu         $v0, 0x17($v1)
    ctx->pc = 0x330a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 23)));
    // 0x330a2c: 0x10a20015  beq         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x330A2Cu;
    {
        const bool branch_taken_0x330a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x330A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A2Cu;
        // 0x330a30: 0x891021  addu        $v0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a2c) {
            ctx->pc = 0x330A84u;
            goto label_330a84;
        }
    }
    ctx->pc = 0x330A34u;
    // 0x330a34: 0x90620019  lbu         $v0, 0x19($v1)
    ctx->pc = 0x330a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x330a38: 0x90630018  lbu         $v1, 0x18($v1)
    ctx->pc = 0x330a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x330a3c: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x330a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x330a40: 0x1033023  subu        $a2, $t0, $v1
    ctx->pc = 0x330a40u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_330a44:
    // 0x330a44: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x330a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x330a48: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x330A48u;
    {
        const bool branch_taken_0x330a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A48u;
        // 0x330a4c: 0x62140  sll         $a0, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a48) {
            ctx->pc = 0x330A80u;
            goto label_330a80;
        }
    }
    ctx->pc = 0x330A50u;
    // 0x330a50: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x330a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x330a54: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x330a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x330a58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x330a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x330a5c: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x330a5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x330a60: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x330a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x330a64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x330a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x330a68: 0x90430017  lbu         $v1, 0x17($v0)
    ctx->pc = 0x330a68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x330a6c: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x330a6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x330a70: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x330A70u;
    {
        const bool branch_taken_0x330a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x330a70) {
            ctx->pc = 0x330A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330A70u;
            // 0x330a74: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330a44;
        }
    }
    ctx->pc = 0x330A78u;
    // 0x330a78: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x330A78u;
    {
        const bool branch_taken_0x330a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A78u;
        // 0x330a7c: 0x24860001  addiu       $a2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a78) {
            ctx->pc = 0x330A44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330a44;
        }
    }
    ctx->pc = 0x330A80u;
label_330a80:
    // 0x330a80: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x330a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_330a84:
    // 0x330a84: 0x90430017  lbu         $v1, 0x17($v0)
    ctx->pc = 0x330a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 23)));
    // 0x330a88: 0x10650002  beq         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x330A88u;
    {
        const bool branch_taken_0x330a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x330a88) {
            ctx->pc = 0x330A94u;
            goto label_330a94;
        }
    }
    ctx->pc = 0x330A90u;
label_330a90:
    // 0x330a90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x330a90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330a94:
    // 0x330a94: 0x3e00008  jr          $ra
    ctx->pc = 0x330A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330A9Cu;
    // 0x330a9c: 0x0  nop
    ctx->pc = 0x330a9cu;
    // NOP
    ctx->pc = 0x330aa0u;
}
