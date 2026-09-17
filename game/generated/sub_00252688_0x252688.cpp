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

// Function: sub_00252688
// Address: 0x252688 - 0x252970
void sub_00252688_0x252688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252688_0x252688");
#endif

    switch (ctx->pc) {
        case 0x252898u: goto label_252898;
        case 0x2528d8u: goto label_2528d8;
        case 0x252910u: goto label_252910;
        case 0x252920u: goto label_252920;
        default: break;
    }

    ctx->pc = 0x252688u;

    // 0x252688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25268c: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x25268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x252690: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x252690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x252694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252698: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x252698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25269c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x25269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2526a0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2526a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2526a4: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2526a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2526a8: 0x46080032  c.eq.s      $f0, $f8
    ctx->pc = 0x2526a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2526ac: 0x450100a9  bc1t        . + 4 + (0xA9 << 2)
    ctx->pc = 0x2526ACu;
    {
        const bool branch_taken_0x2526ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2526B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526ACu;
        // 0x2526b0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526ac) {
            ctx->pc = 0x252954u;
            goto label_252954;
        }
    }
    ctx->pc = 0x2526B4u;
    // 0x2526b4: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2526b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2526b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2526b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2526bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2526bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2526c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2526c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2526c4: 0x450100a3  bc1t        . + 4 + (0xA3 << 2)
    ctx->pc = 0x2526C4u;
    {
        const bool branch_taken_0x2526c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2526C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526C4u;
        // 0x2526c8: 0x3c027000  lui         $v0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526c4) {
            ctx->pc = 0x252954u;
            goto label_252954;
        }
    }
    ctx->pc = 0x2526CCu;
    // 0x2526cc: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x2526ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2526d0: 0x34420060  ori         $v0, $v0, 0x60
    ctx->pc = 0x2526d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
    // 0x2526d4: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2526d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2526d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2526d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2526dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2526dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2526e0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x2526e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x2526e4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2526e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2526e8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x2526e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x2526ec: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2526ecu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000060u)); // MMIO: 0x70000060
    // 0x2526f0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2526f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2526f4: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x2526f4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000064u)); // MMIO: 0x70000064
    // 0x2526f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2526f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2526fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2526fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252700: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x252700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x252704: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x252704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x252708: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x252708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25270c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25270cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x252710: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x252710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x252714: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x252714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x252718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x252718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25271c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25271cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x252720: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x252720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x252724: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x252724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x252728: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x252728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x25272c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x25272cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252730: 0xe4220008  swc1        $f2, 0x8($at)
    ctx->pc = 0x252730u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000008u, bits); }
    // 0x252734: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x252734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x252738: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x25273c: 0xe422002c  swc1        $f2, 0x2C($at)
    ctx->pc = 0x25273cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000002Cu, bits); }
    // 0x252740: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252744: 0xe4220020  swc1        $f2, 0x20($at)
    ctx->pc = 0x252744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000020u, bits); }
    // 0x252748: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x25274c: 0xe4220014  swc1        $f2, 0x14($at)
    ctx->pc = 0x25274cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000014u, bits); }
    // 0x252750: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x252750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x252754: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x252754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x252758: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x252758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x25275c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x25275cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x252760: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252764: 0xe4200000  swc1        $f0, 0x0($at)
    ctx->pc = 0x252764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000000u, bits); }
    // 0x252768: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x25276c: 0xe4200024  swc1        $f0, 0x24($at)
    ctx->pc = 0x25276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000024u, bits); }
    // 0x252770: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252774: 0xe4200018  swc1        $f0, 0x18($at)
    ctx->pc = 0x252774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000018u, bits); }
    // 0x252778: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x25277c: 0xe420000c  swc1        $f0, 0xC($at)
    ctx->pc = 0x25277cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000000Cu, bits); }
    // 0x252780: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252784: 0xe4210004  swc1        $f1, 0x4($at)
    ctx->pc = 0x252784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000004u, bits); }
    // 0x252788: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x25278c: 0xe4210028  swc1        $f1, 0x28($at)
    ctx->pc = 0x25278cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000028u, bits); }
    // 0x252790: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252794: 0xe421001c  swc1        $f1, 0x1C($at)
    ctx->pc = 0x252794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x7000001Cu, bits); }
    // 0x252798: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x25279c: 0xe4210010  swc1        $f1, 0x10($at)
    ctx->pc = 0x25279cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000010u, bits); }
    // 0x2527a0: 0x8602004e  lh          $v0, 0x4E($s0)
    ctx->pc = 0x2527a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x2527a4: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2527a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2527a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2527ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2527acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2527b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2527b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2527b4: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2527b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2527B8u;
    {
        const bool branch_taken_0x2527b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527b8) {
            ctx->pc = 0x2527BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2527B8u;
            // 0x2527bc: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2527C0u;
            goto label_2527c0;
        }
    }
    ctx->pc = 0x2527C0u;
label_2527c0:
    // 0x2527c0: 0x86020068  lh          $v0, 0x68($s0)
    ctx->pc = 0x2527c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2527c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2527c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2527c8: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2527c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x2527cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2527CCu;
    {
        const bool branch_taken_0x2527cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527CCu;
        // 0x2527d0: 0x24026c00  addiu       $v0, $zero, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527cc) {
            ctx->pc = 0x25281Cu;
            goto label_25281c;
        }
    }
    ctx->pc = 0x2527D4u;
    // 0x2527d4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2527d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2527d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2527d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2527dc: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2527DCu;
    {
        const bool branch_taken_0x2527dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2527E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527DCu;
        // 0x2527e0: 0x24027200  addiu       $v0, $zero, 0x7200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527dc) {
            ctx->pc = 0x252918u;
            goto label_252918;
        }
    }
    ctx->pc = 0x2527E4u;
    // 0x2527e4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2527e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2527e8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2527e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2527ec: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2527ECu;
    {
        const bool branch_taken_0x2527ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2527ec) {
            ctx->pc = 0x252918u;
            goto label_252918;
        }
    }
    ctx->pc = 0x2527F4u;
    // 0x2527f4: 0x34029400  ori         $v0, $zero, 0x9400
    ctx->pc = 0x2527f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x2527f8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2527f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2527fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2527fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x252800: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x252800u;
    {
        const bool branch_taken_0x252800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252800) {
            ctx->pc = 0x252918u;
            goto label_252918;
        }
    }
    ctx->pc = 0x252808u;
    // 0x252808: 0x34028e00  ori         $v0, $zero, 0x8E00
    ctx->pc = 0x252808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36352);
    // 0x25280c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x252810: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x252810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x252814: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x252814u;
    {
        const bool branch_taken_0x252814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252814) {
            ctx->pc = 0x252918u;
            goto label_252918;
        }
    }
    ctx->pc = 0x25281Cu;
label_25281c:
    // 0x25281c: 0x8602005a  lh          $v0, 0x5A($s0)
    ctx->pc = 0x25281cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x252820: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x252820u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x252824: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x252828: 0x8c630068  lw          $v1, 0x68($v1)
    ctx->pc = 0x252828u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000068u)); // MMIO: 0x70000068
    // 0x25282c: 0x34e70050  ori         $a3, $a3, 0x50
    ctx->pc = 0x25282cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x252830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x252830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x252834: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x252834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x252838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25283c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25283cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252840: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x252840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252844: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x252848: 0xac230068  sw          $v1, 0x68($at)
    ctx->pc = 0x252848u;
    runtime->Store32(rdram, ctx, 0x70000068u, GPR_U32(ctx, 3)); // MMIO: 0x70000068
    // 0x25284c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x25284cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x252850: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x252850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252854: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x252854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x252858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25285c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25285cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252860: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252864: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x252864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x252868: 0x9202005d  lbu         $v0, 0x5D($s0)
    ctx->pc = 0x252868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 93)));
    // 0x25286c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25286cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x252874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x252874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252878: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x252878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x25287c: 0x9202005e  lbu         $v0, 0x5E($s0)
    ctx->pc = 0x25287cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 94)));
    // 0x252880: 0xe4e8000c  swc1        $f8, 0xC($a3)
    ctx->pc = 0x252880u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x252884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x252884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252888: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x252888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25288c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25288cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252890: 0xc094864  jal         func_252190
    ctx->pc = 0x252890u;
    SET_GPR_U32(ctx, 31, 0x252898u);
    ctx->pc = 0x252894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252890u;
    // 0x252894: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x252190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252190u, 0x252890u, 0x252898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252898u;
label_252898:
    // 0x252898: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x252898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25289c: 0x8602005a  lh          $v0, 0x5A($s0)
    ctx->pc = 0x25289cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
    // 0x2528a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2528a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528a4: 0xc78089b8  lwc1        $f0, -0x7648($gp)
    ctx->pc = 0x2528a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2528a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2528a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2528ac: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2528acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2528b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2528b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2528b4: 0xc4210008  lwc1        $f1, 0x8($at)
    ctx->pc = 0x2528b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2528b8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2528b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2528bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2528bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2528c0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2528c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2528c4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2528c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2528c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x2528c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x2528cc: 0xe4210008  swc1        $f1, 0x8($at)
    ctx->pc = 0x2528ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70000008u, bits); }
    // 0x2528d0: 0xc0948b8  jal         func_2522E0
    ctx->pc = 0x2528D0u;
    SET_GPR_U32(ctx, 31, 0x2528D8u);
    ctx->pc = 0x2528D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2528D0u;
    // 0x2528d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2522E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2522E0u, 0x2528D0u, 0x2528D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528D8u;
label_2528d8:
    // 0x2528d8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2528d8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2528dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2528dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2528e0: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x2528e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
    // 0x2528e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2528e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2528e8: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x2528e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x2528ec: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x2528ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x2528f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2528f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2528f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2528f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2528f8: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x2528f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x2528fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2528fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x252900: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x252900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x252904: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x252904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x252908: 0xc08bb40  jal         func_22ED00
    ctx->pc = 0x252908u;
    SET_GPR_U32(ctx, 31, 0x252910u);
    ctx->pc = 0x25290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252908u;
    // 0x25290c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ED00u, 0x252908u, 0x252910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252910u;
label_252910:
    // 0x252910: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x252910u;
    {
        const bool branch_taken_0x252910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252910u;
        // 0x252914: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252910) {
            ctx->pc = 0x252958u;
            goto label_252958;
        }
    }
    ctx->pc = 0x252918u;
label_252918:
    // 0x252918: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x252918u;
    SET_GPR_U32(ctx, 31, 0x252920u);
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x252918u, 0x252920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252920u;
label_252920:
    // 0x252920: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x252920u;
    {
        const bool branch_taken_0x252920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252920) {
            ctx->pc = 0x252924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252920u;
            // 0x252924: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252958u;
            goto label_252958;
        }
    }
    ctx->pc = 0x252928u;
    // 0x252928: 0x86020068  lh          $v0, 0x68($s0)
    ctx->pc = 0x252928u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x25292c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25292Cu;
    {
        const bool branch_taken_0x25292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25292Cu;
        // 0x252930: 0x96030068  lhu         $v1, 0x68($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25292c) {
            ctx->pc = 0x252954u;
            goto label_252954;
        }
    }
    ctx->pc = 0x252934u;
    // 0x252934: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x252934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x252938: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25293c: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25293Cu;
    {
        const bool branch_taken_0x25293c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x252940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25293Cu;
        // 0x252940: 0xa6020068  sh          $v0, 0x68($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 104), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25293c) {
            ctx->pc = 0x252954u;
            goto label_252954;
        }
    }
    ctx->pc = 0x252944u;
    // 0x252944: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x252944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x252948: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x252948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x25294c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x252950: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x252950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_252954:
    // 0x252954: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x252954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_252958:
    // 0x252958: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x252958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25295c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25295cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252960: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x252960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x252964: 0x3e00008  jr          $ra
    ctx->pc = 0x252964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252964u;
        // 0x252968: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25296Cu;
    // 0x25296c: 0x0  nop
    ctx->pc = 0x25296cu;
    // NOP
    ctx->pc = 0x252970u;
}
