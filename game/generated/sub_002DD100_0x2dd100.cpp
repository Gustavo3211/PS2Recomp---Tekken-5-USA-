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

// Function: sub_002DD100
// Address: 0x2dd100 - 0x2dd1e0
void sub_002DD100_0x2dd100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD100_0x2dd100");
#endif

    ctx->pc = 0x2dd100u;

    // 0x2dd100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd104: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2dd104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd108: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DD108u;
    {
        const bool branch_taken_0x2dd108 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd108) {
            ctx->pc = 0x2DD148u;
            goto label_2dd148;
        }
    }
    ctx->pc = 0x2DD110u;
    // 0x2dd110: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2dd110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd114: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD114u;
    {
        const bool branch_taken_0x2dd114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd114) {
            ctx->pc = 0x2DD118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD114u;
            // 0x2dd118: 0x460c6b40  add.s       $f13, $f13, $f12 (Delay Slot)
            ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD128u;
            goto label_2dd128;
        }
    }
    ctx->pc = 0x2DD11Cu;
    // 0x2dd11c: 0x460c6801  sub.s       $f0, $f13, $f12
    ctx->pc = 0x2dd11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x2dd120: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD120u;
    {
        const bool branch_taken_0x2dd120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD120u;
        // 0x2dd124: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd120) {
            ctx->pc = 0x2DD174u;
            goto label_2dd174;
        }
    }
    ctx->pc = 0x2DD128u;
label_2dd128:
    // 0x2dd128: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2dd128u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd12c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD12Cu;
    {
        const bool branch_taken_0x2dd12c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD12Cu;
        // 0x2dd130: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd12c) {
            ctx->pc = 0x2DD180u;
            goto label_2dd180;
        }
    }
    ctx->pc = 0x2DD134u;
    // 0x2dd134: 0x0  nop
    ctx->pc = 0x2dd134u;
    // NOP
    // 0x2dd138: 0x0  nop
    ctx->pc = 0x2dd138u;
    // NOP
    // 0x2dd13c: 0x460d6343  div.s       $f13, $f12, $f13
    ctx->pc = 0x2dd13cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[13] = ctx->f[12] / ctx->f[13];
    // 0x2dd140: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DD140u;
    {
        const bool branch_taken_0x2dd140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd140) {
            ctx->pc = 0x2DD180u;
            goto label_2dd180;
        }
    }
    ctx->pc = 0x2DD148u;
label_2dd148:
    // 0x2dd148: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2dd148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd14c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD14Cu;
    {
        const bool branch_taken_0x2dd14c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd14c) {
            ctx->pc = 0x2DD150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD14Cu;
            // 0x2dd150: 0x460c6801  sub.s       $f0, $f13, $f12 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD170u;
            goto label_2dd170;
        }
    }
    ctx->pc = 0x2DD154u;
    // 0x2dd154: 0x460c6800  add.s       $f0, $f13, $f12
    ctx->pc = 0x2dd154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x2dd158: 0x0  nop
    ctx->pc = 0x2dd158u;
    // NOP
    // 0x2dd15c: 0x0  nop
    ctx->pc = 0x2dd15cu;
    // NOP
    // 0x2dd160: 0x46006343  div.s       $f13, $f12, $f0
    ctx->pc = 0x2dd160u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[13] = ctx->f[12] / ctx->f[0];
    // 0x2dd164: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD164u;
    {
        const bool branch_taken_0x2dd164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD164u;
        // 0x2dd168: 0x24058000  addiu       $a1, $zero, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd164) {
            ctx->pc = 0x2DD180u;
            goto label_2dd180;
        }
    }
    ctx->pc = 0x2DD16Cu;
    // 0x2dd16c: 0x0  nop
    ctx->pc = 0x2dd16cu;
    // NOP
label_2dd170:
    // 0x2dd170: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x2dd170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_2dd174:
    // 0x2dd174: 0x0  nop
    ctx->pc = 0x2dd174u;
    // NOP
    // 0x2dd178: 0x0  nop
    ctx->pc = 0x2dd178u;
    // NOP
    // 0x2dd17c: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x2dd17cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
label_2dd180:
    // 0x2dd180: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x2dd180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x2dd184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd188: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2dd188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2dd18c: 0x24636b80  addiu       $v1, $v1, 0x6B80
    ctx->pc = 0x2dd18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27520));
    // 0x2dd190: 0xc78394fc  lwc1        $f3, -0x6B04($gp)
    ctx->pc = 0x2dd190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd194: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2dd194u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2dd198: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd198u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dd19c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dd19cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd1a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dd1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd1a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd1a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dd1a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dd1ac: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2dd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dd1b0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2dd1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd1b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dd1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd1b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dd1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd1bc: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x2dd1bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x2dd1c0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2dd1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2dd1c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dd1c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dd1c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2dd1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dd1cc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd1ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd1d0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2dd1d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD1D4u;
        // 0x2dd1d8: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD1DCu;
    // 0x2dd1dc: 0x0  nop
    ctx->pc = 0x2dd1dcu;
    // NOP
    ctx->pc = 0x2dd1e0u;
}
