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

// Function: sub_00360600
// Address: 0x360600 - 0x3606d8
void sub_00360600_0x360600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360600_0x360600");
#endif

    switch (ctx->pc) {
        case 0x360644u: goto label_360644;
        case 0x36066cu: goto label_36066c;
        default: break;
    }

    ctx->pc = 0x360600u;

    // 0x360600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x360600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x360604: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x360604u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x360608: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36060c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36060cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360610: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x360610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x360614: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x360614u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x360618: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x360618u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36061c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x36061cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360620: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x360620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x360624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x360624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360628: 0x48403  sra         $s0, $a0, 16
    ctx->pc = 0x360628u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
    // 0x36062c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x360630: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x360630u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x360634: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x360634u;
    {
        const bool branch_taken_0x360634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x360638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360634u;
        // 0x360638: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360634) {
            ctx->pc = 0x360660u;
            goto label_360660;
        }
    }
    ctx->pc = 0x36063Cu;
    // 0x36063c: 0xc0d8082  jal         func_360208
    ctx->pc = 0x36063Cu;
    SET_GPR_U32(ctx, 31, 0x360644u);
    ctx->pc = 0x360208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360208u, 0x36063Cu, 0x360644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360644u;
label_360644:
    // 0x360644: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x360644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x360648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x360648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36064c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360654: 0x0  nop
    ctx->pc = 0x360654u;
    // NOP
    // 0x360658: 0x0  nop
    ctx->pc = 0x360658u;
    // NOP
    // 0x36065c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x36065cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_360660:
    // 0x360660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x360660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360664: 0xc0d7fac  jal         func_35FEB0
    ctx->pc = 0x360664u;
    SET_GPR_U32(ctx, 31, 0x36066Cu);
    ctx->pc = 0x360668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360664u;
    // 0x360668: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEB0u, 0x360664u, 0x36066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36066Cu;
label_36066c:
    // 0x36066c: 0xc7819694  lwc1        $f1, -0x696C($gp)
    ctx->pc = 0x36066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360670: 0x21bc0  sll         $v1, $v0, 15
    ctx->pc = 0x360670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x360674: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x360674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x360678: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x360678u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x36067c: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x36067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x360680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360688: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x360688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x36068c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36068cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x360690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x360694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360698: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x360698u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x36069c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x36069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3606a0: 0x0  nop
    ctx->pc = 0x3606a0u;
    // NOP
    // 0x3606a4: 0x0  nop
    ctx->pc = 0x3606a4u;
    // NOP
    // 0x3606a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3606a8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x3606ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3606acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3606b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3606b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3606b4: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x3606b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3606b8: 0x28438000  slti        $v1, $v0, -0x8000
    ctx->pc = 0x3606b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3606bc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x3606bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x3606c0: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x3606c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x3606c4: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x3606c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3606c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3606c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3606cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3606ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3606d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3606D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3606D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3606D0u;
        // 0x3606d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3606D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3606D8u;
}
