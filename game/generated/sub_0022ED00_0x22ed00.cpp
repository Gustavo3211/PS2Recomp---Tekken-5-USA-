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

// Function: sub_0022ED00
// Address: 0x22ed00 - 0x22eea0
void sub_0022ED00_0x22ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ED00_0x22ed00");
#endif

    switch (ctx->pc) {
        case 0x22ee60u: goto label_22ee60;
        case 0x22ee84u: goto label_22ee84;
        case 0x22ee8cu: goto label_22ee8c;
        default: break;
    }

    ctx->pc = 0x22ed00u;

    // 0x22ed00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22ed04: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x22ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x22ed08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22ed08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22ed0c: 0x2450dc90  addiu       $s0, $v0, -0x2370
    ctx->pc = 0x22ed0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958224));
    // 0x22ed10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22ed10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22ed14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ed18: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x22ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22ed1c: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x22ed1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22ed20: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x22ed20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22ed24: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x22ed24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22ed28: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x22ed28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ed2c: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x22ed2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ed30: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x22ed30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3ADC98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3ADC98u, _value); } while (0);
    // 0x22ed34: 0x94a2000c  lhu         $v0, 0xC($a1)
    ctx->pc = 0x22ed34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x22ed38: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ED38u;
    {
        const bool branch_taken_0x22ed38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED38u;
        // 0x22ed3c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed38) {
            ctx->pc = 0x22ED50u;
            goto label_22ed50;
        }
    }
    ctx->pc = 0x22ED40u;
    // 0x22ed40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ed40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ed44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22ed44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22ed48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22ED48u;
    {
        const bool branch_taken_0x22ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED48u;
        // 0x22ed4c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed48) {
            ctx->pc = 0x22ED68u;
            goto label_22ed68;
        }
    }
    ctx->pc = 0x22ED50u;
label_22ed50:
    // 0x22ed50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ed54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ed54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ed58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ed58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ed5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22ed5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22ed60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22ed60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x22ed64: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22ed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_22ed68:
    // 0x22ed68: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x22ed68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x22ed6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22ED6Cu;
    {
        const bool branch_taken_0x22ed6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22ED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED6Cu;
        // 0x22ed70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed6c) {
            ctx->pc = 0x22ED88u;
            goto label_22ed88;
        }
    }
    ctx->pc = 0x22ED74u;
    // 0x22ed74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22ed74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22ed78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22ed78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22ed7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22ED7Cu;
    {
        const bool branch_taken_0x22ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ED7Cu;
        // 0x22ed80: 0xe602001c  swc1        $f2, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed7c) {
            ctx->pc = 0x22EDA0u;
            goto label_22eda0;
        }
    }
    ctx->pc = 0x22ED84u;
    // 0x22ed84: 0x0  nop
    ctx->pc = 0x22ed84u;
    // NOP
label_22ed88:
    // 0x22ed88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ed8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x22ed90: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22ed90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22ed94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x22ed94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x22ed98: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x22ed98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x22ed9c: 0xe602001c  swc1        $f2, 0x1C($s0)
    ctx->pc = 0x22ed9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_22eda0:
    // 0x22eda0: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x22eda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eda4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x22eda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eda8: 0x0  nop
    ctx->pc = 0x22eda8u;
    // NOP
    // 0x22edac: 0x0  nop
    ctx->pc = 0x22edacu;
    // NOP
    // 0x22edb0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x22edb0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x22edb4: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x22edb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x22edb8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x22edb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22edbc: 0x0  nop
    ctx->pc = 0x22edbcu;
    // NOP
    // 0x22edc0: 0x0  nop
    ctx->pc = 0x22edc0u;
    // NOP
    // 0x22edc4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x22edc4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x22edc8: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x22edc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x22edcc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x22edccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x22edd0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x22edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x22edd4: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x22edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22edd8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22edd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22eddc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22EDDCu;
    {
        const bool branch_taken_0x22eddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EDDCu;
        // 0x22ede0: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eddc) {
            ctx->pc = 0x22EDF4u;
            goto label_22edf4;
        }
    }
    ctx->pc = 0x22EDE4u;
    // 0x22ede4: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x22ede4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x22ede8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x22ede8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x22edec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x22edf0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x22edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_22edf4:
    // 0x22edf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EDF4u;
    {
        const bool branch_taken_0x22edf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edf4) {
            ctx->pc = 0x22EE08u;
            goto label_22ee08;
        }
    }
    ctx->pc = 0x22EDFCu;
    // 0x22edfc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x22edfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22ee00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22ee04: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x22ee04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_22ee08:
    // 0x22ee08: 0x68a20017  ldl         $v0, 0x17($a1)
    ctx->pc = 0x22ee08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22ee0c: 0x6ca20010  ldr         $v0, 0x10($a1)
    ctx->pc = 0x22ee0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22ee10: 0x68a3001f  ldl         $v1, 0x1F($a1)
    ctx->pc = 0x22ee10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22ee14: 0x6ca30018  ldr         $v1, 0x18($a1)
    ctx->pc = 0x22ee14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22ee18: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x22ee18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee1c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x22ee1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee20: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x22ee20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee24: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x22ee24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee28: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x22ee28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x22ee2c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x22ee2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x22ee30: 0x6ba8000f  ldl         $t0, 0xF($sp)
    ctx->pc = 0x22ee30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x22ee34: 0x6fa80008  ldr         $t0, 0x8($sp)
    ctx->pc = 0x22ee34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x22ee38: 0xb2070037  sdl         $a3, 0x37($s0)
    ctx->pc = 0x22ee38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee3c: 0xb6070030  sdr         $a3, 0x30($s0)
    ctx->pc = 0x22ee3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee40: 0xb208003f  sdl         $t0, 0x3F($s0)
    ctx->pc = 0x22ee40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee44: 0xb6080038  sdr         $t0, 0x38($s0)
    ctx->pc = 0x22ee44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ee48: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x22ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x22ee4c: 0x344202e0  ori         $v0, $v0, 0x2E0
    ctx->pc = 0x22ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)736);
    // 0x22ee50: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x22ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x22ee54: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x22ee58: 0xc0cb7d4  jal         func_32DF50
    ctx->pc = 0x22EE58u;
    SET_GPR_U32(ctx, 31, 0x22EE60u);
    ctx->pc = 0x22EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE58u;
    // 0x22ee5c: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF50u, 0x22EE58u, 0x22EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE60u;
label_22ee60:
    // 0x22ee60: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x22ee60u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22ee64: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x22ee64u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x22ee68: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x22ee68u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22ee6c: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x22ee6cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x22ee70: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x22ee70u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x22ee74: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x22ee74u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x22ee78: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x22ee78u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x22ee7c: 0xc0c96de  jal         func_325B78
    ctx->pc = 0x22EE7Cu;
    SET_GPR_U32(ctx, 31, 0x22EE84u);
    ctx->pc = 0x22EE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE7Cu;
    // 0x22ee80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325B78u, 0x22EE7Cu, 0x22EE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE84u;
label_22ee84:
    // 0x22ee84: 0xc0cb7e0  jal         func_32DF80
    ctx->pc = 0x22EE84u;
    SET_GPR_U32(ctx, 31, 0x22EE8Cu);
    ctx->pc = 0x32DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF80u, 0x22EE84u, 0x22EE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE8Cu;
label_22ee8c:
    // 0x22ee8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22ee8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ee90: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22ee90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22ee94: 0x3e00008  jr          $ra
    ctx->pc = 0x22EE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE94u;
        // 0x22ee98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE9Cu;
    // 0x22ee9c: 0x0  nop
    ctx->pc = 0x22ee9cu;
    // NOP
    ctx->pc = 0x22eea0u;
}
