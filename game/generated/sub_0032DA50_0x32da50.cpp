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

// Function: sub_0032DA50
// Address: 0x32da50 - 0x32db80
void sub_0032DA50_0x32da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DA50_0x32da50");
#endif

    ctx->pc = 0x32da50u;

    // 0x32da50: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x32da50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32da54: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x32da54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32da5c: 0x25650010  addiu       $a1, $t3, 0x10
    ctx->pc = 0x32da5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x32da60: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x32da60u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    // 0x32da64: 0x24e24000  addiu       $v0, $a3, 0x4000
    ctx->pc = 0x32da64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16384));
    // 0x32da68: 0x30e48000  andi        $a0, $a3, 0x8000
    ctx->pc = 0x32da68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x32da6c: 0x30438000  andi        $v1, $v0, 0x8000
    ctx->pc = 0x32da6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x32da70: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x32da70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x32da74: 0x45400  sll         $t2, $a0, 16
    ctx->pc = 0x32da74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x32da78: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x32da78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32da7c: 0x30e94000  andi        $t1, $a3, 0x4000
    ctx->pc = 0x32da7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16384);
    // 0x32da80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DA80u;
    {
        const bool branch_taken_0x32da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DA80u;
        // 0x32da84: 0x30e63fff  andi        $a2, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32da80) {
            ctx->pc = 0x32DA90u;
            goto label_32da90;
        }
    }
    ctx->pc = 0x32DA88u;
    // 0x32da88: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32da8c: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x32da8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_32da90:
    // 0x32da90: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x32da90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x32da94: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x32da94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32da98: 0x24660340  addiu       $a2, $v1, 0x340
    ctx->pc = 0x32da98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 832));
    // 0x32da9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32da9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32daa0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32daa4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32daa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32daa8: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x32daa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x32daac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32daacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32dab0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x32dab0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32dab4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x32DAB4u;
    {
        const bool branch_taken_0x32dab4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x32DAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAB4u;
        // 0x32dab8: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dab4) {
            ctx->pc = 0x32DAF8u;
            goto label_32daf8;
        }
    }
    ctx->pc = 0x32DABCu;
    // 0x32dabc: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32DABCu;
    {
        const bool branch_taken_0x32dabc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DABCu;
        // 0x32dac0: 0x30e43fff  andi        $a0, $a3, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dabc) {
            ctx->pc = 0x32DACCu;
            goto label_32dacc;
        }
    }
    ctx->pc = 0x32DAC4u;
    // 0x32dac4: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32dac8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32dacc:
    // 0x32dacc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32daccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32dad0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32dad4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32dad8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x32dad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x32dadc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32dadcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32dae0: 0x0  nop
    ctx->pc = 0x32dae0u;
    // NOP
    // 0x32dae4: 0x0  nop
    ctx->pc = 0x32dae4u;
    // NOP
    // 0x32dae8: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x32dae8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
    // 0x32daec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32DAECu;
    {
        const bool branch_taken_0x32daec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32daec) {
            ctx->pc = 0x32DAFCu;
            goto label_32dafc;
        }
    }
    ctx->pc = 0x32DAF4u;
    // 0x32daf4: 0x0  nop
    ctx->pc = 0x32daf4u;
    // NOP
label_32daf8:
    // 0x32daf8: 0xc4444e58  lwc1        $f4, 0x4E58($v0)
    ctx->pc = 0x32daf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_32dafc:
    // 0x32dafc: 0x0  nop
    ctx->pc = 0x32dafcu;
    // NOP
    // 0x32db00: 0x0  nop
    ctx->pc = 0x32db00u;
    // NOP
    // 0x32db04: 0x460c2003  div.s       $f0, $f4, $f12
    ctx->pc = 0x32db04u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[0] = ctx->f[4] / ctx->f[12];
    // 0x32db08: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x32db08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x32db0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32db0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32db10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32db10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x32db14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32db14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32db18: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x32db18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x32db1c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32db1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32db20: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x32db20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x32db24: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x32db24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x32db28: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x32db28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x32db2c: 0x0  nop
    ctx->pc = 0x32db2cu;
    // NOP
    // 0x32db30: 0x0  nop
    ctx->pc = 0x32db30u;
    // NOP
    // 0x32db34: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x32db34u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[4];
    // 0x32db38: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x32db38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x32db3c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x32db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x32db40: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x32db40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x32db44: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x32db44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x32db48: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x32db48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x32db4c: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x32db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x32db50: 0x0  nop
    ctx->pc = 0x32db50u;
    // NOP
    // 0x32db54: 0x0  nop
    ctx->pc = 0x32db54u;
    // NOP
    // 0x32db58: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x32db58u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x32db5c: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x32db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x32db60: 0xe4a10024  swc1        $f1, 0x24($a1)
    ctx->pc = 0x32db60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x32db64: 0xe4a3002c  swc1        $f3, 0x2C($a1)
    ctx->pc = 0x32db64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x32db68: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x32db68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x32db6c: 0xe4a30028  swc1        $f3, 0x28($a1)
    ctx->pc = 0x32db6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x32db70: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x32db70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x32db74: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x32db74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x32db78: 0x3e00008  jr          $ra
    ctx->pc = 0x32DB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB78u;
        // 0x32db7c: 0xad6000e4  sw          $zero, 0xE4($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DB80u;
}
