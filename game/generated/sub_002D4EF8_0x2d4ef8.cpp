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

// Function: sub_002D4EF8
// Address: 0x2d4ef8 - 0x2d4fa8
void sub_002D4EF8_0x2d4ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4EF8_0x2d4ef8");
#endif

    switch (ctx->pc) {
        case 0x2d4f20u: goto label_2d4f20;
        case 0x2d4f8cu: goto label_2d4f8c;
        default: break;
    }

    ctx->pc = 0x2d4ef8u;

    // 0x2d4ef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d4ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d4efc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d4efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d4f00: 0x30910001  andi        $s1, $a0, 0x1
    ctx->pc = 0x2d4f00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d4f04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d4f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d4f08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d4f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d4f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d4f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d4f14: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2d4f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2d4f18: 0xc0b22e6  jal         func_2C8B98
    ctx->pc = 0x2D4F18u;
    SET_GPR_U32(ctx, 31, 0x2D4F20u);
    ctx->pc = 0x2D4F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F18u;
    // 0x2d4f1c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B98u, 0x2D4F18u, 0x2D4F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F20u;
label_2d4f20:
    // 0x2d4f20: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2d4f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4f24: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d4f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4f28: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2d4f2c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2d4f30: 0x44091000  mfc1        $t1, $f2
    ctx->pc = 0x2d4f30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2d4f34: 0x2484e790  addiu       $a0, $a0, -0x1870
    ctx->pc = 0x2d4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    // 0x2d4f38: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d4f3c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2d4f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2d4f40: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2d4f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2d4f44: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x2d4f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d4f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d4f4c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x2d4f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4f50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d4f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f54: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2d4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2d4f58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d4f58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4f5c: 0x1284821  addu        $t1, $t1, $t0
    ctx->pc = 0x2d4f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2d4f60: 0x114040  sll         $t0, $s1, 1
    ctx->pc = 0x2d4f60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2d4f64: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d4f68: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x2d4f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x2d4f6c: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x2d4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x2d4f70: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2d4f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d4f74: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2d4f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d4f78: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2d4f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4f7c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2d4f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4f80: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x2d4f80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4f84: 0xc0a64ba  jal         func_2992E8
    ctx->pc = 0x2D4F84u;
    SET_GPR_U32(ctx, 31, 0x2D4F8Cu);
    ctx->pc = 0x2D4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4F84u;
    // 0x2d4f88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2992E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2992E8u, 0x2D4F84u, 0x2D4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4F8Cu;
label_2d4f8c:
    // 0x2d4f8c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d4f8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4f90: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d4f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4f94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d4f94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d4f98: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d4f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4F9Cu;
        // 0x2d4fa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4FA4u;
    // 0x2d4fa4: 0x0  nop
    ctx->pc = 0x2d4fa4u;
    // NOP
    ctx->pc = 0x2d4fa8u;
}
