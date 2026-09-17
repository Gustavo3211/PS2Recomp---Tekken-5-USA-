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

// Function: sub_00344200
// Address: 0x344200 - 0x344310
void sub_00344200_0x344200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344200_0x344200");
#endif

    switch (ctx->pc) {
        case 0x344214u: goto label_344214;
        case 0x34423cu: goto label_34423c;
        case 0x34429cu: goto label_34429c;
        case 0x3442c4u: goto label_3442c4;
        default: break;
    }

    ctx->pc = 0x344200u;

    // 0x344200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344204: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x344204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x344208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34420c: 0xc0d1036  jal         func_3440D8
    ctx->pc = 0x34420Cu;
    SET_GPR_U32(ctx, 31, 0x344214u);
    ctx->pc = 0x344210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34420Cu;
    // 0x344210: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3440D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3440D8u, 0x34420Cu, 0x344214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344214u;
label_344214:
    // 0x344214: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x344214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x344218: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x344218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34421c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x34421cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x344220: 0xc7819664  lwc1        $f1, -0x699C($gp)
    ctx->pc = 0x344220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344224: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x344224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344228: 0x0  nop
    ctx->pc = 0x344228u;
    // NOP
    // 0x34422c: 0x0  nop
    ctx->pc = 0x34422cu;
    // NOP
    // 0x344230: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x344230u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x344234: 0xc0d1036  jal         func_3440D8
    ctx->pc = 0x344234u;
    SET_GPR_U32(ctx, 31, 0x34423Cu);
    ctx->pc = 0x3440D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3440D8u, 0x344234u, 0x34423Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34423Cu;
label_34423c:
    // 0x34423c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34423cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344240: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x344240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344244: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x344244u;
    {
        const bool branch_taken_0x344244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344244) {
            ctx->pc = 0x344260u;
            goto label_344260;
        }
    }
    ctx->pc = 0x34424Cu;
    // 0x34424c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x34424cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x344250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344254: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x344254u;
    {
        const bool branch_taken_0x344254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344254u;
        // 0x344258: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344254) {
            ctx->pc = 0x34426Cu;
            goto label_34426c;
        }
    }
    ctx->pc = 0x34425Cu;
    // 0x34425c: 0x0  nop
    ctx->pc = 0x34425cu;
    // NOP
label_344260:
    // 0x344260: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344268: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x344268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_34426c:
    // 0x34426c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34426cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x344270: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x344270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x344274: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344278: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x344278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34427c: 0x3e00008  jr          $ra
    ctx->pc = 0x34427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34427Cu;
        // 0x344280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344284u;
    // 0x344284: 0x0  nop
    ctx->pc = 0x344284u;
    // NOP
    // 0x344288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34428c: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x34428cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x344290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344294: 0xc0d1040  jal         func_344100
    ctx->pc = 0x344294u;
    SET_GPR_U32(ctx, 31, 0x34429Cu);
    ctx->pc = 0x344298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344294u;
    // 0x344298: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x344100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344100u, 0x344294u, 0x34429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34429Cu;
label_34429c:
    // 0x34429c: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x34429cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x3442a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3442a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3442a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3442a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3442a8: 0xc7819668  lwc1        $f1, -0x6998($gp)
    ctx->pc = 0x3442a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3442ac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3442acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3442b0: 0x0  nop
    ctx->pc = 0x3442b0u;
    // NOP
    // 0x3442b4: 0x0  nop
    ctx->pc = 0x3442b4u;
    // NOP
    // 0x3442b8: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x3442b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x3442bc: 0xc0d1040  jal         func_344100
    ctx->pc = 0x3442BCu;
    SET_GPR_U32(ctx, 31, 0x3442C4u);
    ctx->pc = 0x344100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344100u, 0x3442BCu, 0x3442C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3442C4u;
label_3442c4:
    // 0x3442c4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3442c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3442c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3442c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3442cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3442CCu;
    {
        const bool branch_taken_0x3442cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3442cc) {
            ctx->pc = 0x3442E8u;
            goto label_3442e8;
        }
    }
    ctx->pc = 0x3442D4u;
    // 0x3442d4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3442d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3442d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3442d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3442dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3442DCu;
    {
        const bool branch_taken_0x3442dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442DCu;
        // 0x3442e0: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442dc) {
            ctx->pc = 0x3442F4u;
            goto label_3442f4;
        }
    }
    ctx->pc = 0x3442E4u;
    // 0x3442e4: 0x0  nop
    ctx->pc = 0x3442e4u;
    // NOP
label_3442e8:
    // 0x3442e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3442e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3442ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3442ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3442f0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x3442f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3442f4:
    // 0x3442f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3442f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3442f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3442f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3442fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3442fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344300: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x344300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x344304: 0x3e00008  jr          $ra
    ctx->pc = 0x344304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344304u;
        // 0x344308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34430Cu;
    // 0x34430c: 0x0  nop
    ctx->pc = 0x34430cu;
    // NOP
    ctx->pc = 0x344310u;
}
