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

// Function: sub_001F7C58
// Address: 0x1f7c58 - 0x1f7ea0
void sub_001F7C58_0x1f7c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7C58_0x1f7c58");
#endif

    switch (ctx->pc) {
        case 0x1f7d1cu: goto label_1f7d1c;
        case 0x1f7d40u: goto label_1f7d40;
        case 0x1f7d48u: goto label_1f7d48;
        case 0x1f7d5cu: goto label_1f7d5c;
        case 0x1f7d6cu: goto label_1f7d6c;
        case 0x1f7e10u: goto label_1f7e10;
        case 0x1f7e18u: goto label_1f7e18;
        case 0x1f7e30u: goto label_1f7e30;
        case 0x1f7e50u: goto label_1f7e50;
        case 0x1f7e64u: goto label_1f7e64;
        default: break;
    }

    ctx->pc = 0x1f7c58u;

    // 0x1f7c58: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f7c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7c60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f7c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f7c64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f7c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c68: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1f7c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1f7c6c: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x1f7c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f7c70: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f7c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f7c74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f7c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7c78: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1f7c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1f7c7c: 0x26550750  addiu       $s5, $s2, 0x750
    ctx->pc = 0x1f7c7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x1f7c80: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1f7c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1f7c84: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1f7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1f7c88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f7c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f7c8c: 0xe7b80078  swc1        $f24, 0x78($sp)
    ctx->pc = 0x1f7c8cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f7c90: 0xe7b70070  swc1        $f23, 0x70($sp)
    ctx->pc = 0x1f7c90u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f7c94: 0xe7b60068  swc1        $f22, 0x68($sp)
    ctx->pc = 0x1f7c94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f7c98: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x1f7c98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f7c9c: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x1f7c9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f7ca0: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x1f7ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f7ca4: 0x10c3000c  beq         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7CA4u;
    {
        const bool branch_taken_0x1f7ca4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F7CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CA4u;
        // 0x1f7ca8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ca4) {
            ctx->pc = 0x1F7CD8u;
            goto label_1f7cd8;
        }
    }
    ctx->pc = 0x1F7CACu;
    // 0x1f7cac: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1f7cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7cb0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F7CB0u;
    {
        const bool branch_taken_0x1f7cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CB0u;
        // 0x1f7cb4: 0x2e620002  sltiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cb0) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7CB8u;
    // 0x1f7cb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7cbc: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7CBCu;
    {
        const bool branch_taken_0x1f7cbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CBCu;
        // 0x1f7cc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cbc) {
            ctx->pc = 0x1F7CE0u;
            goto label_1f7ce0;
        }
    }
    ctx->pc = 0x1F7CC4u;
    // 0x1f7cc4: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7CC4u;
    {
        const bool branch_taken_0x1f7cc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CC4u;
        // 0x1f7cc8: 0x2e620002  sltiu       $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cc4) {
            ctx->pc = 0x1F7CE8u;
            goto label_1f7ce8;
        }
    }
    ctx->pc = 0x1F7CCCu;
    // 0x1f7ccc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7CCCu;
    {
        const bool branch_taken_0x1f7ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7ccc) {
            ctx->pc = 0x1F7CF0u;
            goto label_1f7cf0;
        }
    }
    ctx->pc = 0x1F7CD4u;
    // 0x1f7cd4: 0x0  nop
    ctx->pc = 0x1f7cd4u;
    // NOP
label_1f7cd8:
    // 0x1f7cd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7CD8u;
    {
        const bool branch_taken_0x1f7cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CD8u;
        // 0x1f7cdc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cd8) {
            ctx->pc = 0x1F7CECu;
            goto label_1f7cec;
        }
    }
    ctx->pc = 0x1F7CE0u;
label_1f7ce0:
    // 0x1f7ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7CE0u;
    {
        const bool branch_taken_0x1f7ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CE0u;
        // 0x1f7ce4: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ce0) {
            ctx->pc = 0x1F7CECu;
            goto label_1f7cec;
        }
    }
    ctx->pc = 0x1F7CE8u;
label_1f7ce8:
    // 0x1f7ce8: 0x24130006  addiu       $s3, $zero, 0x6
    ctx->pc = 0x1f7ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f7cec:
    // 0x1f7cec: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x1f7cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f7cf0:
    // 0x1f7cf0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F7CF0u;
    {
        const bool branch_taken_0x1f7cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CF0u;
        // 0x1f7cf4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf0) {
            ctx->pc = 0x1F7E00u;
            goto label_1f7e00;
        }
    }
    ctx->pc = 0x1F7CF8u;
    // 0x1f7cf8: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1f7cf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f7cfc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7CFCu;
    {
        const bool branch_taken_0x1f7cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7CFCu;
        // 0x1f7d00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cfc) {
            ctx->pc = 0x1F7D14u;
            goto label_1f7d14;
        }
    }
    ctx->pc = 0x1F7D04u;
    // 0x1f7d04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f7d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1f7d08: 0x1662003e  bne         $s3, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1F7D08u;
    {
        const bool branch_taken_0x1f7d08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F7D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D08u;
        // 0x1f7d0c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d08) {
            ctx->pc = 0x1F7E04u;
            goto label_1f7e04;
        }
    }
    ctx->pc = 0x1F7D10u;
    // 0x1f7d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f7d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d14:
    // 0x1f7d14: 0xc091726  jal         func_245C98
    ctx->pc = 0x1F7D14u;
    SET_GPR_U32(ctx, 31, 0x1F7D1Cu);
    ctx->pc = 0x1F7D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D14u;
    // 0x1f7d18: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245C98u, 0x1F7D14u, 0x1F7D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D1Cu;
label_1f7d1c:
    // 0x1f7d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d20: 0x5a000037  blezl       $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F7D20u;
    {
        const bool branch_taken_0x1f7d20 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1f7d20) {
            ctx->pc = 0x1F7D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7D20u;
            // 0x1f7d24: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E00u;
            goto label_1f7e00;
        }
    }
    ctx->pc = 0x1F7D28u;
    // 0x1f7d28: 0xc7958180  lwc1        $f21, -0x7E80($gp)
    ctx->pc = 0x1f7d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7d2c: 0xc7948184  lwc1        $f20, -0x7E7C($gp)
    ctx->pc = 0x1f7d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7d30: 0xc7968188  lwc1        $f22, -0x7E78($gp)
    ctx->pc = 0x1f7d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f7d34: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1f7d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f7d38: 0xc798818c  lwc1        $f24, -0x7E74($gp)
    ctx->pc = 0x1f7d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f7d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d40:
    // 0x1f7d40: 0xc091824  jal         func_246090
    ctx->pc = 0x1F7D40u;
    SET_GPR_U32(ctx, 31, 0x1F7D48u);
    ctx->pc = 0x1F7D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D40u;
    // 0x1f7d44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246090u, 0x1F7D40u, 0x1F7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D48u;
label_1f7d48:
    // 0x1f7d48: 0x54540029  bnel        $v0, $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F7D48u;
    {
        const bool branch_taken_0x1f7d48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1f7d48) {
            ctx->pc = 0x1F7D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7D48u;
            // 0x1f7d4c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7DF0u;
            goto label_1f7df0;
        }
    }
    ctx->pc = 0x1F7D50u;
    // 0x1f7d50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f7d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d54: 0xc09175c  jal         func_245D70
    ctx->pc = 0x1F7D54u;
    SET_GPR_U32(ctx, 31, 0x1F7D5Cu);
    ctx->pc = 0x1F7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D54u;
    // 0x1f7d58: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245D70u, 0x1F7D54u, 0x1F7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D5Cu;
label_1f7d5c:
    // 0x1f7d5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d64: 0xc0917c0  jal         func_245F00
    ctx->pc = 0x1F7D64u;
    SET_GPR_U32(ctx, 31, 0x1F7D6Cu);
    ctx->pc = 0x1F7D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D64u;
    // 0x1f7d68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245F00u, 0x1F7D64u, 0x1F7D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7D6Cu;
label_1f7d6c:
    // 0x1f7d6c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1f7d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7d70: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f7d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7d74: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1f7d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1f7d78: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x1f7d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x1f7d7c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1f7d7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7d80: 0xe6400750  swc1        $f0, 0x750($s2)
    ctx->pc = 0x1f7d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1872), bits); }
    // 0x1f7d84: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x1f7d84u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x1f7d88: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1f7d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7d8c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1f7d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1f7d90: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x1f7d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x1f7d94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7D94u;
    {
        const bool branch_taken_0x1f7d94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D94u;
        // 0x1f7d98: 0xe6400758  swc1        $f0, 0x758($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d94) {
            ctx->pc = 0x1F7DA8u;
            goto label_1f7da8;
        }
    }
    ctx->pc = 0x1F7D9Cu;
    // 0x1f7d9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7D9Cu;
    {
        const bool branch_taken_0x1f7d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D9Cu;
        // 0x1f7da0: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d9c) {
            ctx->pc = 0x1F7DB4u;
            goto label_1f7db4;
        }
    }
    ctx->pc = 0x1F7DA4u;
    // 0x1f7da4: 0x0  nop
    ctx->pc = 0x1f7da4u;
    // NOP
label_1f7da8:
    // 0x1f7da8: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x1f7da8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7dac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7DACu;
    {
        const bool branch_taken_0x1f7dac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7dac) {
            ctx->pc = 0x1F7DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7DACu;
            // 0x1f7db0: 0x46140880  add.s       $f2, $f1, $f20 (Delay Slot)
            ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7DB4u;
            goto label_1f7db4;
        }
    }
    ctx->pc = 0x1F7DB4u;
label_1f7db4:
    // 0x1f7db4: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1f7db4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
    // 0x1f7db8: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x1f7db8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7dbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7DBCu;
    {
        const bool branch_taken_0x1f7dbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7dbc) {
            ctx->pc = 0x1F7DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7DBCu;
            // 0x1f7dc0: 0x46140840  add.s       $f1, $f1, $f20 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7DC4u;
            goto label_1f7dc4;
        }
    }
    ctx->pc = 0x1F7DC4u;
label_1f7dc4:
    // 0x1f7dc4: 0x46180802  mul.s       $f0, $f1, $f24
    ctx->pc = 0x1f7dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x1f7dc8: 0x0  nop
    ctx->pc = 0x1f7dc8u;
    // NOP
    // 0x1f7dcc: 0x0  nop
    ctx->pc = 0x1f7dccu;
    // NOP
    // 0x1f7dd0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1f7dd0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1f7dd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7dd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f7dd8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f7dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7ddc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f7ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f7de0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1f7de0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1f7de4: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x1f7de4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f7de8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7DE8u;
    {
        const bool branch_taken_0x1f7de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DE8u;
        // 0x1f7dec: 0xa642007a  sh          $v0, 0x7A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7de8) {
            ctx->pc = 0x1F7DFCu;
            goto label_1f7dfc;
        }
    }
    ctx->pc = 0x1F7DF0u;
label_1f7df0:
    // 0x1f7df0: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1f7df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1f7df4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1F7DF4u;
    {
        const bool branch_taken_0x1f7df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF4u;
        // 0x1f7df8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df4) {
            ctx->pc = 0x1F7D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7DFCu;
label_1f7dfc:
    // 0x1f7dfc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f7e00:
    // 0x1f7e00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f7e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f7e04:
    // 0x1f7e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e08: 0xc084784  jal         func_211E10
    ctx->pc = 0x1F7E08u;
    SET_GPR_U32(ctx, 31, 0x1F7E10u);
    ctx->pc = 0x1F7E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E08u;
    // 0x1f7e0c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1F7E08u, 0x1F7E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E10u;
label_1f7e10:
    // 0x1f7e10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f7e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e14: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1f7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1f7e18:
    // 0x1f7e18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f7e18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7e1c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1f7e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1f7e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f7e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e24: 0x248405d0  addiu       $a0, $a0, 0x5D0
    ctx->pc = 0x1f7e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1488));
    // 0x1f7e28: 0xc084774  jal         func_211DD0
    ctx->pc = 0x1F7E28u;
    SET_GPR_U32(ctx, 31, 0x1F7E30u);
    ctx->pc = 0x1F7E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E28u;
    // 0x1f7e2c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x1F7E28u, 0x1F7E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E30u;
label_1f7e30:
    // 0x1f7e30: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1f7e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1f7e34: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F7E34u;
    {
        const bool branch_taken_0x1f7e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E34u;
        // 0x1f7e38: 0x112100  sll         $a0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e34) {
            ctx->pc = 0x1F7E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7e18;
        }
    }
    ctx->pc = 0x1F7E3Cu;
    // 0x1f7e3c: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x1f7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x1f7e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f7e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e48: 0xc0af888  jal         func_2BE220
    ctx->pc = 0x1F7E48u;
    SET_GPR_U32(ctx, 31, 0x1F7E50u);
    ctx->pc = 0x1F7E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E48u;
    // 0x1f7e4c: 0x8c46001c  lw          $a2, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE220u, 0x1F7E48u, 0x1F7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E50u;
label_1f7e50:
    // 0x1f7e50: 0x8e420894  lw          $v0, 0x894($s2)
    ctx->pc = 0x1f7e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2196)));
    // 0x1f7e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f7e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f7e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7e5c: 0xc0af888  jal         func_2BE220
    ctx->pc = 0x1F7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1F7E64u);
    ctx->pc = 0x1F7E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E5Cu;
    // 0x1f7e60: 0x8c460020  lw          $a2, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE220u, 0x1F7E5Cu, 0x1F7E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E64u;
label_1f7e64:
    // 0x1f7e64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1f7e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e68: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1f7e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7e6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f7e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7e70: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1f7e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f7e74: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f7e74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7e78: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1f7e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f7e7c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f7e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7e80: 0xc7b80078  lwc1        $f24, 0x78($sp)
    ctx->pc = 0x1f7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f7e84: 0xc7b70070  lwc1        $f23, 0x70($sp)
    ctx->pc = 0x1f7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f7e88: 0xc7b60068  lwc1        $f22, 0x68($sp)
    ctx->pc = 0x1f7e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f7e8c: 0xc7b50060  lwc1        $f21, 0x60($sp)
    ctx->pc = 0x1f7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7e90: 0xc7b40058  lwc1        $f20, 0x58($sp)
    ctx->pc = 0x1f7e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E94u;
        // 0x1f7e98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7E9Cu;
    // 0x1f7e9c: 0x0  nop
    ctx->pc = 0x1f7e9cu;
    // NOP
    ctx->pc = 0x1f7ea0u;
}
