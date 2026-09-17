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

// Function: sub_002B0C00
// Address: 0x2b0c00 - 0x2b18a0
void sub_002B0C00_0x2b0c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0C00_0x2b0c00");
#endif

    switch (ctx->pc) {
        case 0x2b0c50u: goto label_2b0c50;
        case 0x2b0cd8u: goto label_2b0cd8;
        case 0x2b0cf0u: goto label_2b0cf0;
        case 0x2b0d08u: goto label_2b0d08;
        case 0x2b0d24u: goto label_2b0d24;
        case 0x2b0d40u: goto label_2b0d40;
        case 0x2b0d5cu: goto label_2b0d5c;
        case 0x2b0d74u: goto label_2b0d74;
        case 0x2b0d8cu: goto label_2b0d8c;
        case 0x2b0da4u: goto label_2b0da4;
        case 0x2b0e04u: goto label_2b0e04;
        case 0x2b0e1cu: goto label_2b0e1c;
        case 0x2b0e34u: goto label_2b0e34;
        case 0x2b0e4cu: goto label_2b0e4c;
        case 0x2b0e64u: goto label_2b0e64;
        case 0x2b0e7cu: goto label_2b0e7c;
        case 0x2b0f40u: goto label_2b0f40;
        case 0x2b11d8u: goto label_2b11d8;
        case 0x2b1438u: goto label_2b1438;
        case 0x2b1460u: goto label_2b1460;
        case 0x2b14d0u: goto label_2b14d0;
        case 0x2b17d4u: goto label_2b17d4;
        case 0x2b1864u: goto label_2b1864;
        case 0x2b1870u: goto label_2b1870;
        default: break;
    }

    ctx->pc = 0x2b0c00u;

    // 0x2b0c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b0c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b0c04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b0c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b0c08: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b0c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0c0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b0c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b0c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b0c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b0c14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b0c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b0c18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b0c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b0c1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2b0c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2b0c20: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b0c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b0c24: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2b0c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2b0c28: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x2b0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x2b0c2c: 0x146000ae  bnez        $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x2B0C2Cu;
    {
        const bool branch_taken_0x2b0c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C2Cu;
        // 0x2b0c30: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c2c) {
            ctx->pc = 0x2B0EE8u;
            goto label_2b0ee8;
        }
    }
    ctx->pc = 0x2B0C34u;
    // 0x2b0c34: 0x8e650084  lw          $a1, 0x84($s3)
    ctx->pc = 0x2b0c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b0c38: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x2b0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2b0c3c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2b0c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b0c40: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B0C40u;
    {
        const bool branch_taken_0x2b0c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C40u;
        // 0x2b0c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c40) {
            ctx->pc = 0x2B0EDCu;
            goto label_2b0edc;
        }
    }
    ctx->pc = 0x2B0C48u;
    // 0x2b0c48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b0c4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b0c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2b0c50:
    // 0x2b0c50: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2b0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b0c54: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2b0c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2b0c58: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2b0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b0c5c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x2b0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x2b0c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0c64: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2b0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b0c68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b0c6c: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2b0c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0c70: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2b0c70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b0c74: 0x2431824  and         $v1, $s2, $v1
    ctx->pc = 0x2b0c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
    // 0x2b0c78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0C78u;
    {
        const bool branch_taken_0x2b0c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C78u;
        // 0x2b0c7c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c78) {
            ctx->pc = 0x2B0C9Cu;
            goto label_2b0c9c;
        }
    }
    ctx->pc = 0x2B0C80u;
    // 0x2b0c80: 0xc6200048  lwc1        $f0, 0x48($s1)
    ctx->pc = 0x2b0c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0c84: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2b0c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2b0c88: 0xc621004c  lwc1        $f1, 0x4C($s1)
    ctx->pc = 0x2b0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0c8c: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x2b0c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2b0c90: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x2b0c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0c94: 0xe614004c  swc1        $f20, 0x4C($s0)
    ctx->pc = 0x2b0c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2b0c98: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2b0c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_2b0c9c:
    // 0x2b0c9c: 0x32420380  andi        $v0, $s2, 0x380
    ctx->pc = 0x2b0c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)896);
    // 0x2b0ca0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B0CA0u;
    {
        const bool branch_taken_0x2b0ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CA0u;
        // 0x2b0ca4: 0x32420010  andi        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ca0) {
            ctx->pc = 0x2B0CC4u;
            goto label_2b0cc4;
        }
    }
    ctx->pc = 0x2B0CA8u;
    // 0x2b0ca8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x2b0ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0cac: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2b0cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2b0cb0: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x2b0cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0cb4: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x2b0cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2b0cb8: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x2b0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0cbc: 0xe614005c  swc1        $f20, 0x5C($s0)
    ctx->pc = 0x2b0cbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x2b0cc0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2b0cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_2b0cc4:
    // 0x2b0cc4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0CC4u;
    {
        const bool branch_taken_0x2b0cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CC4u;
        // 0x2b0cc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cc4) {
            ctx->pc = 0x2B0CD8u;
            goto label_2b0cd8;
        }
    }
    ctx->pc = 0x2B0CCCu;
    // 0x2b0ccc: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x2b0cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0cd0: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0CD0u;
    SET_GPR_U32(ctx, 31, 0x2B0CD8u);
    ctx->pc = 0x2B0CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CD0u;
    // 0x2b0cd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0CD0u, 0x2B0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CD8u;
label_2b0cd8:
    // 0x2b0cd8: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x2b0cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x2b0cdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0CDCu;
    {
        const bool branch_taken_0x2b0cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CDCu;
        // 0x2b0ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cdc) {
            ctx->pc = 0x2B0CF0u;
            goto label_2b0cf0;
        }
    }
    ctx->pc = 0x2B0CE4u;
    // 0x2b0ce4: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2b0ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0ce8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0CE8u;
    SET_GPR_U32(ctx, 31, 0x2B0CF0u);
    ctx->pc = 0x2B0CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0CE8u;
    // 0x2b0cec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0CE8u, 0x2B0CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0CF0u;
label_2b0cf0:
    // 0x2b0cf0: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x2b0cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x2b0cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0CF4u;
    {
        const bool branch_taken_0x2b0cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0CF4u;
        // 0x2b0cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0cf4) {
            ctx->pc = 0x2B0D08u;
            goto label_2b0d08;
        }
    }
    ctx->pc = 0x2B0CFCu;
    // 0x2b0cfc: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x2b0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d00: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D00u;
    SET_GPR_U32(ctx, 31, 0x2B0D08u);
    ctx->pc = 0x2B0D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D00u;
    // 0x2b0d04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D00u, 0x2B0D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D08u;
label_2b0d08:
    // 0x2b0d08: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x2b0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x2b0d0c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0d10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D10u;
    {
        const bool branch_taken_0x2b0d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D10u;
        // 0x2b0d14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d10) {
            ctx->pc = 0x2B0D24u;
            goto label_2b0d24;
        }
    }
    ctx->pc = 0x2B0D18u;
    // 0x2b0d18: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x2b0d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d1c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D1Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D24u);
    ctx->pc = 0x2B0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D1Cu;
    // 0x2b0d20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D1Cu, 0x2B0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D24u;
label_2b0d24:
    // 0x2b0d24: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2b0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2b0d28: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0d2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D2Cu;
    {
        const bool branch_taken_0x2b0d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D2Cu;
        // 0x2b0d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d2c) {
            ctx->pc = 0x2B0D40u;
            goto label_2b0d40;
        }
    }
    ctx->pc = 0x2B0D34u;
    // 0x2b0d34: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x2b0d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d38: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D38u;
    SET_GPR_U32(ctx, 31, 0x2B0D40u);
    ctx->pc = 0x2B0D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D38u;
    // 0x2b0d3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D38u, 0x2B0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D40u;
label_2b0d40:
    // 0x2b0d40: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2b0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2b0d44: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D48u;
    {
        const bool branch_taken_0x2b0d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D48u;
        // 0x2b0d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d48) {
            ctx->pc = 0x2B0D5Cu;
            goto label_2b0d5c;
        }
    }
    ctx->pc = 0x2B0D50u;
    // 0x2b0d50: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2b0d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d54: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D54u;
    SET_GPR_U32(ctx, 31, 0x2B0D5Cu);
    ctx->pc = 0x2B0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D54u;
    // 0x2b0d58: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D54u, 0x2B0D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D5Cu;
label_2b0d5c:
    // 0x2b0d5c: 0x32420080  andi        $v0, $s2, 0x80
    ctx->pc = 0x2b0d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)128);
    // 0x2b0d60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D60u;
    {
        const bool branch_taken_0x2b0d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D60u;
        // 0x2b0d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d60) {
            ctx->pc = 0x2B0D74u;
            goto label_2b0d74;
        }
    }
    ctx->pc = 0x2B0D68u;
    // 0x2b0d68: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x2b0d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d6c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D6Cu;
    SET_GPR_U32(ctx, 31, 0x2B0D74u);
    ctx->pc = 0x2B0D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D6Cu;
    // 0x2b0d70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D6Cu, 0x2B0D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D74u;
label_2b0d74:
    // 0x2b0d74: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x2b0d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x2b0d78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D78u;
    {
        const bool branch_taken_0x2b0d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D78u;
        // 0x2b0d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d78) {
            ctx->pc = 0x2B0D8Cu;
            goto label_2b0d8c;
        }
    }
    ctx->pc = 0x2B0D80u;
    // 0x2b0d80: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2b0d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d84: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D84u;
    SET_GPR_U32(ctx, 31, 0x2B0D8Cu);
    ctx->pc = 0x2B0D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D84u;
    // 0x2b0d88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D84u, 0x2B0D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0D8Cu;
label_2b0d8c:
    // 0x2b0d8c: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x2b0d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x2b0d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0D90u;
    {
        const bool branch_taken_0x2b0d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D90u;
        // 0x2b0d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d90) {
            ctx->pc = 0x2B0DA4u;
            goto label_2b0da4;
        }
    }
    ctx->pc = 0x2B0D98u;
    // 0x2b0d98: 0xc62c002c  lwc1        $f12, 0x2C($s1)
    ctx->pc = 0x2b0d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0d9c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B0DA4u);
    ctx->pc = 0x2B0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D9Cu;
    // 0x2b0da0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0D9Cu, 0x2B0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DA4u;
label_2b0da4:
    // 0x2b0da4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2b0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2b0da8: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0dac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0DACu;
    {
        const bool branch_taken_0x2b0dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DACu;
        // 0x2b0db0: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0dac) {
            ctx->pc = 0x2B0DC8u;
            goto label_2b0dc8;
        }
    }
    ctx->pc = 0x2B0DB4u;
    // 0x2b0db4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b0db8: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2b0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b0dbc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b0dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2b0dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b0dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b0dc4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2b0dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_2b0dc8:
    // 0x2b0dc8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2b0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2b0dcc: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0dd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0DD0u;
    {
        const bool branch_taken_0x2b0dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0dd0) {
            ctx->pc = 0x2B0DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0DD0u;
            // 0x2b0dd4: 0xde020080  ld          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0DE4u;
            goto label_2b0de4;
        }
    }
    ctx->pc = 0x2B0DD8u;
    // 0x2b0dd8: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x2b0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2b0ddc: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2b0ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x2b0de0: 0xde020080  ld          $v0, 0x80($s0)
    ctx->pc = 0x2b0de0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 128)));
label_2b0de4:
    // 0x2b0de4: 0x30420016  andi        $v0, $v0, 0x16
    ctx->pc = 0x2b0de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)22);
    // 0x2b0de8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B0DE8u;
    {
        const bool branch_taken_0x2b0de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DE8u;
        // 0x2b0dec: 0x32420400  andi        $v0, $s2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0de8) {
            ctx->pc = 0x2B0E88u;
            goto label_2b0e88;
        }
    }
    ctx->pc = 0x2B0DF0u;
    // 0x2b0df0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0DF0u;
    {
        const bool branch_taken_0x2b0df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DF0u;
        // 0x2b0df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0df0) {
            ctx->pc = 0x2B0E04u;
            goto label_2b0e04;
        }
    }
    ctx->pc = 0x2B0DF8u;
    // 0x2b0df8: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x2b0df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0dfc: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0DFCu;
    SET_GPR_U32(ctx, 31, 0x2B0E04u);
    ctx->pc = 0x2B0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DFCu;
    // 0x2b0e00: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0DFCu, 0x2B0E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E04u;
label_2b0e04:
    // 0x2b0e04: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x2b0e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
    // 0x2b0e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E08u;
    {
        const bool branch_taken_0x2b0e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E08u;
        // 0x2b0e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e08) {
            ctx->pc = 0x2B0E1Cu;
            goto label_2b0e1c;
        }
    }
    ctx->pc = 0x2B0E10u;
    // 0x2b0e10: 0xc62c0034  lwc1        $f12, 0x34($s1)
    ctx->pc = 0x2b0e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0e14: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0E14u;
    SET_GPR_U32(ctx, 31, 0x2B0E1Cu);
    ctx->pc = 0x2B0E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E14u;
    // 0x2b0e18: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0E14u, 0x2B0E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E1Cu;
label_2b0e1c:
    // 0x2b0e1c: 0x32421000  andi        $v0, $s2, 0x1000
    ctx->pc = 0x2b0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
    // 0x2b0e20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E20u;
    {
        const bool branch_taken_0x2b0e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E20u;
        // 0x2b0e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e20) {
            ctx->pc = 0x2B0E34u;
            goto label_2b0e34;
        }
    }
    ctx->pc = 0x2B0E28u;
    // 0x2b0e28: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x2b0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0e2c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0E2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0E34u);
    ctx->pc = 0x2B0E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E2Cu;
    // 0x2b0e30: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0E2Cu, 0x2B0E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E34u;
label_2b0e34:
    // 0x2b0e34: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x2b0e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x2b0e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E38u;
    {
        const bool branch_taken_0x2b0e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E38u;
        // 0x2b0e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e38) {
            ctx->pc = 0x2B0E4Cu;
            goto label_2b0e4c;
        }
    }
    ctx->pc = 0x2B0E40u;
    // 0x2b0e40: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x2b0e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0e44: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0E44u;
    SET_GPR_U32(ctx, 31, 0x2B0E4Cu);
    ctx->pc = 0x2B0E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E44u;
    // 0x2b0e48: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0E44u, 0x2B0E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E4Cu;
label_2b0e4c:
    // 0x2b0e4c: 0x32424000  andi        $v0, $s2, 0x4000
    ctx->pc = 0x2b0e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x2b0e50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E50u;
    {
        const bool branch_taken_0x2b0e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E50u;
        // 0x2b0e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e50) {
            ctx->pc = 0x2B0E64u;
            goto label_2b0e64;
        }
    }
    ctx->pc = 0x2B0E58u;
    // 0x2b0e58: 0xc62c0040  lwc1        $f12, 0x40($s1)
    ctx->pc = 0x2b0e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0e5c: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0E5Cu;
    SET_GPR_U32(ctx, 31, 0x2B0E64u);
    ctx->pc = 0x2B0E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E5Cu;
    // 0x2b0e60: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0E5Cu, 0x2B0E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E64u;
label_2b0e64:
    // 0x2b0e64: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x2b0e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x2b0e68: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B0E68u;
    {
        const bool branch_taken_0x2b0e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E68u;
        // 0x2b0e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e68) {
            ctx->pc = 0x2B0EACu;
            goto label_2b0eac;
        }
    }
    ctx->pc = 0x2B0E70u;
    // 0x2b0e70: 0xc62c0044  lwc1        $f12, 0x44($s1)
    ctx->pc = 0x2b0e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b0e74: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2B0E74u;
    SET_GPR_U32(ctx, 31, 0x2B0E7Cu);
    ctx->pc = 0x2B0E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E74u;
    // 0x2b0e78: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2B0E74u, 0x2B0E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E7Cu;
label_2b0e7c:
    // 0x2b0e7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B0E7Cu;
    {
        const bool branch_taken_0x2b0e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E7Cu;
        // 0x2b0e80: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e7c) {
            ctx->pc = 0x2B0EB0u;
            goto label_2b0eb0;
        }
    }
    ctx->pc = 0x2B0E84u;
    // 0x2b0e84: 0x0  nop
    ctx->pc = 0x2b0e84u;
    // NOP
label_2b0e88:
    // 0x2b0e88: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x2b0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2b0e8c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2b0e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2b0e90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0E90u;
    {
        const bool branch_taken_0x2b0e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E90u;
        // 0x2b0e94: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e90) {
            ctx->pc = 0x2B0EACu;
            goto label_2b0eac;
        }
    }
    ctx->pc = 0x2B0E98u;
    // 0x2b0e98: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2b0e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x2b0e9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0E9Cu;
    {
        const bool branch_taken_0x2b0e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e9c) {
            ctx->pc = 0x2B0EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0E9Cu;
            // 0x2b0ea0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0EB0u;
            goto label_2b0eb0;
        }
    }
    ctx->pc = 0x2B0EA4u;
    // 0x2b0ea4: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x2b0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2b0ea8: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2b0ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_2b0eac:
    // 0x2b0eac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b0eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2b0eb0:
    // 0x2b0eb0: 0x2a820065  slti        $v0, $s4, 0x65
    ctx->pc = 0x2b0eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2b0eb4: 0x5040024d  beql        $v0, $zero, . + 4 + (0x24D << 2)
    ctx->pc = 0x2B0EB4u;
    {
        const bool branch_taken_0x2b0eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0eb4) {
            ctx->pc = 0x2B0EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0EB4u;
            // 0x2b0eb8: 0x8e630084  lw          $v1, 0x84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B17ECu;
            goto label_2b17ec;
        }
    }
    ctx->pc = 0x2B0EBCu;
    // 0x2b0ebc: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2b0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b0ec0: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2b0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2b0ec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b0ec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b0ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0ecc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x2b0eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b0ed0: 0x1460ff5f  bnez        $v1, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x2B0ED0u;
    {
        const bool branch_taken_0x2b0ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0ED0u;
        // 0x2b0ed4: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0ed0) {
            ctx->pc = 0x2B0C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0c50;
        }
    }
    ctx->pc = 0x2B0ED8u;
    // 0x2b0ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0edc:
    // 0x2b0edc: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b0edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b0ee0: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2b0ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2b0ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0ee8:
    // 0x2b0ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0eec: 0x146200a5  bne         $v1, $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2B0EECu;
    {
        const bool branch_taken_0x2b0eec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EECu;
        // 0x2b0ef0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0eec) {
            ctx->pc = 0x2B1184u;
            goto label_2b1184;
        }
    }
    ctx->pc = 0x2B0EF4u;
    // 0x2b0ef4: 0x8e640084  lw          $a0, 0x84($s3)
    ctx->pc = 0x2b0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b0ef8: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2b0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2b0efc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b0efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b0f00: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2B0F00u;
    {
        const bool branch_taken_0x2b0f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F00u;
        // 0x2b0f04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f00) {
            ctx->pc = 0x2B1174u;
            goto label_2b1174;
        }
    }
    ctx->pc = 0x2B0F08u;
    // 0x2b0f08: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b0f0c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b0f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b0f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b0f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b0f14: 0x2447cec8  addiu       $a3, $v0, -0x3138
    ctx->pc = 0x2b0f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954696));
    // 0x2b0f18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b0f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0f1c: 0x24ee0004  addiu       $t6, $a3, 0x4
    ctx->pc = 0x2b0f1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b0f20: 0x24ef0008  addiu       $t7, $a3, 0x8
    ctx->pc = 0x2b0f20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b0f24: 0x24ed000c  addiu       $t5, $a3, 0xC
    ctx->pc = 0x2b0f24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2b0f28: 0x24ec0010  addiu       $t4, $a3, 0x10
    ctx->pc = 0x2b0f28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b0f2c: 0x24eb0014  addiu       $t3, $a3, 0x14
    ctx->pc = 0x2b0f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b0f30: 0x24ea0018  addiu       $t2, $a3, 0x18
    ctx->pc = 0x2b0f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2b0f34: 0x24e9001c  addiu       $t1, $a3, 0x1C
    ctx->pc = 0x2b0f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2b0f38: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x2b0f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b0f3c: 0x0  nop
    ctx->pc = 0x2b0f3cu;
    // NOP
label_2b0f40:
    // 0x2b0f40: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2b0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b0f44: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2b0f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2b0f48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b0f4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b0f50: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b0f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b0f54: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x2b0f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b0f58: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x2b0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x2b0f5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B0F5Cu;
    {
        const bool branch_taken_0x2b0f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F5Cu;
        // 0x2b0f60: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f5c) {
            ctx->pc = 0x2B0F8Cu;
            goto label_2b0f8c;
        }
    }
    ctx->pc = 0x2B0F64u;
    // 0x2b0f64: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0f68: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b0f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b0f6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0f70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0F70u;
    {
        const bool branch_taken_0x2b0f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F70u;
        // 0x2b0f74: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f70) {
            ctx->pc = 0x2B0F88u;
            goto label_2b0f88;
        }
    }
    ctx->pc = 0x2B0F78u;
    // 0x2b0f78: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2b0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2b0f7c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0F80u;
    {
        const bool branch_taken_0x2b0f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F80u;
        // 0x2b0f84: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f80) {
            ctx->pc = 0x2B0F8Cu;
            goto label_2b0f8c;
        }
    }
    ctx->pc = 0x2B0F88u;
label_2b0f88:
    // 0x2b0f88: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2b0f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2b0f8c:
    // 0x2b0f8c: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x2b0f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x2b0f90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0F90u;
    {
        const bool branch_taken_0x2b0f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F90u;
        // 0x2b0f94: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f90) {
            ctx->pc = 0x2B0FC8u;
            goto label_2b0fc8;
        }
    }
    ctx->pc = 0x2B0F98u;
    // 0x2b0f98: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0f9c: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b0f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b0fa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0fa4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0FA4u;
    {
        const bool branch_taken_0x2b0fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FA4u;
        // 0x2b0fa8: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fa4) {
            ctx->pc = 0x2B0FC0u;
            goto label_2b0fc0;
        }
    }
    ctx->pc = 0x2B0FACu;
    // 0x2b0fac: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2b0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b0fb0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0fb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0FB4u;
    {
        const bool branch_taken_0x2b0fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FB4u;
        // 0x2b0fb8: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fb4) {
            ctx->pc = 0x2B0FC4u;
            goto label_2b0fc4;
        }
    }
    ctx->pc = 0x2B0FBCu;
    // 0x2b0fbc: 0x0  nop
    ctx->pc = 0x2b0fbcu;
    // NOP
label_2b0fc0:
    // 0x2b0fc0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x2b0fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_2b0fc4:
    // 0x2b0fc4: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2b0fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
label_2b0fc8:
    // 0x2b0fc8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B0FC8u;
    {
        const bool branch_taken_0x2b0fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FC8u;
        // 0x2b0fcc: 0x30c20100  andi        $v0, $a2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fc8) {
            ctx->pc = 0x2B1000u;
            goto label_2b1000;
        }
    }
    ctx->pc = 0x2B0FD0u;
    // 0x2b0fd0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b0fd4: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2b0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2b0fd8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b0fdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B0FDCu;
    {
        const bool branch_taken_0x2b0fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FDCu;
        // 0x2b0fe0: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fdc) {
            ctx->pc = 0x2B0FF8u;
            goto label_2b0ff8;
        }
    }
    ctx->pc = 0x2B0FE4u;
    // 0x2b0fe4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2b0fe8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b0fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b0fec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0FECu;
    {
        const bool branch_taken_0x2b0fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FECu;
        // 0x2b0ff0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fec) {
            ctx->pc = 0x2B0FFCu;
            goto label_2b0ffc;
        }
    }
    ctx->pc = 0x2B0FF4u;
    // 0x2b0ff4: 0x0  nop
    ctx->pc = 0x2b0ff4u;
    // NOP
label_2b0ff8:
    // 0x2b0ff8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b0ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_2b0ffc:
    // 0x2b0ffc: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x2b0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_2b1000:
    // 0x2b1000: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1000u;
    {
        const bool branch_taken_0x2b1000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1000u;
        // 0x2b1004: 0x30c20200  andi        $v0, $a2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1000) {
            ctx->pc = 0x2B1038u;
            goto label_2b1038;
        }
    }
    ctx->pc = 0x2B1008u;
    // 0x2b1008: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b100c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b1010: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1014: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1014u;
    {
        const bool branch_taken_0x2b1014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1014u;
        // 0x2b1018: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1014) {
            ctx->pc = 0x2B1030u;
            goto label_2b1030;
        }
    }
    ctx->pc = 0x2B101Cu;
    // 0x2b101c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2b101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2b1020: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1024u;
    {
        const bool branch_taken_0x2b1024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1024u;
        // 0x2b1028: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1024) {
            ctx->pc = 0x2B1034u;
            goto label_2b1034;
        }
    }
    ctx->pc = 0x2B102Cu;
    // 0x2b102c: 0x0  nop
    ctx->pc = 0x2b102cu;
    // NOP
label_2b1030:
    // 0x2b1030: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x2b1030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_2b1034:
    // 0x2b1034: 0x30c20200  andi        $v0, $a2, 0x200
    ctx->pc = 0x2b1034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)512);
label_2b1038:
    // 0x2b1038: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1038u;
    {
        const bool branch_taken_0x2b1038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1038u;
        // 0x2b103c: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1038) {
            ctx->pc = 0x2B1070u;
            goto label_2b1070;
        }
    }
    ctx->pc = 0x2B1040u;
    // 0x2b1040: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1044: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2b1044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b1048: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b104c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B104Cu;
    {
        const bool branch_taken_0x2b104c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B104Cu;
        // 0x2b1050: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b104c) {
            ctx->pc = 0x2B1068u;
            goto label_2b1068;
        }
    }
    ctx->pc = 0x2B1054u;
    // 0x2b1054: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2b1054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2b1058: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b105c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B105Cu;
    {
        const bool branch_taken_0x2b105c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B105Cu;
        // 0x2b1060: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b105c) {
            ctx->pc = 0x2B106Cu;
            goto label_2b106c;
        }
    }
    ctx->pc = 0x2B1064u;
    // 0x2b1064: 0x0  nop
    ctx->pc = 0x2b1064u;
    // NOP
label_2b1068:
    // 0x2b1068: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x2b1068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_2b106c:
    // 0x2b106c: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x2b106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
label_2b1070:
    // 0x2b1070: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B1070u;
    {
        const bool branch_taken_0x2b1070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1070u;
        // 0x2b1074: 0x30c20800  andi        $v0, $a2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1070) {
            ctx->pc = 0x2B10A8u;
            goto label_2b10a8;
        }
    }
    ctx->pc = 0x2B1078u;
    // 0x2b1078: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b107c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2b107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b1080: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B1084u;
    {
        const bool branch_taken_0x2b1084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1084u;
        // 0x2b1088: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1084) {
            ctx->pc = 0x2B10A0u;
            goto label_2b10a0;
        }
    }
    ctx->pc = 0x2B108Cu;
    // 0x2b108c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2b108cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2b1090: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B1094u;
    {
        const bool branch_taken_0x2b1094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1094u;
        // 0x2b1098: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1094) {
            ctx->pc = 0x2B10A4u;
            goto label_2b10a4;
        }
    }
    ctx->pc = 0x2B109Cu;
    // 0x2b109c: 0x0  nop
    ctx->pc = 0x2b109cu;
    // NOP
label_2b10a0:
    // 0x2b10a0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2b10a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_2b10a4:
    // 0x2b10a4: 0x30c20800  andi        $v0, $a2, 0x800
    ctx->pc = 0x2b10a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2048);
label_2b10a8:
    // 0x2b10a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B10A8u;
    {
        const bool branch_taken_0x2b10a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10A8u;
        // 0x2b10ac: 0x30c21000  andi        $v0, $a2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10a8) {
            ctx->pc = 0x2B10E0u;
            goto label_2b10e0;
        }
    }
    ctx->pc = 0x2B10B0u;
    // 0x2b10b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b10b4: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2b10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b10b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b10b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b10bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B10BCu;
    {
        const bool branch_taken_0x2b10bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10BCu;
        // 0x2b10c0: 0xc4a00024  lwc1        $f0, 0x24($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10bc) {
            ctx->pc = 0x2B10D8u;
            goto label_2b10d8;
        }
    }
    ctx->pc = 0x2B10C4u;
    // 0x2b10c4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b10c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b10c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b10c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b10cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B10CCu;
    {
        const bool branch_taken_0x2b10cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10CCu;
        // 0x2b10d0: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10cc) {
            ctx->pc = 0x2B10DCu;
            goto label_2b10dc;
        }
    }
    ctx->pc = 0x2B10D4u;
    // 0x2b10d4: 0x0  nop
    ctx->pc = 0x2b10d4u;
    // NOP
label_2b10d8:
    // 0x2b10d8: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x2b10d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_2b10dc:
    // 0x2b10dc: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x2b10dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
label_2b10e0:
    // 0x2b10e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B10E0u;
    {
        const bool branch_taken_0x2b10e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10E0u;
        // 0x2b10e4: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b10e0) {
            ctx->pc = 0x2B1114u;
            goto label_2b1114;
        }
    }
    ctx->pc = 0x2B10E8u;
    // 0x2b10e8: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b10e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b10ec: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x2b10ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b10f0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b10f4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2b10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b10f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b10f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b10fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B10FCu;
    {
        const bool branch_taken_0x2b10fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b10fc) {
            ctx->pc = 0x2B1100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B10FCu;
            // 0x2b1100: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1110u;
            goto label_2b1110;
        }
    }
    ctx->pc = 0x2B1104u;
    // 0x2b1104: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b1108: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b110c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b110cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1110:
    // 0x2b1110: 0x30c22000  andi        $v0, $a2, 0x2000
    ctx->pc = 0x2b1110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
label_2b1114:
    // 0x2b1114: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B1114u;
    {
        const bool branch_taken_0x2b1114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1114) {
            ctx->pc = 0x2B1118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1114u;
            // 0x2b1118: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1148u;
            goto label_2b1148;
        }
    }
    ctx->pc = 0x2B111Cu;
    // 0x2b111c: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x2b111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1120: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x2b1120u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b1124: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2b1128: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b1128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b112c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b112cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1130: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1130u;
    {
        const bool branch_taken_0x2b1130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1130) {
            ctx->pc = 0x2B1134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1130u;
            // 0x2b1134: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1144u;
            goto label_2b1144;
        }
    }
    ctx->pc = 0x2B1138u;
    // 0x2b1138: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2b1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2b113c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b113cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1140: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2b1140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1144:
    // 0x2b1144: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b1144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2b1148:
    // 0x2b1148: 0x2a820065  slti        $v0, $s4, 0x65
    ctx->pc = 0x2b1148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2b114c: 0x504001a7  beql        $v0, $zero, . + 4 + (0x1A7 << 2)
    ctx->pc = 0x2B114Cu;
    {
        const bool branch_taken_0x2b114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b114c) {
            ctx->pc = 0x2B1150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B114Cu;
            // 0x2b1150: 0x8e630084  lw          $v1, 0x84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B17ECu;
            goto label_2b17ec;
        }
    }
    ctx->pc = 0x2B1154u;
    // 0x2b1154: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2b1154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b1158: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2b1158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2b115c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b1160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1164: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2b1164u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b1168: 0x1460ff75  bnez        $v1, . + 4 + (-0x8B << 2)
    ctx->pc = 0x2B1168u;
    {
        const bool branch_taken_0x2b1168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1168u;
        // 0x2b116c: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1168) {
            ctx->pc = 0x2B0F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0f40;
        }
    }
    ctx->pc = 0x2B1170u;
    // 0x2b1170: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1174:
    // 0x2b1174: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b1174u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b1178: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2b1178u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2b117c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1180: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b1180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b1184:
    // 0x2b1184: 0x1462009f  bne         $v1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x2B1184u;
    {
        const bool branch_taken_0x2b1184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1184u;
        // 0x2b1188: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1184) {
            ctx->pc = 0x2B1404u;
            goto label_2b1404;
        }
    }
    ctx->pc = 0x2B118Cu;
    // 0x2b118c: 0x8e640084  lw          $a0, 0x84($s3)
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b1190: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x2b1190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2b1194: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b1194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b1198: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2B1198u;
    {
        const bool branch_taken_0x2b1198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1198u;
        // 0x2b119c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1198) {
            ctx->pc = 0x2B13F4u;
            goto label_2b13f4;
        }
    }
    ctx->pc = 0x2B11A0u;
    // 0x2b11a0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b11a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b11a4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b11a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b11a8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b11a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b11ac: 0x2447cde0  addiu       $a3, $v0, -0x3220
    ctx->pc = 0x2b11acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x2b11b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b11b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b11b4: 0x24ee0004  addiu       $t6, $a3, 0x4
    ctx->pc = 0x2b11b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2b11b8: 0x24ef0008  addiu       $t7, $a3, 0x8
    ctx->pc = 0x2b11b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2b11bc: 0x24ed000c  addiu       $t5, $a3, 0xC
    ctx->pc = 0x2b11bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x2b11c0: 0x24eb0010  addiu       $t3, $a3, 0x10
    ctx->pc = 0x2b11c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2b11c4: 0x24ec0014  addiu       $t4, $a3, 0x14
    ctx->pc = 0x2b11c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x2b11c8: 0x24ea0018  addiu       $t2, $a3, 0x18
    ctx->pc = 0x2b11c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2b11cc: 0x24e8001c  addiu       $t0, $a3, 0x1C
    ctx->pc = 0x2b11ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x2b11d0: 0x24e90020  addiu       $t1, $a3, 0x20
    ctx->pc = 0x2b11d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x2b11d4: 0x0  nop
    ctx->pc = 0x2b11d4u;
    // NOP
label_2b11d8:
    // 0x2b11d8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x2b11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2b11dc: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x2b11dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2b11e0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2b11e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b11e4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2b11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b11e8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b11ec: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B11ECu;
    {
        const bool branch_taken_0x2b11ec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B11ECu;
        // 0x2b11f0: 0xc4a0000c  lwc1        $f0, 0xC($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b11ec) {
            ctx->pc = 0x2B11F8u;
            goto label_2b11f8;
        }
    }
    ctx->pc = 0x2B11F4u;
    // 0x2b11f4: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b11f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b11f8:
    // 0x2b11f8: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b11fc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2b11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b1200: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1204: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1204u;
    {
        const bool branch_taken_0x2b1204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1204) {
            ctx->pc = 0x2B1208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1204u;
            // 0x2b1208: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1218u;
            goto label_2b1218;
        }
    }
    ctx->pc = 0x2B120Cu;
    // 0x2b120c: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2b120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2b1210: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1214: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1214u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1218:
    // 0x2b1218: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b121c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b121cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1220: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1220u;
    {
        const bool branch_taken_0x2b1220 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1220u;
        // 0x2b1224: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1220) {
            ctx->pc = 0x2B122Cu;
            goto label_2b122c;
        }
    }
    ctx->pc = 0x2B1228u;
    // 0x2b1228: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x2b1228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
label_2b122c:
    // 0x2b122c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1230: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x2b1230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2b1234: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1238: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1238u;
    {
        const bool branch_taken_0x2b1238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1238) {
            ctx->pc = 0x2B123Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1238u;
            // 0x2b123c: 0xe4800068  swc1        $f0, 0x68($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B124Cu;
            goto label_2b124c;
        }
    }
    ctx->pc = 0x2B1240u;
    // 0x2b1240: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2b1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2b1244: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1248: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1248u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b124c:
    // 0x2b124c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1250: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1250u;
    {
        const bool branch_taken_0x2b1250 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1250u;
        // 0x2b1254: 0xc4a00014  lwc1        $f0, 0x14($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1250) {
            ctx->pc = 0x2B125Cu;
            goto label_2b125c;
        }
    }
    ctx->pc = 0x2B1258u;
    // 0x2b1258: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b125c:
    // 0x2b125c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1260: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x2b1260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2b1264: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1268: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1268u;
    {
        const bool branch_taken_0x2b1268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1268) {
            ctx->pc = 0x2B126Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1268u;
            // 0x2b126c: 0xe480006c  swc1        $f0, 0x6C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B127Cu;
            goto label_2b127c;
        }
    }
    ctx->pc = 0x2B1270u;
    // 0x2b1270: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2b1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2b1274: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1278: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b127c:
    // 0x2b127c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1280: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1280u;
    {
        const bool branch_taken_0x2b1280 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1280u;
        // 0x2b1284: 0xc4a00018  lwc1        $f0, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1280) {
            ctx->pc = 0x2B128Cu;
            goto label_2b128c;
        }
    }
    ctx->pc = 0x2B1288u;
    // 0x2b1288: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b128c:
    // 0x2b128c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1290: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2b1294: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1298: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1298u;
    {
        const bool branch_taken_0x2b1298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1298) {
            ctx->pc = 0x2B129Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1298u;
            // 0x2b129c: 0xe4800070  swc1        $f0, 0x70($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B12ACu;
            goto label_2b12ac;
        }
    }
    ctx->pc = 0x2B12A0u;
    // 0x2b12a0: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2b12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2b12a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b12a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b12a8: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b12a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b12ac:
    // 0x2b12ac: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b12acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b12b0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B12B0u;
    {
        const bool branch_taken_0x2b12b0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12B0u;
        // 0x2b12b4: 0xc4a0001c  lwc1        $f0, 0x1C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12b0) {
            ctx->pc = 0x2B12BCu;
            goto label_2b12bc;
        }
    }
    ctx->pc = 0x2B12B8u;
    // 0x2b12b8: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b12bc:
    // 0x2b12bc: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b12c0: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2b12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2b12c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b12c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b12c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B12C8u;
    {
        const bool branch_taken_0x2b12c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12c8) {
            ctx->pc = 0x2B12CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B12C8u;
            // 0x2b12cc: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B12DCu;
            goto label_2b12dc;
        }
    }
    ctx->pc = 0x2B12D0u;
    // 0x2b12d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x2b12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2b12d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b12d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b12d8: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b12d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b12dc:
    // 0x2b12dc: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b12e0: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B12E0u;
    {
        const bool branch_taken_0x2b12e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B12E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12E0u;
        // 0x2b12e4: 0xc4a00020  lwc1        $f0, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b12e0) {
            ctx->pc = 0x2B12ECu;
            goto label_2b12ec;
        }
    }
    ctx->pc = 0x2B12E8u;
    // 0x2b12e8: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b12e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b12ec:
    // 0x2b12ec: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b12ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b12f0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x2b12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2b12f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b12f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b12f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B12F8u;
    {
        const bool branch_taken_0x2b12f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b12f8) {
            ctx->pc = 0x2B12FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B12F8u;
            // 0x2b12fc: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B130Cu;
            goto label_2b130c;
        }
    }
    ctx->pc = 0x2B1300u;
    // 0x2b1300: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x2b1304: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1308: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1308u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b130c:
    // 0x2b130c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1310: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1310u;
    {
        const bool branch_taken_0x2b1310 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1310u;
        // 0x2b1314: 0xc4a00030  lwc1        $f0, 0x30($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1310) {
            ctx->pc = 0x2B131Cu;
            goto label_2b131c;
        }
    }
    ctx->pc = 0x2B1318u;
    // 0x2b1318: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b131c:
    // 0x2b131c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1320: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x2b1320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2b1324: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1328: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1328u;
    {
        const bool branch_taken_0x2b1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1328) {
            ctx->pc = 0x2B132Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1328u;
            // 0x2b132c: 0xe480007c  swc1        $f0, 0x7C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B133Cu;
            goto label_2b133c;
        }
    }
    ctx->pc = 0x2B1330u;
    // 0x2b1330: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2b1330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x2b1334: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1338: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1338u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b133c:
    // 0x2b133c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b133cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1340: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1340u;
    {
        const bool branch_taken_0x2b1340 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1340u;
        // 0x2b1344: 0xc4a00034  lwc1        $f0, 0x34($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1340) {
            ctx->pc = 0x2B134Cu;
            goto label_2b134c;
        }
    }
    ctx->pc = 0x2B1348u;
    // 0x2b1348: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b134c:
    // 0x2b134c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1350: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2b1350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b1354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1358: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1358u;
    {
        const bool branch_taken_0x2b1358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1358) {
            ctx->pc = 0x2B135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1358u;
            // 0x2b135c: 0xe4800080  swc1        $f0, 0x80($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B136Cu;
            goto label_2b136c;
        }
    }
    ctx->pc = 0x2B1360u;
    // 0x2b1360: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2b1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2b1364: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1368: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1368u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b136c:
    // 0x2b136c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2b136cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2b1370: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1370u;
    {
        const bool branch_taken_0x2b1370 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B1374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1370u;
        // 0x2b1374: 0xc4a00038  lwc1        $f0, 0x38($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1370) {
            ctx->pc = 0x2B137Cu;
            goto label_2b137c;
        }
    }
    ctx->pc = 0x2B1378u;
    // 0x2b1378: 0xac86005c  sw          $a2, 0x5C($a0)
    ctx->pc = 0x2b1378u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 6));
label_2b137c:
    // 0x2b137c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b137cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b1380: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x2b1380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2b1384: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1388: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1388u;
    {
        const bool branch_taken_0x2b1388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1388) {
            ctx->pc = 0x2B138Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1388u;
            // 0x2b138c: 0xe4800084  swc1        $f0, 0x84($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B139Cu;
            goto label_2b139c;
        }
    }
    ctx->pc = 0x2B1390u;
    // 0x2b1390: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2b1394: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1398: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b1398u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b139c:
    // 0x2b139c: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2b139cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b13a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b13a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b13a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b13a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b13a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b13a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b13ac: 0x2a830065  slti        $v1, $s4, 0x65
    ctx->pc = 0x2b13acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2b13b0: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x2b13b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x2b13b4: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2b13b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b13b8: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x2b13b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x2b13bc: 0xc4a1002c  lwc1        $f1, 0x2C($a1)
    ctx->pc = 0x2b13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b13c0: 0xe482004c  swc1        $f2, 0x4C($a0)
    ctx->pc = 0x2b13c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x2b13c4: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x2b13c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2b13c8: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x2b13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2b13cc: 0x10600106  beqz        $v1, . + 4 + (0x106 << 2)
    ctx->pc = 0x2B13CCu;
    {
        const bool branch_taken_0x2b13cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13CCu;
        // 0x2b13d0: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13cc) {
            ctx->pc = 0x2B17E8u;
            goto label_2b17e8;
        }
    }
    ctx->pc = 0x2B13D4u;
    // 0x2b13d4: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2b13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b13d8: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x2b13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x2b13dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b13e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b13e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b13e4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2b13e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b13e8: 0x1460ff7b  bnez        $v1, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2B13E8u;
    {
        const bool branch_taken_0x2b13e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B13ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B13E8u;
        // 0x2b13ec: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b13e8) {
            ctx->pc = 0x2B11D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b11d8;
        }
    }
    ctx->pc = 0x2B13F0u;
    // 0x2b13f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b13f4:
    // 0x2b13f4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b13f8: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2b13f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2b13fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b1400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b1404:
    // 0x2b1404: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B1404u;
    {
        const bool branch_taken_0x2b1404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1404u;
        // 0x2b1408: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1404) {
            ctx->pc = 0x2B149Cu;
            goto label_2b149c;
        }
    }
    ctx->pc = 0x2B140Cu;
    // 0x2b140c: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x2b140cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2b1410: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2b1414: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1418: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B1418u;
    {
        const bool branch_taken_0x2b1418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1418u;
        // 0x2b141c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1418) {
            ctx->pc = 0x2B148Cu;
            goto label_2b148c;
        }
    }
    ctx->pc = 0x2B1420u;
    // 0x2b1420: 0x8e640084  lw          $a0, 0x84($s3)
    ctx->pc = 0x2b1420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b1424: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x2b1424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2b1428: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b1428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b142c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B142Cu;
    {
        const bool branch_taken_0x2b142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B142Cu;
        // 0x2b1430: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b142c) {
            ctx->pc = 0x2B148Cu;
            goto label_2b148c;
        }
    }
    ctx->pc = 0x2B1434u;
    // 0x2b1434: 0x0  nop
    ctx->pc = 0x2b1434u;
    // NOP
label_2b1438:
    // 0x2b1438: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2b1438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b143c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2b143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2b1440: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b1440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b1444: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b1444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b1448: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b1448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b144c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2b144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b1450: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b1450u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b1454: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b1454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b1458: 0xc0aad18  jal         func_2AB460
    ctx->pc = 0x2B1458u;
    SET_GPR_U32(ctx, 31, 0x2B1460u);
    ctx->pc = 0x2B145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1458u;
    // 0x2b145c: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB460u, 0x2B1458u, 0x2B1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1460u;
label_2b1460:
    // 0x2b1460: 0x2a820065  slti        $v0, $s4, 0x65
    ctx->pc = 0x2b1460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2b1464: 0x504000e1  beql        $v0, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x2B1464u;
    {
        const bool branch_taken_0x2b1464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1464) {
            ctx->pc = 0x2B1468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1464u;
            // 0x2b1468: 0x8e630084  lw          $v1, 0x84($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B17ECu;
            goto label_2b17ec;
        }
    }
    ctx->pc = 0x2B146Cu;
    // 0x2b146c: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2b146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b1470: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x2b1470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x2b1474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b1478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b1478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b147c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2b147cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b1480: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2B1480u;
    {
        const bool branch_taken_0x2b1480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1480u;
        // 0x2b1484: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1480) {
            ctx->pc = 0x2B1438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1438;
        }
    }
    ctx->pc = 0x2B1488u;
    // 0x2b1488: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b148c:
    // 0x2b148c: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b148cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b1490: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2b1490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2b1494: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b1494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b1498: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b1498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b149c:
    // 0x2b149c: 0x146200e4  bne         $v1, $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2B149Cu;
    {
        const bool branch_taken_0x2b149c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B14A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B149Cu;
        // 0x2b14a0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b149c) {
            ctx->pc = 0x2B1830u;
            goto label_2b1830;
        }
    }
    ctx->pc = 0x2B14A4u;
    // 0x2b14a4: 0x8e640084  lw          $a0, 0x84($s3)
    ctx->pc = 0x2b14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b14a8: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x2b14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2b14ac: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2b14acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b14b0: 0x104000db  beqz        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x2B14B0u;
    {
        const bool branch_taken_0x2b14b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B14B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14B0u;
        // 0x2b14b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14b0) {
            ctx->pc = 0x2B1820u;
            goto label_2b1820;
        }
    }
    ctx->pc = 0x2B14B8u;
    // 0x2b14b8: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2b14b8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x2b14bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b14bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b14c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b14c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b14c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b14c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b14c8: 0x26b2ce50  addiu       $s2, $s5, -0x31B0
    ctx->pc = 0x2b14c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954576));
    // 0x2b14cc: 0x0  nop
    ctx->pc = 0x2b14ccu;
    // NOP
label_2b14d0:
    // 0x2b14d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2b14d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b14d4: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x2b14d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2b14d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b14dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b14e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b14e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b14e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b14e8: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2b14e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b14ec: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x2b14ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2b14f0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b14f4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B14F4u;
    {
        const bool branch_taken_0x2b14f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B14F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14F4u;
        // 0x2b14f8: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14f4) {
            ctx->pc = 0x2B1500u;
            goto label_2b1500;
        }
    }
    ctx->pc = 0x2B14FCu;
    // 0x2b14fc: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b14fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1500:
    // 0x2b1500: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1504: 0x8ea3ce50  lw          $v1, -0x31B0($s5)
    ctx->pc = 0x2b1504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294954576)));
    // 0x2b1508: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b150c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B150Cu;
    {
        const bool branch_taken_0x2b150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b150c) {
            ctx->pc = 0x2B1510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B150Cu;
            // 0x2b1510: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1520u;
            goto label_2b1520;
        }
    }
    ctx->pc = 0x2B1514u;
    // 0x2b1514: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2b1518: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b1518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b151c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b151cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1520:
    // 0x2b1520: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b1524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b1528: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1528u;
    {
        const bool branch_taken_0x2b1528 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1528u;
        // 0x2b152c: 0xc4c00010  lwc1        $f0, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1528) {
            ctx->pc = 0x2B1534u;
            goto label_2b1534;
        }
    }
    ctx->pc = 0x2B1530u;
    // 0x2b1530: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x2b1530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_2b1534:
    // 0x2b1534: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1538: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b1538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b153c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b153cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1540: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1540u;
    {
        const bool branch_taken_0x2b1540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1540) {
            ctx->pc = 0x2B1544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1540u;
            // 0x2b1544: 0xe6000040  swc1        $f0, 0x40($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1554u;
            goto label_2b1554;
        }
    }
    ctx->pc = 0x2B1548u;
    // 0x2b1548: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2b1548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2b154c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1550: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1554:
    // 0x2b1554: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1558: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1558u;
    {
        const bool branch_taken_0x2b1558 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1558u;
        // 0x2b155c: 0xc4c00014  lwc1        $f0, 0x14($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1558) {
            ctx->pc = 0x2B1564u;
            goto label_2b1564;
        }
    }
    ctx->pc = 0x2B1560u;
    // 0x2b1560: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1564:
    // 0x2b1564: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1568: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2b1568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b156c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1570: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1570u;
    {
        const bool branch_taken_0x2b1570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1570) {
            ctx->pc = 0x2B1574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1570u;
            // 0x2b1574: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1584u;
            goto label_2b1584;
        }
    }
    ctx->pc = 0x2B1578u;
    // 0x2b1578: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2b1578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2b157c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1580: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1580u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1584:
    // 0x2b1584: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1588: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1588u;
    {
        const bool branch_taken_0x2b1588 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B158Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1588u;
        // 0x2b158c: 0xc4c00018  lwc1        $f0, 0x18($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1588) {
            ctx->pc = 0x2B1594u;
            goto label_2b1594;
        }
    }
    ctx->pc = 0x2B1590u;
    // 0x2b1590: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1594:
    // 0x2b1594: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1598: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2b159c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b159cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b15a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B15A0u;
    {
        const bool branch_taken_0x2b15a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b15a0) {
            ctx->pc = 0x2B15A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15A0u;
            // 0x2b15a4: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15B4u;
            goto label_2b15b4;
        }
    }
    ctx->pc = 0x2B15A8u;
    // 0x2b15a8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2b15ac: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b15acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b15b0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b15b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b15b4:
    // 0x2b15b4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b15b8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B15B8u;
    {
        const bool branch_taken_0x2b15b8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B15BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15B8u;
        // 0x2b15bc: 0xc4c0001c  lwc1        $f0, 0x1C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15b8) {
            ctx->pc = 0x2B15C4u;
            goto label_2b15c4;
        }
    }
    ctx->pc = 0x2B15C0u;
    // 0x2b15c0: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b15c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b15c4:
    // 0x2b15c4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b15c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b15c8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2b15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b15cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b15ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b15d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B15D0u;
    {
        const bool branch_taken_0x2b15d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b15d0) {
            ctx->pc = 0x2B15D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B15D0u;
            // 0x2b15d4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B15E4u;
            goto label_2b15e4;
        }
    }
    ctx->pc = 0x2B15D8u;
    // 0x2b15d8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b15dc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b15dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b15e0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b15e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b15e4:
    // 0x2b15e4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b15e8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B15E8u;
    {
        const bool branch_taken_0x2b15e8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B15E8u;
        // 0x2b15ec: 0xc4c00020  lwc1        $f0, 0x20($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b15e8) {
            ctx->pc = 0x2B15F4u;
            goto label_2b15f4;
        }
    }
    ctx->pc = 0x2B15F0u;
    // 0x2b15f0: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b15f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b15f4:
    // 0x2b15f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b15f8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b15fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b15fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1600: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1600u;
    {
        const bool branch_taken_0x2b1600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1600) {
            ctx->pc = 0x2B1604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1600u;
            // 0x2b1604: 0xe6000050  swc1        $f0, 0x50($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1614u;
            goto label_2b1614;
        }
    }
    ctx->pc = 0x2B1608u;
    // 0x2b1608: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2b1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2b160c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1610: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1614:
    // 0x2b1614: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1618: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1618u;
    {
        const bool branch_taken_0x2b1618 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1618u;
        // 0x2b161c: 0xc4c00024  lwc1        $f0, 0x24($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1618) {
            ctx->pc = 0x2B1624u;
            goto label_2b1624;
        }
    }
    ctx->pc = 0x2B1620u;
    // 0x2b1620: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1624:
    // 0x2b1624: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1628: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2b1628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2b162c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b162cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1630: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1630u;
    {
        const bool branch_taken_0x2b1630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1630) {
            ctx->pc = 0x2B1634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1630u;
            // 0x2b1634: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1644u;
            goto label_2b1644;
        }
    }
    ctx->pc = 0x2B1638u;
    // 0x2b1638: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b1638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2b163c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1640: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1644:
    // 0x2b1644: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1648: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1648u;
    {
        const bool branch_taken_0x2b1648 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1648u;
        // 0x2b164c: 0xc4c00028  lwc1        $f0, 0x28($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1648) {
            ctx->pc = 0x2B1654u;
            goto label_2b1654;
        }
    }
    ctx->pc = 0x2B1650u;
    // 0x2b1650: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1654:
    // 0x2b1654: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1658: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x2b1658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2b165c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b165cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1660: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1660u;
    {
        const bool branch_taken_0x2b1660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1660) {
            ctx->pc = 0x2B1664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1660u;
            // 0x2b1664: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1674u;
            goto label_2b1674;
        }
    }
    ctx->pc = 0x2B1668u;
    // 0x2b1668: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2b1668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2b166c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b166cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1670: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1670u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1674:
    // 0x2b1674: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1678: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1678u;
    {
        const bool branch_taken_0x2b1678 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1678u;
        // 0x2b167c: 0xc4c0002c  lwc1        $f0, 0x2C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1678) {
            ctx->pc = 0x2B1684u;
            goto label_2b1684;
        }
    }
    ctx->pc = 0x2B1680u;
    // 0x2b1680: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1684:
    // 0x2b1684: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1688: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2b1688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b168c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1690: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1690u;
    {
        const bool branch_taken_0x2b1690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1690) {
            ctx->pc = 0x2B1694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1690u;
            // 0x2b1694: 0xe600005c  swc1        $f0, 0x5C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B16A4u;
            goto label_2b16a4;
        }
    }
    ctx->pc = 0x2B1698u;
    // 0x2b1698: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2b1698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2b169c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b169cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b16a0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b16a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b16a4:
    // 0x2b16a4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b16a8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B16A8u;
    {
        const bool branch_taken_0x2b16a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B16ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16A8u;
        // 0x2b16ac: 0xc4c00030  lwc1        $f0, 0x30($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16a8) {
            ctx->pc = 0x2B16B4u;
            goto label_2b16b4;
        }
    }
    ctx->pc = 0x2B16B0u;
    // 0x2b16b0: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b16b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b16b4:
    // 0x2b16b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b16b8: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x2b16b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2b16bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b16c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B16C0u;
    {
        const bool branch_taken_0x2b16c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b16c0) {
            ctx->pc = 0x2B16C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B16C0u;
            // 0x2b16c4: 0xe6000060  swc1        $f0, 0x60($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B16D4u;
            goto label_2b16d4;
        }
    }
    ctx->pc = 0x2B16C8u;
    // 0x2b16c8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2b16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2b16cc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b16ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b16d0: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b16d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b16d4:
    // 0x2b16d4: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b16d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b16d8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B16D8u;
    {
        const bool branch_taken_0x2b16d8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B16D8u;
        // 0x2b16dc: 0xc4c00034  lwc1        $f0, 0x34($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b16d8) {
            ctx->pc = 0x2B16E4u;
            goto label_2b16e4;
        }
    }
    ctx->pc = 0x2B16E0u;
    // 0x2b16e0: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b16e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b16e4:
    // 0x2b16e4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b16e8: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2b16e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2b16ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b16ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b16f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B16F0u;
    {
        const bool branch_taken_0x2b16f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b16f0) {
            ctx->pc = 0x2B16F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B16F0u;
            // 0x2b16f4: 0xe6000064  swc1        $f0, 0x64($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1704u;
            goto label_2b1704;
        }
    }
    ctx->pc = 0x2B16F8u;
    // 0x2b16f8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x2b16f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2b16fc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b16fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1700: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1704:
    // 0x2b1704: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1708: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1708u;
    {
        const bool branch_taken_0x2b1708 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1708u;
        // 0x2b170c: 0xc4c00038  lwc1        $f0, 0x38($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1708) {
            ctx->pc = 0x2B1714u;
            goto label_2b1714;
        }
    }
    ctx->pc = 0x2B1710u;
    // 0x2b1710: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1714:
    // 0x2b1714: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1718: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2b171c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b171cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1720: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1720u;
    {
        const bool branch_taken_0x2b1720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1720) {
            ctx->pc = 0x2B1724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1720u;
            // 0x2b1724: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1734u;
            goto label_2b1734;
        }
    }
    ctx->pc = 0x2B1728u;
    // 0x2b1728: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2b1728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2b172c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b172cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1730: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1730u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1734:
    // 0x2b1734: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1738: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1738u;
    {
        const bool branch_taken_0x2b1738 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1738u;
        // 0x2b173c: 0xc4c0003c  lwc1        $f0, 0x3C($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1738) {
            ctx->pc = 0x2B1744u;
            goto label_2b1744;
        }
    }
    ctx->pc = 0x2B1740u;
    // 0x2b1740: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1744:
    // 0x2b1744: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1748: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2b1748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2b174c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1750: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1750u;
    {
        const bool branch_taken_0x2b1750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1750) {
            ctx->pc = 0x2B1754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1750u;
            // 0x2b1754: 0xe600006c  swc1        $f0, 0x6C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1764u;
            goto label_2b1764;
        }
    }
    ctx->pc = 0x2B1758u;
    // 0x2b1758: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b175c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1760: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1764:
    // 0x2b1764: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x2b1764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2b1768: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B1768u;
    {
        const bool branch_taken_0x2b1768 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2B176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1768u;
        // 0x2b176c: 0xc4c00040  lwc1        $f0, 0x40($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1768) {
            ctx->pc = 0x2B1774u;
            goto label_2b1774;
        }
    }
    ctx->pc = 0x2B1770u;
    // 0x2b1770: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b1770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_2b1774:
    // 0x2b1774: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2b1774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2b1778: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x2b1778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2b177c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b177cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b1780: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B1780u;
    {
        const bool branch_taken_0x2b1780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1780) {
            ctx->pc = 0x2B1784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1780u;
            // 0x2b1784: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1794u;
            goto label_2b1794;
        }
    }
    ctx->pc = 0x2B1788u;
    // 0x2b1788: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b178c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2b178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b1790: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2b1790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b1794:
    // 0x2b1794: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x2b1794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b1798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b179c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b179cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b17a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b17a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b17a4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2b17a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b17a8: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2b17a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b17ac: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x2b17acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2b17b0: 0xc4c00048  lwc1        $f0, 0x48($a2)
    ctx->pc = 0x2b17b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b17b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2b17b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b17b8: 0xc4c1004c  lwc1        $f1, 0x4C($a2)
    ctx->pc = 0x2b17b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b17bc: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x2b17bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2b17c0: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x2b17c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b17c4: 0x8cc20050  lw          $v0, 0x50($a2)
    ctx->pc = 0x2b17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x2b17c8: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x2b17c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
    // 0x2b17cc: 0xc0ca4d2  jal         func_329348
    ctx->pc = 0x2B17CCu;
    SET_GPR_U32(ctx, 31, 0x2B17D4u);
    ctx->pc = 0x2B17D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B17CCu;
    // 0x2b17d0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329348u, 0x2B17CCu, 0x2B17D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B17D4u;
label_2b17d4:
    // 0x2b17d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b17d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b17d8: 0x2a830065  slti        $v1, $s4, 0x65
    ctx->pc = 0x2b17d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2b17dc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2b17dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2b17e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B17E0u;
    {
        const bool branch_taken_0x2b17e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17E0u;
        // 0x2b17e4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17e0) {
            ctx->pc = 0x2B1800u;
            goto label_2b1800;
        }
    }
    ctx->pc = 0x2B17E8u;
label_2b17e8:
    // 0x2b17e8: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x2b17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_2b17ec:
    // 0x2b17ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b17ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b17f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b17f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b17f4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2B17F4u;
    {
        const bool branch_taken_0x2b17f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B17F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B17F4u;
        // 0x2b17f8: 0xae630084  sw          $v1, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b17f4) {
            ctx->pc = 0x2B1874u;
            goto label_2b1874;
        }
    }
    ctx->pc = 0x2B17FCu;
    // 0x2b17fc: 0x0  nop
    ctx->pc = 0x2b17fcu;
    // NOP
label_2b1800:
    // 0x2b1800: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x2b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x2b1804: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2b1804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2b1808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b1808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b180c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b180cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1810: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2b1810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b1814: 0x1460ff2e  bnez        $v1, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x2B1814u;
    {
        const bool branch_taken_0x2b1814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1814u;
        // 0x2b1818: 0xae620084  sw          $v0, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1814) {
            ctx->pc = 0x2B14D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b14d0;
        }
    }
    ctx->pc = 0x2B181Cu;
    // 0x2b181c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b1820:
    // 0x2b1820: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2b1820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2b1824: 0xae620088  sw          $v0, 0x88($s3)
    ctx->pc = 0x2b1824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 2));
    // 0x2b1828: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b1828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b182c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b1830:
    // 0x2b1830: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B1830u;
    {
        const bool branch_taken_0x2b1830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B1834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1830u;
        // 0x2b1834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1830) {
            ctx->pc = 0x2B1874u;
            goto label_2b1874;
        }
    }
    ctx->pc = 0x2B1838u;
    // 0x2b1838: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x2b1838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2b183c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2b183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2b1840: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B1840u;
    {
        const bool branch_taken_0x2b1840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1840u;
        // 0x2b1844: 0xae600064  sw          $zero, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1840) {
            ctx->pc = 0x2B1870u;
            goto label_2b1870;
        }
    }
    ctx->pc = 0x2B1848u;
    // 0x2b1848: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2b1848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2b184c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B184Cu;
    {
        const bool branch_taken_0x2b184c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b184c) {
            ctx->pc = 0x2B1850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B184Cu;
            // 0x2b1850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1874u;
            goto label_2b1874;
        }
    }
    ctx->pc = 0x2B1854u;
    // 0x2b1854: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x2b1854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2b1858: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x2b1858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x2b185c: 0xc0ac93e  jal         func_2B24F8
    ctx->pc = 0x2B185Cu;
    SET_GPR_U32(ctx, 31, 0x2B1864u);
    ctx->pc = 0x2B1860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B185Cu;
    // 0x2b1860: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24F8u, 0x2B185Cu, 0x2B1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1864u;
label_2b1864:
    // 0x2b1864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1868: 0xc0ac916  jal         func_2B2458
    ctx->pc = 0x2B1868u;
    SET_GPR_U32(ctx, 31, 0x2B1870u);
    ctx->pc = 0x2B186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1868u;
    // 0x2b186c: 0x8c850084  lw          $a1, 0x84($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2458u, 0x2B1868u, 0x2B1870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1870u;
label_2b1870:
    // 0x2b1870: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b1870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1874:
    // 0x2b1874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b1874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b1878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b187c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b187cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b1880: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b1880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1884: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b1884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1888: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2b1888u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b188c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b188cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1890: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2b1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1894: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1894u;
        // 0x2b1898: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B189Cu;
    // 0x2b189c: 0x0  nop
    ctx->pc = 0x2b189cu;
    // NOP
    ctx->pc = 0x2b18a0u;
}
