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

// Function: sub_002588B8
// Address: 0x2588b8 - 0x258b38
void sub_002588B8_0x2588b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002588B8_0x2588b8");
#endif

    switch (ctx->pc) {
        case 0x258938u: goto label_258938;
        case 0x258944u: goto label_258944;
        case 0x2589c0u: goto label_2589c0;
        case 0x258b00u: goto label_258b00;
        default: break;
    }

    ctx->pc = 0x2588b8u;

    // 0x2588b8: 0x27bded80  addiu       $sp, $sp, -0x1280
    ctx->pc = 0x2588b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962560));
    // 0x2588bc: 0xffb61250  sd          $s6, 0x1250($sp)
    ctx->pc = 0x2588bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4688), GPR_U64(ctx, 22));
    // 0x2588c0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2588c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588c4: 0x27a20600  addiu       $v0, $sp, 0x600
    ctx->pc = 0x2588c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
    // 0x2588c8: 0x27a30e00  addiu       $v1, $sp, 0xE00
    ctx->pc = 0x2588c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 3584));
    // 0x2588cc: 0x27a71000  addiu       $a3, $sp, 0x1000
    ctx->pc = 0x2588ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
    // 0x2588d0: 0xffb31238  sd          $s3, 0x1238($sp)
    ctx->pc = 0x2588d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4664), GPR_U64(ctx, 19));
    // 0x2588d4: 0xffb41240  sd          $s4, 0x1240($sp)
    ctx->pc = 0x2588d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4672), GPR_U64(ctx, 20));
    // 0x2588d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2588d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588dc: 0xffb51248  sd          $s5, 0x1248($sp)
    ctx->pc = 0x2588dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4680), GPR_U64(ctx, 21));
    // 0x2588e0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2588e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588e4: 0xffb71258  sd          $s7, 0x1258($sp)
    ctx->pc = 0x2588e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4696), GPR_U64(ctx, 23));
    // 0x2588e8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2588e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588ec: 0xffb01220  sd          $s0, 0x1220($sp)
    ctx->pc = 0x2588ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4640), GPR_U64(ctx, 16));
    // 0x2588f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2588f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2588f4: 0xffb11228  sd          $s1, 0x1228($sp)
    ctx->pc = 0x2588f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4648), GPR_U64(ctx, 17));
    // 0x2588f8: 0xffb21230  sd          $s2, 0x1230($sp)
    ctx->pc = 0x2588f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4656), GPR_U64(ctx, 18));
    // 0x2588fc: 0xffbf1260  sd          $ra, 0x1260($sp)
    ctx->pc = 0x2588fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4704), GPR_U64(ctx, 31));
    // 0x258900: 0xe7b61278  swc1        $f22, 0x1278($sp)
    ctx->pc = 0x258900u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4728), bits); }
    // 0x258904: 0xe7b51270  swc1        $f21, 0x1270($sp)
    ctx->pc = 0x258904u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4720), bits); }
    // 0x258908: 0xe7b41268  swc1        $f20, 0x1268($sp)
    ctx->pc = 0x258908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4712), bits); }
    // 0x25890c: 0xafa21204  sw          $v0, 0x1204($sp)
    ctx->pc = 0x25890cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4612), GPR_U32(ctx, 2));
    // 0x258910: 0xafa31208  sw          $v1, 0x1208($sp)
    ctx->pc = 0x258910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4616), GPR_U32(ctx, 3));
    // 0x258914: 0xafa7120c  sw          $a3, 0x120C($sp)
    ctx->pc = 0x258914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4620), GPR_U32(ctx, 7));
    // 0x258918: 0x1ac0005d  blez        $s6, . + 4 + (0x5D << 2)
    ctx->pc = 0x258918u;
    {
        const bool branch_taken_0x258918 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x25891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258918u;
        // 0x25891c: 0xafbd1200  sw          $sp, 0x1200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4608), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258918) {
            ctx->pc = 0x258A90u;
            goto label_258a90;
        }
    }
    ctx->pc = 0x258920u;
    // 0x258920: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x258920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x258924: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x258924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x258928: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x258928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x25892c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x25892cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x258930: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x258930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x258934: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x258934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_258938:
    // 0x258938: 0x138900  sll         $s1, $s3, 4
    ctx->pc = 0x258938u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x25893c: 0xc08c264  jal         func_230990
    ctx->pc = 0x25893Cu;
    SET_GPR_U32(ctx, 31, 0x258944u);
    ctx->pc = 0x258940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25893Cu;
    // 0x258940: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230990u, 0x25893Cu, 0x258944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258944u;
label_258944:
    // 0x258944: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x258944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x258948: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x258948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25894c: 0x2371821  addu        $v1, $s1, $s7
    ctx->pc = 0x25894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x258950: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x258950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x258954: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x258954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x258958: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x258958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25895c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x25895cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x258960: 0x138040  sll         $s0, $s3, 1
    ctx->pc = 0x258960u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x258964: 0x8fa21200  lw          $v0, 0x1200($sp)
    ctx->pc = 0x258964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4608)));
    // 0x258968: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x258968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x25896c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25896cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x258970: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x258970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x258974: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x258974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x258978: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x258978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x25897c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25897cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x258980: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x258980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x258984: 0x24720008  addiu       $s2, $v1, 0x8
    ctx->pc = 0x258984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x258988: 0x46161081  sub.s       $f2, $f2, $f22
    ctx->pc = 0x258988u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[22]);
    // 0x25898c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x25898cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x258990: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x258990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x258994: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x258994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258998: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25899c: 0x8fa21200  lw          $v0, 0x1200($sp)
    ctx->pc = 0x25899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4608)));
    // 0x2589a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2589a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2589a4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2589a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2589a8: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x2589a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x2589ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2589acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2589b0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2589b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2589b4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2589b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2589b8: 0xc0962ce  jal         func_258B38
    ctx->pc = 0x2589B8u;
    SET_GPR_U32(ctx, 31, 0x2589C0u);
    ctx->pc = 0x2589BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2589B8u;
    // 0x2589bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B38u, 0x2589B8u, 0x2589C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2589C0u;
label_2589c0:
    // 0x2589c0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2589c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2589c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2589c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2589c8: 0x8fa21200  lw          $v0, 0x1200($sp)
    ctx->pc = 0x2589c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4608)));
    // 0x2589cc: 0x2341821  addu        $v1, $s1, $s4
    ctx->pc = 0x2589ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2589d0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2589d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2589d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2589d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2589d8: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2589d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2589dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2589dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2589e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2589e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2589e4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2589e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2589e8: 0x276282a  slt         $a1, $s3, $s6
    ctx->pc = 0x2589e8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2589ec: 0x0  nop
    ctx->pc = 0x2589ecu;
    // NOP
    // 0x2589f0: 0x0  nop
    ctx->pc = 0x2589f0u;
    // NOP
    // 0x2589f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2589f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2589f8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2589f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2589fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2589fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258a04: 0x8fa21204  lw          $v0, 0x1204($sp)
    ctx->pc = 0x258a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4612)));
    // 0x258a08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x258a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x258a0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x258a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x258a10: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x258a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x258a14: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x258a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258a18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x258a1c: 0x8fa21204  lw          $v0, 0x1204($sp)
    ctx->pc = 0x258a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4612)));
    // 0x258a20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x258a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x258a24: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x258a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x258a28: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x258a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x258a2c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x258a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258a34: 0x8fa21204  lw          $v0, 0x1204($sp)
    ctx->pc = 0x258a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4612)));
    // 0x258a38: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x258a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x258a3c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x258a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x258a40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x258a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x258a44: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x258a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258a48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x258a4c: 0x8fa21204  lw          $v0, 0x1204($sp)
    ctx->pc = 0x258a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4612)));
    // 0x258a50: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x258a50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x258a54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x258a54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x258a58: 0xe621000c  swc1        $f1, 0xC($s1)
    ctx->pc = 0x258a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x258a5c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x258a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x258a60: 0x8fa31208  lw          $v1, 0x1208($sp)
    ctx->pc = 0x258a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4616)));
    // 0x258a64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x258a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258a68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x258a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x258a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x258a70: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x258a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x258a74: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x258a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x258a78: 0x8fa3120c  lw          $v1, 0x120C($sp)
    ctx->pc = 0x258a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4620)));
    // 0x258a7c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x258a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x258a80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x258a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258a84: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x258a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x258a88: 0x14a0ffab  bnez        $a1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x258A88u;
    {
        const bool branch_taken_0x258a88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x258A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258A88u;
        // 0x258a8c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x258a88) {
            ctx->pc = 0x258938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258938;
        }
    }
    ctx->pc = 0x258A90u;
label_258a90:
    // 0x258a90: 0x8f82aa10  lw          $v0, -0x55F0($gp)
    ctx->pc = 0x258a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
    // 0x258a94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x258a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x258a98: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x258a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x258a9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x258a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x258aa0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x258aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258aa4: 0xafa21210  sw          $v0, 0x1210($sp)
    ctx->pc = 0x258aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4624), GPR_U32(ctx, 2));
    // 0x258aa8: 0x27a41200  addiu       $a0, $sp, 0x1200
    ctx->pc = 0x258aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4608));
    // 0x258aac: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x258aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x258ab0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x258ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x258ab4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x258ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x258ab8: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x258ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x258abc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x258abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x258ac0: 0x8f82aa10  lw          $v0, -0x55F0($gp)
    ctx->pc = 0x258ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945296)));
    // 0x258ac4: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x258ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x258ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x258acc: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x258accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x258ad0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x258ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x258ad4: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x258ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x258ad8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x258ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x258adc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x258adcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x258ae0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x258ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x258ae4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x258ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x258ae8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x258ae8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x258aec: 0xe443001c  swc1        $f3, 0x1C($v0)
    ctx->pc = 0x258aecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x258af0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x258af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x258af4: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x258af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x258af8: 0xc08bd74  jal         func_22F5D0
    ctx->pc = 0x258AF8u;
    SET_GPR_U32(ctx, 31, 0x258B00u);
    ctx->pc = 0x258AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AF8u;
    // 0x258afc: 0xe4420018  swc1        $f2, 0x18($v0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F5D0u, 0x258AF8u, 0x258B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B00u;
label_258b00:
    // 0x258b00: 0xdfb01220  ld          $s0, 0x1220($sp)
    ctx->pc = 0x258b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4640)));
    // 0x258b04: 0xdfb11228  ld          $s1, 0x1228($sp)
    ctx->pc = 0x258b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 4648)));
    // 0x258b08: 0xdfb21230  ld          $s2, 0x1230($sp)
    ctx->pc = 0x258b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 4656)));
    // 0x258b0c: 0xdfb31238  ld          $s3, 0x1238($sp)
    ctx->pc = 0x258b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 4664)));
    // 0x258b10: 0xdfb41240  ld          $s4, 0x1240($sp)
    ctx->pc = 0x258b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 4672)));
    // 0x258b14: 0xdfb51248  ld          $s5, 0x1248($sp)
    ctx->pc = 0x258b14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 4680)));
    // 0x258b18: 0xdfb61250  ld          $s6, 0x1250($sp)
    ctx->pc = 0x258b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 4688)));
    // 0x258b1c: 0xdfb71258  ld          $s7, 0x1258($sp)
    ctx->pc = 0x258b1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 4696)));
    // 0x258b20: 0xdfbf1260  ld          $ra, 0x1260($sp)
    ctx->pc = 0x258b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4704)));
    // 0x258b24: 0xc7b61278  lwc1        $f22, 0x1278($sp)
    ctx->pc = 0x258b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x258b28: 0xc7b51270  lwc1        $f21, 0x1270($sp)
    ctx->pc = 0x258b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x258b2c: 0xc7b41268  lwc1        $f20, 0x1268($sp)
    ctx->pc = 0x258b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x258b30: 0x3e00008  jr          $ra
    ctx->pc = 0x258B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B30u;
        // 0x258b34: 0x27bd1280  addiu       $sp, $sp, 0x1280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B38u;
}
