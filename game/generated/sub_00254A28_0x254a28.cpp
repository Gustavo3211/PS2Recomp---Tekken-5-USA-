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

// Function: sub_00254A28
// Address: 0x254a28 - 0x254c18
void sub_00254A28_0x254a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254A28_0x254a28");
#endif

    switch (ctx->pc) {
        case 0x254a74u: goto label_254a74;
        case 0x254ad8u: goto label_254ad8;
        case 0x254af8u: goto label_254af8;
        case 0x254b74u: goto label_254b74;
        case 0x254b9cu: goto label_254b9c;
        case 0x254bd0u: goto label_254bd0;
        case 0x254bf0u: goto label_254bf0;
        default: break;
    }

    ctx->pc = 0x254a28u;

    // 0x254a28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x254a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x254a2c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x254a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x254a30: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x254a30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a34: 0x2e62001e  sltiu       $v0, $s3, 0x1E
    ctx->pc = 0x254a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x254a38: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x254a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x254a3c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x254a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x254a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x254a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a44: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x254a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x254a48: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x254a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a4c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x254a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x254a50: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x254a50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a54: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x254a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x254a58: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x254a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a5c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x254A5Cu;
    {
        const bool branch_taken_0x254a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A5Cu;
        // 0x254a60: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a5c) {
            ctx->pc = 0x254BF0u;
            goto label_254bf0;
        }
    }
    ctx->pc = 0x254A64u;
    // 0x254a64: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x254A64u;
    {
        const bool branch_taken_0x254a64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x254a64) {
            ctx->pc = 0x254A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254A64u;
            // 0x254a68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254A88u;
            goto label_254a88;
        }
    }
    ctx->pc = 0x254A6Cu;
    // 0x254a6c: 0xc09535c  jal         func_254D70
    ctx->pc = 0x254A6Cu;
    SET_GPR_U32(ctx, 31, 0x254A74u);
    ctx->pc = 0x254A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254A6Cu;
    // 0x254a70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D70u, 0x254A6Cu, 0x254A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254A74u;
label_254a74:
    // 0x254a74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x254a74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254a78: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x254A78u;
    {
        const bool branch_taken_0x254a78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x254A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A78u;
        // 0x254a7c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a78) {
            ctx->pc = 0x254A8Cu;
            goto label_254a8c;
        }
    }
    ctx->pc = 0x254A80u;
    // 0x254a80: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x254A80u;
    {
        const bool branch_taken_0x254a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A80u;
        // 0x254a84: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a80) {
            ctx->pc = 0x254BF4u;
            goto label_254bf4;
        }
    }
    ctx->pc = 0x254A88u;
label_254a88:
    // 0x254a88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_254a8c:
    // 0x254a8c: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x254a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x254a90: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x254a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x254a94: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x254a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x254a98: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254A98u;
    {
        const bool branch_taken_0x254a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x254A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A98u;
        // 0x254a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a98) {
            ctx->pc = 0x254AACu;
            goto label_254aac;
        }
    }
    ctx->pc = 0x254AA0u;
    // 0x254aa0: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x254aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x254aa4: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x254AA4u;
    {
        const bool branch_taken_0x254aa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x254aa4) {
            ctx->pc = 0x254AB0u;
            goto label_254ab0;
        }
    }
    ctx->pc = 0x254AACu;
label_254aac:
    // 0x254aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x254aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254ab0:
    // 0x254ab0: 0x54a00012  bnel        $a1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x254AB0u;
    {
        const bool branch_taken_0x254ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x254ab0) {
            ctx->pc = 0x254AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254AB0u;
            // 0x254ab4: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254AFCu;
            goto label_254afc;
        }
    }
    ctx->pc = 0x254AB8u;
    // 0x254ab8: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x254AB8u;
    {
        const bool branch_taken_0x254ab8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x254ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AB8u;
        // 0x254abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ab8) {
            ctx->pc = 0x254AE0u;
            goto label_254ae0;
        }
    }
    ctx->pc = 0x254AC0u;
    // 0x254ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ac4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x254ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254ac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x254ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x254accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ad0: 0xc0984ce  jal         func_261338
    ctx->pc = 0x254AD0u;
    SET_GPR_U32(ctx, 31, 0x254AD8u);
    ctx->pc = 0x254AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AD0u;
    // 0x254ad4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261338u, 0x254AD0u, 0x254AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AD8u;
label_254ad8:
    // 0x254ad8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254AD8u;
    {
        const bool branch_taken_0x254ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254AD8u;
        // 0x254adc: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ad8) {
            ctx->pc = 0x254AFCu;
            goto label_254afc;
        }
    }
    ctx->pc = 0x254AE0u;
label_254ae0:
    // 0x254ae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ae4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x254ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254ae8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x254ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254aec: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x254aecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254af0: 0xc0984ce  jal         func_261338
    ctx->pc = 0x254AF0u;
    SET_GPR_U32(ctx, 31, 0x254AF8u);
    ctx->pc = 0x254AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AF0u;
    // 0x254af4: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261338u, 0x254AF0u, 0x254AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254AF8u;
label_254af8:
    // 0x254af8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x254af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254afc:
    // 0x254afc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x254afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254b00: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x254b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254b04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254b08: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x254b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x254b0c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x254b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x254b10: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x254b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x254b14: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x254b14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x254b18: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x254B18u;
    {
        const bool branch_taken_0x254b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B18u;
        // 0x254b1c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b18) {
            ctx->pc = 0x254B9Cu;
            goto label_254b9c;
        }
    }
    ctx->pc = 0x254B20u;
    // 0x254b20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x254b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254b24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x254b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x254b28: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x254b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x254b2c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x254b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x254b30: 0x92230034  lbu         $v1, 0x34($s1)
    ctx->pc = 0x254b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x254b34: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x254b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x254b38: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x254B38u;
    {
        const bool branch_taken_0x254b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b38) {
            ctx->pc = 0x254B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B38u;
            // 0x254b3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B58u;
            goto label_254b58;
        }
    }
    ctx->pc = 0x254B40u;
    // 0x254b40: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x254B40u;
    {
        const bool branch_taken_0x254b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b40) {
            ctx->pc = 0x254B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B40u;
            // 0x254b44: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B80u;
            goto label_254b80;
        }
    }
    ctx->pc = 0x254B48u;
    // 0x254b48: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x254B48u;
    {
        const bool branch_taken_0x254b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x254b48) {
            ctx->pc = 0x254B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B48u;
            // 0x254b4c: 0xc60d0018  lwc1        $f13, 0x18($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B68u;
            goto label_254b68;
        }
    }
    ctx->pc = 0x254B50u;
    // 0x254b50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x254B50u;
    {
        const bool branch_taken_0x254b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B50u;
        // 0x254b54: 0x92240031  lbu         $a0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b50) {
            ctx->pc = 0x254B88u;
            goto label_254b88;
        }
    }
    ctx->pc = 0x254B58u;
label_254b58:
    // 0x254b58: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254B58u;
    {
        const bool branch_taken_0x254b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x254b58) {
            ctx->pc = 0x254B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B58u;
            // 0x254b5c: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254B80u;
            goto label_254b80;
        }
    }
    ctx->pc = 0x254B60u;
    // 0x254b60: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x254B60u;
    {
        const bool branch_taken_0x254b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B60u;
        // 0x254b64: 0x92240031  lbu         $a0, 0x31($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b60) {
            ctx->pc = 0x254B88u;
            goto label_254b88;
        }
    }
    ctx->pc = 0x254B68u;
label_254b68:
    // 0x254b68: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x254b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x254b6c: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x254B6Cu;
    SET_GPR_U32(ctx, 31, 0x254B74u);
    ctx->pc = 0x254B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B6Cu;
    // 0x254b70: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x254B6Cu, 0x254B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B74u;
label_254b74:
    // 0x254b74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x254B74u;
    {
        const bool branch_taken_0x254b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B74u;
        // 0x254b78: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b74) {
            ctx->pc = 0x254B84u;
            goto label_254b84;
        }
    }
    ctx->pc = 0x254B7Cu;
    // 0x254b7c: 0x0  nop
    ctx->pc = 0x254b7cu;
    // NOP
label_254b80:
    // 0x254b80: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x254b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_254b84:
    // 0x254b84: 0x92240031  lbu         $a0, 0x31($s1)
    ctx->pc = 0x254b84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
label_254b88:
    // 0x254b88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b8c: 0x92250037  lbu         $a1, 0x37($s1)
    ctx->pc = 0x254b8cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x254b90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x254b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254b94: 0xc091bda  jal         func_246F68
    ctx->pc = 0x254B94u;
    SET_GPR_U32(ctx, 31, 0x254B9Cu);
    ctx->pc = 0x254B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B94u;
    // 0x254b98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246F68u, 0x254B94u, 0x254B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B9Cu;
label_254b9c:
    // 0x254b9c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x254B9Cu;
    {
        const bool branch_taken_0x254b9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B9Cu;
        // 0x254ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b9c) {
            ctx->pc = 0x254BC0u;
            goto label_254bc0;
        }
    }
    ctx->pc = 0x254BA4u;
    // 0x254ba4: 0x6400012  bltz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x254BA4u;
    {
        const bool branch_taken_0x254ba4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x254BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BA4u;
        // 0x254ba8: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ba4) {
            ctx->pc = 0x254BF0u;
            goto label_254bf0;
        }
    }
    ctx->pc = 0x254BACu;
    // 0x254bac: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x254BACu;
    {
        const bool branch_taken_0x254bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254bac) {
            ctx->pc = 0x254BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254BACu;
            // 0x254bb0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254BF4u;
            goto label_254bf4;
        }
    }
    ctx->pc = 0x254BB4u;
    // 0x254bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254BB4u;
    {
        const bool branch_taken_0x254bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BB4u;
        // 0x254bb8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bb4) {
            ctx->pc = 0x254BD8u;
            goto label_254bd8;
        }
    }
    ctx->pc = 0x254BBCu;
    // 0x254bbc: 0x0  nop
    ctx->pc = 0x254bbcu;
    // NOP
label_254bc0:
    // 0x254bc0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x254bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bc4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bc8: 0xc094f00  jal         func_253C00
    ctx->pc = 0x254BC8u;
    SET_GPR_U32(ctx, 31, 0x254BD0u);
    ctx->pc = 0x254BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BC8u;
    // 0x254bcc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C00u, 0x254BC8u, 0x254BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BD0u;
label_254bd0:
    // 0x254bd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254BD0u;
    {
        const bool branch_taken_0x254bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BD0u;
        // 0x254bd4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bd0) {
            ctx->pc = 0x254BF4u;
            goto label_254bf4;
        }
    }
    ctx->pc = 0x254BD8u;
label_254bd8:
    // 0x254bd8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x254bd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254bdc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x254bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254be0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x254be0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254be4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x254be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254be8: 0xc0950a4  jal         func_254290
    ctx->pc = 0x254BE8u;
    SET_GPR_U32(ctx, 31, 0x254BF0u);
    ctx->pc = 0x254BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254BE8u;
    // 0x254bec: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254290u, 0x254BE8u, 0x254BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BF0u;
label_254bf0:
    // 0x254bf0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x254bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_254bf4:
    // 0x254bf4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x254bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254bf8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x254bf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254bfc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x254bfcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254c00: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x254c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x254c04: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x254c04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x254c08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x254c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x254c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x254C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254C0Cu;
        // 0x254c10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254C14u;
    // 0x254c14: 0x0  nop
    ctx->pc = 0x254c14u;
    // NOP
    ctx->pc = 0x254c18u;
}
