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

// Function: sub_002505C0
// Address: 0x2505c0 - 0x251150
void sub_002505C0_0x2505c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002505C0_0x2505c0");
#endif

    switch (ctx->pc) {
        case 0x250610u: goto label_250610;
        case 0x250638u: goto label_250638;
        case 0x250650u: goto label_250650;
        case 0x2507c8u: goto label_2507c8;
        case 0x250800u: goto label_250800;
        case 0x250824u: goto label_250824;
        case 0x250b20u: goto label_250b20;
        case 0x250b48u: goto label_250b48;
        case 0x250b68u: goto label_250b68;
        case 0x250cd0u: goto label_250cd0;
        case 0x250e48u: goto label_250e48;
        case 0x250e78u: goto label_250e78;
        case 0x250ec4u: goto label_250ec4;
        case 0x251038u: goto label_251038;
        case 0x2510a8u: goto label_2510a8;
        case 0x2510ccu: goto label_2510cc;
        default: break;
    }

    ctx->pc = 0x2505c0u;

    // 0x2505c0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2505c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2505c4: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2505c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2505c8: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2505c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2505cc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2505ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505d0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2505d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2505d4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2505d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2505d8: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2505d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2505dc: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2505dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2505e0: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2505e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2505e4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2505e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2505e8: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2505e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2505ec: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2505ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2505f0: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2505f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2505f4: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2505f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2505f8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2505f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2505fc: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x2505fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x250600: 0x441006f  bgez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x250600u;
    {
        const bool branch_taken_0x250600 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x250604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250600u;
        // 0x250604: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250600) {
            ctx->pc = 0x2507C0u;
            goto label_2507c0;
        }
    }
    ctx->pc = 0x250608u;
    // 0x250608: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250608u;
    SET_GPR_U32(ctx, 31, 0x250610u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250608u, 0x250610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250610u;
label_250610:
    // 0x250610: 0xc7948914  lwc1        $f20, -0x76EC($gp)
    ctx->pc = 0x250610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25061c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x25061cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x250620: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x250620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x250624: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x250624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x250628: 0xc7968918  lwc1        $f22, -0x76E8($gp)
    ctx->pc = 0x250628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25062c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x25062cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250630: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250630u;
    SET_GPR_U32(ctx, 31, 0x250638u);
    ctx->pc = 0x250634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250630u;
    // 0x250634: 0x461605c2  mul.s       $f23, $f0, $f22 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250630u, 0x250638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250638u;
label_250638:
    // 0x250638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25063c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25063cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250640: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x250640u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x250644: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x250644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250648: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250648u;
    SET_GPR_U32(ctx, 31, 0x250650u);
    ctx->pc = 0x25064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250648u;
    // 0x25064c: 0x46160582  mul.s       $f22, $f0, $f22 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250648u, 0x250650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250650u;
label_250650:
    // 0x250650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250658: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x250658u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x25065c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x25065cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250660: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x250660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x250664: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x250664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250668: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x250668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x25066c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25066cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250670: 0x4602b834  c.lt.s      $f23, $f2
    ctx->pc = 0x250670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250674: 0xc782891c  lwc1        $f2, -0x76E4($gp)
    ctx->pc = 0x250674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250678: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x250678u;
    {
        const bool branch_taken_0x250678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250678u;
        // 0x25067c: 0x46010182  mul.s       $f6, $f0, $f1 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250678) {
            ctx->pc = 0x250688u;
            goto label_250688;
        }
    }
    ctx->pc = 0x250680u;
    // 0x250680: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250680u;
    {
        const bool branch_taken_0x250680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250680u;
        // 0x250684: 0x4602b800  add.s       $f0, $f23, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250680) {
            ctx->pc = 0x25068Cu;
            goto label_25068c;
        }
    }
    ctx->pc = 0x250688u;
label_250688:
    // 0x250688: 0x46171001  sub.s       $f0, $f2, $f23
    ctx->pc = 0x250688u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[23]);
label_25068c:
    // 0x25068c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x25068cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250690: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250694: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250698: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250698u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25069c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x25069cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2506a0: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x2506a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2506a4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2506a4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2506a8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x2506a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x2506ac: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x2506acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2506b0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2506b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2506b4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2506b4u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2506b8: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x2506b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x2506bc: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x2506bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x2506c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2506c0u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2506c4: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x2506c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2506c8: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x2506c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x2506cc: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x2506ccu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x2506d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2506d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2506d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2506d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2506d8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2506d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2506dc: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x2506dcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x2506e0: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2506e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2506e4: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x2506e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2506e8: 0x460100c4  c1          0x100C4
    ctx->pc = 0x2506e8u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2506ec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2506ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2506f0: 0x4604b834  c.lt.s      $f23, $f4
    ctx->pc = 0x2506f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2506f4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2506F4u;
    {
        const bool branch_taken_0x2506f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2506F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506F4u;
        // 0x2506f8: 0x460611c2  mul.s       $f7, $f2, $f6 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506f4) {
            ctx->pc = 0x250700u;
            goto label_250700;
        }
    }
    ctx->pc = 0x2506FCu;
    // 0x2506fc: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x2506fcu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_250700:
    // 0x250700: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x250700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x250704: 0xc7818920  lwc1        $f1, -0x76E0($gp)
    ctx->pc = 0x250704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250708: 0x4604b034  c.lt.s      $f22, $f4
    ctx->pc = 0x250708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25070c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25070Cu;
    {
        const bool branch_taken_0x25070c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25070Cu;
        // 0x250710: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25070c) {
            ctx->pc = 0x250720u;
            goto label_250720;
        }
    }
    ctx->pc = 0x250714u;
    // 0x250714: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250714u;
    {
        const bool branch_taken_0x250714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250714u;
        // 0x250718: 0x4601b000  add.s       $f0, $f22, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250714) {
            ctx->pc = 0x250724u;
            goto label_250724;
        }
    }
    ctx->pc = 0x25071Cu;
    // 0x25071c: 0x0  nop
    ctx->pc = 0x25071cu;
    // NOP
label_250720:
    // 0x250720: 0x46160801  sub.s       $f0, $f1, $f22
    ctx->pc = 0x250720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_250724:
    // 0x250724: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x250724u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250728: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25072c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250730: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250730u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250734: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x250734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250738: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250738u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x25073c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x25073cu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250740: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250740u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x250744: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250744u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250748: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250748u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x25074c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x25074cu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250750: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250750u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250754: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x250754u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250758: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250758u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25075c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x25075cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250760: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250760u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250764: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x250764u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250768: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25076c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25076cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250770: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x250770u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x250774: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x250774u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x250778: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x250778u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x25077c: 0x460200c4  c1          0x200C4
    ctx->pc = 0x25077cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x250780: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250780u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250784: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x250784u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x250788: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x250788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25078c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25078Cu;
    {
        const bool branch_taken_0x25078c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25078Cu;
        // 0x250790: 0xe4a10008  swc1        $f1, 0x8($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25078c) {
            ctx->pc = 0x250798u;
            goto label_250798;
        }
    }
    ctx->pc = 0x250794u;
    // 0x250794: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x250794u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_250798:
    // 0x250798: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x250798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x25079c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2507a0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2507a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2507a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507a8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2507a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2507ac: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2507acu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2507b0: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2507b0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2507b4: 0x4bdf842a  vmul.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x2507b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2507b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2507B8u;
    {
        const bool branch_taken_0x2507b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2507BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2507B8u;
        // 0x2507bc: 0xf8700000  sqc2        $vf16, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2507b8) {
            ctx->pc = 0x250848u;
            goto label_250848;
        }
    }
    ctx->pc = 0x2507C0u;
label_2507c0:
    // 0x2507c0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2507C0u;
    SET_GPR_U32(ctx, 31, 0x2507C8u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2507C0u, 0x2507C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2507C8u;
label_2507c8:
    // 0x2507c8: 0xc7948924  lwc1        $f20, -0x76DC($gp)
    ctx->pc = 0x2507c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2507cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2507ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2507d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2507d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2507d4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2507d4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2507d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2507d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2507dc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2507dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2507e0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2507e4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2507e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2507e8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2507e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2507ec: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2507ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2507f0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2507f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2507f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2507f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2507f8: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2507F8u;
    SET_GPR_U32(ctx, 31, 0x250800u);
    ctx->pc = 0x2507FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2507F8u;
    // 0x2507fc: 0xe6210080  swc1        $f1, 0x80($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2507F8u, 0x250800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250800u;
label_250800:
    // 0x250800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250808: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x250808u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x25080c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x25080cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250810: 0xc6210084  lwc1        $f1, 0x84($s1)
    ctx->pc = 0x250810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250814: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x250814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x250818: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x250818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25081c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x25081Cu;
    SET_GPR_U32(ctx, 31, 0x250824u);
    ctx->pc = 0x250820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25081Cu;
    // 0x250820: 0xe6210084  swc1        $f1, 0x84($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x25081Cu, 0x250824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250824u;
label_250824:
    // 0x250824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25082c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x25082cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x250830: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x250830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250834: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x250834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250838: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x250838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x25083c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x25083cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x250840: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x250840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x250844: 0xe6210088  swc1        $f1, 0x88($s1)
    ctx->pc = 0x250844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_250848:
    // 0x250848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25084c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25084cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250850: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x250850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250854: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x250854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x250858: 0xe620008c  swc1        $f0, 0x8C($s1)
    ctx->pc = 0x250858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
    // 0x25085c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x25085cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x250860: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x250860u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x250864: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x250864u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x250868: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x250868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25086c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x25086cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x250870: 0x26350050  addiu       $s5, $s1, 0x50
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x250874: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x250874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x250878: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x250878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x25087c: 0xdab00000  lqc2        $vf16, 0x0($s5)
    ctx->pc = 0x25087cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x250880: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x250880u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250884: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x250884u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250888: 0xdba60020  lqc2        $vf6, 0x20($sp)
    ctx->pc = 0x250888u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25088c: 0xdba70030  lqc2        $vf7, 0x30($sp)
    ctx->pc = 0x25088cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250890: 0x4bd0212a  vmul.xyz    $vf4, $vf4, $vf16
    ctx->pc = 0x250890u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x250894: 0x4bd0296a  vmul.xyz    $vf5, $vf5, $vf16
    ctx->pc = 0x250894u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x250898: 0x4bd031aa  vmul.xyz    $vf6, $vf6, $vf16
    ctx->pc = 0x250898u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25089c: 0x4bd039ea  vmul.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x25089cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2508a0: 0xc6210078  lwc1        $f1, 0x78($s1)
    ctx->pc = 0x2508a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2508a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2508a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2508a8: 0xc7828928  lwc1        $f2, -0x76D8($gp)
    ctx->pc = 0x2508a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2508ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2508acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2508b0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2508B0u;
    {
        const bool branch_taken_0x2508b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2508b0) {
            ctx->pc = 0x2508B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2508B0u;
            // 0x2508b4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2508C8u;
            goto label_2508c8;
        }
    }
    ctx->pc = 0x2508B8u;
    // 0x2508b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2508b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2508bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2508BCu;
    {
        const bool branch_taken_0x2508bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2508C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508BCu;
        // 0x2508c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2508bc) {
            ctx->pc = 0x2508CCu;
            goto label_2508cc;
        }
    }
    ctx->pc = 0x2508C4u;
    // 0x2508c4: 0x0  nop
    ctx->pc = 0x2508c4u;
    // NOP
label_2508c8:
    // 0x2508c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2508c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2508cc:
    // 0x2508cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2508ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2508d0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2508d0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2508d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2508d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2508d8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2508dc: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2508dcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2508e0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2508e0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2508e4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2508e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2508e8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2508e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2508ec: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2508ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2508f0: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2508f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2508f4: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2508f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2508f8: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2508f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2508fc: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2508fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250900: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x250900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250904: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x250904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250908: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x250908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25090c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25090cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250910: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x250910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x250914: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x250914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250918: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x250918u;
    {
        const bool branch_taken_0x250918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250918u;
        // 0x25091c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250918) {
            ctx->pc = 0x250930u;
            goto label_250930;
        }
    }
    ctx->pc = 0x250920u;
    // 0x250920: 0x4a0003bf  vwaitq
    ctx->pc = 0x250920u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250924: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250924u;
    {
        const bool branch_taken_0x250924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250924u;
        // 0x250928: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250924) {
            ctx->pc = 0x250938u;
            goto label_250938;
        }
    }
    ctx->pc = 0x25092Cu;
    // 0x25092c: 0x0  nop
    ctx->pc = 0x25092cu;
    // NOP
label_250930:
    // 0x250930: 0x4a0003bf  vwaitq
    ctx->pc = 0x250930u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250934: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x250934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_250938:
    // 0x250938: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x250938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25093c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25093cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250940: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x250940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250944: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x250944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x250948: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x250948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25094c: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x25094cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x250950: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x250950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x250954: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x250954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x250958: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x250958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25095c: 0x4b87e9bc  vmulax.xy   $ACC, $vf29, $vf7x
    ctx->pc = 0x25095cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x250960: 0x4b87e1c9  vmaddy.xy   $vf7, $vf28, $vf7y
    ctx->pc = 0x250960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x250964: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x250964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25096c: 0xc782892c  lwc1        $f2, -0x76D4($gp)
    ctx->pc = 0x25096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250974: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x250974u;
    {
        const bool branch_taken_0x250974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250974) {
            ctx->pc = 0x250978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250974u;
            // 0x250978: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250988u;
            goto label_250988;
        }
    }
    ctx->pc = 0x25097Cu;
    // 0x25097c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25097cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x250980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250980u;
    {
        const bool branch_taken_0x250980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250980u;
        // 0x250984: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250980) {
            ctx->pc = 0x25098Cu;
            goto label_25098c;
        }
    }
    ctx->pc = 0x250988u;
label_250988:
    // 0x250988: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x250988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25098c:
    // 0x25098c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x25098cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250990: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x250990u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250994: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250998: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25099c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25099cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2509a0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2509a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2509a4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2509a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2509a8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2509a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2509ac: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2509acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2509b0: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2509b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2509b4: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2509b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2509b8: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2509b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2509bc: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2509bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2509c0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2509c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2509c4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2509c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2509c8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2509c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2509cc: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2509ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2509d0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2509d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2509d4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2509d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2509d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2509D8u;
    {
        const bool branch_taken_0x2509d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509D8u;
        // 0x2509dc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509d8) {
            ctx->pc = 0x2509F0u;
            goto label_2509f0;
        }
    }
    ctx->pc = 0x2509E0u;
    // 0x2509e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2509e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2509e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2509E4u;
    {
        const bool branch_taken_0x2509e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2509E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2509E4u;
        // 0x2509e8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2509e4) {
            ctx->pc = 0x2509F8u;
            goto label_2509f8;
        }
    }
    ctx->pc = 0x2509ECu;
    // 0x2509ec: 0x0  nop
    ctx->pc = 0x2509ecu;
    // NOP
label_2509f0:
    // 0x2509f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2509f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2509f4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2509f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2509f8:
    // 0x2509f8: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2509f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2509fc: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2509fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a00: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x250a00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a04: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x250a04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250a08: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x250a08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x250a0c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x250a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250a10: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x250a10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x250a14: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x250a14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250a18: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x250a18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x250a1c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x250a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250a20: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x250a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x250a24: 0xc6210070  lwc1        $f1, 0x70($s1)
    ctx->pc = 0x250a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250a2c: 0xc7828930  lwc1        $f2, -0x76D0($gp)
    ctx->pc = 0x250a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250a30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250a34: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x250A34u;
    {
        const bool branch_taken_0x250a34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250a34) {
            ctx->pc = 0x250A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250A34u;
            // 0x250a38: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250A48u;
            goto label_250a48;
        }
    }
    ctx->pc = 0x250A3Cu;
    // 0x250a3c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x250a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x250a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x250A40u;
    {
        const bool branch_taken_0x250a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A40u;
        // 0x250a44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a40) {
            ctx->pc = 0x250A4Cu;
            goto label_250a4c;
        }
    }
    ctx->pc = 0x250A48u;
label_250a48:
    // 0x250a48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x250a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250a4c:
    // 0x250a4c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x250a4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250a50: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x250a50u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250a54: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250a58: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250a5c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x250a5cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x250a60: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x250a60u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x250a64: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x250a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250a68: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x250a68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x250a6c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x250a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a70: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x250a70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a74: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x250a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a78: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x250a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250a7c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x250a7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a80: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x250a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250a84: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x250a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a88: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x250a88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250a8c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x250a8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250a90: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x250a90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x250a94: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x250a94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250a98: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x250A98u;
    {
        const bool branch_taken_0x250a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250A98u;
        // 0x250a9c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250a98) {
            ctx->pc = 0x250AB0u;
            goto label_250ab0;
        }
    }
    ctx->pc = 0x250AA0u;
    // 0x250aa0: 0x4a0003bf  vwaitq
    ctx->pc = 0x250aa0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250AA4u;
    {
        const bool branch_taken_0x250aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250AA4u;
        // 0x250aa8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250aa4) {
            ctx->pc = 0x250AB8u;
            goto label_250ab8;
        }
    }
    ctx->pc = 0x250AACu;
    // 0x250aac: 0x0  nop
    ctx->pc = 0x250aacu;
    // NOP
label_250ab0:
    // 0x250ab0: 0x4a0003bf  vwaitq
    ctx->pc = 0x250ab0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250ab4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x250ab4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_250ab8:
    // 0x250ab8: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x250ab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250abc: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x250abcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250ac0: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x250ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250ac4: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x250ac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x250ac8: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x250ac8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x250acc: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x250accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x250ad0: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x250ad0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x250ad4: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x250ad4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x250ad8: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x250ad8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x250adc: 0x4ac7e1bd  vmulay.yz   $ACC, $vf28, $vf7y
    ctx->pc = 0x250adcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x250ae0: 0x4ac7e9ca  vmaddz.yz   $vf7, $vf29, $vf7z
    ctx->pc = 0x250ae0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x250ae4: 0xd8900000  lqc2        $vf16, 0x0($a0)
    ctx->pc = 0x250ae4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x250ae8: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x250ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250aec: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x250aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250af0: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x250af0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250af4: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x250af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x250af8: 0x26340040  addiu       $s4, $s1, 0x40
    ctx->pc = 0x250af8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x250afc: 0xda9f0000  lqc2        $vf31, 0x0($s4)
    ctx->pc = 0x250afcu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x250b00: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x250b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x250b04: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x250b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x250b08: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x250b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x250b0c: 0xfba60020  sqc2        $vf6, 0x20($sp)
    ctx->pc = 0x250b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x250b10: 0xfba70030  sqc2        $vf7, 0x30($sp)
    ctx->pc = 0x250b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x250b14: 0x26330080  addiu       $s3, $s1, 0x80
    ctx->pc = 0x250b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x250b18: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250B18u;
    SET_GPR_U32(ctx, 31, 0x250B20u);
    ctx->pc = 0x250B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B18u;
    // 0x250b1c: 0xfa700000  sqc2        $vf16, 0x0($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250B18u, 0x250B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B20u;
label_250b20:
    // 0x250b20: 0xc7948934  lwc1        $f20, -0x76CC($gp)
    ctx->pc = 0x250b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250b2c: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x250b2cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x250b30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x250b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x250b34: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x250b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x250b38: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x250b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250b3c: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x250b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250b40: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250B40u;
    SET_GPR_U32(ctx, 31, 0x250B48u);
    ctx->pc = 0x250B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B40u;
    // 0x250b44: 0x460105c2  mul.s       $f23, $f0, $f1 (Delay Slot)
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250B40u, 0x250B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B48u;
label_250b48:
    // 0x250b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250b4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250b50: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x250b50u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x250b54: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x250b54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250b58: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x250b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250b5c: 0xc638009c  lwc1        $f24, 0x9C($s1)
    ctx->pc = 0x250b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x250b60: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250B60u;
    SET_GPR_U32(ctx, 31, 0x250B68u);
    ctx->pc = 0x250B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250B60u;
    // 0x250b64: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250B60u, 0x250B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B68u;
label_250b68:
    // 0x250b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250b6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250b70: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x250b70u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x250b74: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x250b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x250b78: 0xc6230094  lwc1        $f3, 0x94($s1)
    ctx->pc = 0x250b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250b7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x250b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250b80: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x250b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x250b84: 0xc6220090  lwc1        $f2, 0x90($s1)
    ctx->pc = 0x250b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250b88: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x250b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250b8c: 0xc7818938  lwc1        $f1, -0x76C8($gp)
    ctx->pc = 0x250b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250b90: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x250b90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x250b94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x250B94u;
    {
        const bool branch_taken_0x250b94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B94u;
        // 0x250b98: 0x46001180  add.s       $f6, $f2, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b94) {
            ctx->pc = 0x250BA8u;
            goto label_250ba8;
        }
    }
    ctx->pc = 0x250B9Cu;
    // 0x250b9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250B9Cu;
    {
        const bool branch_taken_0x250b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B9Cu;
        // 0x250ba0: 0x4601b800  add.s       $f0, $f23, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b9c) {
            ctx->pc = 0x250BACu;
            goto label_250bac;
        }
    }
    ctx->pc = 0x250BA4u;
    // 0x250ba4: 0x0  nop
    ctx->pc = 0x250ba4u;
    // NOP
label_250ba8:
    // 0x250ba8: 0x46170801  sub.s       $f0, $f1, $f23
    ctx->pc = 0x250ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
label_250bac:
    // 0x250bac: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x250bacu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250bb0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250bb4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250bb8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250bb8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250bbc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x250bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250bc0: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250bc0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x250bc4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x250bc4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250bc8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250bc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x250bcc: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250bccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250bd0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250bd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250bd4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x250bd4u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250bd8: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250bd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250bdc: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x250bdcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250be0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250be0u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250be4: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250be4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250be8: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250be8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250bec: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x250becu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250bf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250bf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250bf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250bf8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x250bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x250bfc: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x250bfcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x250c00: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x250c00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x250c04: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x250c04u;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x250c08: 0x460100c4  c1          0x100C4
    ctx->pc = 0x250c08u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x250c0c: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x250c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x250c10: 0x4604b834  c.lt.s      $f23, $f4
    ctx->pc = 0x250c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250c14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x250C14u;
    {
        const bool branch_taken_0x250c14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C14u;
        // 0x250c18: 0x460611c2  mul.s       $f7, $f2, $f6 (Delay Slot)
        ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c14) {
            ctx->pc = 0x250C20u;
            goto label_250c20;
        }
    }
    ctx->pc = 0x250C1Cu;
    // 0x250c1c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x250c1cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_250c20:
    // 0x250c20: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x250c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x250c24: 0xc781893c  lwc1        $f1, -0x76C4($gp)
    ctx->pc = 0x250c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250c28: 0x4604b034  c.lt.s      $f22, $f4
    ctx->pc = 0x250c28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250c2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x250C2Cu;
    {
        const bool branch_taken_0x250c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C2Cu;
        // 0x250c30: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c2c) {
            ctx->pc = 0x250C40u;
            goto label_250c40;
        }
    }
    ctx->pc = 0x250C34u;
    // 0x250c34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250C34u;
    {
        const bool branch_taken_0x250c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C34u;
        // 0x250c38: 0x4601b000  add.s       $f0, $f22, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c34) {
            ctx->pc = 0x250C44u;
            goto label_250c44;
        }
    }
    ctx->pc = 0x250C3Cu;
    // 0x250c3c: 0x0  nop
    ctx->pc = 0x250c3cu;
    // NOP
label_250c40:
    // 0x250c40: 0x46160801  sub.s       $f0, $f1, $f22
    ctx->pc = 0x250c40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
label_250c44:
    // 0x250c44: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x250c44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250c48: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250c4c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250c50: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250c50u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250c54: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x250c54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250c58: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250c58u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x250c5c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x250c5cu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250c60: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250c60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x250c64: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250c64u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250c68: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250c68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250c6c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x250c6cu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250c70: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250c70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250c74: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x250c74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250c78: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250c78u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250c7c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250c7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250c80: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250c80u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250c84: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x250c84u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250c8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250c90: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x250c90u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x250c94: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x250c94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x250c98: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x250c98u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x250c9c: 0x460200c4  c1          0x200C4
    ctx->pc = 0x250c9cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x250ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250ca4: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x250ca4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x250ca8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x250ca8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250cac: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x250CACu;
    {
        const bool branch_taken_0x250cac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CACu;
        // 0x250cb0: 0xe6410008  swc1        $f1, 0x8($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cac) {
            ctx->pc = 0x250CB8u;
            goto label_250cb8;
        }
    }
    ctx->pc = 0x250CB4u;
    // 0x250cb4: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x250cb4u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_250cb8:
    // 0x250cb8: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x250cb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x250cbc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x250cbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x250cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250cc4: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x250cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x250cc8: 0xc084c9a  jal         func_213268
    ctx->pc = 0x250CC8u;
    SET_GPR_U32(ctx, 31, 0x250CD0u);
    ctx->pc = 0x250CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250CC8u;
    // 0x250ccc: 0xc62c00a0  lwc1        $f12, 0xA0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x213268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213268u, 0x250CC8u, 0x250CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CD0u;
label_250cd0:
    // 0x250cd0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x250cd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250cd4: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x250cd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x250cd8: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x250cd8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x250cdc: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x250cdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x250ce0: 0xc62100a4  lwc1        $f1, 0xA4($s1)
    ctx->pc = 0x250ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250ce4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250ce8: 0xc7828940  lwc1        $f2, -0x76C0($gp)
    ctx->pc = 0x250ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250cec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x250cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250cf0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x250CF0u;
    {
        const bool branch_taken_0x250cf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250cf0) {
            ctx->pc = 0x250CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250CF0u;
            // 0x250cf4: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x250D08u;
            goto label_250d08;
        }
    }
    ctx->pc = 0x250CF8u;
    // 0x250cf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x250cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x250cfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250CFCu;
    {
        const bool branch_taken_0x250cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CFCu;
        // 0x250d00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cfc) {
            ctx->pc = 0x250D0Cu;
            goto label_250d0c;
        }
    }
    ctx->pc = 0x250D04u;
    // 0x250d04: 0x0  nop
    ctx->pc = 0x250d04u;
    // NOP
label_250d08:
    // 0x250d08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x250d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250d0c:
    // 0x250d0c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x250d0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250d10: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x250d10u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250d14: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250d18: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250d1c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x250d1cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x250d20: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x250d20u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x250d24: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x250d24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250d28: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x250d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x250d2c: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x250d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d30: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x250d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d34: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x250d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d38: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x250d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250d3c: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x250d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d40: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x250d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250d44: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x250d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d48: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x250d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250d4c: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x250d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250d50: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x250d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x250d54: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x250d54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x250D58u;
    {
        const bool branch_taken_0x250d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D58u;
        // 0x250d5c: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d58) {
            ctx->pc = 0x250D70u;
            goto label_250d70;
        }
    }
    ctx->pc = 0x250D60u;
    // 0x250d60: 0x4a0003bf  vwaitq
    ctx->pc = 0x250d60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x250D64u;
    {
        const bool branch_taken_0x250d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D64u;
        // 0x250d68: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d64) {
            ctx->pc = 0x250D78u;
            goto label_250d78;
        }
    }
    ctx->pc = 0x250D6Cu;
    // 0x250d6c: 0x0  nop
    ctx->pc = 0x250d6cu;
    // NOP
label_250d70:
    // 0x250d70: 0x4a0003bf  vwaitq
    ctx->pc = 0x250d70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x250d74: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x250d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_250d78:
    // 0x250d78: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x250d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x250d7c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x250d7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d80: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x250d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x250d84: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x250d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250d88: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x250d88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x250d8c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x250d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250d90: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x250d90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x250d94: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x250d94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250d98: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x250d98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x250d9c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x250d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x250da0: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x250da0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x250da4: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x250da4u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250da8: 0xdba90010  lqc2        $vf9, 0x10($sp)
    ctx->pc = 0x250da8u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250dac: 0xdbaa0020  lqc2        $vf10, 0x20($sp)
    ctx->pc = 0x250dacu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250db0: 0xdbab0030  lqc2        $vf11, 0x30($sp)
    ctx->pc = 0x250db0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250db4: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x250db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250db8: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x250db8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dbc: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x250dbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dc0: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x250dc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x250dc4: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x250dc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dc8: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x250dc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dcc: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x250dccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dd0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x250dd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x250dd4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x250dd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dd8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x250dd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250ddc: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x250ddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250de0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x250de0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x250de4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x250de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250de8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x250de8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250dec: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x250decu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250df0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x250df0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x250df4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x250df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250df8: 0xda500000  lqc2        $vf16, 0x0($s2)
    ctx->pc = 0x250df8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x250dfc: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x250dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250e00: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x250e00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250e04: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x250e04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x250e08: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x250e08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x250e0c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x250e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x250e10: 0x922300c4  lbu         $v1, 0xC4($s1)
    ctx->pc = 0x250e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x250e14: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x250e14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250e18: 0x10600085  beqz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x250E18u;
    {
        const bool branch_taken_0x250e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E18u;
        // 0x250e1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e18) {
            ctx->pc = 0x251030u;
            goto label_251030;
        }
    }
    ctx->pc = 0x250E20u;
    // 0x250e20: 0x10620083  beq         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x250E20u;
    {
        const bool branch_taken_0x250e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E20u;
        // 0x250e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e20) {
            ctx->pc = 0x251030u;
            goto label_251030;
        }
    }
    ctx->pc = 0x250E28u;
    // 0x250e28: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x250E28u;
    {
        const bool branch_taken_0x250e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x250E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E28u;
        // 0x250e2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e28) {
            ctx->pc = 0x250E40u;
            goto label_250e40;
        }
    }
    ctx->pc = 0x250E30u;
    // 0x250e30: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x250E30u;
    {
        const bool branch_taken_0x250e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x250e30) {
            ctx->pc = 0x250E70u;
            goto label_250e70;
        }
    }
    ctx->pc = 0x250E38u;
    // 0x250e38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x250E38u;
    {
        const bool branch_taken_0x250e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E38u;
        // 0x250e3c: 0xc62000d0  lwc1        $f0, 0xD0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e38) {
            ctx->pc = 0x250EA0u;
            goto label_250ea0;
        }
    }
    ctx->pc = 0x250E40u;
label_250e40:
    // 0x250e40: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250E40u;
    SET_GPR_U32(ctx, 31, 0x250E48u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250E40u, 0x250E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E48u;
label_250e48:
    // 0x250e48: 0xc7818944  lwc1        $f1, -0x76BC($gp)
    ctx->pc = 0x250e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250e50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250e50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250e54: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250e54u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x250e58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x250e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x250e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250e60: 0xc7818948  lwc1        $f1, -0x76B8($gp)
    ctx->pc = 0x250e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250e64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x250E64u;
    {
        const bool branch_taken_0x250e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E64u;
        // 0x250e68: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e64) {
            ctx->pc = 0x250E98u;
            goto label_250e98;
        }
    }
    ctx->pc = 0x250E6Cu;
    // 0x250e6c: 0x0  nop
    ctx->pc = 0x250e6cu;
    // NOP
label_250e70:
    // 0x250e70: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250E70u;
    SET_GPR_U32(ctx, 31, 0x250E78u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250E70u, 0x250E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E78u;
label_250e78:
    // 0x250e78: 0xc781894c  lwc1        $f1, -0x76B4($gp)
    ctx->pc = 0x250e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250e80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250e80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250e84: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250e84u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x250e88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x250e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x250e8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x250e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x250e90: 0xc7818950  lwc1        $f1, -0x76B0($gp)
    ctx->pc = 0x250e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250e94: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x250e94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_250e98:
    // 0x250e98: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x250e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x250e9c: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x250e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250ea0:
    // 0x250ea0: 0xc7818954  lwc1        $f1, -0x76AC($gp)
    ctx->pc = 0x250ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250ea4: 0x46020500  add.s       $f20, $f0, $f2
    ctx->pc = 0x250ea4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x250ea8: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x250ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250eac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x250EACu;
    {
        const bool branch_taken_0x250eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250eac) {
            ctx->pc = 0x250EBCu;
            goto label_250ebc;
        }
    }
    ctx->pc = 0x250EB4u;
    // 0x250eb4: 0xc7808958  lwc1        $f0, -0x76A8($gp)
    ctx->pc = 0x250eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250eb8: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x250eb8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_250ebc:
    // 0x250ebc: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x250EBCu;
    SET_GPR_U32(ctx, 31, 0x250EC4u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x250EBCu, 0x250EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250EC4u;
label_250ec4:
    // 0x250ec4: 0xc781895c  lwc1        $f1, -0x76A4($gp)
    ctx->pc = 0x250ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x250ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x250eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x250ed0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250ed0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x250ed4: 0xc7828960  lwc1        $f2, -0x76A0($gp)
    ctx->pc = 0x250ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250ed8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x250ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x250edc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x250edcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x250ee0: 0x46020182  mul.s       $f6, $f0, $f2
    ctx->pc = 0x250ee0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x250ee4: 0xc7808964  lwc1        $f0, -0x769C($gp)
    ctx->pc = 0x250ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250ee8: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x250ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250eec: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x250EECu;
    {
        const bool branch_taken_0x250eec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EECu;
        // 0x250ef0: 0xc62700d4  lwc1        $f7, 0xD4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250eec) {
            ctx->pc = 0x250F00u;
            goto label_250f00;
        }
    }
    ctx->pc = 0x250EF4u;
    // 0x250ef4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250EF4u;
    {
        const bool branch_taken_0x250ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EF4u;
        // 0x250ef8: 0x46003000  add.s       $f0, $f6, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ef4) {
            ctx->pc = 0x250F04u;
            goto label_250f04;
        }
    }
    ctx->pc = 0x250EFCu;
    // 0x250efc: 0x0  nop
    ctx->pc = 0x250efcu;
    // NOP
label_250f00:
    // 0x250f00: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x250f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_250f04:
    // 0x250f04: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x250f04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250f08: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250f0c: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250f10: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250f10u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250f14: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x250f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250f18: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250f18u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x250f1c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x250f1cu;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250f20: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250f20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x250f24: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250f24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250f28: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250f28u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250f2c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x250f2cu;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250f30: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250f30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250f34: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x250f34u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250f38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250f38u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250f3c: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250f3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250f40: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250f40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250f44: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x250f44u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250f48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250f50: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x250f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x250f54: 0x46002886  mov.s       $f2, $f5
    ctx->pc = 0x250f54u;
    ctx->f[2] = FPU_MOV_S(ctx->f[5]);
    // 0x250f58: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x250f58u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x250f5c: 0x4602105d  msub.s      $f1, $f2, $f2
    ctx->pc = 0x250f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x250f60: 0x460100c4  c1          0x100C4
    ctx->pc = 0x250f60u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x250f64: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x250f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x250f68: 0x46043034  c.lt.s      $f6, $f4
    ctx->pc = 0x250f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250f6c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x250F6Cu;
    {
        const bool branch_taken_0x250f6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F6Cu;
        // 0x250f70: 0x46071202  mul.s       $f8, $f2, $f7 (Delay Slot)
        ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f6c) {
            ctx->pc = 0x250F78u;
            goto label_250f78;
        }
    }
    ctx->pc = 0x250F74u;
    // 0x250f74: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x250f74u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_250f78:
    // 0x250f78: 0x46071802  mul.s       $f0, $f3, $f7
    ctx->pc = 0x250f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x250f7c: 0xc7818968  lwc1        $f1, -0x7698($gp)
    ctx->pc = 0x250f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250f80: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x250f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250f84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x250F84u;
    {
        const bool branch_taken_0x250f84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F84u;
        // 0x250f88: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f84) {
            ctx->pc = 0x250F98u;
            goto label_250f98;
        }
    }
    ctx->pc = 0x250F8Cu;
    // 0x250f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x250F8Cu;
    {
        const bool branch_taken_0x250f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F8Cu;
        // 0x250f90: 0x4601a000  add.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f8c) {
            ctx->pc = 0x250F9Cu;
            goto label_250f9c;
        }
    }
    ctx->pc = 0x250F94u;
    // 0x250f94: 0x0  nop
    ctx->pc = 0x250f94u;
    // NOP
label_250f98:
    // 0x250f98: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x250f98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_250f9c:
    // 0x250f9c: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x250f9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x250fa0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x250fa4: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x250fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x250fa8: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x250fa8u;
    { uint32_t bits = FAST_READ32(0x3AB6ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250fac: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x250facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x250fb0: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x250fb0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x250fb4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x250fb4u;
    { uint32_t bits = FAST_READ32(0x3AB6E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250fb8: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x250fb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x250fbc: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250fbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250fc0: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250fc0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250fc4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x250fc4u;
    { uint32_t bits = FAST_READ32(0x3AB6E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250fc8: 0x46051902  mul.s       $f4, $f3, $f5
    ctx->pc = 0x250fc8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x250fcc: 0x4601181e  madda.s     $f3, $f1
    ctx->pc = 0x250fccu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1])));
    // 0x250fd0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x250fd0u;
    { uint32_t bits = FAST_READ32(0x3AB6E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x250fd4: 0x460520c2  mul.s       $f3, $f4, $f5
    ctx->pc = 0x250fd4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x250fd8: 0x4602201e  madda.s     $f4, $f2
    ctx->pc = 0x250fd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[2])));
    // 0x250fdc: 0x4601195c  madd.s      $f5, $f3, $f1
    ctx->pc = 0x250fdcu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x250fe0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250fe8: 0x46002846  mov.s       $f1, $f5
    ctx->pc = 0x250fe8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[5]);
    // 0x250fec: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x250fecu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x250ff0: 0x4601089d  msub.s      $f2, $f1, $f1
    ctx->pc = 0x250ff0u;
    ctx->f[2] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x250ff4: 0x460200c4  c1          0x200C4
    ctx->pc = 0x250ff4u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x250ff8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250ffc: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x250ffcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x251000: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x251000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251004: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x251004u;
    {
        const bool branch_taken_0x251004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x251008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251004u;
        // 0x251008: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251004) {
            ctx->pc = 0x251010u;
            goto label_251010;
        }
    }
    ctx->pc = 0x25100Cu;
    // 0x25100c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x25100cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_251010:
    // 0x251010: 0x46081802  mul.s       $f0, $f3, $f8
    ctx->pc = 0x251010u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x251014: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x251014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251018: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x251018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25101c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x25101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x251020: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x251020u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251024: 0xd87f0000  lqc2        $vf31, 0x0($v1)
    ctx->pc = 0x251024u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251028: 0x4bdf8428  vadd.xyz    $vf16, $vf16, $vf31
    ctx->pc = 0x251028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25102c: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x25102cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_251030:
    // 0x251030: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x251030u;
    SET_GPR_U32(ctx, 31, 0x251038u);
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x251030u, 0x251038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251038u;
label_251038:
    // 0x251038: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x251038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x25103c: 0x96240062  lhu         $a0, 0x62($s1)
    ctx->pc = 0x25103cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
    // 0x251040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x251040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x251044: 0xc62200bc  lwc1        $f2, 0xBC($s1)
    ctx->pc = 0x251044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251048: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x251048u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25104c: 0xc62100b4  lwc1        $f1, 0xB4($s1)
    ctx->pc = 0x25104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251050: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x251050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251054: 0xc62300b0  lwc1        $f3, 0xB0($s1)
    ctx->pc = 0x251054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251058: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x251058u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25105c: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x25105cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x251060: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x251060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x251064: 0xc794896c  lwc1        $f20, -0x7694($gp)
    ctx->pc = 0x251064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x251068: 0x2810  mfhi        $a1
    ctx->pc = 0x251068u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x25106c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x25106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x251070: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x251070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x251074: 0xa6240062  sh          $a0, 0x62($s1)
    ctx->pc = 0x251074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 4));
    // 0x251078: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x251078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x25107c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251080: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x251080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x251084: 0x0  nop
    ctx->pc = 0x251084u;
    // NOP
    // 0x251088: 0x0  nop
    ctx->pc = 0x251088u;
    // NOP
    // 0x25108c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x25108cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x251090: 0x0  nop
    ctx->pc = 0x251090u;
    // NOP
    // 0x251094: 0x0  nop
    ctx->pc = 0x251094u;
    // NOP
    // 0x251098: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x251098u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x25109c: 0xe62100b4  swc1        $f1, 0xB4($s1)
    ctx->pc = 0x25109cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x2510a0: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2510A0u;
    SET_GPR_U32(ctx, 31, 0x2510A8u);
    ctx->pc = 0x2510A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510A0u;
    // 0x2510a4: 0xe62200bc  swc1        $f2, 0xBC($s1) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2510A0u, 0x2510A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510A8u;
label_2510a8:
    // 0x2510a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2510a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2510ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2510acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2510b0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2510b0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2510b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2510b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2510b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2510b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2510bc: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2510bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2510c0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2510c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2510c4: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x2510C4u;
    SET_GPR_U32(ctx, 31, 0x2510CCu);
    ctx->pc = 0x2510C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510C4u;
    // 0x2510c8: 0xe62000a0  swc1        $f0, 0xA0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x2510C4u, 0x2510CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510CCu;
label_2510cc:
    // 0x2510cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2510ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2510d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2510d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2510d4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2510d4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x2510d8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2510d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2510dc: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2510dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2510e0: 0x7a230070  lq          $v1, 0x70($s1)
    ctx->pc = 0x2510e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2510e4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2510e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2510e8: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2510e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2510ec: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x2510ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x2510f0: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2510f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2510f4: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2510f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2510f8: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2510f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2510fc: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2510fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x251100: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x251100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
    // 0x251104: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x251104u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x251108: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x251108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25110c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x25110cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x251110: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x251110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x251114: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x251114u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x251118: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x251118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25111c: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x25111cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251120: 0xc62100b8  lwc1        $f1, 0xB8($s1)
    ctx->pc = 0x251120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251124: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x251124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x251128: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x251128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x25112c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x25112cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x251130: 0x96c2011c  lhu         $v0, 0x11C($s6)
    ctx->pc = 0x251130u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
    // 0x251134: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x251134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x251138: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25113c: 0xa6c2011c  sh          $v0, 0x11C($s6)
    ctx->pc = 0x25113cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x251140: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x251140u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x251144: 0x3e00008  jr          $ra
    ctx->pc = 0x251144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251144u;
        // 0x251148: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25114Cu;
    // 0x25114c: 0x0  nop
    ctx->pc = 0x25114cu;
    // NOP
    ctx->pc = 0x251150u;
}
