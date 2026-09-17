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

// Function: sub_0035CA68
// Address: 0x35ca68 - 0x35ce30
void sub_0035CA68_0x35ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CA68_0x35ca68");
#endif

    switch (ctx->pc) {
        case 0x35cb20u: goto label_35cb20;
        case 0x35cb60u: goto label_35cb60;
        case 0x35cba8u: goto label_35cba8;
        case 0x35cbe8u: goto label_35cbe8;
        case 0x35cc00u: goto label_35cc00;
        case 0x35cc18u: goto label_35cc18;
        case 0x35cc30u: goto label_35cc30;
        case 0x35cd44u: goto label_35cd44;
        case 0x35cd70u: goto label_35cd70;
        case 0x35ce04u: goto label_35ce04;
        default: break;
    }

    ctx->pc = 0x35ca68u;

    // 0x35ca68: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x35ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35ca6c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ca6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ca70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35ca74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ca78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ca7c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x35ca7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35ca80: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35ca80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35ca84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35ca88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ca8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35ca90: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x35ca90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x35ca94: 0x26101378  addiu       $s0, $s0, 0x1378
    ctx->pc = 0x35ca94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4984));
    // 0x35ca98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x35ca98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x35ca9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35ca9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35caa0: 0x9604002c  lhu         $a0, 0x2C($s0)
    ctx->pc = 0x35caa0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35caa4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35caa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35caa8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x35caa8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35caac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35caacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x35cab0: 0xa6040038  sh          $a0, 0x38($s0)
    ctx->pc = 0x35cab0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x35cab4: 0x26130048  addiu       $s3, $s0, 0x48
    ctx->pc = 0x35cab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x35cab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35cab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35cabc: 0x3c14001d  lui         $s4, 0x1D
    ctx->pc = 0x35cabcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)29 << 16));
    // 0x35cac0: 0x269427b8  addiu       $s4, $s4, 0x27B8
    ctx->pc = 0x35cac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 10168));
    // 0x35cac4: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x35cac4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x35cac8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35cacc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x35caccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35cad0: 0x96640014  lhu         $a0, 0x14($s3)
    ctx->pc = 0x35cad0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x35cad4: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x35cad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x35cad8: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x35cad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x35cadc: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x35cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
    // 0x35cae0: 0x92050026  lbu         $a1, 0x26($s0)
    ctx->pc = 0x35cae0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35cae4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35cae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35cae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35caec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x35caecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x35caf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x35caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35caf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CAF4u;
    {
        const bool branch_taken_0x35caf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAF4u;
        // 0x35caf8: 0xa603002c  sh          $v1, 0x2C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caf4) {
            ctx->pc = 0x35CB08u;
            goto label_35cb08;
        }
    }
    ctx->pc = 0x35CAFCu;
    // 0x35cafc: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x35cafcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x35cb00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35cb04: 0xa602002c  sh          $v0, 0x2C($s0)
    ctx->pc = 0x35cb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 2));
label_35cb08:
    // 0x35cb08: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x35cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35cb0c: 0x4420009  bltzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35CB0Cu;
    {
        const bool branch_taken_0x35cb0c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35cb0c) {
            ctx->pc = 0x35CB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CB0Cu;
            // 0x35cb10: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CB34u;
            goto label_35cb34;
        }
    }
    ctx->pc = 0x35CB14u;
    // 0x35cb14: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x35cb14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35cb18: 0xc0d7fe4  jal         func_35FF90
    ctx->pc = 0x35CB18u;
    SET_GPR_U32(ctx, 31, 0x35CB20u);
    ctx->pc = 0x35CB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CB18u;
    // 0x35cb1c: 0x86050038  lh          $a1, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FF90u, 0x35CB18u, 0x35CB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB20u;
label_35cb20:
    // 0x35cb20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x35CB20u;
    {
        const bool branch_taken_0x35cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cb20) {
            ctx->pc = 0x35CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CB20u;
            // 0x35cb24: 0xc6600010  lwc1        $f0, 0x10($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CB38u;
            goto label_35cb38;
        }
    }
    ctx->pc = 0x35CB28u;
    // 0x35cb28: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x35cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35cb2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x35cb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x35cb30: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x35cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_35cb34:
    // 0x35cb34: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x35cb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35cb38:
    // 0x35cb38: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x35cb38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x35cb3c: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x35cb3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35cb40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x35CB40u;
    {
        const bool branch_taken_0x35cb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB40u;
        // 0x35cb44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb40) {
            ctx->pc = 0x35CB58u;
            goto label_35cb58;
        }
    }
    ctx->pc = 0x35CB48u;
    // 0x35cb48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35cb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cb4c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x35CB4Cu;
    {
        const bool branch_taken_0x35cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB4Cu;
        // 0x35cb50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb4c) {
            ctx->pc = 0x35CC34u;
            goto label_35cc34;
        }
    }
    ctx->pc = 0x35CB54u;
    // 0x35cb54: 0x0  nop
    ctx->pc = 0x35cb54u;
    // NOP
label_35cb58:
    // 0x35cb58: 0xc0d6312  jal         func_358C48
    ctx->pc = 0x35CB58u;
    SET_GPR_U32(ctx, 31, 0x35CB60u);
    ctx->pc = 0x358C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358C48u, 0x35CB58u, 0x35CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CB60u;
label_35cb60:
    // 0x35cb60: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x35cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cb64: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x35cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cb68: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x35cb68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35cb6c: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x35cb6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35cb70: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x35CB70u;
    {
        const bool branch_taken_0x35cb70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB70u;
        // 0x35cb74: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb70) {
            ctx->pc = 0x35CB7Cu;
            goto label_35cb7c;
        }
    }
    ctx->pc = 0x35CB78u;
    // 0x35cb78: 0x4600a886  mov.s       $f2, $f21
    ctx->pc = 0x35cb78u;
    ctx->f[2] = FPU_MOV_S(ctx->f[21]);
label_35cb7c:
    // 0x35cb7c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x35cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cb80: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x35cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35cb84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x35cb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35cb88: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x35cb88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35cb8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x35cb8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x35cb90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35CB90u;
    {
        const bool branch_taken_0x35cb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CB90u;
        // 0x35cb94: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cb90) {
            ctx->pc = 0x35CBA0u;
            goto label_35cba0;
        }
    }
    ctx->pc = 0x35CB98u;
    // 0x35cb98: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x35cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cb9c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x35cb9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_35cba0:
    // 0x35cba0: 0xc0d8142  jal         func_360508
    ctx->pc = 0x35CBA0u;
    SET_GPR_U32(ctx, 31, 0x35CBA8u);
    ctx->pc = 0x35CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBA0u;
    // 0x35cba4: 0x92040004  lbu         $a0, 0x4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360508u, 0x35CBA0u, 0x35CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBA8u;
label_35cba8:
    // 0x35cba8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35cba8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35cbac: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x35cbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35cbb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x35CBB0u;
    {
        const bool branch_taken_0x35cbb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CBB0u;
        // 0x35cbb4: 0x3222ffff  andi        $v0, $s1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cbb0) {
            ctx->pc = 0x35CBC0u;
            goto label_35cbc0;
        }
    }
    ctx->pc = 0x35CBB8u;
    // 0x35cbb8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x35cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cbbc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x35cbbcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_35cbc0:
    // 0x35cbc0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x35cbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35cbc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CBC4u;
    {
        const bool branch_taken_0x35cbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CBC4u;
        // 0x35cbc8: 0x8604002c  lh          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cbc4) {
            ctx->pc = 0x35CBD8u;
            goto label_35cbd8;
        }
    }
    ctx->pc = 0x35CBCCu;
    // 0x35cbcc: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x35cbccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x35cbd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35CBD0u;
    {
        const bool branch_taken_0x35cbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cbd0) {
            ctx->pc = 0x35CC08u;
            goto label_35cc08;
        }
    }
    ctx->pc = 0x35CBD8u;
label_35cbd8:
    // 0x35cbd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35cbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cbdc: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x35cbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35cbe0: 0xc0d8164  jal         func_360590
    ctx->pc = 0x35CBE0u;
    SET_GPR_U32(ctx, 31, 0x35CBE8u);
    ctx->pc = 0x35CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBE0u;
    // 0x35cbe4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x360590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360590u, 0x35CBE0u, 0x35CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CBE8u;
label_35cbe8:
    // 0x35cbe8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35cbe8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35cbec: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x35cbecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35cbf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cbf4: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x35cbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35cbf8: 0xc0d8164  jal         func_360590
    ctx->pc = 0x35CBF8u;
    SET_GPR_U32(ctx, 31, 0x35CC00u);
    ctx->pc = 0x35CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CBF8u;
    // 0x35cbfc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360590u, 0x35CBF8u, 0x35CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC00u;
label_35cc00:
    // 0x35cc00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35CC00u;
    {
        const bool branch_taken_0x35cc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC00u;
        // 0x35cc04: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc00) {
            ctx->pc = 0x35CC34u;
            goto label_35cc34;
        }
    }
    ctx->pc = 0x35CC08u;
label_35cc08:
    // 0x35cc08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35cc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc0c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x35cc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35cc10: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x35CC10u;
    SET_GPR_U32(ctx, 31, 0x35CC18u);
    ctx->pc = 0x35CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC10u;
    // 0x35cc14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x35CC10u, 0x35CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC18u;
label_35cc18:
    // 0x35cc18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35cc18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35cc1c: 0x8e06003c  lw          $a2, 0x3C($s0)
    ctx->pc = 0x35cc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x35cc20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35cc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cc24: 0x8604002c  lh          $a0, 0x2C($s0)
    ctx->pc = 0x35cc24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x35cc28: 0xc0d81b6  jal         func_3606D8
    ctx->pc = 0x35CC28u;
    SET_GPR_U32(ctx, 31, 0x35CC30u);
    ctx->pc = 0x35CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CC28u;
    // 0x35cc2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3606D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3606D8u, 0x35CC28u, 0x35CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CC30u;
label_35cc30:
    // 0x35cc30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35cc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35cc34:
    // 0x35cc34: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x35cc34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x35cc38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cc3c: 0x9603002a  lhu         $v1, 0x2A($s0)
    ctx->pc = 0x35cc3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x35cc40: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x35cc40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x35cc44: 0xa6020034  sh          $v0, 0x34($s0)
    ctx->pc = 0x35cc44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x35cc48: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x35cc48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x35cc4c: 0xa6110028  sh          $s1, 0x28($s0)
    ctx->pc = 0x35cc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 17));
    // 0x35cc50: 0xa606002a  sh          $a2, 0x2A($s0)
    ctx->pc = 0x35cc50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 6));
    // 0x35cc54: 0xa6110040  sh          $s1, 0x40($s0)
    ctx->pc = 0x35cc54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 17));
    // 0x35cc58: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35CC58u;
    {
        const bool branch_taken_0x35cc58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x35CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC58u;
        // 0x35cc5c: 0xa6060042  sh          $a2, 0x42($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc58) {
            ctx->pc = 0x35CC7Cu;
            goto label_35cc7c;
        }
    }
    ctx->pc = 0x35CC60u;
    // 0x35cc60: 0x26020044  addiu       $v0, $s0, 0x44
    ctx->pc = 0x35cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x35cc64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35cc68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x35cc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cc6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35cc70: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35CC70u;
    {
        const bool branch_taken_0x35cc70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC70u;
        // 0x35cc74: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc70) {
            ctx->pc = 0x35CC88u;
            goto label_35cc88;
        }
    }
    ctx->pc = 0x35CC78u;
    // 0x35cc78: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x35cc78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_35cc7c:
    // 0x35cc7c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35cc80: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x35CC80u;
    {
        const bool branch_taken_0x35cc80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x35cc80) {
            ctx->pc = 0x35CD3Cu;
            goto label_35cd3c;
        }
    }
    ctx->pc = 0x35CC88u;
label_35cc88:
    // 0x35cc88: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x35cc88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x35cc8c: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x35cc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35cc90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35CC90u;
    {
        const bool branch_taken_0x35cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CC90u;
        // 0x35cc94: 0x96050034  lhu         $a1, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cc90) {
            ctx->pc = 0x35CCB8u;
            goto label_35ccb8;
        }
    }
    ctx->pc = 0x35CC98u;
    // 0x35cc98: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x35cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35cc9c: 0x9784c7dc  lhu         $a0, -0x3824($gp)
    ctx->pc = 0x35cc9cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294952924)));
    // 0x35cca0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x35cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35cca4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x35cca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35cca8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x35CCA8u;
    {
        const bool branch_taken_0x35cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cca8) {
            ctx->pc = 0x35CCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CCA8u;
            // 0x35ccac: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CCE8u;
            goto label_35cce8;
        }
    }
    ctx->pc = 0x35CCB0u;
    // 0x35ccb0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35CCB0u;
    {
        const bool branch_taken_0x35ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CCB0u;
        // 0x35ccb4: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ccb0) {
            ctx->pc = 0x35CCE0u;
            goto label_35cce0;
        }
    }
    ctx->pc = 0x35CCB8u;
label_35ccb8:
    // 0x35ccb8: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x35ccb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35ccbc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x35CCBCu;
    {
        const bool branch_taken_0x35ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ccbc) {
            ctx->pc = 0x35CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CCBCu;
            // 0x35ccc0: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CCE8u;
            goto label_35cce8;
        }
    }
    ctx->pc = 0x35CCC4u;
    // 0x35ccc4: 0xb11823  subu        $v1, $a1, $s1
    ctx->pc = 0x35ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x35ccc8: 0x9784c7dc  lhu         $a0, -0x3824($gp)
    ctx->pc = 0x35ccc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294952924)));
    // 0x35cccc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x35ccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35ccd0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x35ccd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35ccd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CCD4u;
    {
        const bool branch_taken_0x35ccd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ccd4) {
            ctx->pc = 0x35CCD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CCD4u;
            // 0x35ccd8: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CCE8u;
            goto label_35cce8;
        }
    }
    ctx->pc = 0x35CCDCu;
    // 0x35ccdc: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x35ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_35cce0:
    // 0x35cce0: 0xa6020028  sh          $v0, 0x28($s0)
    ctx->pc = 0x35cce0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x35cce4: 0x86030036  lh          $v1, 0x36($s0)
    ctx->pc = 0x35cce4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
label_35cce8:
    // 0x35cce8: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x35cce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x35ccec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35CCECu;
    {
        const bool branch_taken_0x35ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CCECu;
        // 0x35ccf0: 0x96050036  lhu         $a1, 0x36($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ccec) {
            ctx->pc = 0x35CD18u;
            goto label_35cd18;
        }
    }
    ctx->pc = 0x35CCF4u;
    // 0x35ccf4: 0xc51823  subu        $v1, $a2, $a1
    ctx->pc = 0x35ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x35ccf8: 0x9784c7dc  lhu         $a0, -0x3824($gp)
    ctx->pc = 0x35ccf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294952924)));
    // 0x35ccfc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x35ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35cd00: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x35cd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35cd04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x35CD04u;
    {
        const bool branch_taken_0x35cd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD04u;
        // 0x35cd08: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd04) {
            ctx->pc = 0x35CD3Cu;
            goto label_35cd3c;
        }
    }
    ctx->pc = 0x35CD0Cu;
    // 0x35cd0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35CD0Cu;
    {
        const bool branch_taken_0x35cd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD0Cu;
        // 0x35cd10: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd0c) {
            ctx->pc = 0x35CD3Cu;
            goto label_35cd3c;
        }
    }
    ctx->pc = 0x35CD14u;
    // 0x35cd14: 0x0  nop
    ctx->pc = 0x35cd14u;
    // NOP
label_35cd18:
    // 0x35cd18: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x35cd18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35cd1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35CD1Cu;
    {
        const bool branch_taken_0x35cd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD1Cu;
        // 0x35cd20: 0xa61823  subu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd1c) {
            ctx->pc = 0x35CD3Cu;
            goto label_35cd3c;
        }
    }
    ctx->pc = 0x35CD24u;
    // 0x35cd24: 0x9784c7dc  lhu         $a0, -0x3824($gp)
    ctx->pc = 0x35cd24u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294952924)));
    // 0x35cd28: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x35cd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x35cd2c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x35cd2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35cd30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35CD30u;
    {
        const bool branch_taken_0x35cd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD30u;
        // 0x35cd34: 0xa41023  subu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd30) {
            ctx->pc = 0x35CD3Cu;
            goto label_35cd3c;
        }
    }
    ctx->pc = 0x35CD38u;
    // 0x35cd38: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x35cd38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
label_35cd3c:
    // 0x35cd3c: 0xc0d8ad6  jal         func_362B58
    ctx->pc = 0x35CD3Cu;
    SET_GPR_U32(ctx, 31, 0x35CD44u);
    ctx->pc = 0x362B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B58u, 0x35CD3Cu, 0x35CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD44u;
label_35cd44:
    // 0x35cd44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cd48: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35CD48u;
    {
        const bool branch_taken_0x35cd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35cd48) {
            ctx->pc = 0x35CD68u;
            goto label_35cd68;
        }
    }
    ctx->pc = 0x35CD50u;
    // 0x35cd50: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x35cd50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x35cd54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35CD54u;
    {
        const bool branch_taken_0x35cd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd54) {
            ctx->pc = 0x35CD68u;
            goto label_35cd68;
        }
    }
    ctx->pc = 0x35CD5Cu;
    // 0x35cd5c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x35CD5Cu;
    {
        const bool branch_taken_0x35cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CD5Cu;
        // 0x35cd60: 0xa600002e  sh          $zero, 0x2E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cd5c) {
            ctx->pc = 0x35CE08u;
            goto label_35ce08;
        }
    }
    ctx->pc = 0x35CD64u;
    // 0x35cd64: 0x0  nop
    ctx->pc = 0x35cd64u;
    // NOP
label_35cd68:
    // 0x35cd68: 0xc0d8af4  jal         func_362BD0
    ctx->pc = 0x35CD68u;
    SET_GPR_U32(ctx, 31, 0x35CD70u);
    ctx->pc = 0x362BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362BD0u, 0x35CD68u, 0x35CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CD70u;
label_35cd70:
    // 0x35cd70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35cd70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cd74: 0x92020026  lbu         $v0, 0x26($s0)
    ctx->pc = 0x35cd74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x35cd78: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x35CD78u;
    {
        const bool branch_taken_0x35cd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cd78) {
            ctx->pc = 0x35CD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CD78u;
            // 0x35cd7c: 0x9605001e  lhu         $a1, 0x1E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CDC0u;
            goto label_35cdc0;
        }
    }
    ctx->pc = 0x35CD80u;
    // 0x35cd80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35cd80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35cd84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35cd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35cd88: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x35cd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35cd8c: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x35cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35cd90: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35cd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35cd94: 0x9602001e  lhu         $v0, 0x1E($s0)
    ctx->pc = 0x35cd94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x35cd98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35cd98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35cd9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35cd9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35cda0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x35cda0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35cda4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x35cda4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x35cda8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35cda8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35cdac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35cdacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35cdb0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x35cdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35cdb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35CDB4u;
    {
        const bool branch_taken_0x35cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CDB4u;
        // 0x35cdb8: 0x8664001c  lh          $a0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cdb4) {
            ctx->pc = 0x35CDC8u;
            goto label_35cdc8;
        }
    }
    ctx->pc = 0x35CDBCu;
    // 0x35cdbc: 0x0  nop
    ctx->pc = 0x35cdbcu;
    // NOP
label_35cdc0:
    // 0x35cdc0: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x35cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35cdc4: 0x8664001c  lh          $a0, 0x1C($s3)
    ctx->pc = 0x35cdc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
label_35cdc8:
    // 0x35cdc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x35cdc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35cdcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35cdccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35cdd0: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x35cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x35cdd4: 0x28a34000  slti        $v1, $a1, 0x4000
    ctx->pc = 0x35cdd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x35cdd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x35cdd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35cddc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35cddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35cde0: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x35cde0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x35cde4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x35cde4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x35cde8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x35cde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35cdec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x35cdecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35cdf0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35cdf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35cdf4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35cdf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35cdf8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x35cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x35cdfc: 0xc0d80e6  jal         func_360398
    ctx->pc = 0x35CDFCu;
    SET_GPR_U32(ctx, 31, 0x35CE04u);
    ctx->pc = 0x35CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CDFCu;
    // 0x35ce00: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360398u, 0x35CDFCu, 0x35CE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE04u;
label_35ce04:
    // 0x35ce04: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x35ce04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
label_35ce08:
    // 0x35ce08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ce08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ce0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ce0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ce10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ce10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ce14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35ce14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ce18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35ce18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ce1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35ce1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ce20: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x35ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35ce24: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35ce28: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE28u;
        // 0x35ce2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE30u;
}
