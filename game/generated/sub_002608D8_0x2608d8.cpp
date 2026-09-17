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

// Function: sub_002608D8
// Address: 0x2608d8 - 0x260ab8
void sub_002608D8_0x2608d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002608D8_0x2608d8");
#endif

    switch (ctx->pc) {
        case 0x260960u: goto label_260960;
        case 0x2609d4u: goto label_2609d4;
        case 0x260aa0u: goto label_260aa0;
        default: break;
    }

    ctx->pc = 0x2608d8u;

    // 0x2608d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2608d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2608dc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2608dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2608e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2608e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2608e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2608e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2608e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2608e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2608ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2608ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2608f0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2608f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2608f4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x2608f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2608f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2608f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2608fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2608fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x260900: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x260900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x260904: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x260904u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260908: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260908u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26090c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26090cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x260910u;
    {
        const bool branch_taken_0x260910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260910u;
        // 0x260914: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260910) {
            ctx->pc = 0x26092Cu;
            goto label_26092c;
        }
    }
    ctx->pc = 0x260918u;
    // 0x260918: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x260918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26091c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26091cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x260920: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260920u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x260924: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x260924u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x260928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26092c:
    // 0x26092c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x26092cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260930: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x260930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260934: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x260934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260938: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x260938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x26093c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x26093cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x260940: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x260940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x260944: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x260944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x260948: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x260948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26094c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x26094cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x260950: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x260950u;
    {
        const bool branch_taken_0x260950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260950) {
            ctx->pc = 0x260A30u;
            goto label_260a30;
        }
    }
    ctx->pc = 0x260958u;
    // 0x260958: 0xc08250a  jal         func_209428
    ctx->pc = 0x260958u;
    SET_GPR_U32(ctx, 31, 0x260960u);
    ctx->pc = 0x209428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209428u, 0x260958u, 0x260960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260960u;
label_260960:
    // 0x260960: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x260960u;
    {
        const bool branch_taken_0x260960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260960) {
            ctx->pc = 0x260964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260960u;
            // 0x260964: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2609E0u;
            goto label_2609e0;
        }
    }
    ctx->pc = 0x260968u;
    // 0x260968: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x260968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26096c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x26096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260970: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x260970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x260974: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x260974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260978: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x260978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26097c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x260980: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x260980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x260984: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x260984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x260988: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x260988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x26098c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x26098cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x260990: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x260990u;
    {
        const bool branch_taken_0x260990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x260994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260990u;
        // 0x260994: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260990) {
            ctx->pc = 0x2609ACu;
            goto label_2609ac;
        }
    }
    ctx->pc = 0x260998u;
    // 0x260998: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x260998u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x26099c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26099cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2609a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2609a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2609a4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2609a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2609a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2609a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2609ac:
    // 0x2609ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2609acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2609b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2609b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2609b4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2609b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2609b8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2609b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2609bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2609bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2609c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2609c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2609c4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2609c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2609c8: 0x8c6223b4  lw          $v0, 0x23B4($v1)
    ctx->pc = 0x2609c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x2609cc: 0xc082522  jal         func_209488
    ctx->pc = 0x2609CCu;
    SET_GPR_U32(ctx, 31, 0x2609D4u);
    ctx->pc = 0x2609D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2609CCu;
    // 0x2609d0: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209488u, 0x2609CCu, 0x2609D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2609D4u;
label_2609d4:
    // 0x2609d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2609D4u;
    {
        const bool branch_taken_0x2609d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2609D4u;
        // 0x2609d8: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609d4) {
            ctx->pc = 0x260A88u;
            goto label_260a88;
        }
    }
    ctx->pc = 0x2609DCu;
    // 0x2609dc: 0x0  nop
    ctx->pc = 0x2609dcu;
    // NOP
label_2609e0:
    // 0x2609e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2609e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2609e4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2609e4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2609e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2609e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2609ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2609ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2609f0: 0x24a6000c  addiu       $a2, $a1, 0xC
    ctx->pc = 0x2609f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x2609f4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2609f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2609f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2609fc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2609fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x260a00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260a04: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x260a04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x260a08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x260a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x260a0c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x260a0cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260a10: 0x2010  mfhi        $a0
    ctx->pc = 0x260a10u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x260a14: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x260a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x260a18: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x260a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x260a1c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x260a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x260a20: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x260a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x260a24: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x260a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x260a28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x260A28u;
    {
        const bool branch_taken_0x260a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260A28u;
        // 0x260a2c: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a28) {
            ctx->pc = 0x260A84u;
            goto label_260a84;
        }
    }
    ctx->pc = 0x260A30u;
label_260a30:
    // 0x260a30: 0x5c600014  bgtzl       $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x260A30u;
    {
        const bool branch_taken_0x260a30 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x260a30) {
            ctx->pc = 0x260A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260A30u;
            // 0x260a34: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260A84u;
            goto label_260a84;
        }
    }
    ctx->pc = 0x260A38u;
    // 0x260a38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x260a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260a3c: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x260a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x260a40: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x260a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x260a44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x260a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260a48: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x260a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x260a4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x260a4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260a50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260a54: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x260a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x260a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260a5c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x260a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x260a60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x260a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260a64: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x260a64u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260a68: 0x2010  mfhi        $a0
    ctx->pc = 0x260a68u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x260a6c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x260a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x260a70: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x260a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x260a74: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x260a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x260a78: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x260a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x260a7c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x260a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x260a80: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x260a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_260a84:
    // 0x260a84: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x260a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_260a88:
    // 0x260a88: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x260a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x260a8c: 0x50a20006  beql        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x260A8Cu;
    {
        const bool branch_taken_0x260a8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x260a8c) {
            ctx->pc = 0x260A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260A8Cu;
            // 0x260a90: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260AA8u;
            goto label_260aa8;
        }
    }
    ctx->pc = 0x260A94u;
    // 0x260a94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x260a98: 0xc098012  jal         func_260048
    ctx->pc = 0x260A98u;
    SET_GPR_U32(ctx, 31, 0x260AA0u);
    ctx->pc = 0x260A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260A98u;
    // 0x260a9c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260048u, 0x260A98u, 0x260AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260AA0u;
label_260aa0:
    // 0x260aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260aa4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x260aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_260aa8:
    // 0x260aa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260aac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x260AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260AB0u;
        // 0x260ab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260AB8u;
}
