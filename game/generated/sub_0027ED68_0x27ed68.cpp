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

// Function: sub_0027ED68
// Address: 0x27ed68 - 0x27ee08
void sub_0027ED68_0x27ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ED68_0x27ed68");
#endif

    switch (ctx->pc) {
        case 0x27edfcu: goto label_27edfc;
        default: break;
    }

    ctx->pc = 0x27ed68u;

    // 0x27ed68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ed68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ed6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x27ed6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ed70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ed74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x27ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed78: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x27ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ed7c: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x27ed7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ed80: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x27ed80u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x27ed84: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x27ed84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27ed88: 0x460000c2  mul.s       $f3, $f0, $f0
    ctx->pc = 0x27ed88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x27ed8c: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x27ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ed90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27ed90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x27ed94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ed98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27ed98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27ed9c: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x27ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27eda0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x27eda0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27eda4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x27eda4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x27eda8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x27eda8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x27edac: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x27edacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x27edb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27edb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27edb4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27edb4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x27edb8: 0x0  nop
    ctx->pc = 0x27edb8u;
    // NOP
    // 0x27edbc: 0x0  nop
    ctx->pc = 0x27edbcu;
    // NOP
    // 0x27edc0: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x27edc0u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x27edc4: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x27edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27edc8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27edc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27edcc: 0x8c660050  lw          $a2, 0x50($v1)
    ctx->pc = 0x27edccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x27edd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27edd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27edd4: 0xc462003c  lwc1        $f2, 0x3C($v1)
    ctx->pc = 0x27edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27edd8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27edd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27eddc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27eddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x27ede0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x27ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x27ede4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x27ede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x27ede8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ede8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27edec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27edf0: 0xc44c0068  lwc1        $f12, 0x68($v0)
    ctx->pc = 0x27edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27edf4: 0xc0847ac  jal         func_211EB0
    ctx->pc = 0x27EDF4u;
    SET_GPR_U32(ctx, 31, 0x27EDFCu);
    ctx->pc = 0x27EDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EDF4u;
    // 0x27edf8: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211EB0u, 0x27EDF4u, 0x27EDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EDFCu;
label_27edfc:
    // 0x27edfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27edfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ee00: 0x3e00008  jr          $ra
    ctx->pc = 0x27EE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EE00u;
        // 0x27ee04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EE08u;
}
