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

// Function: sub_002DD030
// Address: 0x2dd030 - 0x2dd100
void sub_002DD030_0x2dd030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD030_0x2dd030");
#endif

    ctx->pc = 0x2dd030u;

    // 0x2dd030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dd030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd034: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2dd034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd038: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DD038u;
    {
        const bool branch_taken_0x2dd038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd038) {
            ctx->pc = 0x2DD078u;
            goto label_2dd078;
        }
    }
    ctx->pc = 0x2DD040u;
    // 0x2dd040: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2dd040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd044: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD044u;
    {
        const bool branch_taken_0x2dd044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd044) {
            ctx->pc = 0x2DD048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD044u;
            // 0x2dd048: 0x460c6b40  add.s       $f13, $f13, $f12 (Delay Slot)
            ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD058u;
            goto label_2dd058;
        }
    }
    ctx->pc = 0x2DD04Cu;
    // 0x2dd04c: 0xc78394f0  lwc1        $f3, -0x6B10($gp)
    ctx->pc = 0x2dd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd050: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD050u;
    {
        const bool branch_taken_0x2dd050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD050u;
        // 0x2dd054: 0x460c6801  sub.s       $f0, $f13, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd050) {
            ctx->pc = 0x2DD0A4u;
            goto label_2dd0a4;
        }
    }
    ctx->pc = 0x2DD058u;
label_2dd058:
    // 0x2dd058: 0x46006832  c.eq.s      $f13, $f0
    ctx->pc = 0x2dd058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd05c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x2DD05Cu;
    {
        const bool branch_taken_0x2dd05c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD05Cu;
        // 0x2dd060: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd05c) {
            ctx->pc = 0x2DD0B0u;
            goto label_2dd0b0;
        }
    }
    ctx->pc = 0x2DD064u;
    // 0x2dd064: 0x0  nop
    ctx->pc = 0x2dd064u;
    // NOP
    // 0x2dd068: 0x0  nop
    ctx->pc = 0x2dd068u;
    // NOP
    // 0x2dd06c: 0x460d6343  div.s       $f13, $f12, $f13
    ctx->pc = 0x2dd06cu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[13] = ctx->f[12] / ctx->f[13];
    // 0x2dd070: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DD070u;
    {
        const bool branch_taken_0x2dd070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd070) {
            ctx->pc = 0x2DD0B0u;
            goto label_2dd0b0;
        }
    }
    ctx->pc = 0x2DD078u;
label_2dd078:
    // 0x2dd078: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2dd078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd07c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD07Cu;
    {
        const bool branch_taken_0x2dd07c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dd07c) {
            ctx->pc = 0x2DD080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD07Cu;
            // 0x2dd080: 0x460c6801  sub.s       $f0, $f13, $f12 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD0A0u;
            goto label_2dd0a0;
        }
    }
    ctx->pc = 0x2DD084u;
    // 0x2dd084: 0x460c6800  add.s       $f0, $f13, $f12
    ctx->pc = 0x2dd084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
    // 0x2dd088: 0xc78394f4  lwc1        $f3, -0x6B0C($gp)
    ctx->pc = 0x2dd088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dd08c: 0x0  nop
    ctx->pc = 0x2dd08cu;
    // NOP
    // 0x2dd090: 0x0  nop
    ctx->pc = 0x2dd090u;
    // NOP
    // 0x2dd094: 0x46006343  div.s       $f13, $f12, $f0
    ctx->pc = 0x2dd094u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[13] = ctx->f[12] / ctx->f[0];
    // 0x2dd098: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD098u;
    {
        const bool branch_taken_0x2dd098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd098) {
            ctx->pc = 0x2DD0B0u;
            goto label_2dd0b0;
        }
    }
    ctx->pc = 0x2DD0A0u;
label_2dd0a0:
    // 0x2dd0a0: 0xc78394f8  lwc1        $f3, -0x6B08($gp)
    ctx->pc = 0x2dd0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dd0a4:
    // 0x2dd0a4: 0x0  nop
    ctx->pc = 0x2dd0a4u;
    // NOP
    // 0x2dd0a8: 0x0  nop
    ctx->pc = 0x2dd0a8u;
    // NOP
    // 0x2dd0ac: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x2dd0acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
label_2dd0b0:
    // 0x2dd0b0: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x2dd0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x2dd0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dd0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd0b8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x2dd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x2dd0bc: 0x24636b80  addiu       $v1, $v1, 0x6B80
    ctx->pc = 0x2dd0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27520));
    // 0x2dd0c0: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2dd0c0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2dd0c4: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd0c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2dd0c8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2dd0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd0cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dd0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dd0d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2dd0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2dd0d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2dd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2dd0d8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2dd0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dd0dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dd0dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd0e0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2dd0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dd0e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dd0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dd0e8: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x2dd0e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x2dd0ec: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x2dd0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2dd0f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2dd0f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2dd0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD0F4u;
        // 0x2dd0f8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD0FCu;
    // 0x2dd0fc: 0x0  nop
    ctx->pc = 0x2dd0fcu;
    // NOP
    ctx->pc = 0x2dd100u;
}
