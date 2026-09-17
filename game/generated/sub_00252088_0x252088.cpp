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

// Function: sub_00252088
// Address: 0x252088 - 0x252190
void sub_00252088_0x252088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252088_0x252088");
#endif

    switch (ctx->pc) {
        case 0x2520c0u: goto label_2520c0;
        case 0x252100u: goto label_252100;
        case 0x252114u: goto label_252114;
        default: break;
    }

    ctx->pc = 0x252088u;

    // 0x252088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25208c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252090: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x252090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252094: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x252094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x252098: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x252098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25209c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2520a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2520a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2520a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2520a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2520ac: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2520acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2520b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2520b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2520b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2520b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2520b8: 0xc08c1da  jal         func_230768
    ctx->pc = 0x2520B8u;
    SET_GPR_U32(ctx, 31, 0x2520C0u);
    ctx->pc = 0x2520BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520B8u;
    // 0x2520bc: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x230768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230768u, 0x2520B8u, 0x2520C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520C0u;
label_2520c0:
    // 0x2520c0: 0xc7ad0008  lwc1        $f13, 0x8($sp)
    ctx->pc = 0x2520c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2520c4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2520c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2520c8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2520c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2520cc: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x2520ccu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2520d0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2520d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2520d4: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2520d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2520d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2520d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2520dc: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x2520dcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x2520e0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x2520e0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2520e4: 0x460c601a  mula.s      $f12, $f12
    ctx->pc = 0x2520e4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[12], ctx->f[12]));
    // 0x2520e8: 0x460d6d1c  madd.s      $f20, $f13, $f13
    ctx->pc = 0x2520e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[13], ctx->f[13]));
    // 0x2520ec: 0x46140504  c1          0x140504
    ctx->pc = 0x2520ecu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x2520f0: 0x2790c170  addiu       $s0, $gp, -0x3E90
    ctx->pc = 0x2520f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2520f4: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x2520f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x2520f8: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x2520F8u;
    SET_GPR_U32(ctx, 31, 0x252100u);
    ctx->pc = 0x2520FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520F8u;
    // 0x2520fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x2520F8u, 0x252100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252100u;
label_252100:
    // 0x252100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252104: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x252104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x252108: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x252108u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x25210c: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x25210Cu;
    SET_GPR_U32(ctx, 31, 0x252114u);
    ctx->pc = 0x252110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25210Cu;
    // 0x252110: 0x2228023  subu        $s0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x25210Cu, 0x252114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252114u;
label_252114:
    // 0x252114: 0x21023  negu        $v0, $v0
    ctx->pc = 0x252114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x252118: 0x2610c000  addiu       $s0, $s0, -0x4000
    ctx->pc = 0x252118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950912));
    // 0x25211c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x252120: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x252120u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x252124: 0x2112823  subu        $a1, $s0, $s1
    ctx->pc = 0x252124u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x252128: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x252128u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25212c: 0x30448000  andi        $a0, $v0, 0x8000
    ctx->pc = 0x25212cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x252130: 0x32038000  andi        $v1, $s0, 0x8000
    ctx->pc = 0x252130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32768);
    // 0x252134: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x252134u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
    // 0x252138: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x252138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25213c: 0xa3800b  movn        $s0, $a1, $v1
    ctx->pc = 0x25213cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x252140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x252140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252144: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x252144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x252148: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x252148u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25214c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25214cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252150: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x252150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252154: 0xc78289ac  lwc1        $f2, -0x7654($gp)
    ctx->pc = 0x252154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252158: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25215c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x25215cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x252160: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x252160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x252164: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x252164u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x252168: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x252168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25216c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25216cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x252170: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x252170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x252174: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x252174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x252178: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x252178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25217c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x25217cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x252180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252184: 0x3e00008  jr          $ra
    ctx->pc = 0x252184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252184u;
        // 0x252188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25218Cu;
    // 0x25218c: 0x0  nop
    ctx->pc = 0x25218cu;
    // NOP
    ctx->pc = 0x252190u;
}
