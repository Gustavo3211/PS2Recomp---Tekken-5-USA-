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

// Function: sub_002C5E70
// Address: 0x2c5e70 - 0x2c64a8
void sub_002C5E70_0x2c5e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5E70_0x2c5e70");
#endif

    switch (ctx->pc) {
        case 0x2c5eb0u: goto label_2c5eb0;
        case 0x2c5ee4u: goto label_2c5ee4;
        case 0x2c5ef0u: goto label_2c5ef0;
        case 0x2c5f20u: goto label_2c5f20;
        case 0x2c5fa0u: goto label_2c5fa0;
        case 0x2c5fc0u: goto label_2c5fc0;
        case 0x2c600cu: goto label_2c600c;
        case 0x2c6020u: goto label_2c6020;
        case 0x2c6038u: goto label_2c6038;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c60c0u: goto label_2c60c0;
        case 0x2c60e0u: goto label_2c60e0;
        case 0x2c60fcu: goto label_2c60fc;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c6140u: goto label_2c6140;
        case 0x2c6168u: goto label_2c6168;
        case 0x2c617cu: goto label_2c617c;
        case 0x2c6180u: goto label_2c6180;
        case 0x2c61a0u: goto label_2c61a0;
        case 0x2c61b4u: goto label_2c61b4;
        case 0x2c61c4u: goto label_2c61c4;
        case 0x2c6210u: goto label_2c6210;
        case 0x2c6228u: goto label_2c6228;
        case 0x2c6250u: goto label_2c6250;
        case 0x2c6268u: goto label_2c6268;
        case 0x2c62b8u: goto label_2c62b8;
        case 0x2c62d0u: goto label_2c62d0;
        case 0x2c62f8u: goto label_2c62f8;
        case 0x2c6310u: goto label_2c6310;
        case 0x2c6360u: goto label_2c6360;
        case 0x2c6378u: goto label_2c6378;
        case 0x2c63a0u: goto label_2c63a0;
        case 0x2c63b8u: goto label_2c63b8;
        case 0x2c6408u: goto label_2c6408;
        case 0x2c6420u: goto label_2c6420;
        case 0x2c6448u: goto label_2c6448;
        case 0x2c6460u: goto label_2c6460;
        default: break;
    }

    ctx->pc = 0x2c5e70u;

    // 0x2c5e70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c5e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c5e74: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c5e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c5e78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e7c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2c5e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2c5e80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c5e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e84: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c5e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c5e88: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2c5e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2c5e8c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2c5e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2c5e90: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2c5e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2c5e94: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2c5e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2c5e98: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2c5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2c5e9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c5e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2c5ea0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5EA0u;
    {
        const bool branch_taken_0x2c5ea0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5EA0u;
        // 0x2c5ea4: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ea0) {
            ctx->pc = 0x2C5EB0u;
            goto label_2c5eb0;
        }
    }
    ctx->pc = 0x2C5EA8u;
    // 0x2c5ea8: 0xc096f18  jal         func_25BC60
    ctx->pc = 0x2C5EA8u;
    SET_GPR_U32(ctx, 31, 0x2C5EB0u);
    ctx->pc = 0x25BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC60u, 0x2C5EA8u, 0x2C5EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EB0u;
label_2c5eb0:
    // 0x2c5eb0: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x2c5eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5eb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c5eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5eb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c5eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c5ebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c5ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5ec0: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2c5ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2c5ec4: 0x8e220898  lw          $v0, 0x898($s1)
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x2c5ec8: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x2c5ec8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2c5ecc: 0x8c67003c  lw          $a3, 0x3C($v1)
    ctx->pc = 0x2c5eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2c5ed0: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x2c5ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c5ed4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2c5ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2c5ed8: 0x73fc2  srl         $a3, $a3, 31
    ctx->pc = 0x2c5ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2c5edc: 0xc0b1352  jal         func_2C4D48
    ctx->pc = 0x2C5EDCu;
    SET_GPR_U32(ctx, 31, 0x2C5EE4u);
    ctx->pc = 0x2C5EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5EDCu;
    // 0x2c5ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D48u, 0x2C5EDCu, 0x2C5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EE4u;
label_2c5ee4:
    // 0x2c5ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ee8: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x2C5EE8u;
    SET_GPR_U32(ctx, 31, 0x2C5EF0u);
    ctx->pc = 0x2C5EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5EE8u;
    // 0x2c5eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x2C5EE8u, 0x2C5EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EF0u;
label_2c5ef0:
    // 0x2c5ef0: 0x8e2307c8  lw          $v1, 0x7C8($s1)
    ctx->pc = 0x2c5ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2c5ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ef8: 0x54620015  bnel        $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5EF8u;
    {
        const bool branch_taken_0x2c5ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5ef8) {
            ctx->pc = 0x2C5EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5EF8u;
            // 0x2c5efc: 0xc6040000  lwc1        $f4, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F50u;
            goto label_2c5f50;
        }
    }
    ctx->pc = 0x2C5F00u;
    // 0x2c5f00: 0x8e2207fc  lw          $v0, 0x7FC($s1)
    ctx->pc = 0x2c5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2044)));
    // 0x2c5f04: 0x8e230804  lw          $v1, 0x804($s1)
    ctx->pc = 0x2c5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x2c5f08: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x2c5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x2c5f0c: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5F0Cu;
    {
        const bool branch_taken_0x2c5f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5f0c) {
            ctx->pc = 0x2C5F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5F0Cu;
            // 0x2c5f10: 0xc6040000  lwc1        $f4, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F50u;
            goto label_2c5f50;
        }
    }
    ctx->pc = 0x2C5F14u;
    // 0x2c5f14: 0x5640000e  bnel        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5F14u;
    {
        const bool branch_taken_0x2c5f14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5f14) {
            ctx->pc = 0x2C5F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5F14u;
            // 0x2c5f18: 0xc6040000  lwc1        $f4, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5F50u;
            goto label_2c5f50;
        }
    }
    ctx->pc = 0x2C5F1Cu;
    // 0x2c5f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c5f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5f20:
    // 0x2c5f20: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2c5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2c5f24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c5f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c5f28: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x2c5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2c5f2c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2c5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c5f30: 0xc44007b0  lwc1        $f0, 0x7B0($v0)
    ctx->pc = 0x2c5f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5f34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c5f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f38: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2c5f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5f3c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2c5f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c5f40: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c5f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c5f44: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2C5F44u;
    {
        const bool branch_taken_0x2c5f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5F44u;
        // 0x2c5f48: 0xe46007e0  swc1        $f0, 0x7E0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2016), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5f44) {
            ctx->pc = 0x2C5F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5f20;
        }
    }
    ctx->pc = 0x2C5F4Cu;
    // 0x2c5f4c: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x2c5f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2c5f50:
    // 0x2c5f50: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2c5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2c5f54: 0xc7949334  lwc1        $f20, -0x6CCC($gp)
    ctx->pc = 0x2c5f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c5f58: 0xe6240024  swc1        $f4, 0x24($s1)
    ctx->pc = 0x2c5f58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2c5f5c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2c5f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5f60: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x2c5f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2c5f64: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2c5f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5f68: 0xe623002c  swc1        $f3, 0x2C($s1)
    ctx->pc = 0x2c5f68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2c5f6c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2c5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5f70: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2c5f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2c5f74: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2c5f74u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x2c5f78: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2c5f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5f7c: 0xe6210034  swc1        $f1, 0x34($s1)
    ctx->pc = 0x2c5f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2c5f80: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2c5f80u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2c5f84: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2c5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5f88: 0xe6240068  swc1        $f4, 0x68($s1)
    ctx->pc = 0x2c5f88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2c5f8c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2c5f8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2c5f90: 0xe622006c  swc1        $f2, 0x6C($s1)
    ctx->pc = 0x2c5f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x2c5f94: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2c5f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2c5f98: 0xc0968b6  jal         func_25A2D8
    ctx->pc = 0x2C5F98u;
    SET_GPR_U32(ctx, 31, 0x2C5FA0u);
    ctx->pc = 0x2C5F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5F98u;
    // 0x2c5f9c: 0xe6230070  swc1        $f3, 0x70($s1) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2D8u, 0x2C5F98u, 0x2C5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FA0u;
label_2c5fa0:
    // 0x2c5fa0: 0x8622007a  lh          $v0, 0x7A($s1)
    ctx->pc = 0x2c5fa0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
    // 0x2c5fa4: 0xc7819338  lwc1        $f1, -0x6CC8($gp)
    ctx->pc = 0x2c5fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5fa8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2c5fa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2c5fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c5facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5fb0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c5fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2c5fb4: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x2c5fb4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x2c5fb8: 0xc04753a  jal         func_11D4E8
    ctx->pc = 0x2C5FB8u;
    SET_GPR_U32(ctx, 31, 0x2C5FC0u);
    ctx->pc = 0x2C5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5FB8u;
    // 0x2c5fbc: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4E8u, 0x2C5FB8u, 0x2C5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FC0u;
label_2c5fc0:
    // 0x2c5fc0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2c5fc0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x2c5fc4: 0xc780933c  lwc1        $f0, -0x6CC4($gp)
    ctx->pc = 0x2c5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5fc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c5fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5fcc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5FCCu;
    {
        const bool branch_taken_0x2c5fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5fcc) {
            ctx->pc = 0x2C5FE0u;
            goto label_2c5fe0;
        }
    }
    ctx->pc = 0x2C5FD4u;
    // 0x2c5fd4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5FD4u;
    {
        const bool branch_taken_0x2c5fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FD4u;
        // 0x2c5fd8: 0x46140881  sub.s       $f2, $f1, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fd4) {
            ctx->pc = 0x2C5FF4u;
            goto label_2c5ff4;
        }
    }
    ctx->pc = 0x2C5FDCu;
    // 0x2c5fdc: 0x0  nop
    ctx->pc = 0x2c5fdcu;
    // NOP
label_2c5fe0:
    // 0x2c5fe0: 0xc7809340  lwc1        $f0, -0x6CC0($gp)
    ctx->pc = 0x2c5fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5fe4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c5fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5fe8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5FE8u;
    {
        const bool branch_taken_0x2c5fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FE8u;
        // 0x2c5fec: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fe8) {
            ctx->pc = 0x2C5FF4u;
            goto label_2c5ff4;
        }
    }
    ctx->pc = 0x2C5FF0u;
    // 0x2c5ff0: 0x46140880  add.s       $f2, $f1, $f20
    ctx->pc = 0x2c5ff0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2c5ff4:
    // 0x2c5ff4: 0x922201b8  lbu         $v0, 0x1B8($s1)
    ctx->pc = 0x2c5ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 440)));
    // 0x2c5ff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5FF8u;
    {
        const bool branch_taken_0x2c5ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FF8u;
        // 0x2c5ffc: 0xe6220020  swc1        $f2, 0x20($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ff8) {
            ctx->pc = 0x2C600Cu;
            goto label_2c600c;
        }
    }
    ctx->pc = 0x2C6000u;
    // 0x2c6000: 0xa22001b8  sb          $zero, 0x1B8($s1)
    ctx->pc = 0x2c6000u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 440), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6004: 0xc0b1702  jal         func_2C5C08
    ctx->pc = 0x2C6004u;
    SET_GPR_U32(ctx, 31, 0x2C600Cu);
    ctx->pc = 0x2C6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6004u;
    // 0x2c6008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C08u, 0x2C6004u, 0x2C600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C600Cu;
label_2c600c:
    // 0x2c600c: 0x922201ba  lbu         $v0, 0x1BA($s1)
    ctx->pc = 0x2c600cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 442)));
    // 0x2c6010: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6010u;
    {
        const bool branch_taken_0x2c6010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6010) {
            ctx->pc = 0x2C6014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6010u;
            // 0x2c6014: 0x8f829740  lw          $v0, -0x68C0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6028u;
            goto label_2c6028;
        }
    }
    ctx->pc = 0x2C6018u;
    // 0x2c6018: 0xc0b174c  jal         func_2C5D30
    ctx->pc = 0x2C6018u;
    SET_GPR_U32(ctx, 31, 0x2C6020u);
    ctx->pc = 0x2C601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6018u;
    // 0x2c601c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5D30u, 0x2C6018u, 0x2C6020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6020u;
label_2c6020:
    // 0x2c6020: 0xa22001ba  sb          $zero, 0x1BA($s1)
    ctx->pc = 0x2c6020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 442), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6024: 0x8f829740  lw          $v0, -0x68C0($gp)
    ctx->pc = 0x2c6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940480)));
label_2c6028:
    // 0x2c6028: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6028u;
    {
        const bool branch_taken_0x2c6028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6028) {
            ctx->pc = 0x2C6038u;
            goto label_2c6038;
        }
    }
    ctx->pc = 0x2C6030u;
    // 0x2c6030: 0xc0a04ac  jal         func_2812B0
    ctx->pc = 0x2C6030u;
    SET_GPR_U32(ctx, 31, 0x2C6038u);
    ctx->pc = 0x2C6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6030u;
    // 0x2c6034: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2812B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2812B0u, 0x2C6030u, 0x2C6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6038u;
label_2c6038:
    // 0x2c6038: 0xc0b1650  jal         func_2C5940
    ctx->pc = 0x2C6038u;
    SET_GPR_U32(ctx, 31, 0x2C6040u);
    ctx->pc = 0x2C603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6038u;
    // 0x2c603c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5940u, 0x2C6038u, 0x2C6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6040u;
label_2c6040:
    // 0x2c6040: 0x8e260898  lw          $a2, 0x898($s1)
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
    // 0x2c6044: 0x94c3006c  lhu         $v1, 0x6C($a2)
    ctx->pc = 0x2c6044u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x2c6048: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2c6048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c604c: 0x10400107  beqz        $v0, . + 4 + (0x107 << 2)
    ctx->pc = 0x2C604Cu;
    {
        const bool branch_taken_0x2c604c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C604Cu;
        // 0x2c6050: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c604c) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6054u;
    // 0x2c6054: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2c6054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6058: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2c6058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2c605c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6060: 0x8c63e260  lw          $v1, -0x1DA0($v1)
    ctx->pc = 0x2c6060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959712)));
    // 0x2c6064: 0x600008  jr          $v1
    ctx->pc = 0x2C6064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6070u: goto label_2c6070;
            case 0x2C61D0u: goto label_2c61d0;
            case 0x2C6278u: goto label_2c6278;
            case 0x2C6320u: goto label_2c6320;
            case 0x2C63C8u: goto label_2c63c8;
            case 0x2C646Cu: goto label_2c646c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6064u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C606Cu;
    // 0x2c606c: 0x0  nop
    ctx->pc = 0x2c606cu;
    // NOP
label_2c6070:
    // 0x2c6070: 0x8e2307c8  lw          $v1, 0x7C8($s1)
    ctx->pc = 0x2c6070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2c6074: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2c6074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2c6078: 0x2455e278  addiu       $s5, $v0, -0x1D88
    ctx->pc = 0x2c6078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959736));
    // 0x2c607c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2C607Cu;
    {
        const bool branch_taken_0x2c607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C607Cu;
        // 0x2c6080: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c607c) {
            ctx->pc = 0x2C610Cu;
            goto label_2c610c;
        }
    }
    ctx->pc = 0x2C6084u;
    // 0x2c6084: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x2c6084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x2c6088: 0x58400021  blezl       $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C6088u;
    {
        const bool branch_taken_0x2c6088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6088) {
            ctx->pc = 0x2C608Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6088u;
            // 0x2c608c: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6110u;
            goto label_2c6110;
        }
    }
    ctx->pc = 0x2C6090u;
    // 0x2c6090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6094: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c6094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c6098: 0x8e540044  lw          $s4, 0x44($s2)
    ctx->pc = 0x2c6098u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2c609c: 0xc62007fc  lwc1        $f0, 0x7FC($s1)
    ctx->pc = 0x2c609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c60a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c60a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c60a4: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x2c60a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2c60a8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2c60a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c60ac: 0x2416ffbc  addiu       $s6, $zero, -0x44
    ctx->pc = 0x2c60acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
    // 0x2c60b0: 0x0  nop
    ctx->pc = 0x2c60b0u;
    // NOP
    // 0x2c60b4: 0x0  nop
    ctx->pc = 0x2c60b4u;
    // NOP
    // 0x2c60b8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2c60b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2c60bc: 0x2171004  sllv        $v0, $s7, $s0
    ctx->pc = 0x2c60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 16) & 0x1F));
label_2c60c0:
    // 0x2c60c0: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2c60c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x2c60c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C60C4u;
    {
        const bool branch_taken_0x2c60c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60C4u;
        // 0x2c60c8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60c4) {
            ctx->pc = 0x2C60E8u;
            goto label_2c60e8;
        }
    }
    ctx->pc = 0x2C60CCu;
    // 0x2c60cc: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2c60ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c60d0: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x2c60d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2c60d4: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x2c60d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2c60d8: 0xc097110  jal         func_25C440
    ctx->pc = 0x2C60D8u;
    SET_GPR_U32(ctx, 31, 0x2C60E0u);
    ctx->pc = 0x2C60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C60D8u;
    // 0x2c60dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2C60D8u, 0x2C60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60E0u;
label_2c60e0:
    // 0x2c60e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C60E0u;
    {
        const bool branch_taken_0x2c60e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C60E0u;
        // 0x2c60e4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c60e0) {
            ctx->pc = 0x2C6100u;
            goto label_2c6100;
        }
    }
    ctx->pc = 0x2C60E8u;
label_2c60e8:
    // 0x2c60e8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2c60e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c60ec: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x2c60ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2c60f0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2c60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2c60f4: 0xc0847ec  jal         func_211FB0
    ctx->pc = 0x2C60F4u;
    SET_GPR_U32(ctx, 31, 0x2C60FCu);
    ctx->pc = 0x2C60F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C60F4u;
    // 0x2c60f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211FB0u, 0x2C60F4u, 0x2C60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60FCu;
label_2c60fc:
    // 0x2c60fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c60fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2c6100:
    // 0x2c6100: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2c6100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6104: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2C6104u;
    {
        const bool branch_taken_0x2c6104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6104u;
        // 0x2c6108: 0x2171004  sllv        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), GPR_U32(ctx, 16) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6104) {
            ctx->pc = 0x2C60C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c60c0;
        }
    }
    ctx->pc = 0x2C610Cu;
label_2c610c:
    // 0x2c610c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x2c610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2c6110:
    // 0x2c6110: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C6110u;
    {
        const bool branch_taken_0x2c6110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6110u;
        // 0x2c6114: 0x8e520048  lw          $s2, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6110) {
            ctx->pc = 0x2C6150u;
            goto label_2c6150;
        }
    }
    ctx->pc = 0x2C6118u;
    // 0x2c6118: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x2c6118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c611c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c611cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2c6120:
    // 0x2c6120: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2c6120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2c6124: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2c6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2c6128: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c612c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2c612cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6130: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6134: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2c6134u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c6138: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6138u;
    SET_GPR_U32(ctx, 31, 0x2C6140u);
    ctx->pc = 0x2C613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6138u;
    // 0x2c613c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6138u, 0x2C6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6140u;
label_2c6140:
    // 0x2c6140: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C6140u;
    {
        const bool branch_taken_0x2c6140 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6140u;
        // 0x2c6144: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6140) {
            ctx->pc = 0x2C6120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6120;
        }
    }
    ctx->pc = 0x2C6148u;
    // 0x2c6148: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C6148u;
    {
        const bool branch_taken_0x2c6148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6148u;
        // 0x2c614c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6148) {
            ctx->pc = 0x2C61ACu;
            goto label_2c61ac;
        }
    }
    ctx->pc = 0x2C6150u;
label_2c6150:
    // 0x2c6150: 0x96a50020  lhu         $a1, 0x20($s5)
    ctx->pc = 0x2c6150u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x2c6154: 0x26440400  addiu       $a0, $s2, 0x400
    ctx->pc = 0x2c6154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x2c6158: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x2c6158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c615c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2c615cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c6160: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6160u;
    SET_GPR_U32(ctx, 31, 0x2C6168u);
    ctx->pc = 0x2C6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6160u;
    // 0x2c6164: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6160u, 0x2C6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6168u;
label_2c6168:
    // 0x2c6168: 0x96a5001e  lhu         $a1, 0x1E($s5)
    ctx->pc = 0x2c6168u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
    // 0x2c616c: 0x264403c0  addiu       $a0, $s2, 0x3C0
    ctx->pc = 0x2c616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
    // 0x2c6170: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2c6170u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c6174: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6174u;
    SET_GPR_U32(ctx, 31, 0x2C617Cu);
    ctx->pc = 0x2C6178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6174u;
    // 0x2c6178: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6174u, 0x2C617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C617Cu;
label_2c617c:
    // 0x2c617c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2c617cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_2c6180:
    // 0x2c6180: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2c6180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2c6184: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2c6184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2c6188: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c6188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c618c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2c618cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6190: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6194: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2c6194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c6198: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6198u;
    SET_GPR_U32(ctx, 31, 0x2C61A0u);
    ctx->pc = 0x2C619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6198u;
    // 0x2c619c: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6198u, 0x2C61A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61A0u;
label_2c61a0:
    // 0x2c61a0: 0x601fff7  bgez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C61A0u;
    {
        const bool branch_taken_0x2c61a0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2C61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61A0u;
        // 0x2c61a4: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61a0) {
            ctx->pc = 0x2C6180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6180;
        }
    }
    ctx->pc = 0x2C61A8u;
    // 0x2c61a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c61a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2c61ac:
    // 0x2c61ac: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C61ACu;
    SET_GPR_U32(ctx, 31, 0x2C61B4u);
    ctx->pc = 0x2C61B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C61ACu;
    // 0x2c61b0: 0x26650080  addiu       $a1, $s3, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C61ACu, 0x2C61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61B4u;
label_2c61b4:
    // 0x2c61b4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x2c61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x2c61b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c61b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61bc: 0xc096ee8  jal         func_25BBA0
    ctx->pc = 0x2C61BCu;
    SET_GPR_U32(ctx, 31, 0x2C61C4u);
    ctx->pc = 0x2C61C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C61BCu;
    // 0x2c61c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BBA0u, 0x2C61BCu, 0x2C61C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61C4u;
label_2c61c4:
    // 0x2c61c4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2C61C4u;
    {
        const bool branch_taken_0x2c61c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61C4u;
        // 0x2c61c8: 0x8e260898  lw          $a2, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61c4) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C61CCu;
    // 0x2c61cc: 0x0  nop
    ctx->pc = 0x2c61ccu;
    // NOP
label_2c61d0:
    // 0x2c61d0: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2c61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2c61d4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C61D4u;
    {
        const bool branch_taken_0x2c61d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61D4u;
        // 0x2c61d8: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61d4) {
            ctx->pc = 0x2C6238u;
            goto label_2c6238;
        }
    }
    ctx->pc = 0x2C61DCu;
    // 0x2c61dc: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x2c61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x2c61e0: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C61E0u;
    {
        const bool branch_taken_0x2c61e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c61e0) {
            ctx->pc = 0x2C61E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C61E0u;
            // 0x2c61e4: 0x94c20070  lhu         $v0, 0x70($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C623Cu;
            goto label_2c623c;
        }
    }
    ctx->pc = 0x2C61E8u;
    // 0x2c61e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c61e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c61ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c61ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c61f0: 0x8e520044  lw          $s2, 0x44($s2)
    ctx->pc = 0x2c61f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2c61f4: 0xc62007fc  lwc1        $f0, 0x7FC($s1)
    ctx->pc = 0x2c61f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c61f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c61f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c61fc: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x2c61fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c6200: 0x0  nop
    ctx->pc = 0x2c6200u;
    // NOP
    // 0x2c6204: 0x0  nop
    ctx->pc = 0x2c6204u;
    // NOP
    // 0x2c6208: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2c6208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2c620c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2c6210:
    // 0x2c6210: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6214: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x2c6214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2c6218: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2c6218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2c621c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c621cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6220: 0xc097110  jal         func_25C440
    ctx->pc = 0x2C6220u;
    SET_GPR_U32(ctx, 31, 0x2C6228u);
    ctx->pc = 0x2C6224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6220u;
    // 0x2c6224: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2C6220u, 0x2C6228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6228u;
label_2c6228:
    // 0x2c6228: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2c6228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c622c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C622Cu;
    {
        const bool branch_taken_0x2c622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C622Cu;
        // 0x2c6230: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c622c) {
            ctx->pc = 0x2C6210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6210;
        }
    }
    ctx->pc = 0x2C6234u;
    // 0x2c6234: 0x8e260898  lw          $a2, 0x898($s1)
    ctx->pc = 0x2c6234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_2c6238:
    // 0x2c6238: 0x94c20070  lhu         $v0, 0x70($a2)
    ctx->pc = 0x2c6238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_2c623c:
    // 0x2c623c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2c623cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6240: 0x600008a  bltz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x2C6240u;
    {
        const bool branch_taken_0x2c6240 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C6244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6240u;
        // 0x2c6244: 0x8cd20048  lw          $s2, 0x48($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6240) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6248u;
    // 0x2c6248: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2c6248u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c624c: 0x0  nop
    ctx->pc = 0x2c624cu;
    // NOP
label_2c6250:
    // 0x2c6250: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2c6250u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2c6254: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2c6254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2c6258: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c6258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c625c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c625cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6260: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6260u;
    SET_GPR_U32(ctx, 31, 0x2C6268u);
    ctx->pc = 0x2C6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6260u;
    // 0x2c6264: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6260u, 0x2C6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6268u;
label_2c6268:
    // 0x2c6268: 0x603fff9  bgezl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C6268u;
    {
        const bool branch_taken_0x2c6268 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c6268) {
            ctx->pc = 0x2C626Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6268u;
            // 0x2c626c: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6250;
        }
    }
    ctx->pc = 0x2C6270u;
    // 0x2c6270: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2C6270u;
    {
        const bool branch_taken_0x2c6270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6270u;
        // 0x2c6274: 0x8e260898  lw          $a2, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6270) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6278u;
label_2c6278:
    // 0x2c6278: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2c6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2c627c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C627Cu;
    {
        const bool branch_taken_0x2c627c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C627Cu;
        // 0x2c6280: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c627c) {
            ctx->pc = 0x2C62E0u;
            goto label_2c62e0;
        }
    }
    ctx->pc = 0x2C6284u;
    // 0x2c6284: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x2c6284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x2c6288: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C6288u;
    {
        const bool branch_taken_0x2c6288 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6288) {
            ctx->pc = 0x2C628Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6288u;
            // 0x2c628c: 0x94c20070  lhu         $v0, 0x70($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C62E4u;
            goto label_2c62e4;
        }
    }
    ctx->pc = 0x2C6290u;
    // 0x2c6290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6294: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c6294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c6298: 0x8e520044  lw          $s2, 0x44($s2)
    ctx->pc = 0x2c6298u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2c629c: 0xc62007fc  lwc1        $f0, 0x7FC($s1)
    ctx->pc = 0x2c629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c62a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c62a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c62a4: 0x24100015  addiu       $s0, $zero, 0x15
    ctx->pc = 0x2c62a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2c62a8: 0x0  nop
    ctx->pc = 0x2c62a8u;
    // NOP
    // 0x2c62ac: 0x0  nop
    ctx->pc = 0x2c62acu;
    // NOP
    // 0x2c62b0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2c62b0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2c62b4: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2c62b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2c62b8:
    // 0x2c62b8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c62b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c62bc: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x2c62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2c62c0: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2c62c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2c62c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c62c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c62c8: 0xc097110  jal         func_25C440
    ctx->pc = 0x2C62C8u;
    SET_GPR_U32(ctx, 31, 0x2C62D0u);
    ctx->pc = 0x2C62CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C62C8u;
    // 0x2c62cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2C62C8u, 0x2C62D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C62D0u;
label_2c62d0:
    // 0x2c62d0: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2c62d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c62d4: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C62D4u;
    {
        const bool branch_taken_0x2c62d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C62D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62D4u;
        // 0x2c62d8: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62d4) {
            ctx->pc = 0x2C62B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c62b8;
        }
    }
    ctx->pc = 0x2C62DCu;
    // 0x2c62dc: 0x8e260898  lw          $a2, 0x898($s1)
    ctx->pc = 0x2c62dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_2c62e0:
    // 0x2c62e0: 0x94c20070  lhu         $v0, 0x70($a2)
    ctx->pc = 0x2c62e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_2c62e4:
    // 0x2c62e4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2c62e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c62e8: 0x6000060  bltz        $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2C62E8u;
    {
        const bool branch_taken_0x2c62e8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C62ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62E8u;
        // 0x2c62ec: 0x8cd20048  lw          $s2, 0x48($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c62e8) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C62F0u;
    // 0x2c62f0: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2c62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c62f4: 0x0  nop
    ctx->pc = 0x2c62f4u;
    // NOP
label_2c62f8:
    // 0x2c62f8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2c62f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2c62fc: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2c62fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2c6300: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c6300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c6304: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6308: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6308u;
    SET_GPR_U32(ctx, 31, 0x2C6310u);
    ctx->pc = 0x2C630Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6308u;
    // 0x2c630c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6308u, 0x2C6310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6310u;
label_2c6310:
    // 0x2c6310: 0x603fff9  bgezl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C6310u;
    {
        const bool branch_taken_0x2c6310 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c6310) {
            ctx->pc = 0x2C6314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6310u;
            // 0x2c6314: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C62F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c62f8;
        }
    }
    ctx->pc = 0x2C6318u;
    // 0x2c6318: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2C6318u;
    {
        const bool branch_taken_0x2c6318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6318u;
        // 0x2c631c: 0x8e260898  lw          $a2, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6318) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6320u;
label_2c6320:
    // 0x2c6320: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2c6320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2c6324: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C6324u;
    {
        const bool branch_taken_0x2c6324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6324u;
        // 0x2c6328: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6324) {
            ctx->pc = 0x2C6388u;
            goto label_2c6388;
        }
    }
    ctx->pc = 0x2C632Cu;
    // 0x2c632c: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x2c632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x2c6330: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C6330u;
    {
        const bool branch_taken_0x2c6330 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6330) {
            ctx->pc = 0x2C6334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6330u;
            // 0x2c6334: 0x94c20070  lhu         $v0, 0x70($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C638Cu;
            goto label_2c638c;
        }
    }
    ctx->pc = 0x2C6338u;
    // 0x2c6338: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c6338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c633c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c633cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c6340: 0x8e520044  lw          $s2, 0x44($s2)
    ctx->pc = 0x2c6340u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2c6344: 0xc62007fc  lwc1        $f0, 0x7FC($s1)
    ctx->pc = 0x2c6344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c6348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c634c: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x2c634cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6350: 0x0  nop
    ctx->pc = 0x2c6350u;
    // NOP
    // 0x2c6354: 0x0  nop
    ctx->pc = 0x2c6354u;
    // NOP
    // 0x2c6358: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2c6358u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2c635c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2c635cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2c6360:
    // 0x2c6360: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6364: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x2c6364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2c6368: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2c6368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2c636c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c636cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6370: 0xc097110  jal         func_25C440
    ctx->pc = 0x2C6370u;
    SET_GPR_U32(ctx, 31, 0x2C6378u);
    ctx->pc = 0x2C6374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6370u;
    // 0x2c6374: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2C6370u, 0x2C6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6378u;
label_2c6378:
    // 0x2c6378: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2c6378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c637c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C637Cu;
    {
        const bool branch_taken_0x2c637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C637Cu;
        // 0x2c6380: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c637c) {
            ctx->pc = 0x2C6360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6360;
        }
    }
    ctx->pc = 0x2C6384u;
    // 0x2c6384: 0x8e260898  lw          $a2, 0x898($s1)
    ctx->pc = 0x2c6384u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_2c6388:
    // 0x2c6388: 0x94c20070  lhu         $v0, 0x70($a2)
    ctx->pc = 0x2c6388u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_2c638c:
    // 0x2c638c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2c638cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6390: 0x6000036  bltz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C6390u;
    {
        const bool branch_taken_0x2c6390 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6390u;
        // 0x2c6394: 0x8cd20048  lw          $s2, 0x48($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6390) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6398u;
    // 0x2c6398: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2c6398u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c639c: 0x0  nop
    ctx->pc = 0x2c639cu;
    // NOP
label_2c63a0:
    // 0x2c63a0: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2c63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2c63a4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2c63a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2c63a8: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c63a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c63ac: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c63acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c63b0: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C63B0u;
    SET_GPR_U32(ctx, 31, 0x2C63B8u);
    ctx->pc = 0x2C63B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C63B0u;
    // 0x2c63b4: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C63B0u, 0x2C63B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63B8u;
label_2c63b8:
    // 0x2c63b8: 0x603fff9  bgezl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C63B8u;
    {
        const bool branch_taken_0x2c63b8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c63b8) {
            ctx->pc = 0x2C63BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C63B8u;
            // 0x2c63bc: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C63A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c63a0;
        }
    }
    ctx->pc = 0x2C63C0u;
    // 0x2c63c0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2C63C0u;
    {
        const bool branch_taken_0x2c63c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63C0u;
        // 0x2c63c4: 0x8e260898  lw          $a2, 0x898($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63c0) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C63C8u;
label_2c63c8:
    // 0x2c63c8: 0x8e2207c8  lw          $v0, 0x7C8($s1)
    ctx->pc = 0x2c63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1992)));
    // 0x2c63cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C63CCu;
    {
        const bool branch_taken_0x2c63cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C63CCu;
        // 0x2c63d0: 0x8e530040  lw          $s3, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c63cc) {
            ctx->pc = 0x2C6430u;
            goto label_2c6430;
        }
    }
    ctx->pc = 0x2C63D4u;
    // 0x2c63d4: 0x8e220804  lw          $v0, 0x804($s1)
    ctx->pc = 0x2c63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2052)));
    // 0x2c63d8: 0x58400016  blezl       $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C63D8u;
    {
        const bool branch_taken_0x2c63d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c63d8) {
            ctx->pc = 0x2C63DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C63D8u;
            // 0x2c63dc: 0x94c20070  lhu         $v0, 0x70($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C63E0u;
    // 0x2c63e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c63e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c63e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c63e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c63e8: 0x8e520044  lw          $s2, 0x44($s2)
    ctx->pc = 0x2c63e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2c63ec: 0xc62007fc  lwc1        $f0, 0x7FC($s1)
    ctx->pc = 0x2c63ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c63f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c63f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c63f4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2c63f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c63f8: 0x0  nop
    ctx->pc = 0x2c63f8u;
    // NOP
    // 0x2c63fc: 0x0  nop
    ctx->pc = 0x2c63fcu;
    // NOP
    // 0x2c6400: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2c6400u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x2c6404: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x2c6404u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2c6408:
    // 0x2c6408: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c640c: 0x2662021  addu        $a0, $s3, $a2
    ctx->pc = 0x2c640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x2c6410: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x2c6410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2c6414: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c6414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2c6418: 0xc097110  jal         func_25C440
    ctx->pc = 0x2C6418u;
    SET_GPR_U32(ctx, 31, 0x2C6420u);
    ctx->pc = 0x2C641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6418u;
    // 0x2c641c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x2C6418u, 0x2C6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6420u;
label_2c6420:
    // 0x2c6420: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2c6420u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c6424: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2C6424u;
    {
        const bool branch_taken_0x2c6424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6424u;
        // 0x2c6428: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6424) {
            ctx->pc = 0x2C6408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6408;
        }
    }
    ctx->pc = 0x2C642Cu;
    // 0x2c642c: 0x8e260898  lw          $a2, 0x898($s1)
    ctx->pc = 0x2c642cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_2c6430:
    // 0x2c6430: 0x94c20070  lhu         $v0, 0x70($a2)
    ctx->pc = 0x2c6430u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_2c6434:
    // 0x2c6434: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2c6434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c6438: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6438u;
    {
        const bool branch_taken_0x2c6438 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2C643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6438u;
        // 0x2c643c: 0x8cd20048  lw          $s2, 0x48($a2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6438) {
            ctx->pc = 0x2C646Cu;
            goto label_2c646c;
        }
    }
    ctx->pc = 0x2C6440u;
    // 0x2c6440: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2c6440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2c6444: 0x0  nop
    ctx->pc = 0x2c6444u;
    // NOP
label_2c6448:
    // 0x2c6448: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x2c6448u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x2c644c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x2c644cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2c6450: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2c6450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2c6454: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2c6454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2c6458: 0xc097084  jal         func_25C210
    ctx->pc = 0x2C6458u;
    SET_GPR_U32(ctx, 31, 0x2C6460u);
    ctx->pc = 0x2C645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6458u;
    // 0x2c645c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2C6458u, 0x2C6460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6460u;
label_2c6460:
    // 0x2c6460: 0x603fff9  bgezl       $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C6460u;
    {
        const bool branch_taken_0x2c6460 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2c6460) {
            ctx->pc = 0x2C6464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6460u;
            // 0x2c6464: 0x102900  sll         $a1, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6448;
        }
    }
    ctx->pc = 0x2C6468u;
    // 0x2c6468: 0x8e260898  lw          $a2, 0x898($s1)
    ctx->pc = 0x2c6468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2200)));
label_2c646c:
    // 0x2c646c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c646cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c6470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6474: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c6474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c6478: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2c6478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c647c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2c647cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c6480: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2c6480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c6484: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2c6484u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c6488: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2c6488u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c648c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2c648cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c6490: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c6490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c6494: 0xc7b40088  lwc1        $f20, 0x88($sp)
    ctx->pc = 0x2c6494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c6498: 0xa4c20072  sh          $v0, 0x72($a2)
    ctx->pc = 0x2c6498u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c649c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C649Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C649Cu;
        // 0x2c64a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C649Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C64A4u;
    // 0x2c64a4: 0x0  nop
    ctx->pc = 0x2c64a4u;
    // NOP
    ctx->pc = 0x2c64a8u;
}
