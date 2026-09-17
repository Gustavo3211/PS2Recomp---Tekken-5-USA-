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

// Function: sub_0020CB80
// Address: 0x20cb80 - 0x20d310
void sub_0020CB80_0x20cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB80_0x20cb80");
#endif

    switch (ctx->pc) {
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc78u: goto label_20cc78;
        case 0x20cc98u: goto label_20cc98;
        case 0x20cde8u: goto label_20cde8;
        case 0x20cdfcu: goto label_20cdfc;
        case 0x20ce34u: goto label_20ce34;
        case 0x20ce48u: goto label_20ce48;
        case 0x20cf7cu: goto label_20cf7c;
        case 0x20d028u: goto label_20d028;
        case 0x20d03cu: goto label_20d03c;
        case 0x20d04cu: goto label_20d04c;
        case 0x20d058u: goto label_20d058;
        default: break;
    }

    ctx->pc = 0x20cb80u;

    // 0x20cb80: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x20cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x20cb84: 0xe7b90100  swc1        $f25, 0x100($sp)
    ctx->pc = 0x20cb84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x20cb88: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x20cb88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x20cb8c: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x20cb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x20cb90: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x20cb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x20cb94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20cb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cb98: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x20cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x20cb9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x20cb9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cba0: 0x3a6282b  sltu        $a1, $sp, $a2
    ctx->pc = 0x20cba0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20cba4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x20cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x20cba8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x20cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x20cbac: 0x26540750  addiu       $s4, $s2, 0x750
    ctx->pc = 0x20cbacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 1872));
    // 0x20cbb0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x20cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x20cbb4: 0x26750750  addiu       $s5, $s3, 0x750
    ctx->pc = 0x20cbb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1872));
    // 0x20cbb8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x20cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x20cbbc: 0x26760510  addiu       $s6, $s3, 0x510
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1296));
    // 0x20cbc0: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x20cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x20cbc4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20cbc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cbc8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x20cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x20cbcc: 0x26510510  addiu       $s1, $s2, 0x510
    ctx->pc = 0x20cbccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
    // 0x20cbd0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x20cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x20cbd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cbd8: 0xe7bf0130  swc1        $f31, 0x130($sp)
    ctx->pc = 0x20cbd8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x20cbdc: 0x26630490  addiu       $v1, $s3, 0x490
    ctx->pc = 0x20cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
    // 0x20cbe0: 0xe7be0128  swc1        $f30, 0x128($sp)
    ctx->pc = 0x20cbe0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x20cbe4: 0xe7bd0120  swc1        $f29, 0x120($sp)
    ctx->pc = 0x20cbe4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x20cbe8: 0xe7bc0118  swc1        $f28, 0x118($sp)
    ctx->pc = 0x20cbe8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x20cbec: 0xe7bb0110  swc1        $f27, 0x110($sp)
    ctx->pc = 0x20cbecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x20cbf0: 0xe7ba0108  swc1        $f26, 0x108($sp)
    ctx->pc = 0x20cbf0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x20cbf4: 0xe7b800f8  swc1        $f24, 0xF8($sp)
    ctx->pc = 0x20cbf4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x20cbf8: 0xe7b700f0  swc1        $f23, 0xF0($sp)
    ctx->pc = 0x20cbf8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x20cbfc: 0xe7b600e8  swc1        $f22, 0xE8($sp)
    ctx->pc = 0x20cbfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x20cc00: 0xe7b500e0  swc1        $f21, 0xE0($sp)
    ctx->pc = 0x20cc00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x20cc04: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x20cc04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x20cc08: 0xe6590690  swc1        $f25, 0x690($s2)
    ctx->pc = 0x20cc08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1680), bits); }
    // 0x20cc0c: 0xe6590694  swc1        $f25, 0x694($s2)
    ctx->pc = 0x20cc0cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1684), bits); }
    // 0x20cc10: 0xe6590698  swc1        $f25, 0x698($s2)
    ctx->pc = 0x20cc10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1688), bits); }
    // 0x20cc14: 0xe6790690  swc1        $f25, 0x690($s3)
    ctx->pc = 0x20cc14u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1680), bits); }
    // 0x20cc18: 0xe6790694  swc1        $f25, 0x694($s3)
    ctx->pc = 0x20cc18u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1684), bits); }
    // 0x20cc1c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x20CC1Cu;
    {
        const bool branch_taken_0x20cc1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC1Cu;
        // 0x20cc20: 0xe6790698  swc1        $f25, 0x698($s3) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc1c) {
            ctx->pc = 0x20CC5Cu;
            goto label_20cc5c;
        }
    }
    ctx->pc = 0x20CC24u;
    // 0x20cc24: 0x0  nop
    ctx->pc = 0x20cc24u;
    // NOP
label_20cc28:
    // 0x20cc28: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x20cc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x20cc2c: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x20cc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x20cc30: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x20cc30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x20cc34: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x20cc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x20cc38: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x20cc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20cc3c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x20cc3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20cc40: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x20cc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20cc44: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x20cc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20cc48: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20cc4c: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x20cc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20cc50: 0x0  nop
    ctx->pc = 0x20cc50u;
    // NOP
    // 0x20cc54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20CC54u;
    {
        const bool branch_taken_0x20cc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC54u;
        // 0x20cc58: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc54) {
            ctx->pc = 0x20CC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cc28;
        }
    }
    ctx->pc = 0x20CC5Cu;
label_20cc5c:
    // 0x20cc5c: 0x26440490  addiu       $a0, $s2, 0x490
    ctx->pc = 0x20cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x20cc60: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x20cc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20cc64: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x20CC64u;
    {
        const bool branch_taken_0x20cc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cc64) {
            ctx->pc = 0x20CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC64u;
            // 0x20cc68: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD44u;
            goto label_20cd44;
        }
    }
    ctx->pc = 0x20CC6Cu;
    // 0x20cc6c: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x20cc6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x20cc70: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x20cc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cc74: 0x0  nop
    ctx->pc = 0x20cc74u;
    // NOP
label_20cc78:
    // 0x20cc78: 0x46090032  c.eq.s      $f0, $f9
    ctx->pc = 0x20cc78u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cc7c: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x20CC7Cu;
    {
        const bool branch_taken_0x20cc7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cc7c) {
            ctx->pc = 0x20CC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC7Cu;
            // 0x20cc80: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD34u;
            goto label_20cd34;
        }
    }
    ctx->pc = 0x20CC84u;
    // 0x20cc84: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x20CC84u;
    {
        const bool branch_taken_0x20cc84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC84u;
        // 0x20cc88: 0x3a0182d  daddu       $v1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc84) {
            ctx->pc = 0x20CD30u;
            goto label_20cd30;
        }
    }
    ctx->pc = 0x20CC8Cu;
    // 0x20cc8c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x20cc8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x20cc90: 0x460001c6  mov.s       $f7, $f0
    ctx->pc = 0x20cc90u;
    ctx->f[7] = FPU_MOV_S(ctx->f[0]);
    // 0x20cc94: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x20cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20cc98:
    // 0x20cc98: 0x46080032  c.eq.s      $f0, $f8
    ctx->pc = 0x20cc98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cc9c: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x20CC9Cu;
    {
        const bool branch_taken_0x20cc9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cc9c) {
            ctx->pc = 0x20CCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CC9Cu;
            // 0x20cca0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD24u;
            goto label_20cd24;
        }
    }
    ctx->pc = 0x20CCA4u;
    // 0x20cca4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20cca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cca8: 0x46003980  add.s       $f6, $f7, $f0
    ctx->pc = 0x20cca8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x20ccac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x20ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ccb0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x20ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ccb4: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x20ccb4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20ccb8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x20ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ccbc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x20ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20ccc0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x20ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20ccc4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x20ccc4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x20ccc8: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x20ccc8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
    // 0x20cccc: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x20ccccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ccd0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20CCD0u;
    {
        const bool branch_taken_0x20ccd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CCD0u;
        // 0x20ccd4: 0x46022081  sub.s       $f2, $f4, $f2 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ccd0) {
            ctx->pc = 0x20CD20u;
            goto label_20cd20;
        }
    }
    ctx->pc = 0x20CCD8u;
    // 0x20ccd8: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x20ccd8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x20ccdc: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20ccdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cce0: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x20CCE0u;
    {
        const bool branch_taken_0x20cce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cce0) {
            ctx->pc = 0x20CCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CCE0u;
            // 0x20cce4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD24u;
            goto label_20cd24;
        }
    }
    ctx->pc = 0x20CCE8u;
    // 0x20cce8: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x20cce8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x20ccec: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x20ccecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ccf0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x20CCF0u;
    {
        const bool branch_taken_0x20ccf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ccf0) {
            ctx->pc = 0x20CCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CCF0u;
            // 0x20ccf4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD24u;
            goto label_20cd24;
        }
    }
    ctx->pc = 0x20CCF8u;
    // 0x20ccf8: 0x46052802  mul.s       $f0, $f5, $f5
    ctx->pc = 0x20ccf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x20ccfc: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x20ccfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20cd00: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20cd00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20cd04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20cd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cd08: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20cd08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20cd0c: 0x0  nop
    ctx->pc = 0x20cd0cu;
    // NOP
    // 0x20cd10: 0x0  nop
    ctx->pc = 0x20cd10u;
    // NOP
    // 0x20cd14: 0x46000004  c1          0x4
    ctx->pc = 0x20cd14u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20cd18: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x20cd18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x20cd1c: 0x46190668  max.s       $f25, $f0, $f25
    ctx->pc = 0x20cd1cu;
    ctx->f[25] = std::max(ctx->f[0], ctx->f[25]);
label_20cd20:
    // 0x20cd20: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_20cd24:
    // 0x20cd24: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20cd24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x20cd28: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x20CD28u;
    {
        const bool branch_taken_0x20cd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd28) {
            ctx->pc = 0x20CD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CD28u;
            // 0x20cd2c: 0xc460000c  lwc1        $f0, 0xC($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cc98;
        }
    }
    ctx->pc = 0x20CD30u;
label_20cd30:
    // 0x20cd30: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_20cd34:
    // 0x20cd34: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x20cd34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x20cd38: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x20CD38u;
    {
        const bool branch_taken_0x20cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cd38) {
            ctx->pc = 0x20CD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CD38u;
            // 0x20cd3c: 0xc480000c  lwc1        $f0, 0xC($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20cc78;
        }
    }
    ctx->pc = 0x20CD40u;
    // 0x20cd40: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x20cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_20cd44:
    // 0x20cd44: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x20cd44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20cd48: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x20CD48u;
    {
        const bool branch_taken_0x20cd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd48) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CD50u;
    // 0x20cd50: 0x8e6200c4  lw          $v0, 0xC4($s3)
    ctx->pc = 0x20cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x20cd54: 0x94430044  lhu         $v1, 0x44($v0)
    ctx->pc = 0x20cd54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20cd58: 0x10600053  beqz        $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x20CD58u;
    {
        const bool branch_taken_0x20cd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cd58) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CD60u;
    // 0x20cd60: 0x4480e000  mtc1        $zero, $f28
    ctx->pc = 0x20cd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x20cd64: 0x4619e034  c.lt.s      $f28, $f25
    ctx->pc = 0x20cd64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[28], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cd68: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x20CD68u;
    {
        const bool branch_taken_0x20cd68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cd68) {
            ctx->pc = 0x20CD6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CD68u;
            // 0x20cd6c: 0x8642000e  lh          $v0, 0xE($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CD98u;
            goto label_20cd98;
        }
    }
    ctx->pc = 0x20CD70u;
    // 0x20cd70: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x20cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cd74: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x20cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cd78: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x20cd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x20cd7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20cd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20cd80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20cd80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20cd84: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20cd84u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20cd88: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20cd88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20cd8c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
    ctx->pc = 0x20CD8Cu;
    {
        const bool branch_taken_0x20cd8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20cd8c) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CD94u;
    // 0x20cd94: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x20cd94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
label_20cd98:
    // 0x20cd98: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x20cd98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20cd9c: 0xc79483b8  lwc1        $f20, -0x7C48($gp)
    ctx->pc = 0x20cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20cda0: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20cda4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x20cda4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20cda8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20cda8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20cdac: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x20cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x20cdb0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20cdb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20cdb4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x20cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cdb8: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x20cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20cdbc: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x20cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20cdc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20cdc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20cdc4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20cdc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20cdc8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x20cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cdcc: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x20cdccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
    // 0x20cdd0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x20cdd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x20cdd4: 0x46032681  sub.s       $f26, $f4, $f3
    ctx->pc = 0x20cdd4u;
    ctx->f[26] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x20cdd8: 0x46000ec1  sub.s       $f27, $f1, $f0
    ctx->pc = 0x20cdd8u;
    ctx->f[27] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20cddc: 0x46141602  mul.s       $f24, $f2, $f20
    ctx->pc = 0x20cddcu;
    ctx->f[24] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x20cde0: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x20CDE0u;
    SET_GPR_U32(ctx, 31, 0x20CDE8u);
    ctx->pc = 0x20CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDE0u;
    // 0x20cde4: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x20CDE0u, 0x20CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDE8u;
label_20cde8:
    // 0x20cde8: 0xc6970000  lwc1        $f23, 0x0($s4)
    ctx->pc = 0x20cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20cdec: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20cdecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x20cdf0: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x20cdf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x20cdf4: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20CDF4u;
    SET_GPR_U32(ctx, 31, 0x20CDFCu);
    ctx->pc = 0x20CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CDF4u;
    // 0x20cdf8: 0x4600bdc0  add.s       $f23, $f23, $f0 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20CDF4u, 0x20CDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CDFCu;
label_20cdfc:
    // 0x20cdfc: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x20cdfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x20ce00: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20ce00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x20ce04: 0xc6950008  lwc1        $f21, 0x8($s4)
    ctx->pc = 0x20ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20ce08: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20ce0c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x20ce0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20ce10: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20ce10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20ce14: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20ce14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20ce18: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x20ce18u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x20ce1c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x20ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20ce20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20ce20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ce24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20ce24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20ce28: 0x46140602  mul.s       $f24, $f0, $f20
    ctx->pc = 0x20ce28u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x20ce2c: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x20CE2Cu;
    SET_GPR_U32(ctx, 31, 0x20CE34u);
    ctx->pc = 0x20CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE2Cu;
    // 0x20ce30: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x20CE2Cu, 0x20CE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE34u;
label_20ce34:
    // 0x20ce34: 0xc6b40000  lwc1        $f20, 0x0($s5)
    ctx->pc = 0x20ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20ce38: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20ce38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x20ce3c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x20ce3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x20ce40: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20CE40u;
    SET_GPR_U32(ctx, 31, 0x20CE48u);
    ctx->pc = 0x20CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CE40u;
    // 0x20ce44: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20CE40u, 0x20CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CE48u;
label_20ce48:
    // 0x20ce48: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x20ce48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x20ce4c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x20ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20ce50: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x20ce50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x20ce54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20ce54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20ce58: 0x4617a101  sub.s       $f4, $f20, $f23
    ctx->pc = 0x20ce58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[23]);
    // 0x20ce5c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20ce5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20ce60: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x20ce60u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x20ce64: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20ce64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ce68: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x20CE68u;
    {
        const bool branch_taken_0x20ce68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20CE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CE68u;
        // 0x20ce6c: 0x46150841  sub.s       $f1, $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ce68) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CE70u;
    // 0x20ce70: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x20ce70u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x20ce74: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20ce74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ce78: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x20CE78u;
    {
        const bool branch_taken_0x20ce78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ce78) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CE80u;
    // 0x20ce80: 0x4604d002  mul.s       $f0, $f26, $f4
    ctx->pc = 0x20ce80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[4]);
    // 0x20ce84: 0x4601d842  mul.s       $f1, $f27, $f1
    ctx->pc = 0x20ce84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
    // 0x20ce88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20ce88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20ce8c: 0x461c0034  c.lt.s      $f0, $f28
    ctx->pc = 0x20ce8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[28])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ce90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20CE90u;
    {
        const bool branch_taken_0x20ce90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20ce90) {
            ctx->pc = 0x20CEA8u;
            goto label_20cea8;
        }
    }
    ctx->pc = 0x20CE98u;
    // 0x20ce98: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x20ce98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20ce9c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x20ce9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x20cea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20cea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20cea4: 0x4600ce68  max.s       $f25, $f25, $f0
    ctx->pc = 0x20cea4u;
    ctx->f[25] = std::max(ctx->f[25], ctx->f[0]);
label_20cea8:
    // 0x20cea8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20cea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20ceac: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x20ceacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20ceb0: 0x45000100  bc1f        . + 4 + (0x100 << 2)
    ctx->pc = 0x20CEB0u;
    {
        const bool branch_taken_0x20ceb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CEB0u;
        // 0x20ceb4: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ceb0) {
            ctx->pc = 0x20D2B4u;
            goto label_20d2b4;
        }
    }
    ctx->pc = 0x20CEB8u;
    // 0x20ceb8: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x20ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cebc: 0xc6980000  lwc1        $f24, 0x0($s4)
    ctx->pc = 0x20cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20cec0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x20cec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20cec4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x20cec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cec8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x20cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20cecc: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x20ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20ced0: 0x4601c041  sub.s       $f1, $f24, $f1
    ctx->pc = 0x20ced0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
    // 0x20ced4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x20ced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20ced8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x20ced8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x20cedc: 0xc69a0008  lwc1        $f26, 0x8($s4)
    ctx->pc = 0x20cedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x20cee0: 0xc6a60004  lwc1        $f6, 0x4($s5)
    ctx->pc = 0x20cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20cee4: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x20cee4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x20cee8: 0xc6bb0000  lwc1        $f27, 0x0($s5)
    ctx->pc = 0x20cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x20ceec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20ceecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20cef0: 0xe7a60084  swc1        $f6, 0x84($sp)
    ctx->pc = 0x20cef0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x20cef4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20cef4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20cef8: 0xc6bc0008  lwc1        $f28, 0x8($s5)
    ctx->pc = 0x20cef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x20cefc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20cefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20cf00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x20cf00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20cf04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x20cf04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20cf08: 0x0  nop
    ctx->pc = 0x20cf08u;
    // NOP
    // 0x20cf0c: 0x0  nop
    ctx->pc = 0x20cf0cu;
    // NOP
    // 0x20cf10: 0x460105c4  c1          0x105C4
    ctx->pc = 0x20cf10u;
    ctx->f[23] = FPU_SQRT_S(ctx->f[0]);
    // 0x20cf14: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x20cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20cf18: 0x4600bf86  mov.s       $f30, $f23
    ctx->pc = 0x20cf18u;
    ctx->f[30] = FPU_MOV_S(ctx->f[23]);
    // 0x20cf1c: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x20cf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20cf20: 0x4600d801  sub.s       $f0, $f27, $f0
    ctx->pc = 0x20cf20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
    // 0x20cf24: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x20cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cf28: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x20cf28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x20cf2c: 0x4601e041  sub.s       $f1, $f28, $f1
    ctx->pc = 0x20cf2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[28], ctx->f[1]);
    // 0x20cf30: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20cf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20cf34: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x20cf34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x20cf38: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x20cf38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x20cf3c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x20cf3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20cf40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20cf40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20cf44: 0x0  nop
    ctx->pc = 0x20cf44u;
    // NOP
    // 0x20cf48: 0x0  nop
    ctx->pc = 0x20cf48u;
    // NOP
    // 0x20cf4c: 0x46000584  c1          0x584
    ctx->pc = 0x20cf4cu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
    // 0x20cf50: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x20cf50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x20cf54: 0x4618db01  sub.s       $f12, $f27, $f24
    ctx->pc = 0x20cf54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[27], ctx->f[24]);
    // 0x20cf58: 0x461ae341  sub.s       $f13, $f28, $f26
    ctx->pc = 0x20cf58u;
    ctx->f[13] = FPU_SUB_S(ctx->f[28], ctx->f[26]);
    // 0x20cf5c: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x20cf5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20cf60: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x20cf60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20cf64: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20cf68: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20cf68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20cf6c: 0x4600b746  mov.s       $f29, $f22
    ctx->pc = 0x20cf6cu;
    ctx->f[29] = FPU_MOV_S(ctx->f[22]);
    // 0x20cf70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20cf70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20cf74: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x20CF74u;
    SET_GPR_U32(ctx, 31, 0x20CF7Cu);
    ctx->pc = 0x20CF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF74u;
    // 0x20cf78: 0x2028823  subu        $s1, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x20CF74u, 0x20CF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF7Cu;
label_20cf7c:
    // 0x20cf7c: 0xc78183bc  lwc1        $f1, -0x7C44($gp)
    ctx->pc = 0x20cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20cf80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20cf80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20cf84: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20cf84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20cf88: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20cf88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20cf8c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x20cf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20cf90: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20cf90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20cf94: 0x2024023  subu        $t0, $s0, $v0
    ctx->pc = 0x20cf94u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x20cf98: 0x2281823  subu        $v1, $s1, $t0
    ctx->pc = 0x20cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x20cf9c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x20cf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x20cfa0: 0x28620800  slti        $v0, $v1, 0x800
    ctx->pc = 0x20cfa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x20cfa4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CFA4u;
    {
        const bool branch_taken_0x20cfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20cfa4) {
            ctx->pc = 0x20CFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CFA4u;
            // 0x20cfa8: 0x8662000e  lh          $v0, 0xE($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CFB8u;
            goto label_20cfb8;
        }
    }
    ctx->pc = 0x20CFACu;
    // 0x20cfac: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x20cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20cfb0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x20cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20cfb4: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x20cfb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_20cfb8:
    // 0x20cfb8: 0x28660401  slti        $a2, $v1, 0x401
    ctx->pc = 0x20cfb8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x20cfbc: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x20cfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x20cfc0: 0x25080800  addiu       $t0, $t0, 0x800
    ctx->pc = 0x20cfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2048));
    // 0x20cfc4: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x20cfc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20cfc8: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x20cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20cfcc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x20cfccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x20cfd0: 0x26250800  addiu       $a1, $s1, 0x800
    ctx->pc = 0x20cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2048));
    // 0x20cfd4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x20cfd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x20cfd8: 0xe28023  subu        $s0, $a3, $v0
    ctx->pc = 0x20cfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x20cfdc: 0x2081823  subu        $v1, $s0, $t0
    ctx->pc = 0x20cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x20cfe0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x20cfe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x20cfe4: 0x28620800  slti        $v0, $v1, 0x800
    ctx->pc = 0x20cfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x20cfe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CFE8u;
    {
        const bool branch_taken_0x20cfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFE8u;
        // 0x20cfec: 0xa6880a  movz        $s1, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cfe8) {
            ctx->pc = 0x20D000u;
            goto label_20d000;
        }
    }
    ctx->pc = 0x20CFF0u;
    // 0x20cff0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x20cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20cff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20CFF4u;
    {
        const bool branch_taken_0x20cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFF4u;
        // 0x20cff8: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cff4) {
            ctx->pc = 0x20D004u;
            goto label_20d004;
        }
    }
    ctx->pc = 0x20CFFCu;
    // 0x20cffc: 0x0  nop
    ctx->pc = 0x20cffcu;
    // NOP
label_20d000:
    // 0x20d000: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20d000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20d004:
    // 0x20d004: 0x4491a000  mtc1        $s1, $f20
    ctx->pc = 0x20d004u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d008: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20d008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20d00c: 0xc79583c0  lwc1        $f21, -0x7C40($gp)
    ctx->pc = 0x20d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d010: 0x28430401  slti        $v1, $v0, 0x401
    ctx->pc = 0x20d010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x20d014: 0x26020800  addiu       $v0, $s0, 0x800
    ctx->pc = 0x20d014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
    // 0x20d018: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x20d018u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x20d01c: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x20d01cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x20d020: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20D020u;
    SET_GPR_U32(ctx, 31, 0x20D028u);
    ctx->pc = 0x20D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D020u;
    // 0x20d024: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20D020u, 0x20D028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D028u;
label_20d028:
    // 0x20d028: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d02c: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x20d02cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20d030: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20d030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20d034: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x20D034u;
    SET_GPR_U32(ctx, 31, 0x20D03Cu);
    ctx->pc = 0x20D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D034u;
    // 0x20d038: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x20D034u, 0x20D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D03Cu;
label_20d03c:
    // 0x20d03c: 0x460007c6  mov.s       $f31, $f0
    ctx->pc = 0x20d03cu;
    ctx->f[31] = FPU_MOV_S(ctx->f[0]);
    // 0x20d040: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x20d040u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x20d044: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x20D044u;
    SET_GPR_U32(ctx, 31, 0x20D04Cu);
    ctx->pc = 0x20D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D044u;
    // 0x20d048: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x20D044u, 0x20D04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D04Cu;
label_20d04c:
    // 0x20d04c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x20d04cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d050: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x20D050u;
    SET_GPR_U32(ctx, 31, 0x20D058u);
    ctx->pc = 0x20D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D050u;
    // 0x20d054: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x20D050u, 0x20D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D058u;
label_20d058:
    // 0x20d058: 0xc7a60088  lwc1        $f6, 0x88($sp)
    ctx->pc = 0x20d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20d05c: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x20d05cu;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
    // 0x20d060: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x20d060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20d064: 0x461da8c2  mul.s       $f3, $f21, $f29
    ctx->pc = 0x20d064u;
    ctx->f[3] = FPU_MUL_S(ctx->f[21], ctx->f[29]);
    // 0x20d068: 0x461d2802  mul.s       $f0, $f5, $f29
    ctx->pc = 0x20d068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[29]);
    // 0x20d06c: 0x461ef842  mul.s       $f1, $f31, $f30
    ctx->pc = 0x20d06cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[30]);
    // 0x20d070: 0x461e3082  mul.s       $f2, $f6, $f30
    ctx->pc = 0x20d070u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[30]);
    // 0x20d074: 0x4604f032  c.eq.s      $f30, $f4
    ctx->pc = 0x20d074u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[30], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d078: 0x4600c600  add.s       $f24, $f24, $f0
    ctx->pc = 0x20d078u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
    // 0x20d07c: 0x4603d680  add.s       $f26, $f26, $f3
    ctx->pc = 0x20d07cu;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[3]);
    // 0x20d080: 0x4601dec0  add.s       $f27, $f27, $f1
    ctx->pc = 0x20d080u;
    ctx->f[27] = FPU_ADD_S(ctx->f[27], ctx->f[1]);
    // 0x20d084: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x20D084u;
    {
        const bool branch_taken_0x20d084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D084u;
        // 0x20d088: 0x4602e700  add.s       $f28, $f28, $f2 (Delay Slot)
        ctx->f[28] = FPU_ADD_S(ctx->f[28], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d084) {
            ctx->pc = 0x20D0A4u;
            goto label_20d0a4;
        }
    }
    ctx->pc = 0x20D08Cu;
    // 0x20d08c: 0x4604e832  c.eq.s      $f29, $f4
    ctx->pc = 0x20d08cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[29], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d090: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x20D090u;
    {
        const bool branch_taken_0x20d090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20d090) {
            ctx->pc = 0x20D094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D090u;
            // 0x20d094: 0x4616b900  add.s       $f4, $f23, $f22 (Delay Slot)
            ctx->f[4] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D0A8u;
            goto label_20d0a8;
        }
    }
    ctx->pc = 0x20D098u;
    // 0x20d098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d09c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x20d09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x20d0a0: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x20d0a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_20d0a4:
    // 0x20d0a4: 0x4616b900  add.s       $f4, $f23, $f22
    ctx->pc = 0x20d0a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
label_20d0a8:
    // 0x20d0a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20d0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d0ac: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x20d0acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20d0b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20D0B0u;
    {
        const bool branch_taken_0x20d0b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0B0u;
        // 0x20d0b4: 0x4616c802  mul.s       $f0, $f25, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0b0) {
            ctx->pc = 0x20D0C0u;
            goto label_20d0c0;
        }
    }
    ctx->pc = 0x20D0B8u;
    // 0x20d0b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20d0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20d0bc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x20d0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_20d0c0:
    // 0x20d0c0: 0x4617c842  mul.s       $f1, $f25, $f23
    ctx->pc = 0x20d0c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[23]);
    // 0x20d0c4: 0x0  nop
    ctx->pc = 0x20d0c4u;
    // NOP
    // 0x20d0c8: 0x0  nop
    ctx->pc = 0x20d0c8u;
    // NOP
    // 0x20d0cc: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x20d0ccu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x20d0d0: 0x0  nop
    ctx->pc = 0x20d0d0u;
    // NOP
    // 0x20d0d4: 0x0  nop
    ctx->pc = 0x20d0d4u;
    // NOP
    // 0x20d0d8: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x20d0d8u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x20d0dc: 0x4600a882  mul.s       $f2, $f21, $f0
    ctx->pc = 0x20d0dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x20d0e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x20d0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x20d0e4: 0x4602e701  sub.s       $f28, $f28, $f2
    ctx->pc = 0x20d0e4u;
    ctx->f[28] = FPU_SUB_S(ctx->f[28], ctx->f[2]);
    // 0x20d0e8: 0x4600dec1  sub.s       $f27, $f27, $f0
    ctx->pc = 0x20d0e8u;
    ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
    // 0x20d0ec: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x20d0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d0f0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x20d0f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20d0f4: 0x4601f842  mul.s       $f1, $f31, $f1
    ctx->pc = 0x20d0f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[1]);
    // 0x20d0f8: 0x4602d681  sub.s       $f26, $f26, $f2
    ctx->pc = 0x20d0f8u;
    ctx->f[26] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
    // 0x20d0fc: 0x12e00016  beqz        $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x20D0FCu;
    {
        const bool branch_taken_0x20d0fc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D0FCu;
        // 0x20d100: 0x4601c601  sub.s       $f24, $f24, $f1 (Delay Slot)
        ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d0fc) {
            ctx->pc = 0x20D158u;
            goto label_20d158;
        }
    }
    ctx->pc = 0x20D104u;
    // 0x20d104: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x20d104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d108: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x20d108u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x20d10c: 0xe6400690  swc1        $f0, 0x690($s2)
    ctx->pc = 0x20d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1680), bits); }
    // 0x20d110: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x20d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d114: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x20d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20d118: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x20d118u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x20d11c: 0xe6410694  swc1        $f1, 0x694($s2)
    ctx->pc = 0x20d11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1684), bits); }
    // 0x20d120: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x20d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d124: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x20d124u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x20d128: 0xe6400698  swc1        $f0, 0x698($s2)
    ctx->pc = 0x20d128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1688), bits); }
    // 0x20d12c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x20d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d130: 0x4601d841  sub.s       $f1, $f27, $f1
    ctx->pc = 0x20d130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[27], ctx->f[1]);
    // 0x20d134: 0xe6610690  swc1        $f1, 0x690($s3)
    ctx->pc = 0x20d134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1680), bits); }
    // 0x20d138: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x20d138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d13c: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x20d13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20d140: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x20d140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x20d144: 0xe6600694  swc1        $f0, 0x694($s3)
    ctx->pc = 0x20d144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1684), bits); }
    // 0x20d148: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x20d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d14c: 0x4601e041  sub.s       $f1, $f28, $f1
    ctx->pc = 0x20d14cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[28], ctx->f[1]);
    // 0x20d150: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x20D150u;
    {
        const bool branch_taken_0x20d150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D150u;
        // 0x20d154: 0xe6610698  swc1        $f1, 0x698($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1688), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d150) {
            ctx->pc = 0x20D2B0u;
            goto label_20d2b0;
        }
    }
    ctx->pc = 0x20D158u;
label_20d158:
    // 0x20d158: 0x86420148  lh          $v0, 0x148($s2)
    ctx->pc = 0x20d158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x20d15c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D15Cu;
    {
        const bool branch_taken_0x20d15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D15Cu;
        // 0x20d160: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d15c) {
            ctx->pc = 0x20D170u;
            goto label_20d170;
        }
    }
    ctx->pc = 0x20D164u;
    // 0x20d164: 0x86620148  lh          $v0, 0x148($s3)
    ctx->pc = 0x20d164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 328)));
    // 0x20d168: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20D168u;
    {
        const bool branch_taken_0x20d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D168u;
        // 0x20d16c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d168) {
            ctx->pc = 0x20D174u;
            goto label_20d174;
        }
    }
    ctx->pc = 0x20D170u;
label_20d170:
    // 0x20d170: 0xaf82c8d8  sw          $v0, -0x3728($gp)
    ctx->pc = 0x20d170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953176), GPR_U32(ctx, 2));
label_20d174:
    // 0x20d174: 0x8f82c8d8  lw          $v0, -0x3728($gp)
    ctx->pc = 0x20d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953176)));
    // 0x20d178: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20D178u;
    {
        const bool branch_taken_0x20d178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D178u;
        // 0x20d17c: 0x86440174  lh          $a0, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d178) {
            ctx->pc = 0x20D1B0u;
            goto label_20d1b0;
        }
    }
    ctx->pc = 0x20D180u;
    // 0x20d180: 0xc78083c4  lwc1        $f0, -0x7C3C($gp)
    ctx->pc = 0x20d180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d184: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x20d184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x20d188: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x20d188u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x20d18c: 0x4600bdc0  add.s       $f23, $f23, $f0
    ctx->pc = 0x20d18cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
    // 0x20d190: 0x0  nop
    ctx->pc = 0x20d190u;
    // NOP
    // 0x20d194: 0x0  nop
    ctx->pc = 0x20d194u;
    // NOP
    // 0x20d198: 0x4604b343  div.s       $f13, $f22, $f4
    ctx->pc = 0x20d198u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[13] = ctx->f[22] / ctx->f[4];
    // 0x20d19c: 0x0  nop
    ctx->pc = 0x20d19cu;
    // NOP
    // 0x20d1a0: 0x0  nop
    ctx->pc = 0x20d1a0u;
    // NOP
    // 0x20d1a4: 0x4604bdc3  div.s       $f23, $f23, $f4
    ctx->pc = 0x20d1a4u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[23] = ctx->f[23] / ctx->f[4];
    // 0x20d1a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20D1A8u;
    {
        const bool branch_taken_0x20d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1A8u;
        // 0x20d1ac: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1a8) {
            ctx->pc = 0x20D1C0u;
            goto label_20d1c0;
        }
    }
    ctx->pc = 0x20D1B0u;
label_20d1b0:
    // 0x20d1b0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20d1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x20d1b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x20d1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x20d1b8: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x20d1b8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x20d1bc: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x20d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_20d1c0:
    // 0x20d1c0: 0x86630174  lh          $v1, 0x174($s3)
    ctx->pc = 0x20d1c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x20d1c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20d1c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20d1c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20d1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20d1cc: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x20d1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x20d1d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20d1d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20d1d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20d1d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20d1d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20d1d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20d1dc: 0x96620174  lhu         $v0, 0x174($s3)
    ctx->pc = 0x20d1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x20d1e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20d1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20d1e4: 0x1085000c  beq         $a0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x20D1E4u;
    {
        const bool branch_taken_0x20d1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x20D1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1E4u;
        // 0x20d1e8: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1e4) {
            ctx->pc = 0x20D218u;
            goto label_20d218;
        }
    }
    ctx->pc = 0x20D1ECu;
    // 0x20d1ec: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D1ECu;
    {
        const bool branch_taken_0x20d1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x20d1ec) {
            ctx->pc = 0x20D200u;
            goto label_20d200;
        }
    }
    ctx->pc = 0x20D1F4u;
    // 0x20d1f4: 0x4600bdc2  mul.s       $f23, $f23, $f0
    ctx->pc = 0x20d1f4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x20d1f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x20D1F8u;
    {
        const bool branch_taken_0x20d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D1F8u;
        // 0x20d1fc: 0x46026b42  mul.s       $f13, $f13, $f2 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d1f8) {
            ctx->pc = 0x20D234u;
            goto label_20d234;
        }
    }
    ctx->pc = 0x20D200u;
label_20d200:
    // 0x20d200: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20D200u;
    {
        const bool branch_taken_0x20d200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x20D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D200u;
        // 0x20d204: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d200) {
            ctx->pc = 0x20D21Cu;
            goto label_20d21c;
        }
    }
    ctx->pc = 0x20D208u;
    // 0x20d208: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x20d208u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x20d20c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x20D20Cu;
    {
        const bool branch_taken_0x20d20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D20Cu;
        // 0x20d210: 0x4600bdc2  mul.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d20c) {
            ctx->pc = 0x20D234u;
            goto label_20d234;
        }
    }
    ctx->pc = 0x20D214u;
    // 0x20d214: 0x0  nop
    ctx->pc = 0x20d214u;
    // NOP
label_20d218:
    // 0x20d218: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x20d218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_20d21c:
    // 0x20d21c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x20d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20d220: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x20d220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x20d224: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D224u;
    {
        const bool branch_taken_0x20d224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20d224) {
            ctx->pc = 0x20D228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D224u;
            // 0x20d228: 0xc6800000  lwc1        $f0, 0x0($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D238u;
            goto label_20d238;
        }
    }
    ctx->pc = 0x20D22Cu;
    // 0x20d22c: 0x46026b42  mul.s       $f13, $f13, $f2
    ctx->pc = 0x20d22cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x20d230: 0x4602bdc2  mul.s       $f23, $f23, $f2
    ctx->pc = 0x20d230u;
    ctx->f[23] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
label_20d234:
    // 0x20d234: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x20d234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20d238:
    // 0x20d238: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x20d238u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x20d23c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x20d23cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x20d240: 0xe6400690  swc1        $f0, 0x690($s2)
    ctx->pc = 0x20d240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1680), bits); }
    // 0x20d244: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x20d244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d248: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x20d248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d24c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x20d24cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20d250: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x20d250u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x20d254: 0xe6410694  swc1        $f1, 0x694($s2)
    ctx->pc = 0x20d254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1684), bits); }
    // 0x20d258: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x20d258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d25c: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x20d25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
    // 0x20d260: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x20d260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x20d264: 0xe6400698  swc1        $f0, 0x698($s2)
    ctx->pc = 0x20d264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1688), bits); }
    // 0x20d268: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x20d268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d26c: 0x4601d841  sub.s       $f1, $f27, $f1
    ctx->pc = 0x20d26cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[27], ctx->f[1]);
    // 0x20d270: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x20d270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x20d274: 0xe6610690  swc1        $f1, 0x690($s3)
    ctx->pc = 0x20d274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1680), bits); }
    // 0x20d278: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x20d278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d27c: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x20d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20d280: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20d280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20d284: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x20d284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x20d288: 0xe6600694  swc1        $f0, 0x694($s3)
    ctx->pc = 0x20d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1684), bits); }
    // 0x20d28c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x20d28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20d290: 0x4601e041  sub.s       $f1, $f28, $f1
    ctx->pc = 0x20d290u;
    ctx->f[1] = FPU_SUB_S(ctx->f[28], ctx->f[1]);
    // 0x20d294: 0x460d0842  mul.s       $f1, $f1, $f13
    ctx->pc = 0x20d294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x20d298: 0xe6610698  swc1        $f1, 0x698($s3)
    ctx->pc = 0x20d298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1688), bits); }
    // 0x20d29c: 0x8f82c8d8  lw          $v0, -0x3728($gp)
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953176)));
    // 0x20d2a0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20D2A0u;
    {
        const bool branch_taken_0x20d2a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20D2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D2A0u;
        // 0x20d2a4: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d2a0) {
            ctx->pc = 0x20D2B4u;
            goto label_20d2b4;
        }
    }
    ctx->pc = 0x20D2A8u;
    // 0x20d2a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20d2ac: 0xaf82c8d8  sw          $v0, -0x3728($gp)
    ctx->pc = 0x20d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953176), GPR_U32(ctx, 2));
label_20d2b0:
    // 0x20d2b0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x20d2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20d2b4:
    // 0x20d2b4: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x20d2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x20d2b8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x20d2b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x20d2bc: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x20d2bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x20d2c0: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x20d2c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20d2c4: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x20d2c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x20d2c8: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x20d2c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20d2cc: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x20d2ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x20d2d0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x20d2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x20d2d4: 0xc7bf0130  lwc1        $f31, 0x130($sp)
    ctx->pc = 0x20d2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x20d2d8: 0xc7be0128  lwc1        $f30, 0x128($sp)
    ctx->pc = 0x20d2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x20d2dc: 0xc7bd0120  lwc1        $f29, 0x120($sp)
    ctx->pc = 0x20d2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x20d2e0: 0xc7bc0118  lwc1        $f28, 0x118($sp)
    ctx->pc = 0x20d2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x20d2e4: 0xc7bb0110  lwc1        $f27, 0x110($sp)
    ctx->pc = 0x20d2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x20d2e8: 0xc7ba0108  lwc1        $f26, 0x108($sp)
    ctx->pc = 0x20d2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x20d2ec: 0xc7b90100  lwc1        $f25, 0x100($sp)
    ctx->pc = 0x20d2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x20d2f0: 0xc7b800f8  lwc1        $f24, 0xF8($sp)
    ctx->pc = 0x20d2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x20d2f4: 0xc7b700f0  lwc1        $f23, 0xF0($sp)
    ctx->pc = 0x20d2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x20d2f8: 0xc7b600e8  lwc1        $f22, 0xE8($sp)
    ctx->pc = 0x20d2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20d2fc: 0xc7b500e0  lwc1        $f21, 0xE0($sp)
    ctx->pc = 0x20d2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20d300: 0xc7b400d8  lwc1        $f20, 0xD8($sp)
    ctx->pc = 0x20d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d304: 0x3e00008  jr          $ra
    ctx->pc = 0x20D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D304u;
        // 0x20d308: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D30Cu;
    // 0x20d30c: 0x0  nop
    ctx->pc = 0x20d30cu;
    // NOP
    ctx->pc = 0x20d310u;
}
