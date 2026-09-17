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

// Function: sub_002D4E78
// Address: 0x2d4e78 - 0x2d4ef8
void sub_002D4E78_0x2d4e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4E78_0x2d4e78");
#endif

    switch (ctx->pc) {
        case 0x2d4eecu: goto label_2d4eec;
        default: break;
    }

    ctx->pc = 0x2d4e78u;

    // 0x2d4e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4e7c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2d4e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d4e80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d4e84: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2d4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2d4e88: 0x2463e780  addiu       $v1, $v1, -0x1880
    ctx->pc = 0x2d4e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961024));
    // 0x2d4e8c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2d4e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4e90: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4e94: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2d4e98: 0x44081000  mfc1        $t0, $f2
    ctx->pc = 0x2d4e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2d4e9c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2d4e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2d4ea0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d4ea0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d4ea4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2d4ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2d4ea8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2d4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4eac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4eb0: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x2d4eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d4eb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4eb8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2d4eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2d4ebc: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2d4ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2d4ec0: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2d4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x2d4ec4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2d4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2d4ec8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2d4ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4ecc: 0x44040  sll         $t0, $a0, 1
    ctx->pc = 0x2d4eccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2d4ed0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2d4ed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d4ed4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2d4ed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d4ed8: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2d4ed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4edc: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2d4edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d4ee0: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x2d4ee0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d4ee4: 0xc0a6480  jal         func_299200
    ctx->pc = 0x2D4EE4u;
    SET_GPR_U32(ctx, 31, 0x2D4EECu);
    ctx->pc = 0x2D4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4EE4u;
    // 0x2d4ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299200u, 0x2D4EE4u, 0x2D4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4EECu;
label_2d4eec:
    // 0x2d4eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d4eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d4ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4EF0u;
        // 0x2d4ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4EF8u;
}
