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

// Function: sub_002B2B98
// Address: 0x2b2b98 - 0x2b2cb8
void sub_002B2B98_0x2b2b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2B98_0x2b2b98");
#endif

    switch (ctx->pc) {
        case 0x2b2c48u: goto label_2b2c48;
        case 0x2b2c54u: goto label_2b2c54;
        case 0x2b2c8cu: goto label_2b2c8c;
        default: break;
    }

    ctx->pc = 0x2b2b98u;

    // 0x2b2b98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b2b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b2b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b2ba0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b2ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b2ba4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2ba8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b2ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2bac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2bb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b2bb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b2bb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2b2bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2b2bbc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b2bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2b2bc0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2bc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2b2bc4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2bc8: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x2b2bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2b2bcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2bccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2bd0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2b2bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2b2bd4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b2bd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b2bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b2bdc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2b2bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b2be0: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x2b2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2be4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2b2be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x2b2be8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2b2be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b2bec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B2BECu;
    {
        const bool branch_taken_0x2b2bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BECu;
        // 0x2b2bf0: 0x86450002  lh          $a1, 0x2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2bec) {
            ctx->pc = 0x2B2BF8u;
            goto label_2b2bf8;
        }
    }
    ctx->pc = 0x2B2BF4u;
    // 0x2b2bf4: 0xae24005c  sw          $a0, 0x5C($s1)
    ctx->pc = 0x2b2bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 4));
label_2b2bf8:
    // 0x2b2bf8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2b2bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b2bfc: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b2c00: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x2b2c00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x2b2c04: 0x2694cde0  addiu       $s4, $s4, -0x3220
    ctx->pc = 0x2b2c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954464));
    // 0x2b2c08: 0x284a021  addu        $s4, $s4, $a0
    ctx->pc = 0x2b2c08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2b2c0c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2c10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b2c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B2C14u;
    {
        const bool branch_taken_0x2b2c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C14u;
        // 0x2b2c18: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c14) {
            ctx->pc = 0x2B2C38u;
            goto label_2b2c38;
        }
    }
    ctx->pc = 0x2B2C1Cu;
    // 0x2b2c1c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2b2c20: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x2b2c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x2b2c24: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x2b2c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b2c28: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2c2c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2c2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2c30: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B2C30u;
    {
        const bool branch_taken_0x2b2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C30u;
        // 0x2b2c34: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c30) {
            ctx->pc = 0x2B2C90u;
            goto label_2b2c90;
        }
    }
    ctx->pc = 0x2B2C38u;
label_2b2c38:
    // 0x2b2c38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b2c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b2c3c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b2c40: 0xc0aa626  jal         func_2A9898
    ctx->pc = 0x2B2C40u;
    SET_GPR_U32(ctx, 31, 0x2B2C48u);
    ctx->pc = 0x2B2C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C40u;
    // 0x2b2c44: 0x24530064  addiu       $s3, $v0, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9898u, 0x2B2C40u, 0x2B2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C48u;
label_2b2c48:
    // 0x2b2c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b2c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c4c: 0xc0aa622  jal         func_2A9888
    ctx->pc = 0x2B2C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B2C54u);
    ctx->pc = 0x2B2C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C4Cu;
    // 0x2b2c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9888u, 0x2B2C4Cu, 0x2B2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C54u;
label_2b2c54:
    // 0x2b2c54: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x2b2c54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x2b2c58: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2b2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2b2c5c: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x2b2c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2b2c60: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x2b2c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2c64: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2b2c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b2c68: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2b2c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2b2c6c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2b2c70: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x2b2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2b2c74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b2c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b2c78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B2C78u;
    {
        const bool branch_taken_0x2b2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C78u;
        // 0x2b2c7c: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c78) {
            ctx->pc = 0x2B2C90u;
            goto label_2b2c90;
        }
    }
    ctx->pc = 0x2B2C80u;
    // 0x2b2c80: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2b2c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2b2c84: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2B2C84u;
    SET_GPR_U32(ctx, 31, 0x2B2C8Cu);
    ctx->pc = 0x2B2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C84u;
    // 0x2b2c88: 0x24840188  addiu       $a0, $a0, 0x188 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2B2C84u, 0x2B2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C8Cu;
label_2b2c8c:
    // 0x2b2c8c: 0x0  nop
    ctx->pc = 0x2b2c8cu;
    // NOP
label_2b2c90:
    // 0x2b2c90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2c90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2c94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2c98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2c9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b2c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2ca0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2b2ca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2ca4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b2ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b2ca8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2b2ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CACu;
        // 0x2b2cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2CB4u;
    // 0x2b2cb4: 0x0  nop
    ctx->pc = 0x2b2cb4u;
    // NOP
    ctx->pc = 0x2b2cb8u;
}
