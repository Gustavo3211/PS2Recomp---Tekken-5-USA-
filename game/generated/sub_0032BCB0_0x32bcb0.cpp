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

// Function: sub_0032BCB0
// Address: 0x32bcb0 - 0x32bde8
void sub_0032BCB0_0x32bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BCB0_0x32bcb0");
#endif

    switch (ctx->pc) {
        case 0x32bce0u: goto label_32bce0;
        case 0x32bcf4u: goto label_32bcf4;
        case 0x32bd00u: goto label_32bd00;
        case 0x32bd14u: goto label_32bd14;
        case 0x32bd20u: goto label_32bd20;
        case 0x32bd30u: goto label_32bd30;
        case 0x32bd90u: goto label_32bd90;
        case 0x32bda4u: goto label_32bda4;
        case 0x32bdb8u: goto label_32bdb8;
        default: break;
    }

    ctx->pc = 0x32bcb0u;

    // 0x32bcb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x32bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32bcb4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x32bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x32bcb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32bcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcbc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x32bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x32bcc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x32bcc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32bcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcc8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x32bcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bccc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x32bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x32bcd0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x32bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x32bcd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x32bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x32bcd8: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x32BCD8u;
    SET_GPR_U32(ctx, 31, 0x32BCE0u);
    ctx->pc = 0x32BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCD8u;
    // 0x32bcdc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x32BCD8u, 0x32BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCE0u;
label_32bce0:
    // 0x32bce0: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x32bce0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32bce4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32bce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32bce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcec: 0xc0cba88  jal         func_32EA20
    ctx->pc = 0x32BCECu;
    SET_GPR_U32(ctx, 31, 0x32BCF4u);
    ctx->pc = 0x32BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCECu;
    // 0x32bcf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA20u, 0x32BCECu, 0x32BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BCF4u;
label_32bcf4:
    // 0x32bcf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32bcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bcf8: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x32BCF8u;
    SET_GPR_U32(ctx, 31, 0x32BD00u);
    ctx->pc = 0x32BCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BCF8u;
    // 0x32bcfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x32BCF8u, 0x32BD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD00u;
label_32bd00:
    // 0x32bd00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32bd00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd04: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x32bd04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32bd08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32bd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd0c: 0xc0cbb38  jal         func_32ECE0
    ctx->pc = 0x32BD0Cu;
    SET_GPR_U32(ctx, 31, 0x32BD14u);
    ctx->pc = 0x32BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD0Cu;
    // 0x32bd10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECE0u, 0x32BD0Cu, 0x32BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD14u;
label_32bd14:
    // 0x32bd14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd18: 0xc0cbaa2  jal         func_32EA88
    ctx->pc = 0x32BD18u;
    SET_GPR_U32(ctx, 31, 0x32BD20u);
    ctx->pc = 0x32BD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD18u;
    // 0x32bd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA88u, 0x32BD18u, 0x32BD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD20u;
label_32bd20:
    // 0x32bd20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32bd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32bd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd28: 0xc0cbb38  jal         func_32ECE0
    ctx->pc = 0x32BD28u;
    SET_GPR_U32(ctx, 31, 0x32BD30u);
    ctx->pc = 0x32BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD28u;
    // 0x32bd2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ECE0u, 0x32BD28u, 0x32BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD30u;
label_32bd30:
    // 0x32bd30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32bd34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32bd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd3c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x32bd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32bd40: 0xc7a80020  lwc1        $f8, 0x20($sp)
    ctx->pc = 0x32bd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x32bd44: 0xc7a70024  lwc1        $f7, 0x24($sp)
    ctx->pc = 0x32bd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x32bd48: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x32bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bd4c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x32bd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32bd50: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x32bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32bd54: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x32bd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32bd58: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x32bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32bd5c: 0xc7a60018  lwc1        $f6, 0x18($sp)
    ctx->pc = 0x32bd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x32bd60: 0xe6080000  swc1        $f8, 0x0($s0)
    ctx->pc = 0x32bd60u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x32bd64: 0xe6070010  swc1        $f7, 0x10($s0)
    ctx->pc = 0x32bd64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x32bd68: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x32bd68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x32bd6c: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x32bd6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x32bd70: 0xe6030024  swc1        $f3, 0x24($s0)
    ctx->pc = 0x32bd70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x32bd74: 0xe6040008  swc1        $f4, 0x8($s0)
    ctx->pc = 0x32bd74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x32bd78: 0xe6050018  swc1        $f5, 0x18($s0)
    ctx->pc = 0x32bd78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x32bd7c: 0xe6060028  swc1        $f6, 0x28($s0)
    ctx->pc = 0x32bd7cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x32bd80: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x32bd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x32bd84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x32bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x32bd88: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x32BD88u;
    SET_GPR_U32(ctx, 31, 0x32BD90u);
    ctx->pc = 0x32BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD88u;
    // 0x32bd8c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x32BD88u, 0x32BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BD90u;
label_32bd90:
    // 0x32bd90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32bd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd94: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32bd94u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x32bd98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32bd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bd9c: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x32BD9Cu;
    SET_GPR_U32(ctx, 31, 0x32BDA4u);
    ctx->pc = 0x32BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BD9Cu;
    // 0x32bda0: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x32BD9Cu, 0x32BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDA4u;
label_32bda4:
    // 0x32bda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32bda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bda8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32bda8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x32bdac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32bdacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bdb0: 0xc0cbb52  jal         func_32ED48
    ctx->pc = 0x32BDB0u;
    SET_GPR_U32(ctx, 31, 0x32BDB8u);
    ctx->pc = 0x32BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BDB0u;
    // 0x32bdb4: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED48u, 0x32BDB0u, 0x32BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BDB8u;
label_32bdb8:
    // 0x32bdb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32bdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32bdbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32bdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32bdc0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x32bdc0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x32bdc4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x32bdc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32bdc8: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x32bdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x32bdcc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x32bdccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32bdd0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x32bdd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32bdd4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x32bdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x32bdd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32bdd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32bddc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x32bddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32bde0: 0x3e00008  jr          $ra
    ctx->pc = 0x32BDE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDE0u;
        // 0x32bde4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BDE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BDE8u;
}
