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

// Function: sub_0012F020
// Address: 0x12f020 - 0x12f230
void sub_0012F020_0x12f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F020_0x12f020");
#endif

    switch (ctx->pc) {
        case 0x12f084u: goto label_12f084;
        case 0x12f0a8u: goto label_12f0a8;
        case 0x12f0e8u: goto label_12f0e8;
        case 0x12f100u: goto label_12f100;
        case 0x12f178u: goto label_12f178;
        case 0x12f1e0u: goto label_12f1e0;
        default: break;
    }

    ctx->pc = 0x12f020u;

    // 0x12f020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12f028: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f02c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12f030: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12f030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12f038: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12f03c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12f040: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12f044: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x12f044u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12f048: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x12f048u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f04c: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x12f04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x12f050: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F050u;
    {
        const bool branch_taken_0x12f050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f050) {
            ctx->pc = 0x12F054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F050u;
            // 0x12f054: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F070u;
            goto label_12f070;
        }
    }
    ctx->pc = 0x12F058u;
    // 0x12f058: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x12f058u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f05c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x12f05cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f060: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x12f060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f064: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x12f064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f068: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x12f068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12f06c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12f070:
    // 0x12f070: 0x271a021  addu        $s4, $s3, $s1
    ctx->pc = 0x12f070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x12f074: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f078: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x12f078u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x12f07c: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12F07Cu;
    SET_GPR_U32(ctx, 31, 0x12F084u);
    ctx->pc = 0x12F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F07Cu;
    // 0x12f080: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12F07Cu, 0x12F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F084u;
label_12f084:
    // 0x12f084: 0x14c880  sll         $t9, $s4, 2
    ctx->pc = 0x12f084u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12f088: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x12f088u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f08c: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x12f08cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x12f090: 0x1f96821  addu        $t5, $t7, $t9
    ctx->pc = 0x12f090u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x12f094: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x12f094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12f098: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12F098u;
    {
        const bool branch_taken_0x12f098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F098u;
        // 0x12f09c: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f098) {
            ctx->pc = 0x12F0C4u;
            goto label_12f0c4;
        }
    }
    ctx->pc = 0x12F0A0u;
    // 0x12f0a0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x12f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x12f0a4: 0x0  nop
    ctx->pc = 0x12f0a4u;
    // NOP
label_12f0a8:
    // 0x12f0a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x12f0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x12f0ac: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x12f0acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x12f0b0: 0x0  nop
    ctx->pc = 0x12f0b0u;
    // NOP
    // 0x12f0b4: 0x0  nop
    ctx->pc = 0x12f0b4u;
    // NOP
    // 0x12f0b8: 0x0  nop
    ctx->pc = 0x12f0b8u;
    // NOP
    // 0x12f0bc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12F0BCu;
    {
        const bool branch_taken_0x12f0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f0bc) {
            ctx->pc = 0x12F0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F0BCu;
            // 0x12f0c0: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f0a8;
        }
    }
    ctx->pc = 0x12F0C4u;
label_12f0c4:
    // 0x12f0c4: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x12f0c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x12f0c8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x12f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12f0cc: 0x1628821  addu        $s1, $t3, $v0
    ctx->pc = 0x12f0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x12f0d0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x12f0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x12f0d4: 0x260d0014  addiu       $t5, $s0, 0x14
    ctx->pc = 0x12f0d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x12f0d8: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x12f0d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12f0dc: 0x1a27021  addu        $t6, $t5, $v0
    ctx->pc = 0x12f0dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x12f0e0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12F0E0u;
    {
        const bool branch_taken_0x12f0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0E0u;
        // 0x12f0e4: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0e0) {
            ctx->pc = 0x12F1DCu;
            goto label_12f1dc;
        }
    }
    ctx->pc = 0x12F0E8u;
label_12f0e8:
    // 0x12f0e8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x12f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12f0ec: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x12f0ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f0f0: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x12F0F0u;
    {
        const bool branch_taken_0x12f0f0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F0F0u;
        // 0x12f0f4: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f0f0) {
            ctx->pc = 0x12F158u;
            goto label_12f158;
        }
    }
    ctx->pc = 0x12F0F8u;
    // 0x12f0f8: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x12f0f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f0fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12f0fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f100:
    // 0x12f100: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x12f100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f104: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x12f104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x12f108: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x12f108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f10c: 0x10e302b  sltu        $a2, $t0, $t6
    ctx->pc = 0x12f10cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12f110: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x12f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f114: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x12f114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x12f118: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x12f118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12f11c: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x12f11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f120: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x12f120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x12f124: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x12f124u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x12f128: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f12c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f130: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x12f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x12f134: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x12f134u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12f138: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x12f138u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f13c: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x12f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12f140: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x12f140u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f144: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12f144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12f148: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12F148u;
    {
        const bool branch_taken_0x12f148 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F148u;
        // 0x12f14c: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f148) {
            ctx->pc = 0x12F100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f100;
        }
    }
    ctx->pc = 0x12F150u;
    // 0x12f150: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x12f150u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x12f154: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x12f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_12f158:
    // 0x12f158: 0x24c02  srl         $t1, $v0, 16
    ctx->pc = 0x12f158u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12f15c: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x12F15Cu;
    {
        const bool branch_taken_0x12f15c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F15Cu;
        // 0x12f160: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f15c) {
            ctx->pc = 0x12F1CCu;
            goto label_12f1cc;
        }
    }
    ctx->pc = 0x12F164u;
    // 0x12f164: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x12f164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f168: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f16c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12f16cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f174: 0x0  nop
    ctx->pc = 0x12f174u;
    // NOP
label_12f178:
    // 0x12f178: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x12f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f17c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x12f17cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x12f180: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x12f180u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f184: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x12f184u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x12f188: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x12f188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12f18c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x12f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x12f190: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x12f190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12f194: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x12f194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f198: 0x10e282b  sltu        $a1, $t0, $t6
    ctx->pc = 0x12f198u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12f19c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12f1a0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x12f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x12f1a4: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x12f1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x12f1a8: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12f1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12f1ac: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x12f1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f1b0: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x12f1b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x12f1b4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x12f1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x12f1b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f1bc: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x12f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12f1c0: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12F1C0u;
    {
        const bool branch_taken_0x12f1c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1C0u;
        // 0x12f1c4: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1c0) {
            ctx->pc = 0x12F178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f178;
        }
    }
    ctx->pc = 0x12F1C8u;
    // 0x12f1c8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12f1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_12f1cc:
    // 0x12f1cc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x12f1ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x12f1d0: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x12f1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12f1d4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x12F1D4u;
    {
        const bool branch_taken_0x12f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1D4u;
        // 0x12f1d8: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1d4) {
            ctx->pc = 0x12F0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f0e8;
        }
    }
    ctx->pc = 0x12F1DCu;
label_12f1dc:
    // 0x12f1dc: 0x1f93821  addu        $a3, $t7, $t9
    ctx->pc = 0x12f1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_12f1e0:
    // 0x12f1e0: 0x5a800009  blezl       $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F1E0u;
    {
        const bool branch_taken_0x12f1e0 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x12f1e0) {
            ctx->pc = 0x12F1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F1E0u;
            // 0x12f1e4: 0xaf140010  sw          $s4, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F208u;
            goto label_12f208;
        }
    }
    ctx->pc = 0x12F1E8u;
    // 0x12f1e8: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x12f1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x12f1ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f1f0: 0x0  nop
    ctx->pc = 0x12f1f0u;
    // NOP
    // 0x12f1f4: 0x0  nop
    ctx->pc = 0x12f1f4u;
    // NOP
    // 0x12f1f8: 0x0  nop
    ctx->pc = 0x12f1f8u;
    // NOP
    // 0x12f1fc: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12F1FCu;
    {
        const bool branch_taken_0x12f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1fc) {
            ctx->pc = 0x12F200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F1FCu;
            // 0x12f200: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f1e0;
        }
    }
    ctx->pc = 0x12F204u;
    // 0x12f204: 0xaf140010  sw          $s4, 0x10($t8)
    ctx->pc = 0x12f204u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
label_12f208:
    // 0x12f208: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x12f208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12f20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12f210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12f214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12f214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f218: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12f218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f21c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12f21cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f220: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12f220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f224: 0x3e00008  jr          $ra
    ctx->pc = 0x12F224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F224u;
        // 0x12f228: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F22Cu;
    // 0x12f22c: 0x0  nop
    ctx->pc = 0x12f22cu;
    // NOP
    ctx->pc = 0x12f230u;
}
