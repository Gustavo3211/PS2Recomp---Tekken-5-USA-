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

// Function: sub_002300B8
// Address: 0x2300b8 - 0x230490
void sub_002300B8_0x2300b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002300B8_0x2300b8");
#endif

    switch (ctx->pc) {
        case 0x230108u: goto label_230108;
        case 0x230110u: goto label_230110;
        case 0x230130u: goto label_230130;
        case 0x230138u: goto label_230138;
        case 0x230180u: goto label_230180;
        case 0x2301c8u: goto label_2301c8;
        case 0x2301e8u: goto label_2301e8;
        case 0x230204u: goto label_230204;
        case 0x230214u: goto label_230214;
        case 0x2302c4u: goto label_2302c4;
        case 0x2302d0u: goto label_2302d0;
        case 0x2302dcu: goto label_2302dc;
        case 0x2303acu: goto label_2303ac;
        case 0x2303ccu: goto label_2303cc;
        case 0x2303f0u: goto label_2303f0;
        case 0x2303f8u: goto label_2303f8;
        case 0x230404u: goto label_230404;
        case 0x230408u: goto label_230408;
        case 0x23041cu: goto label_23041c;
        case 0x230438u: goto label_230438;
        default: break;
    }

    ctx->pc = 0x2300b8u;

    // 0x2300b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2300b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2300bc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2300bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2300c0: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2300c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2300c4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2300c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2300c8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2300c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2300cc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2300ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2300d0: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2300d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2300d4: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2300d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2300d8: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2300d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2300dc: 0xe7b900d8  swc1        $f25, 0xD8($sp)
    ctx->pc = 0x2300dcu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2300e0: 0xe7b800d0  swc1        $f24, 0xD0($sp)
    ctx->pc = 0x2300e0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2300e4: 0xe7b700c8  swc1        $f23, 0xC8($sp)
    ctx->pc = 0x2300e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2300e8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2300e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2300ec: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2300ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2300f0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2300f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2300f4: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2300f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2300f8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2300f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2300fc: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2300fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x230100: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x230100u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x230104: 0x0  nop
    ctx->pc = 0x230104u;
    // NOP
label_230108:
    // 0x230108: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x230108u;
    SET_GPR_U32(ctx, 31, 0x230110u);
    ctx->pc = 0x23010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230108u;
    // 0x23010c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x230108u, 0x230110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230110u;
label_230110:
    // 0x230110: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x230110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230114: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x230114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x230118: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x230118u;
    {
        const bool branch_taken_0x230118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230118u;
        // 0x23011c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230118) {
            ctx->pc = 0x2303D8u;
            goto label_2303d8;
        }
    }
    ctx->pc = 0x230120u;
    // 0x230120: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x230120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x230124: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x230124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x230128: 0xc0cba88  jal         func_32EA20
    ctx->pc = 0x230128u;
    SET_GPR_U32(ctx, 31, 0x230130u);
    ctx->pc = 0x23012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230128u;
    // 0x23012c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA20u, 0x230128u, 0x230130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230130u;
label_230130:
    // 0x230130: 0xc0cbb5e  jal         func_32ED78
    ctx->pc = 0x230130u;
    SET_GPR_U32(ctx, 31, 0x230138u);
    ctx->pc = 0x230134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230130u;
    // 0x230134: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED78u, 0x230130u, 0x230138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230138u;
label_230138:
    // 0x230138: 0xc78184d0  lwc1        $f1, -0x7B30($gp)
    ctx->pc = 0x230138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23013c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x23013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x230140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230144: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x230144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x230148: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x23014c: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x230150: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x230150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230154: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x230154u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x230158: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x230158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x23015c: 0x2a620041  slti        $v0, $s3, 0x41
    ctx->pc = 0x23015cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x230160: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x230160u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x230164: 0x44936000  mtc1        $s3, $f12
    ctx->pc = 0x230164u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x230168: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x230168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x23016c: 0x0  nop
    ctx->pc = 0x23016cu;
    // NOP
    // 0x230170: 0x0  nop
    ctx->pc = 0x230170u;
    // NOP
    // 0x230174: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x230174u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[12];
    // 0x230178: 0xc0cba96  jal         func_32EA58
    ctx->pc = 0x230178u;
    SET_GPR_U32(ctx, 31, 0x230180u);
    ctx->pc = 0x23017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230178u;
    // 0x23017c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA58u, 0x230178u, 0x230180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230180u;
label_230180:
    // 0x230180: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x230180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230184: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x230184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x230188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23018c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x23018cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x230190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230194: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x230194u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x230198: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x230198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23019c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x23019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2301a0: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x2301a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2301a4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2301a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2301a8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2301a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2301ac: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2301acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2301b0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2301b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2301b4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2301b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2301b8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2301b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2301bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2301bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2301c0: 0xc08bef0  jal         func_22FBC0
    ctx->pc = 0x2301C0u;
    SET_GPR_U32(ctx, 31, 0x2301C8u);
    ctx->pc = 0x2301C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301C0u;
    // 0x2301c4: 0xe7a10018  swc1        $f1, 0x18($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBC0u, 0x2301C0u, 0x2301C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2301C8u;
label_2301c8:
    // 0x2301c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2301c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301cc: 0x1220009d  beqz        $s1, . + 4 + (0x9D << 2)
    ctx->pc = 0x2301CCu;
    {
        const bool branch_taken_0x2301cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301CCu;
        // 0x2301d0: 0x4600a606  mov.s       $f24, $f20 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301cc) {
            ctx->pc = 0x230444u;
            goto label_230444;
        }
    }
    ctx->pc = 0x2301D4u;
    // 0x2301d4: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2301d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2301d8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x2301d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x2301dc: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2301DCu;
    {
        const bool branch_taken_0x2301dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2301E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2301DCu;
        // 0x2301e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2301dc) {
            ctx->pc = 0x2303B4u;
            goto label_2303b4;
        }
    }
    ctx->pc = 0x2301E4u;
    // 0x2301e4: 0x0  nop
    ctx->pc = 0x2301e4u;
    // NOP
label_2301e8:
    // 0x2301e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2301e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2301ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2301ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2301f0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2301f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2301f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2301f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2301f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2301f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2301fc: 0xc08bf12  jal         func_22FC48
    ctx->pc = 0x2301FCu;
    SET_GPR_U32(ctx, 31, 0x230204u);
    ctx->pc = 0x230200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2301FCu;
    // 0x230200: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FC48u, 0x2301FCu, 0x230204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230204u;
label_230204:
    // 0x230204: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x230204u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x230208: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x230208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23020c: 0xc08bf12  jal         func_22FC48
    ctx->pc = 0x23020Cu;
    SET_GPR_U32(ctx, 31, 0x230214u);
    ctx->pc = 0x230210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23020Cu;
    // 0x230210: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FC48u, 0x23020Cu, 0x230214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230214u;
label_230214:
    // 0x230214: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x230214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x230218: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x230218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23021c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x23021cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230220: 0x45030063  bc1tl       . + 4 + (0x63 << 2)
    ctx->pc = 0x230220u;
    {
        const bool branch_taken_0x230220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230220) {
            ctx->pc = 0x230224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230220u;
            // 0x230224: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2303B0u;
            goto label_2303b0;
        }
    }
    ctx->pc = 0x230228u;
    // 0x230228: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x230228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23022c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x23022cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230230: 0x4503005f  bc1tl       . + 4 + (0x5F << 2)
    ctx->pc = 0x230230u;
    {
        const bool branch_taken_0x230230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230230) {
            ctx->pc = 0x230234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230230u;
            // 0x230234: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2303B0u;
            goto label_2303b0;
        }
    }
    ctx->pc = 0x230238u;
    // 0x230238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23023c: 0xe6180010  swc1        $f24, 0x10($s0)
    ctx->pc = 0x23023cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x230240: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x230240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x230244: 0xe6180014  swc1        $f24, 0x14($s0)
    ctx->pc = 0x230244u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x230248: 0xe6180018  swc1        $f24, 0x18($s0)
    ctx->pc = 0x230248u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x23024c: 0xe618001c  swc1        $f24, 0x1C($s0)
    ctx->pc = 0x23024cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x230250: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x230250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x230254: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x230254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x230258: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x230258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23025c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23025cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x230260: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x230260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230264: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x230264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230268: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x230268u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23026c: 0x0  nop
    ctx->pc = 0x23026cu;
    // NOP
    // 0x230270: 0x0  nop
    ctx->pc = 0x230270u;
    // NOP
    // 0x230274: 0x4601adc3  div.s       $f23, $f21, $f1
    ctx->pc = 0x230274u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[23] = ctx->f[21] / ctx->f[1];
    // 0x230278: 0x4603b834  c.lt.s      $f23, $f3
    ctx->pc = 0x230278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23027c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x23027Cu;
    {
        const bool branch_taken_0x23027c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23027c) {
            ctx->pc = 0x230280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23027Cu;
            // 0x230280: 0x46001dc6  mov.s       $f23, $f3 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x230284u;
            goto label_230284;
        }
    }
    ctx->pc = 0x230284u;
label_230284:
    // 0x230284: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x230284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230288: 0x0  nop
    ctx->pc = 0x230288u;
    // NOP
    // 0x23028c: 0x0  nop
    ctx->pc = 0x23028cu;
    // NOP
    // 0x230290: 0x4600ad83  div.s       $f22, $f21, $f0
    ctx->pc = 0x230290u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[22] = ctx->f[21] / ctx->f[0];
    // 0x230294: 0x4603b034  c.lt.s      $f22, $f3
    ctx->pc = 0x230294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230298: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x230298u;
    {
        const bool branch_taken_0x230298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230298) {
            ctx->pc = 0x23029Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230298u;
            // 0x23029c: 0x46001d86  mov.s       $f22, $f3 (Delay Slot)
            ctx->f[22] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2302A0u;
            goto label_2302a0;
        }
    }
    ctx->pc = 0x2302A0u;
label_2302a0:
    // 0x2302a0: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x2302a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2302a4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2302a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2302a8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2302a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2302ac: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2302acu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2302b0: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x2302b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2302b4: 0xc79484d4  lwc1        $f20, -0x7B2C($gp)
    ctx->pc = 0x2302b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2302b8: 0x460d0b41  sub.s       $f13, $f1, $f13
    ctx->pc = 0x2302b8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x2302bc: 0xc047534  jal         func_11D4D0
    ctx->pc = 0x2302BCu;
    SET_GPR_U32(ctx, 31, 0x2302C4u);
    ctx->pc = 0x2302C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302BCu;
    // 0x2302c0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4D0u, 0x2302BCu, 0x2302C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302C4u;
label_2302c4:
    // 0x2302c4: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2302c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2302c8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x2302C8u;
    SET_GPR_U32(ctx, 31, 0x2302D0u);
    ctx->pc = 0x2302CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302C8u;
    // 0x2302cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x2302C8u, 0x2302D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302D0u;
label_2302d0:
    // 0x2302d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2302d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2302d4: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x2302D4u;
    SET_GPR_U32(ctx, 31, 0x2302DCu);
    ctx->pc = 0x2302D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2302D4u;
    // 0x2302d8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x2302D4u, 0x2302DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2302DCu;
label_2302dc:
    // 0x2302dc: 0x4600b8c2  mul.s       $f3, $f23, $f0
    ctx->pc = 0x2302dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2302e0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2302e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2302e4: 0x4615b902  mul.s       $f4, $f23, $f21
    ctx->pc = 0x2302e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x2302e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2302e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2302ec: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2302ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2302f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2302f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302f4: 0x4615b542  mul.s       $f21, $f22, $f21
    ctx->pc = 0x2302f4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x2302f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2302f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2302fc: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x2302fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x230300: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x230300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230304: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x230304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x230308: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x230308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23030c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x23030cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x230310: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x230310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x230314: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x230314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230318: 0x46191081  sub.s       $f2, $f2, $f25
    ctx->pc = 0x230318u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[25]);
    // 0x23031c: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x23031cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x230320: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x230320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230324: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x230324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x230328: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x230328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x23032c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x23032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230330: 0x46151081  sub.s       $f2, $f2, $f21
    ctx->pc = 0x230330u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[21]);
    // 0x230334: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x230334u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x230338: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x230338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23033c: 0x46190841  sub.s       $f1, $f1, $f25
    ctx->pc = 0x23033cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[25]);
    // 0x230340: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x230340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x230344: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x230344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230348: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x230348u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x23034c: 0xe622001c  swc1        $f2, 0x1C($s1)
    ctx->pc = 0x23034cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x230350: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x230350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230354: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x230354u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x230358: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x230358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x23035c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x23035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230360: 0x46191081  sub.s       $f2, $f2, $f25
    ctx->pc = 0x230360u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[25]);
    // 0x230364: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x230364u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x230368: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x230368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23036c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23036cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230370: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x230370u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x230374: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x230374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230378: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x230378u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x23037c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x23037cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x230380: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x230380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230384: 0xa6220036  sh          $v0, 0x36($s1)
    ctx->pc = 0x230384u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x230388: 0x46190841  sub.s       $f1, $f1, $f25
    ctx->pc = 0x230388u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[25]);
    // 0x23038c: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x23038cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x230390: 0x6a820007  ldl         $v0, 0x7($s4)
    ctx->pc = 0x230390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x230394: 0x6e820000  ldr         $v0, 0x0($s4)
    ctx->pc = 0x230394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x230398: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x230398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x23039c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x23039cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303a0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2303a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2303a4: 0xc0cba7a  jal         func_32E9E8
    ctx->pc = 0x2303A4u;
    SET_GPR_U32(ctx, 31, 0x2303ACu);
    ctx->pc = 0x2303A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303A4u;
    // 0x2303a8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E9E8u, 0x2303A4u, 0x2303ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303ACu;
label_2303ac:
    // 0x2303ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2303b0:
    // 0x2303b0: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x2303b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_2303b4:
    // 0x2303b4: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x2303b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2303b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2303B8u;
    {
        const bool branch_taken_0x2303b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2303b8) {
            ctx->pc = 0x2303BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2303B8u;
            // 0x2303bc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2303DCu;
            goto label_2303dc;
        }
    }
    ctx->pc = 0x2303C0u;
    // 0x2303c0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2303c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303c4: 0xc094edc  jal         func_253B70
    ctx->pc = 0x2303C4u;
    SET_GPR_U32(ctx, 31, 0x2303CCu);
    ctx->pc = 0x2303C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303C4u;
    // 0x2303c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B70u, 0x2303C4u, 0x2303CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303CCu;
label_2303cc:
    // 0x2303cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2303ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303d0: 0x5600ff85  bnel        $s0, $zero, . + 4 + (-0x7B << 2)
    ctx->pc = 0x2303D0u;
    {
        const bool branch_taken_0x2303d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2303d0) {
            ctx->pc = 0x2303D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2303D0u;
            // 0x2303d4: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2301E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2301e8;
        }
    }
    ctx->pc = 0x2303D8u;
label_2303d8:
    // 0x2303d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2303d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2303dc:
    // 0x2303dc: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x2303dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2303e0: 0x1440ff49  bnez        $v0, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x2303E0u;
    {
        const bool branch_taken_0x2303e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2303E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303E0u;
        // 0x2303e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303e0) {
            ctx->pc = 0x230108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230108;
        }
    }
    ctx->pc = 0x2303E8u;
    // 0x2303e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2303e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303ec: 0x0  nop
    ctx->pc = 0x2303ecu;
    // NOP
label_2303f0:
    // 0x2303f0: 0xc08beea  jal         func_22FBA8
    ctx->pc = 0x2303F0u;
    SET_GPR_U32(ctx, 31, 0x2303F8u);
    ctx->pc = 0x2303F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303F0u;
    // 0x2303f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBA8u, 0x2303F0u, 0x2303F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2303F8u;
label_2303f8:
    // 0x2303f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2303f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303fc: 0xc08bef0  jal         func_22FBC0
    ctx->pc = 0x2303FCu;
    SET_GPR_U32(ctx, 31, 0x230404u);
    ctx->pc = 0x230400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2303FCu;
    // 0x230400: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBC0u, 0x2303FCu, 0x230404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230404u;
label_230404:
    // 0x230404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230408:
    // 0x230408: 0x96020036  lhu         $v0, 0x36($s0)
    ctx->pc = 0x230408u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x23040c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23040Cu;
    {
        const bool branch_taken_0x23040c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23040c) {
            ctx->pc = 0x230410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23040Cu;
            // 0x230410: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230420u;
            goto label_230420;
        }
    }
    ctx->pc = 0x230414u;
    // 0x230414: 0xc08bc6c  jal         func_22F1B0
    ctx->pc = 0x230414u;
    SET_GPR_U32(ctx, 31, 0x23041Cu);
    ctx->pc = 0x230418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230414u;
    // 0x230418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F1B0u, 0x230414u, 0x23041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23041Cu;
label_23041c:
    // 0x23041c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23041cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_230420:
    // 0x230420: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x230420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x230424: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x230424u;
    {
        const bool branch_taken_0x230424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230424u;
        // 0x230428: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230424) {
            ctx->pc = 0x230408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230408;
        }
    }
    ctx->pc = 0x23042Cu;
    // 0x23042c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23042cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230430: 0xc08befa  jal         func_22FBE8
    ctx->pc = 0x230430u;
    SET_GPR_U32(ctx, 31, 0x230438u);
    ctx->pc = 0x230434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230430u;
    // 0x230434: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FBE8u, 0x230430u, 0x230438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230438u;
label_230438:
    // 0x230438: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x230438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23043c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x23043Cu;
    {
        const bool branch_taken_0x23043c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23043Cu;
        // 0x230440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23043c) {
            ctx->pc = 0x2303F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2303f0;
        }
    }
    ctx->pc = 0x230444u;
label_230444:
    // 0x230444: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x230444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x230448: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x230448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23044c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x23044cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230450: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x230450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x230454: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x230454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230458: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x230458u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x23045c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x23045cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x230460: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x230460u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x230464: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x230464u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x230468: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x230468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x23046c: 0xc7b900d8  lwc1        $f25, 0xD8($sp)
    ctx->pc = 0x23046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x230470: 0xc7b800d0  lwc1        $f24, 0xD0($sp)
    ctx->pc = 0x230470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x230474: 0xc7b700c8  lwc1        $f23, 0xC8($sp)
    ctx->pc = 0x230474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x230478: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x230478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23047c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x23047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x230480: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x230480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x230484: 0x3e00008  jr          $ra
    ctx->pc = 0x230484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230484u;
        // 0x230488: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23048Cu;
    // 0x23048c: 0x0  nop
    ctx->pc = 0x23048cu;
    // NOP
    ctx->pc = 0x230490u;
}
