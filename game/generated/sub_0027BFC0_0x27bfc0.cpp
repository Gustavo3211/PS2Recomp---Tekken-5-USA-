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

// Function: sub_0027BFC0
// Address: 0x27bfc0 - 0x27c570
void sub_0027BFC0_0x27bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BFC0_0x27bfc0");
#endif

    switch (ctx->pc) {
        case 0x27c014u: goto label_27c014;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c318u: goto label_27c318;
        case 0x27c370u: goto label_27c370;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c448u: goto label_27c448;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c554u: goto label_27c554;
        default: break;
    }

    ctx->pc = 0x27bfc0u;

    // 0x27bfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27bfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27bfc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27bfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27bfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27bfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27bfd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27bfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27bfd8: 0xa200030d  sb          $zero, 0x30D($s0)
    ctx->pc = 0x27bfd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bfdc: 0x920201ee  lbu         $v0, 0x1EE($s0)
    ctx->pc = 0x27bfdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 494)));
    // 0x27bfe0: 0xa200030c  sb          $zero, 0x30C($s0)
    ctx->pc = 0x27bfe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 780), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bfe4: 0xa200030e  sb          $zero, 0x30E($s0)
    ctx->pc = 0x27bfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x27bfe8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x27BFE8u;
    {
        const bool branch_taken_0x27bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE8u;
        // 0x27bfec: 0xa200030f  sb          $zero, 0x30F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 783), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfe8) {
            ctx->pc = 0x27C078u;
            goto label_27c078;
        }
    }
    ctx->pc = 0x27BFF0u;
    // 0x27bff0: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x27bff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x27bff4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27BFF4u;
    {
        const bool branch_taken_0x27bff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27bff4) {
            ctx->pc = 0x27C00Cu;
            goto label_27c00c;
        }
    }
    ctx->pc = 0x27BFFCu;
    // 0x27bffc: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x27bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c000: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x27c000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x27c004: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C004u;
    {
        const bool branch_taken_0x27c004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c004) {
            ctx->pc = 0x27C008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C004u;
            // 0x27c008: 0x920201b2  lbu         $v0, 0x1B2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C028u;
            goto label_27c028;
        }
    }
    ctx->pc = 0x27C00Cu;
label_27c00c:
    // 0x27c00c: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C00Cu;
    SET_GPR_U32(ctx, 31, 0x27C014u);
    ctx->pc = 0x27C010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C00Cu;
    // 0x27c010: 0x24052399  addiu       $a1, $zero, 0x2399 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C00Cu, 0x27C014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C014u;
label_27c014:
    // 0x27c014: 0xa6000154  sh          $zero, 0x154($s0)
    ctx->pc = 0x27c014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 340), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c018: 0x24038020  addiu       $v1, $zero, -0x7FE0
    ctx->pc = 0x27c018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934560));
    // 0x27c01c: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x27C01Cu;
    {
        const bool branch_taken_0x27c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C01Cu;
        // 0x27c020: 0xa6020300  sh          $v0, 0x300($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c01c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C024u;
    // 0x27c024: 0x0  nop
    ctx->pc = 0x27c024u;
    // NOP
label_27c028:
    // 0x27c028: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x27c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x27c02c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x27c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x27c030: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c034: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C034u;
    SET_GPR_U32(ctx, 31, 0x27C03Cu);
    ctx->pc = 0x27C038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C034u;
    // 0x27c038: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C034u, 0x27C03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c040: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c044: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c048: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c04c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c04cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c050: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c054: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C054u;
    {
        const bool branch_taken_0x27c054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C054u;
        // 0x27c058: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c054) {
            ctx->pc = 0x27C068u;
            goto label_27c068;
        }
    }
    ctx->pc = 0x27C05Cu;
    // 0x27c05c: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c060: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x27C060u;
    {
        const bool branch_taken_0x27c060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C060u;
        // 0x27c064: 0x94430048  lhu         $v1, 0x48($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c060) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C068u;
label_27c068:
    // 0x27c068: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c06c: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x27C06Cu;
    {
        const bool branch_taken_0x27c06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C06Cu;
        // 0x27c070: 0x9443004a  lhu         $v1, 0x4A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 74)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c06c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C074u;
    // 0x27c074: 0x0  nop
    ctx->pc = 0x27c074u;
    // NOP
label_27c078:
    // 0x27c078: 0x920201f9  lbu         $v0, 0x1F9($s0)
    ctx->pc = 0x27c078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 505)));
    // 0x27c07c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C07Cu;
    {
        const bool branch_taken_0x27c07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c07c) {
            ctx->pc = 0x27C094u;
            goto label_27c094;
        }
    }
    ctx->pc = 0x27C084u;
    // 0x27c084: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x27c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c088: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x27c088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x27c08c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x27C08Cu;
    {
        const bool branch_taken_0x27c08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C08Cu;
        // 0x27c090: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c08c) {
            ctx->pc = 0x27C188u;
            goto label_27c188;
        }
    }
    ctx->pc = 0x27C094u;
label_27c094:
    // 0x27c094: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C094u;
    SET_GPR_U32(ctx, 31, 0x27C09Cu);
    ctx->pc = 0x27C098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C094u;
    // 0x27c098: 0x24052399  addiu       $a1, $zero, 0x2399 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9113));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C094u, 0x27C09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C09Cu;
label_27c09c:
    // 0x27c09c: 0x96030308  lhu         $v1, 0x308($s0)
    ctx->pc = 0x27c09cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x27c0a0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C0A0u;
    {
        const bool branch_taken_0x27c0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0A0u;
        // 0x27c0a4: 0xa6020300  sh          $v0, 0x300($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0a0) {
            ctx->pc = 0x27C0C0u;
            goto label_27c0c0;
        }
    }
    ctx->pc = 0x27C0A8u;
    // 0x27c0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27c0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0ac: 0xc0806e6  jal         func_201B98
    ctx->pc = 0x27C0ACu;
    SET_GPR_U32(ctx, 31, 0x27C0B4u);
    ctx->pc = 0x27C0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0ACu;
    // 0x27c0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201B98u, 0x27C0ACu, 0x27C0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C0B4u;
label_27c0b4:
    // 0x27c0b4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x27C0B4u;
    {
        const bool branch_taken_0x27c0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0B4u;
        // 0x27c0b8: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0b4) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C0BCu;
    // 0x27c0bc: 0x0  nop
    ctx->pc = 0x27c0bcu;
    // NOP
label_27c0c0:
    // 0x27c0c0: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c0c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c0c8: 0x86040088  lh          $a0, 0x88($s0)
    ctx->pc = 0x27c0c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x27c0cc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27c0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27c0d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27c0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c0d4: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x27C0D4u;
    {
        const bool branch_taken_0x27c0d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0D4u;
        // 0x27c0d8: 0xa202030d  sb          $v0, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0d4) {
            ctx->pc = 0x27C130u;
            goto label_27c130;
        }
    }
    ctx->pc = 0x27C0DCu;
    // 0x27c0dc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x27c0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27c0e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C0E0u;
    {
        const bool branch_taken_0x27c0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0E0u;
        // 0x27c0e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0e0) {
            ctx->pc = 0x27C0F8u;
            goto label_27c0f8;
        }
    }
    ctx->pc = 0x27C0E8u;
    // 0x27c0e8: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C0E8u;
    {
        const bool branch_taken_0x27c0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c0e8) {
            ctx->pc = 0x27C0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C0E8u;
            // 0x27c0ec: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C110u;
            goto label_27c110;
        }
    }
    ctx->pc = 0x27C0F0u;
    // 0x27c0f0: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x27C0F0u;
    {
        const bool branch_taken_0x27c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0F0u;
        // 0x27c0f4: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0f0) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C0F8u;
label_27c0f8:
    // 0x27c0f8: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27C0F8u;
    {
        const bool branch_taken_0x27c0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0F8u;
        // 0x27c0fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0f8) {
            ctx->pc = 0x27C150u;
            goto label_27c150;
        }
    }
    ctx->pc = 0x27C100u;
    // 0x27c100: 0x5082001b  beql        $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x27C100u;
    {
        const bool branch_taken_0x27c100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c100) {
            ctx->pc = 0x27C104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C100u;
            // 0x27c104: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C170u;
            goto label_27c170;
        }
    }
    ctx->pc = 0x27C108u;
    // 0x27c108: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x27C108u;
    {
        const bool branch_taken_0x27c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C108u;
        // 0x27c10c: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c108) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C110u;
label_27c110:
    // 0x27c110: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x27c110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x27c114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C114u;
    {
        const bool branch_taken_0x27c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C114u;
        // 0x27c118: 0x8e020314  lw          $v0, 0x314($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c114) {
            ctx->pc = 0x27C128u;
            goto label_27c128;
        }
    }
    ctx->pc = 0x27C11Cu;
    // 0x27c11c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x27C11Cu;
    {
        const bool branch_taken_0x27c11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C11Cu;
        // 0x27c120: 0x94430036  lhu         $v1, 0x36($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c11c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C124u;
    // 0x27c124: 0x0  nop
    ctx->pc = 0x27c124u;
    // NOP
label_27c128:
    // 0x27c128: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x27C128u;
    {
        const bool branch_taken_0x27c128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C128u;
        // 0x27c12c: 0x94430034  lhu         $v1, 0x34($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c128) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C130u;
label_27c130:
    // 0x27c130: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x27c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c134: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x27c134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x27c138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C138u;
    {
        const bool branch_taken_0x27c138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C138u;
        // 0x27c13c: 0x8e020314  lw          $v0, 0x314($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c138) {
            ctx->pc = 0x27C148u;
            goto label_27c148;
        }
    }
    ctx->pc = 0x27C140u;
    // 0x27c140: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x27C140u;
    {
        const bool branch_taken_0x27c140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C140u;
        // 0x27c144: 0x9443003e  lhu         $v1, 0x3E($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c140) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C148u;
label_27c148:
    // 0x27c148: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x27C148u;
    {
        const bool branch_taken_0x27c148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C148u;
        // 0x27c14c: 0x9443003c  lhu         $v1, 0x3C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c148) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C150u;
label_27c150:
    // 0x27c150: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x27c150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c154: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x27c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x27c158: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27C158u;
    {
        const bool branch_taken_0x27c158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C158u;
        // 0x27c15c: 0x8e020314  lw          $v0, 0x314($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c158) {
            ctx->pc = 0x27C168u;
            goto label_27c168;
        }
    }
    ctx->pc = 0x27C160u;
    // 0x27c160: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x27C160u;
    {
        const bool branch_taken_0x27c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C160u;
        // 0x27c164: 0x94430046  lhu         $v1, 0x46($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c160) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C168u;
label_27c168:
    // 0x27c168: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x27C168u;
    {
        const bool branch_taken_0x27c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C168u;
        // 0x27c16c: 0x94430044  lhu         $v1, 0x44($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c168) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C170u;
label_27c170:
    // 0x27c170: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x27c170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x27c174: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x27C174u;
    {
        const bool branch_taken_0x27c174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C174u;
        // 0x27c178: 0x8e020314  lw          $v0, 0x314($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c174) {
            ctx->pc = 0x27C52Cu;
            goto label_27c52c;
        }
    }
    ctx->pc = 0x27C17Cu;
    // 0x27c17c: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x27C17Cu;
    {
        const bool branch_taken_0x27c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C17Cu;
        // 0x27c180: 0x94430040  lhu         $v1, 0x40($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c17c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C184u;
    // 0x27c184: 0x0  nop
    ctx->pc = 0x27c184u;
    // NOP
label_27c188:
    // 0x27c188: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27C188u;
    {
        const bool branch_taken_0x27c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C188u;
        // 0x27c18c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c188) {
            ctx->pc = 0x27C1C8u;
            goto label_27c1c8;
        }
    }
    ctx->pc = 0x27C190u;
    // 0x27c190: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c194: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x27c194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x27c198: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c19c: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C19Cu;
    SET_GPR_U32(ctx, 31, 0x27C1A4u);
    ctx->pc = 0x27C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C19Cu;
    // 0x27c1a0: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C19Cu, 0x27C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1A4u;
label_27c1a4:
    // 0x27c1a4: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c1a8: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c1ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c1b0: 0x8e040314  lw          $a0, 0x314($s0)
    ctx->pc = 0x27c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c1b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c1b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c1b8: 0xa203030d  sb          $v1, 0x30D($s0)
    ctx->pc = 0x27c1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
    // 0x27c1bc: 0x9482004e  lhu         $v0, 0x4E($a0)
    ctx->pc = 0x27c1bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x27c1c0: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x27C1C0u;
    {
        const bool branch_taken_0x27c1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1C0u;
        // 0x27c1c4: 0xa6020304  sh          $v0, 0x304($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1c0) {
            ctx->pc = 0x27C534u;
            goto label_27c534;
        }
    }
    ctx->pc = 0x27C1C8u;
label_27c1c8:
    // 0x27c1c8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x27c1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x27c1cc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27C1CCu;
    {
        const bool branch_taken_0x27c1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1CCu;
        // 0x27c1d0: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1cc) {
            ctx->pc = 0x27C210u;
            goto label_27c210;
        }
    }
    ctx->pc = 0x27C1D4u;
    // 0x27c1d4: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c1d8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x27c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x27c1dc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c1e0: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C1E0u;
    SET_GPR_U32(ctx, 31, 0x27C1E8u);
    ctx->pc = 0x27C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C1E0u;
    // 0x27c1e4: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C1E0u, 0x27C1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1E8u;
label_27c1e8:
    // 0x27c1e8: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c1e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c1ec: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c1f0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c1f4: 0x8e040314  lw          $a0, 0x314($s0)
    ctx->pc = 0x27c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c1f8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c1f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c1fc: 0xa203030d  sb          $v1, 0x30D($s0)
    ctx->pc = 0x27c1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
    // 0x27c200: 0x9482004c  lhu         $v0, 0x4C($a0)
    ctx->pc = 0x27c200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x27c204: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x27C204u;
    {
        const bool branch_taken_0x27c204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C204u;
        // 0x27c208: 0xa6020304  sh          $v0, 0x304($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c204) {
            ctx->pc = 0x27C534u;
            goto label_27c534;
        }
    }
    ctx->pc = 0x27C20Cu;
    // 0x27c20c: 0x0  nop
    ctx->pc = 0x27c20cu;
    // NOP
label_27c210:
    // 0x27c210: 0x920201f2  lbu         $v0, 0x1F2($s0)
    ctx->pc = 0x27c210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 498)));
    // 0x27c214: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x27C214u;
    {
        const bool branch_taken_0x27c214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C214u;
        // 0x27c218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c214) {
            ctx->pc = 0x27C3A0u;
            goto label_27c3a0;
        }
    }
    ctx->pc = 0x27C21Cu;
    // 0x27c21c: 0x86060088  lh          $a2, 0x88($s0)
    ctx->pc = 0x27c21cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x27c220: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x27C220u;
    {
        const bool branch_taken_0x27c220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C220u;
        // 0x27c224: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c220) {
            ctx->pc = 0x27C2A8u;
            goto label_27c2a8;
        }
    }
    ctx->pc = 0x27C228u;
    // 0x27c228: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C228u;
    {
        const bool branch_taken_0x27c228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C228u;
        // 0x27c22c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c228) {
            ctx->pc = 0x27C240u;
            goto label_27c240;
        }
    }
    ctx->pc = 0x27C230u;
    // 0x27c230: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x27C230u;
    {
        const bool branch_taken_0x27c230 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c230) {
            ctx->pc = 0x27C234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C230u;
            // 0x27c234: 0x920201b2  lbu         $v0, 0x1B2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C258u;
            goto label_27c258;
        }
    }
    ctx->pc = 0x27C238u;
    // 0x27c238: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x27C238u;
    {
        const bool branch_taken_0x27c238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C238u;
        // 0x27c23c: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c238) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C240u;
label_27c240:
    // 0x27c240: 0x10c2002f  beq         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x27C240u;
    {
        const bool branch_taken_0x27c240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C240u;
        // 0x27c244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c240) {
            ctx->pc = 0x27C300u;
            goto label_27c300;
        }
    }
    ctx->pc = 0x27C248u;
    // 0x27c248: 0x50c20043  beql        $a2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27C248u;
    {
        const bool branch_taken_0x27c248 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c248) {
            ctx->pc = 0x27C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C248u;
            // 0x27c24c: 0x920201b2  lbu         $v0, 0x1B2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C358u;
            goto label_27c358;
        }
    }
    ctx->pc = 0x27C250u;
    // 0x27c250: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x27C250u;
    {
        const bool branch_taken_0x27c250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C250u;
        // 0x27c254: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c250) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C258u;
label_27c258:
    // 0x27c258: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x27c25c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x27c260: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c264: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C264u;
    SET_GPR_U32(ctx, 31, 0x27C26Cu);
    ctx->pc = 0x27C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C264u;
    // 0x27c268: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C264u, 0x27C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C26Cu;
label_27c26c:
    // 0x27c26c: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c26cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c270: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c274: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c278: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c27c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c280: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c284: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C284u;
    {
        const bool branch_taken_0x27c284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C284u;
        // 0x27c288: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c284) {
            ctx->pc = 0x27C298u;
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C28Cu;
    // 0x27c28c: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c290: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x27C290u;
    {
        const bool branch_taken_0x27c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C290u;
        // 0x27c294: 0x94430038  lhu         $v1, 0x38($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c290) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C298u;
label_27c298:
    // 0x27c298: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c29c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x27C29Cu;
    {
        const bool branch_taken_0x27c29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C29Cu;
        // 0x27c2a0: 0x9443003a  lhu         $v1, 0x3A($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c29c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C2A4u;
    // 0x27c2a4: 0x0  nop
    ctx->pc = 0x27c2a4u;
    // NOP
label_27c2a8:
    // 0x27c2a8: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c2ac: 0x240300de  addiu       $v1, $zero, 0xDE
    ctx->pc = 0x27c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x27c2b0: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x27c2b4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c2b8: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C2B8u;
    SET_GPR_U32(ctx, 31, 0x27C2C0u);
    ctx->pc = 0x27C2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C2B8u;
    // 0x27c2bc: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C2B8u, 0x27C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C2C0u;
label_27c2c0:
    // 0x27c2c0: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c2c4: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c2c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c2cc: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c2d0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c2d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c2d4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c2d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C2D8u;
    {
        const bool branch_taken_0x27c2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2D8u;
        // 0x27c2dc: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2d8) {
            ctx->pc = 0x27C2F0u;
            goto label_27c2f0;
        }
    }
    ctx->pc = 0x27C2E0u;
    // 0x27c2e0: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c2e4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x27C2E4u;
    {
        const bool branch_taken_0x27c2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2E4u;
        // 0x27c2e8: 0x9443003c  lhu         $v1, 0x3C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2e4) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C2ECu;
    // 0x27c2ec: 0x0  nop
    ctx->pc = 0x27c2ecu;
    // NOP
label_27c2f0:
    // 0x27c2f0: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c2f4: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x27C2F4u;
    {
        const bool branch_taken_0x27c2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2F4u;
        // 0x27c2f8: 0x9443003e  lhu         $v1, 0x3E($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2f4) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C2FCu;
    // 0x27c2fc: 0x0  nop
    ctx->pc = 0x27c2fcu;
    // NOP
label_27c300:
    // 0x27c300: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c304: 0x240300dd  addiu       $v1, $zero, 0xDD
    ctx->pc = 0x27c304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x27c308: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x27c308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x27c30c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x27c30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x27c310: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C310u;
    SET_GPR_U32(ctx, 31, 0x27C318u);
    ctx->pc = 0x27C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C310u;
    // 0x27c314: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C310u, 0x27C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C318u;
label_27c318:
    // 0x27c318: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c318u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c31c: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c320: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c324: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c328: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c328u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c32c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c330: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C330u;
    {
        const bool branch_taken_0x27c330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C330u;
        // 0x27c334: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c330) {
            ctx->pc = 0x27C348u;
            goto label_27c348;
        }
    }
    ctx->pc = 0x27C338u;
    // 0x27c338: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c33c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x27C33Cu;
    {
        const bool branch_taken_0x27c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C33Cu;
        // 0x27c340: 0x94430044  lhu         $v1, 0x44($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c33c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C344u;
    // 0x27c344: 0x0  nop
    ctx->pc = 0x27c344u;
    // NOP
label_27c348:
    // 0x27c348: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c34c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x27C34Cu;
    {
        const bool branch_taken_0x27c34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C34Cu;
        // 0x27c350: 0x94430046  lhu         $v1, 0x46($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c34c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C354u;
    // 0x27c354: 0x0  nop
    ctx->pc = 0x27c354u;
    // NOP
label_27c358:
    // 0x27c358: 0x240300df  addiu       $v1, $zero, 0xDF
    ctx->pc = 0x27c358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x27c35c: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x27c35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x27c360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c364: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c368: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C368u;
    SET_GPR_U32(ctx, 31, 0x27C370u);
    ctx->pc = 0x27C36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C368u;
    // 0x27c36c: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C368u, 0x27C370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C370u;
label_27c370:
    // 0x27c370: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c374: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c378: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c37c: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c37cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c380: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c384: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c388: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x27C388u;
    {
        const bool branch_taken_0x27c388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C388u;
        // 0x27c38c: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c388) {
            ctx->pc = 0x27C528u;
            goto label_27c528;
        }
    }
    ctx->pc = 0x27C390u;
    // 0x27c390: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c394: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x27C394u;
    {
        const bool branch_taken_0x27c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C394u;
        // 0x27c398: 0x94430040  lhu         $v1, 0x40($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c394) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C39Cu;
    // 0x27c39c: 0x0  nop
    ctx->pc = 0x27c39cu;
    // NOP
label_27c3a0:
    // 0x27c3a0: 0x86060088  lh          $a2, 0x88($s0)
    ctx->pc = 0x27c3a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x27c3a4: 0x10c20022  beq         $a2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x27C3A4u;
    {
        const bool branch_taken_0x27c3a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3A4u;
        // 0x27c3a8: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3a4) {
            ctx->pc = 0x27C430u;
            goto label_27c430;
        }
    }
    ctx->pc = 0x27C3ACu;
    // 0x27c3ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C3ACu;
    {
        const bool branch_taken_0x27c3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3ACu;
        // 0x27c3b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3ac) {
            ctx->pc = 0x27C3C8u;
            goto label_27c3c8;
        }
    }
    ctx->pc = 0x27C3B4u;
    // 0x27c3b4: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x27C3B4u;
    {
        const bool branch_taken_0x27c3b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c3b4) {
            ctx->pc = 0x27C3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C3B4u;
            // 0x27c3b8: 0x920201b2  lbu         $v0, 0x1B2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C3E0u;
            goto label_27c3e0;
        }
    }
    ctx->pc = 0x27C3BCu;
    // 0x27c3bc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x27C3BCu;
    {
        const bool branch_taken_0x27c3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3BCu;
        // 0x27c3c0: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3bc) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C3C4u;
    // 0x27c3c4: 0x0  nop
    ctx->pc = 0x27c3c4u;
    // NOP
label_27c3c8:
    // 0x27c3c8: 0x10c2002f  beq         $a2, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x27C3C8u;
    {
        const bool branch_taken_0x27c3c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3C8u;
        // 0x27c3cc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3c8) {
            ctx->pc = 0x27C488u;
            goto label_27c488;
        }
    }
    ctx->pc = 0x27C3D0u;
    // 0x27c3d0: 0x50c20043  beql        $a2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x27C3D0u;
    {
        const bool branch_taken_0x27c3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x27c3d0) {
            ctx->pc = 0x27C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C3D0u;
            // 0x27c3d4: 0x920201b2  lbu         $v0, 0x1B2($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C4E0u;
            goto label_27c4e0;
        }
    }
    ctx->pc = 0x27C3D8u;
    // 0x27c3d8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x27C3D8u;
    {
        const bool branch_taken_0x27c3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C3D8u;
        // 0x27c3dc: 0x96020304  lhu         $v0, 0x304($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c3d8) {
            ctx->pc = 0x27C538u;
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C3E0u;
label_27c3e0:
    // 0x27c3e0: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x27c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x27c3e4: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x27c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x27c3e8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c3ec: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C3ECu;
    SET_GPR_U32(ctx, 31, 0x27C3F4u);
    ctx->pc = 0x27C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C3ECu;
    // 0x27c3f0: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C3ECu, 0x27C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C3F4u;
label_27c3f4:
    // 0x27c3f4: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c3f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c3f8: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c3fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c400: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c400u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c404: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c408: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c40c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C40Cu;
    {
        const bool branch_taken_0x27c40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C40Cu;
        // 0x27c410: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c40c) {
            ctx->pc = 0x27C420u;
            goto label_27c420;
        }
    }
    ctx->pc = 0x27C414u;
    // 0x27c414: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c418: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x27C418u;
    {
        const bool branch_taken_0x27c418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C418u;
        // 0x27c41c: 0x94430034  lhu         $v1, 0x34($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c418) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C420u;
label_27c420:
    // 0x27c420: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c424: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x27C424u;
    {
        const bool branch_taken_0x27c424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C424u;
        // 0x27c428: 0x94430036  lhu         $v1, 0x36($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c424) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C42Cu;
    // 0x27c42c: 0x0  nop
    ctx->pc = 0x27c42cu;
    // NOP
label_27c430:
    // 0x27c430: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c434: 0x240300de  addiu       $v1, $zero, 0xDE
    ctx->pc = 0x27c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x27c438: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x27c438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x27c43c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c440: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C440u;
    SET_GPR_U32(ctx, 31, 0x27C448u);
    ctx->pc = 0x27C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C440u;
    // 0x27c444: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C440u, 0x27C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C448u;
label_27c448:
    // 0x27c448: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c44c: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c450: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c454: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c454u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c458: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c45c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c460: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C460u;
    {
        const bool branch_taken_0x27c460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C460u;
        // 0x27c464: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c460) {
            ctx->pc = 0x27C478u;
            goto label_27c478;
        }
    }
    ctx->pc = 0x27C468u;
    // 0x27c468: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c46c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x27C46Cu;
    {
        const bool branch_taken_0x27c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C46Cu;
        // 0x27c470: 0x9443003c  lhu         $v1, 0x3C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c46c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C474u;
    // 0x27c474: 0x0  nop
    ctx->pc = 0x27c474u;
    // NOP
label_27c478:
    // 0x27c478: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c47c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x27C47Cu;
    {
        const bool branch_taken_0x27c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C47Cu;
        // 0x27c480: 0x9443003e  lhu         $v1, 0x3E($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c47c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C484u;
    // 0x27c484: 0x0  nop
    ctx->pc = 0x27c484u;
    // NOP
label_27c488:
    // 0x27c488: 0x920201b2  lbu         $v0, 0x1B2($s0)
    ctx->pc = 0x27c488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c48c: 0x240300dd  addiu       $v1, $zero, 0xDD
    ctx->pc = 0x27c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    // 0x27c490: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x27c490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x27c494: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x27c494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x27c498: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C498u;
    SET_GPR_U32(ctx, 31, 0x27C4A0u);
    ctx->pc = 0x27C49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C498u;
    // 0x27c49c: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C498u, 0x27C4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4A0u;
label_27c4a0:
    // 0x27c4a0: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c4a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c4a4: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c4a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c4ac: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c4acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c4b0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c4b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c4b4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c4b8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C4B8u;
    {
        const bool branch_taken_0x27c4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4B8u;
        // 0x27c4bc: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4b8) {
            ctx->pc = 0x27C4D0u;
            goto label_27c4d0;
        }
    }
    ctx->pc = 0x27C4C0u;
    // 0x27c4c0: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c4c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27C4C4u;
    {
        const bool branch_taken_0x27c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4C4u;
        // 0x27c4c8: 0x94430044  lhu         $v1, 0x44($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4c4) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C4CCu;
    // 0x27c4cc: 0x0  nop
    ctx->pc = 0x27c4ccu;
    // NOP
label_27c4d0:
    // 0x27c4d0: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c4d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x27C4D4u;
    {
        const bool branch_taken_0x27c4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C4D4u;
        // 0x27c4d8: 0x94430046  lhu         $v1, 0x46($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c4d4) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C4DCu;
    // 0x27c4dc: 0x0  nop
    ctx->pc = 0x27c4dcu;
    // NOP
label_27c4e0:
    // 0x27c4e0: 0x240300df  addiu       $v1, $zero, 0xDF
    ctx->pc = 0x27c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x27c4e4: 0x2405009f  addiu       $a1, $zero, 0x9F
    ctx->pc = 0x27c4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x27c4e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c4ec: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x27c4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x27c4f0: 0xc09ec2c  jal         func_27B0B0
    ctx->pc = 0x27C4F0u;
    SET_GPR_U32(ctx, 31, 0x27C4F8u);
    ctx->pc = 0x27C4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C4F0u;
    // 0x27c4f4: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B0B0u, 0x27C4F0u, 0x27C4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C4F8u;
label_27c4f8:
    // 0x27c4f8: 0x920301b2  lbu         $v1, 0x1B2($s0)
    ctx->pc = 0x27c4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 434)));
    // 0x27c4fc: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x27c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x27c500: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x27c500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x27c504: 0xa6020300  sh          $v0, 0x300($s0)
    ctx->pc = 0x27c504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 768), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c508: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27c508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27c50c: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x27c50cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x27c510: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27C510u;
    {
        const bool branch_taken_0x27c510 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C510u;
        // 0x27c514: 0xa203030d  sb          $v1, 0x30D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 781), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c510) {
            ctx->pc = 0x27C528u;
            goto label_27c528;
        }
    }
    ctx->pc = 0x27C518u;
    // 0x27c518: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
    // 0x27c51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27C51Cu;
    {
        const bool branch_taken_0x27c51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C51Cu;
        // 0x27c520: 0x94430040  lhu         $v1, 0x40($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c51c) {
            ctx->pc = 0x27C530u;
            goto label_27c530;
        }
    }
    ctx->pc = 0x27C524u;
    // 0x27c524: 0x0  nop
    ctx->pc = 0x27c524u;
    // NOP
label_27c528:
    // 0x27c528: 0x8e020314  lw          $v0, 0x314($s0)
    ctx->pc = 0x27c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 788)));
label_27c52c:
    // 0x27c52c: 0x94430042  lhu         $v1, 0x42($v0)
    ctx->pc = 0x27c52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
label_27c530:
    // 0x27c530: 0xa6030304  sh          $v1, 0x304($s0)
    ctx->pc = 0x27c530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 772), (uint16_t)GPR_U32(ctx, 3));
label_27c534:
    // 0x27c534: 0x96020304  lhu         $v0, 0x304($s0)
    ctx->pc = 0x27c534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
label_27c538:
    // 0x27c538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c53c: 0x96030096  lhu         $v1, 0x96($s0)
    ctx->pc = 0x27c53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x27c540: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x27c540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
    // 0x27c544: 0x96050304  lhu         $a1, 0x304($s0)
    ctx->pc = 0x27c544u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27c548: 0xa60302fe  sh          $v1, 0x2FE($s0)
    ctx->pc = 0x27c548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 766), (uint16_t)GPR_U32(ctx, 3));
    // 0x27c54c: 0xc09905e  jal         func_264178
    ctx->pc = 0x27C54Cu;
    SET_GPR_U32(ctx, 31, 0x27C554u);
    ctx->pc = 0x27C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C54Cu;
    // 0x27c550: 0xa6020306  sh          $v0, 0x306($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264178u, 0x27C54Cu, 0x27C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C554u;
label_27c554:
    // 0x27c554: 0xae020310  sw          $v0, 0x310($s0)
    ctx->pc = 0x27c554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
    // 0x27c558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27c558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27c560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c564: 0x3e00008  jr          $ra
    ctx->pc = 0x27C564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C564u;
        // 0x27c568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C56Cu;
    // 0x27c56c: 0x0  nop
    ctx->pc = 0x27c56cu;
    // NOP
    ctx->pc = 0x27c570u;
}
