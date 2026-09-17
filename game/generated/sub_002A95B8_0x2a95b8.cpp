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

// Function: sub_002A95B8
// Address: 0x2a95b8 - 0x2a96f8
void sub_002A95B8_0x2a95b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A95B8_0x2a95b8");
#endif

    switch (ctx->pc) {
        case 0x2a9608u: goto label_2a9608;
        case 0x2a9638u: goto label_2a9638;
        case 0x2a9670u: goto label_2a9670;
        case 0x2a96d8u: goto label_2a96d8;
        default: break;
    }

    ctx->pc = 0x2a95b8u;

    // 0x2a95b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a95b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a95bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a95bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a95c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a95c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a95c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a95c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a95c8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2a95c8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2a95cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a95ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a95d0: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a95d4: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x2a95d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a95d8: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2a95d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a95dc: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2a95dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a95e0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2a95e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a95e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2a95e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BCE00u));
    // 0x2a95e8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2a95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a95ec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A95ECu;
    {
        const bool branch_taken_0x2a95ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a95ec) {
            ctx->pc = 0x2A95F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A95ECu;
            // 0x2a95f0: 0xc6140084  lwc1        $f20, 0x84($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9614u;
            goto label_2a9614;
        }
    }
    ctx->pc = 0x2A95F4u;
    // 0x2a95f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a95f8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a95f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a95fc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a95fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9600: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9600u;
    SET_GPR_U32(ctx, 31, 0x2A9608u);
    ctx->pc = 0x2A9604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9600u;
    // 0x2a9604: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9600u, 0x2A9608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9608u;
label_2a9608:
    // 0x2a9608: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2a9608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a960c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2a960cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2a9610: 0x2623cde0  addiu       $v1, $s1, -0x3220
    ctx->pc = 0x2a9610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
label_2a9614:
    // 0x2a9614: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2a9614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a9618: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2a9618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a961c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A961Cu;
    {
        const bool branch_taken_0x2a961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A961Cu;
        // 0x2a9620: 0xc6160058  lwc1        $f22, 0x58($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a961c) {
            ctx->pc = 0x2A9640u;
            goto label_2a9640;
        }
    }
    ctx->pc = 0x2A9624u;
    // 0x2a9624: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a9624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9628: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a962c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a962cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9630: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9630u;
    SET_GPR_U32(ctx, 31, 0x2A9638u);
    ctx->pc = 0x2A9634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9630u;
    // 0x2a9634: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9630u, 0x2A9638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9638u;
label_2a9638:
    // 0x2a9638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9638u;
    {
        const bool branch_taken_0x2a9638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9638u;
        // 0x2a963c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9638) {
            ctx->pc = 0x2A9644u;
            goto label_2a9644;
        }
    }
    ctx->pc = 0x2A9640u;
label_2a9640:
    // 0x2a9640: 0xc615007c  lwc1        $f21, 0x7C($s0)
    ctx->pc = 0x2a9640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a9644:
    // 0x2a9644: 0x2622cde0  addiu       $v0, $s1, -0x3220
    ctx->pc = 0x2a9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954464));
    // 0x2a9648: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2a9648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a964c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2a964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2a9650: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a9650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a9654: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9654u;
    {
        const bool branch_taken_0x2a9654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9654) {
            ctx->pc = 0x2A9658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9654u;
            // 0x2a9658: 0xc60e0080  lwc1        $f14, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9674u;
            goto label_2a9674;
        }
    }
    ctx->pc = 0x2A965Cu;
    // 0x2a965c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2a965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a9660: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2a9660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a9664: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a9664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a9668: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2A9668u;
    SET_GPR_U32(ctx, 31, 0x2A9670u);
    ctx->pc = 0x2A966Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9668u;
    // 0x2a966c: 0x8e040080  lw          $a0, 0x80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2A9668u, 0x2A9670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9670u;
label_2a9670:
    // 0x2a9670: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x2a9670u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
label_2a9674:
    // 0x2a9674: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x2a9674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x2a9678: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a967c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a967cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9680: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2a9680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a9684: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2a9684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2a9688: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a9688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a968c: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x2a968cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9690: 0x0  nop
    ctx->pc = 0x2a9690u;
    // NOP
    // 0x2a9694: 0x0  nop
    ctx->pc = 0x2a9694u;
    // NOP
    // 0x2a9698: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2a9698u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x2a969c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2A969Cu;
    {
        const bool branch_taken_0x2a969c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a969c) {
            ctx->pc = 0x2A96B8u;
            goto label_2a96b8;
        }
    }
    ctx->pc = 0x2A96A4u;
    // 0x2a96a4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2a96a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2a96a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a96a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A96ACu;
    {
        const bool branch_taken_0x2a96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A96ACu;
        // 0x2a96b0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a96ac) {
            ctx->pc = 0x2A96C4u;
            goto label_2a96c4;
        }
    }
    ctx->pc = 0x2A96B4u;
    // 0x2a96b4: 0x0  nop
    ctx->pc = 0x2a96b4u;
    // NOP
label_2a96b8:
    // 0x2a96b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a96b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a96bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a96bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a96c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a96c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2a96c4:
    // 0x2a96c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2a96c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2a96c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2a96c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2a96cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2a96ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2a96d0: 0xc08c608  jal         func_231820
    ctx->pc = 0x2A96D0u;
    SET_GPR_U32(ctx, 31, 0x2A96D8u);
    ctx->pc = 0x2A96D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A96D0u;
    // 0x2a96d4: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x231820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231820u, 0x2A96D0u, 0x2A96D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A96D8u;
label_2a96d8:
    // 0x2a96d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a96d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a96dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a96dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a96e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a96e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a96e4: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x2a96e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a96e8: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2a96e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a96ec: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2a96ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a96f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A96F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A96F0u;
        // 0x2a96f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A96F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A96F8u;
}
