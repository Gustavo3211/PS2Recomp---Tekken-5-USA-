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

// Function: sub_0023CD78
// Address: 0x23cd78 - 0x23ce10
void sub_0023CD78_0x23cd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CD78_0x23cd78");
#endif

    ctx->pc = 0x23cd78u;

    // 0x23cd78: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23cd78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cd7c: 0x9503003c  lhu         $v1, 0x3C($t0)
    ctx->pc = 0x23cd7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x23cd80: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x23cd84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cd88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cd8c: 0x3c010016  lui         $at, 0x16
    ctx->pc = 0x23cd8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)22 << 16));
    // 0x23cd90: 0x2421f380  addiu       $at, $at, -0xC80
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294964096));
    // 0x23cd94: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x23cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x23cd98: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23cd9c: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x23CD9Cu;
    {
        const bool branch_taken_0x23cd9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD9Cu;
        // 0x23cda0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd9c) {
            ctx->pc = 0x23CE04u;
            goto label_23ce04;
        }
    }
    ctx->pc = 0x23CDA4u;
    // 0x23cda4: 0xc500085c  lwc1        $f0, 0x85C($t0)
    ctx->pc = 0x23cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 2140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cda8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23cdac: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x23cdb0: 0xc782876c  lwc1        $f2, -0x7894($gp)
    ctx->pc = 0x23cdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23cdb4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23cdb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x23cdb8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x23cdb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x23cdbc: 0xc7838770  lwc1        $f3, -0x7890($gp)
    ctx->pc = 0x23cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23cdc0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x23cdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x23cdc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23cdc8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23cdcc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x23cdccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23cdd0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x23cdd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cdd8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x23cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x23cddc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x23cddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x23cde0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cde4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23cde8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x23cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23cdec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23cdecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23cdf0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x23cdf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x23cdf4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x23cdf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x23cdf8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x23cdf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x23cdfc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x23cdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x23ce00: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x23ce00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_23ce04:
    // 0x23ce04: 0x3e00008  jr          $ra
    ctx->pc = 0x23CE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CE0Cu;
    // 0x23ce0c: 0x0  nop
    ctx->pc = 0x23ce0cu;
    // NOP
    ctx->pc = 0x23ce10u;
}
