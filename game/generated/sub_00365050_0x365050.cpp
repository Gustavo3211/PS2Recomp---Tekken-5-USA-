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

// Function: sub_00365050
// Address: 0x365050 - 0x3650c0
void sub_00365050_0x365050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365050_0x365050");
#endif

    switch (ctx->pc) {
        case 0x36507cu: goto label_36507c;
        default: break;
    }

    ctx->pc = 0x365050u;

    // 0x365050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x365050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x365054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x365054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365058: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x365058u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36505c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x36505cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x365060: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x365060u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x365064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x365068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36506c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x36506Cu;
    {
        const bool branch_taken_0x36506c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x365070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36506Cu;
        // 0x365070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36506c) {
            ctx->pc = 0x365088u;
            goto label_365088;
        }
    }
    ctx->pc = 0x365074u;
    // 0x365074: 0xc0d93e6  jal         func_364F98
    ctx->pc = 0x365074u;
    SET_GPR_U32(ctx, 31, 0x36507Cu);
    ctx->pc = 0x364F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364F98u, 0x365074u, 0x36507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36507Cu;
label_36507c:
    // 0x36507c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36507Cu;
    {
        const bool branch_taken_0x36507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36507c) {
            ctx->pc = 0x36509Cu;
            goto label_36509c;
        }
    }
    ctx->pc = 0x365084u;
    // 0x365084: 0x0  nop
    ctx->pc = 0x365084u;
    // NOP
label_365088:
    // 0x365088: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x365088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36508c: 0x0  nop
    ctx->pc = 0x36508cu;
    // NOP
    // 0x365090: 0x0  nop
    ctx->pc = 0x365090u;
    // NOP
    // 0x365094: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x365094u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x365098: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x365098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_36509c:
    // 0x36509c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36509cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3650a0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x3650a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x3650a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3650a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3650a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3650a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3650ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3650acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3650b0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3650b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3650b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3650B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3650B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3650B4u;
        // 0x3650b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3650B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3650BCu;
    // 0x3650bc: 0x0  nop
    ctx->pc = 0x3650bcu;
    // NOP
    ctx->pc = 0x3650c0u;
}
