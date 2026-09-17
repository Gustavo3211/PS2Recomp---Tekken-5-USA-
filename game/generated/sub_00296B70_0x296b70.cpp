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

// Function: sub_00296B70
// Address: 0x296b70 - 0x296ca8
void sub_00296B70_0x296b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296B70_0x296b70");
#endif

    switch (ctx->pc) {
        case 0x296bc0u: goto label_296bc0;
        case 0x296bd0u: goto label_296bd0;
        case 0x296bf0u: goto label_296bf0;
        case 0x296c08u: goto label_296c08;
        case 0x296c40u: goto label_296c40;
        case 0x296c64u: goto label_296c64;
        case 0x296c80u: goto label_296c80;
        default: break;
    }

    ctx->pc = 0x296b70u;

    // 0x296b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x296b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x296b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296b78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x296b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x296b88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x296b88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x296b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x296b90: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x296b90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x296b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x296b98: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x296b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296b9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x296b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x296ba0: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x296ba0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ba4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x296ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x296ba8: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x296BA8u;
    {
        const bool branch_taken_0x296ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BA8u;
        // 0x296bac: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ba8) {
            ctx->pc = 0x296C80u;
            goto label_296c80;
        }
    }
    ctx->pc = 0x296BB0u;
    // 0x296bb0: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x296BB0u;
    {
        const bool branch_taken_0x296bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x296BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296BB0u;
        // 0x296bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296bb0) {
            ctx->pc = 0x296C80u;
            goto label_296c80;
        }
    }
    ctx->pc = 0x296BB8u;
    // 0x296bb8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x296BB8u;
    SET_GPR_U32(ctx, 31, 0x296BC0u);
    ctx->pc = 0x296BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BB8u;
    // 0x296bbc: 0x2416000a  addiu       $s6, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x296BB8u, 0x296BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BC0u;
label_296bc0:
    // 0x296bc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x296bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296bc4: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x296bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x296bc8: 0xc097d0a  jal         func_25F428
    ctx->pc = 0x296BC8u;
    SET_GPR_U32(ctx, 31, 0x296BD0u);
    ctx->pc = 0x296BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BC8u;
    // 0x296bcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F428u, 0x296BC8u, 0x296BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BD0u;
label_296bd0:
    // 0x296bd0: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x296bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x296bd4: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x296bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x296bd8: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x296bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x296bdc: 0xae12012c  sw          $s2, 0x12C($s0)
    ctx->pc = 0x296bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 18));
    // 0x296be0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x296be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296be4: 0xae130134  sw          $s3, 0x134($s0)
    ctx->pc = 0x296be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 19));
    // 0x296be8: 0xc0acf90  jal         func_2B3E40
    ctx->pc = 0x296BE8u;
    SET_GPR_U32(ctx, 31, 0x296BF0u);
    ctx->pc = 0x296BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296BE8u;
    // 0x296bec: 0xae030130  sw          $v1, 0x130($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3E40u, 0x296BE8u, 0x296BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296BF0u;
label_296bf0:
    // 0x296bf0: 0xae140140  sw          $s4, 0x140($s0)
    ctx->pc = 0x296bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 20));
    // 0x296bf4: 0xae150144  sw          $s5, 0x144($s0)
    ctx->pc = 0x296bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 21));
    // 0x296bf8: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x296bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x296bfc: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x296bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x296c00: 0x8e090130  lw          $t1, 0x130($s0)
    ctx->pc = 0x296c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x296c04: 0x0  nop
    ctx->pc = 0x296c04u;
    // NOP
label_296c08:
    // 0x296c08: 0x8e05012c  lw          $a1, 0x12C($s0)
    ctx->pc = 0x296c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x296c0c: 0x8d2200c4  lw          $v0, 0xC4($t1)
    ctx->pc = 0x296c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 196)));
    // 0x296c10: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x296c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c14: 0x8e060134  lw          $a2, 0x134($s0)
    ctx->pc = 0x296c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x296c18: 0x8e070120  lw          $a3, 0x120($s0)
    ctx->pc = 0x296c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x296c1c: 0x8e0b0124  lw          $t3, 0x124($s0)
    ctx->pc = 0x296c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x296c20: 0x8e080128  lw          $t0, 0x128($s0)
    ctx->pc = 0x296c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x296c24: 0x8e0a0140  lw          $t2, 0x140($s0)
    ctx->pc = 0x296c24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x296c28: 0x14560007  bne         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x296C28u;
    {
        const bool branch_taken_0x296c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x296C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C28u;
        // 0x296c2c: 0x8e030144  lw          $v1, 0x144($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c28) {
            ctx->pc = 0x296C48u;
            goto label_296c48;
        }
    }
    ctx->pc = 0x296C30u;
    // 0x296c30: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x296c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c34: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x296c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c38: 0xc0ace0c  jal         func_2B3830
    ctx->pc = 0x296C38u;
    SET_GPR_U32(ctx, 31, 0x296C40u);
    ctx->pc = 0x296C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C38u;
    // 0x296c3c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3830u, 0x296C38u, 0x296C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C40u;
label_296c40:
    // 0x296c40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296C40u;
    {
        const bool branch_taken_0x296c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C40u;
        // 0x296c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c40) {
            ctx->pc = 0x296C64u;
            goto label_296c64;
        }
    }
    ctx->pc = 0x296C48u;
label_296c48:
    // 0x296c48: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x296c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x296c4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x296c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x296c50: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x296c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c54: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x296c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x296c58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x296c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x296c5c: 0xc0acfca  jal         func_2B3F28
    ctx->pc = 0x296C5Cu;
    SET_GPR_U32(ctx, 31, 0x296C64u);
    ctx->pc = 0x296C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C5Cu;
    // 0x296c60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3F28u, 0x296C5Cu, 0x296C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C64u;
label_296c64:
    // 0x296c64: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x296C64u;
    {
        const bool branch_taken_0x296c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c64) {
            ctx->pc = 0x296C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C64u;
            // 0x296c68: 0x8e090130  lw          $t1, 0x130($s0) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296c08;
        }
    }
    ctx->pc = 0x296C6Cu;
    // 0x296c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296c70: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x296c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x296c74: 0xae02013c  sw          $v0, 0x13C($s0)
    ctx->pc = 0x296c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 2));
    // 0x296c78: 0xc0ad6c4  jal         func_2B5B10
    ctx->pc = 0x296C78u;
    SET_GPR_U32(ctx, 31, 0x296C80u);
    ctx->pc = 0x296C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C78u;
    // 0x296c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B10u, 0x296C78u, 0x296C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C80u;
label_296c80:
    // 0x296c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296c88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x296c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296c8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x296c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x296c90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296c94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x296c94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x296c98: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x296c98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x296c9c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x296c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x296ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x296CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CA0u;
        // 0x296ca4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296CA8u;
}
