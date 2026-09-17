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

// Function: sub_0022DE10
// Address: 0x22de10 - 0x22e0b0
void sub_0022DE10_0x22de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DE10_0x22de10");
#endif

    switch (ctx->pc) {
        case 0x22de48u: goto label_22de48;
        case 0x22dea8u: goto label_22dea8;
        case 0x22dee0u: goto label_22dee0;
        case 0x22df3cu: goto label_22df3c;
        case 0x22df44u: goto label_22df44;
        case 0x22df5cu: goto label_22df5c;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22e024u: goto label_22e024;
        case 0x22e03cu: goto label_22e03c;
        default: break;
    }

    ctx->pc = 0x22de10u;

label_22de10:
    // 0x22de10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22de14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x22de14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x22de18: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x22de18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22de1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22de20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22de20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de24: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22de28: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22de28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x22de2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x22de30: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22de30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x22de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x22de38: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22de38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de3c: 0x1a20001f  blez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x22DE3Cu;
    {
        const bool branch_taken_0x22de3c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE3Cu;
        // 0x22de40: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de3c) {
            ctx->pc = 0x22DEBCu;
            goto label_22debc;
        }
    }
    ctx->pc = 0x22DE44u;
    // 0x22de44: 0x0  nop
    ctx->pc = 0x22de44u;
    // NOP
label_22de48:
    // 0x22de48: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x22de48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22de4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de50: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22de50u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22de54: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22de54u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22de58: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22de58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22de5c: 0xfbb00000  sqc2        $vf16, 0x0($sp)
    ctx->pc = 0x22de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22de60: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x22de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22de64: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22de64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22de68: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22de6c: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22de6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22de70: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22de70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22de74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22de74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22de78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22de78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22de7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22de80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22de84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22de84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22de88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de8c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22DE8Cu;
    {
        const bool branch_taken_0x22de8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE8Cu;
        // 0x22de90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de8c) {
            ctx->pc = 0x22DE98u;
            goto label_22de98;
        }
    }
    ctx->pc = 0x22DE94u;
    // 0x22de94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22de94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22de98:
    // 0x22de98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE98u;
    {
        const bool branch_taken_0x22de98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de98) {
            ctx->pc = 0x22DE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE98u;
            // 0x22de9c: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DEACu;
            goto label_22deac;
        }
    }
    ctx->pc = 0x22DEA0u;
    // 0x22dea0: 0xc08b702  jal         func_22DC08
    ctx->pc = 0x22DEA0u;
    SET_GPR_U32(ctx, 31, 0x22DEA8u);
    ctx->pc = 0x22DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DC08u, 0x22DEA0u, 0x22DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEA8u;
label_22dea8:
    // 0x22dea8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x22dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_22deac:
    // 0x22deac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22deacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22deb0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x22deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22deb4: 0x1e20ffe4  bgtz        $s1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x22DEB4u;
    {
        const bool branch_taken_0x22deb4 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEB4u;
        // 0x22deb8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22deb4) {
            ctx->pc = 0x22DE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22de48;
        }
    }
    ctx->pc = 0x22DEBCu;
label_22debc:
    // 0x22debc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22debcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22dec0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22dec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22dec4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22dec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22dec8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x22dec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22decc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x22deccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ded0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x22ded0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22ded4: 0x3e00008  jr          $ra
    ctx->pc = 0x22DED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DED4u;
        // 0x22ded8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DEDCu;
    // 0x22dedc: 0x0  nop
    ctx->pc = 0x22dedcu;
    // NOP
label_22dee0:
    // 0x22dee0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22dee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22dee4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x22dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x22dee8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22dee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x22deec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22deecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22def0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22def0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22def4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22def8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x22def8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22defc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x22defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x22df00: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x22df00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x22df04: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x22df08: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x22df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x22df0c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x22df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x22df10: 0x24487978  addiu       $t0, $v0, 0x7978
    ctx->pc = 0x22df10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 31096));
    // 0x22df14: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x22df14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22df18: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x22df18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22df1c: 0x6904000f  ldl         $a0, 0xF($t0)
    ctx->pc = 0x22df1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22df20: 0x6d040008  ldr         $a0, 0x8($t0)
    ctx->pc = 0x22df20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22df24: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x22df24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df28: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x22df28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df2c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x22df2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df30: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x22df30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22df34: 0xc08b3e8  jal         func_22CFA0
    ctx->pc = 0x22DF34u;
    SET_GPR_U32(ctx, 31, 0x22DF3Cu);
    ctx->pc = 0x22DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF34u;
    // 0x22df38: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CFA0u, 0x22DF34u, 0x22DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF3Cu;
label_22df3c:
    // 0x22df3c: 0xc08b8a6  jal         func_22E298
    ctx->pc = 0x22DF3Cu;
    SET_GPR_U32(ctx, 31, 0x22DF44u);
    ctx->pc = 0x22DF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DF3Cu;
    // 0x22df40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E298u, 0x22DF3Cu, 0x22DF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF44u;
label_22df44:
    // 0x22df44: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x22DF44u;
    {
        const bool branch_taken_0x22df44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df44) {
            ctx->pc = 0x22DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DF44u;
            // 0x22df48: 0x8e110030  lw          $s1, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DFA4u;
            goto label_22dfa4;
        }
    }
    ctx->pc = 0x22DF4Cu;
    // 0x22df4c: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x22DF4Cu;
    {
        const bool branch_taken_0x22df4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x22df4c) {
            ctx->pc = 0x22DF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DF4Cu;
            // 0x22df50: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DF78u;
            goto label_22df78;
        }
    }
    ctx->pc = 0x22DF54u;
    // 0x22df54: 0xc08eb1a  jal         func_23AC68
    ctx->pc = 0x22DF54u;
    SET_GPR_U32(ctx, 31, 0x22DF5Cu);
    ctx->pc = 0x23AC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AC68u, 0x22DF54u, 0x22DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DF5Cu;
label_22df5c:
    // 0x22df5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DF5Cu;
    {
        const bool branch_taken_0x22df5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF5Cu;
        // 0x22df60: 0x3c020900  lui         $v0, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2304 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df5c) {
            ctx->pc = 0x22DF70u;
            goto label_22df70;
        }
    }
    ctx->pc = 0x22DF64u;
    // 0x22df64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22DF64u;
    {
        const bool branch_taken_0x22df64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF64u;
        // 0x22df68: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df64) {
            ctx->pc = 0x22DF74u;
            goto label_22df74;
        }
    }
    ctx->pc = 0x22DF6Cu;
    // 0x22df6c: 0x0  nop
    ctx->pc = 0x22df6cu;
    // NOP
label_22df70:
    // 0x22df70: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x22df70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_22df74:
    // 0x22df74: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22df74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_22df78:
    // 0x22df78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22df78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22df7c: 0x3442b001  ori         $v0, $v0, 0xB001
    ctx->pc = 0x22df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45057);
    // 0x22df80: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x22df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x22df84: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x22DF84u;
    {
        const bool branch_taken_0x22df84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22df84) {
            ctx->pc = 0x22DF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DF84u;
            // 0x22df88: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E08Cu;
            goto label_22e08c;
        }
    }
    ctx->pc = 0x22DF8Cu;
    // 0x22df8c: 0x32a24002  andi        $v0, $s5, 0x4002
    ctx->pc = 0x22df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16386);
    // 0x22df90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DF90u;
    {
        const bool branch_taken_0x22df90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF90u;
        // 0x22df94: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df90) {
            ctx->pc = 0x22DFA0u;
            goto label_22dfa0;
        }
    }
    ctx->pc = 0x22DF98u;
    // 0x22df98: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x22DF98u;
    {
        const bool branch_taken_0x22df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DF98u;
        // 0x22df9c: 0xc4402d98  lwc1        $f0, 0x2D98($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df98) {
            ctx->pc = 0x22E088u;
            goto label_22e088;
        }
    }
    ctx->pc = 0x22DFA0u;
label_22dfa0:
    // 0x22dfa0: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x22dfa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_22dfa4:
    // 0x22dfa4: 0x1a200029  blez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x22DFA4u;
    {
        const bool branch_taken_0x22dfa4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x22DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFA4u;
        // 0x22dfa8: 0x8e100034  lw          $s0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfa4) {
            ctx->pc = 0x22E04Cu;
            goto label_22e04c;
        }
    }
    ctx->pc = 0x22DFACu;
    // 0x22dfac: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x22dfacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22dfb0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dfb4: 0x0  nop
    ctx->pc = 0x22dfb4u;
    // NOP
label_22dfb8:
    // 0x22dfb8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x22dfb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22dfbc: 0xd51024  and         $v0, $a2, $s5
    ctx->pc = 0x22dfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x22dfc0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x22DFC0u;
    {
        const bool branch_taken_0x22dfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFC0u;
        // 0x22dfc4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfc0) {
            ctx->pc = 0x22E03Cu;
            goto label_22e03c;
        }
    }
    ctx->pc = 0x22DFC8u;
    // 0x22dfc8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x22dfc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dfcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22dfccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dfd0: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x22dfd0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22dfd4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22dfd4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22dfd8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x22dfd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x22dfdc: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x22dfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x22dfe0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x22dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dfe4: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x22dfe4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22dfe8: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x22dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22dfec: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22dfecu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22dff0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x22dff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22dff4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22dff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22dff8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22DFF8u;
    {
        const bool branch_taken_0x22dff8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DFF8u;
        // 0x22dffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dff8) {
            ctx->pc = 0x22E004u;
            goto label_22e004;
        }
    }
    ctx->pc = 0x22E000u;
    // 0x22e000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e004:
    // 0x22e004: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22E004u;
    {
        const bool branch_taken_0x22e004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e004) {
            ctx->pc = 0x22E008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22E004u;
            // 0x22e008: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22E040u;
            goto label_22e040;
        }
    }
    ctx->pc = 0x22E00Cu;
    // 0x22e00c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x22e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x22e010: 0x14560007  bne         $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E010u;
    {
        const bool branch_taken_0x22e010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x22E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E010u;
        // 0x22e014: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e010) {
            ctx->pc = 0x22E030u;
            goto label_22e030;
        }
    }
    ctx->pc = 0x22E018u;
    // 0x22e018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e01c: 0xc08b702  jal         func_22DC08
    ctx->pc = 0x22E01Cu;
    SET_GPR_U32(ctx, 31, 0x22E024u);
    ctx->pc = 0x22E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E01Cu;
    // 0x22e020: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DC08u, 0x22E01Cu, 0x22E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E024u;
label_22e024:
    // 0x22e024: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22E024u;
    {
        const bool branch_taken_0x22e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E024u;
        // 0x22e028: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e024) {
            ctx->pc = 0x22E040u;
            goto label_22e040;
        }
    }
    ctx->pc = 0x22E02Cu;
    // 0x22e02c: 0x0  nop
    ctx->pc = 0x22e02cu;
    // NOP
label_22e030:
    // 0x22e030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e034: 0xc08b784  jal         func_22DE10
    ctx->pc = 0x22E034u;
    SET_GPR_U32(ctx, 31, 0x22E03Cu);
    ctx->pc = 0x22E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E034u;
    // 0x22e038: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DE10u;
    goto label_22de10;
    ctx->pc = 0x22E03Cu;
label_22e03c:
    // 0x22e03c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x22e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_22e040:
    // 0x22e040: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22e040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x22e044: 0x1e20ffdc  bgtz        $s1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22E044u;
    {
        const bool branch_taken_0x22e044 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x22E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E044u;
        // 0x22e048: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e044) {
            ctx->pc = 0x22DFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22dfb8;
        }
    }
    ctx->pc = 0x22E04Cu;
label_22e04c:
    // 0x22e04c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x22e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x22e050: 0x3442b001  ori         $v0, $v0, 0xB001
    ctx->pc = 0x22e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45057);
    // 0x22e054: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x22e054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x22e058: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E058u;
    {
        const bool branch_taken_0x22e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e058) {
            ctx->pc = 0x22E078u;
            goto label_22e078;
        }
    }
    ctx->pc = 0x22E060u;
    // 0x22e060: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E060u;
    {
        const bool branch_taken_0x22e060 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E060u;
        // 0x22e064: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e060) {
            ctx->pc = 0x22E06Cu;
            goto label_22e06c;
        }
    }
    ctx->pc = 0x22E068u;
    // 0x22e068: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x22e068u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_22e06c:
    // 0x22e06c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22E06Cu;
    {
        const bool branch_taken_0x22e06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E06Cu;
        // 0x22e070: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e06c) {
            ctx->pc = 0x22E088u;
            goto label_22e088;
        }
    }
    ctx->pc = 0x22E074u;
    // 0x22e074: 0x0  nop
    ctx->pc = 0x22e074u;
    // NOP
label_22e078:
    // 0x22e078: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x22E078u;
    {
        const bool branch_taken_0x22e078 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E078u;
        // 0x22e07c: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e078) {
            ctx->pc = 0x22E084u;
            goto label_22e084;
        }
    }
    ctx->pc = 0x22E080u;
    // 0x22e080: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x22e080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_22e084:
    // 0x22e084: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x22e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22e088:
    // 0x22e088: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22e088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22e08c:
    // 0x22e08c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x22e08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22e090: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22e090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e094: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x22e094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22e098: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22e098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e09c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x22e09cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22e0a0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x22e0a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e0a4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x22e0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22e0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x22E0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E0A8u;
        // 0x22e0ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E0B0u;
}
