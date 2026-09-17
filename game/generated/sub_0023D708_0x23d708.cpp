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

// Function: sub_0023D708
// Address: 0x23d708 - 0x23d800
void sub_0023D708_0x23d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D708_0x23d708");
#endif

    ctx->pc = 0x23d708u;

    // 0x23d708: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23d708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d70c: 0x8ca30118  lw          $v1, 0x118($a1)
    ctx->pc = 0x23d70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    // 0x23d710: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x23d710u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x23d714: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x23d714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23d718: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x23d718u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x23d71c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d720: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d724: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x23d724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x23d728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d72c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d730: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x23d730u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x23d734: 0x24c607d0  addiu       $a2, $a2, 0x7D0
    ctx->pc = 0x23d734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2000));
    // 0x23d738: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x23d73c: 0x8cc30180  lw          $v1, 0x180($a2)
    ctx->pc = 0x23d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x23d740: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23d740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23d744: 0x28640010  slti        $a0, $v1, 0x10
    ctx->pc = 0x23d744u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x23d748: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x23D748u;
    {
        const bool branch_taken_0x23d748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D748u;
        // 0x23d74c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d748) {
            ctx->pc = 0x23D7F4u;
            goto label_23d7f4;
        }
    }
    ctx->pc = 0x23D750u;
    // 0x23d750: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x23d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d754: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x23d754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x23d758: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x23d758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x23d75c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d75cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d760: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23d760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23d764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d768: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d76c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x23d76cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x23d770: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x23d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d774: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d774u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d778: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23d778u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23d77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d780: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d784: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x23d784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x23d788: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x23d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d78c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d78cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d790: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23d790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23d794: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d798: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d79c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x23d79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x23d7a0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x23d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d7a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d7a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d7a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23d7a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23d7ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d7b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d7b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d7b4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x23d7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23d7b8: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x23d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d7bc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d7bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d7c0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23d7c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23d7c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d7c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d7c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d7cc: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x23d7ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x23d7d0: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x23d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23d7d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23d7d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23d7d8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23d7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23d7dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23d7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23d7e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x23d7e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23d7e4: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x23d7e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x23d7e8: 0x8cc20180  lw          $v0, 0x180($a2)
    ctx->pc = 0x23d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 384)));
    // 0x23d7ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d7f0: 0xacc20180  sw          $v0, 0x180($a2)
    ctx->pc = 0x23d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 384), GPR_U32(ctx, 2));
label_23d7f4:
    // 0x23d7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x23D7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D7FCu;
    // 0x23d7fc: 0x0  nop
    ctx->pc = 0x23d7fcu;
    // NOP
    ctx->pc = 0x23d800u;
}
