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

// Function: sub_0025C6D8
// Address: 0x25c6d8 - 0x25c840
void sub_0025C6D8_0x25c6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C6D8_0x25c6d8");
#endif

    ctx->pc = 0x25c6d8u;

    // 0x25c6d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25c6dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25c6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x25c6e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x25c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c6e4: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x25c6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c6e8: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x25c6e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x25c6ec: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x25c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c6f0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x25c6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x25c6f4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x25c6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x25c6f8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x25c6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x25c6fc: 0x46031041  sub.s       $f1, $f2, $f3
    ctx->pc = 0x25c6fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x25c700: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x25c700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x25c704: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x25c704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x25c708: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x25c708u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x25c70c: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x25c70cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x25c710: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x25c710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x25c714: 0x46060a42  mul.s       $f9, $f1, $f6
    ctx->pc = 0x25c714u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x25c718: 0x46060202  mul.s       $f8, $f0, $f6
    ctx->pc = 0x25c718u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x25c71c: 0x460611c2  mul.s       $f7, $f2, $f6
    ctx->pc = 0x25c71cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x25c720: 0x0  nop
    ctx->pc = 0x25c720u;
    // NOP
    // 0x25c724: 0x0  nop
    ctx->pc = 0x25c724u;
    // NOP
    // 0x25c728: 0x460802c4  c1          0x802C4
    ctx->pc = 0x25c728u;
    ctx->f[11] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c72c: 0x0  nop
    ctx->pc = 0x25c72cu;
    // NOP
    // 0x25c730: 0x0  nop
    ctx->pc = 0x25c730u;
    // NOP
    // 0x25c734: 0x46070284  c1          0x70284
    ctx->pc = 0x25c734u;
    ctx->f[10] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c738: 0x0  nop
    ctx->pc = 0x25c738u;
    // NOP
    // 0x25c73c: 0x0  nop
    ctx->pc = 0x25c73cu;
    // NOP
    // 0x25c740: 0x46090304  c1          0x90304
    ctx->pc = 0x25c740u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c744: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x25c744u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x25c748: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x25c748u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x25c74c: 0x46092101  sub.s       $f4, $f4, $f9
    ctx->pc = 0x25c74cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x25c750: 0x0  nop
    ctx->pc = 0x25c750u;
    // NOP
    // 0x25c754: 0x0  nop
    ctx->pc = 0x25c754u;
    // NOP
    // 0x25c758: 0x46040184  c1          0x40184
    ctx->pc = 0x25c758u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x25c75c: 0x46083834  c.lt.s      $f7, $f8
    ctx->pc = 0x25c75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c760: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x25c760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25c764: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x25c764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25c768: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x25c768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25c76c: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x25c76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25c770: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x25c770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25c774: 0x460203c1  sub.s       $f15, $f0, $f2
    ctx->pc = 0x25c774u;
    ctx->f[15] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25c778: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x25c778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25c77c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x25c77cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x25c780: 0x46041b81  sub.s       $f14, $f3, $f4
    ctx->pc = 0x25c780u;
    ctx->f[14] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x25c784: 0x46012b41  sub.s       $f13, $f5, $f1
    ctx->pc = 0x25c784u;
    ctx->f[13] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x25c788: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x25c788u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x25c78c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x25C78Cu;
    {
        const bool branch_taken_0x25c78c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C78Cu;
        // 0x25c790: 0x46050840  add.s       $f1, $f1, $f5 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c78c) {
            ctx->pc = 0x25C7C8u;
            goto label_25c7c8;
        }
    }
    ctx->pc = 0x25C794u;
    // 0x25c794: 0x46084834  c.lt.s      $f9, $f8
    ctx->pc = 0x25c794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c798: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x25C798u;
    {
        const bool branch_taken_0x25c798 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c798) {
            ctx->pc = 0x25C800u;
            goto label_25c800;
        }
    }
    ctx->pc = 0x25C7A0u;
    // 0x25c7a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c7a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c7a4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25c7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C7A8u;
    {
        const bool branch_taken_0x25c7a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c7a8) {
            ctx->pc = 0x25C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C7A8u;
            // 0x25c7ac: 0x46005287  neg.s       $f10, $f10 (Delay Slot)
            ctx->f[10] = FPU_NEG_S(ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7B0u;
            goto label_25c7b0;
        }
    }
    ctx->pc = 0x25C7B0u;
label_25c7b0:
    // 0x25c7b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25c7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C7B4u;
    {
        const bool branch_taken_0x25c7b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c7b4) {
            ctx->pc = 0x25C7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C7B4u;
            // 0x25c7b8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7BCu;
            goto label_25c7bc;
        }
    }
    ctx->pc = 0x25C7BCu;
label_25c7bc:
    // 0x25c7bc: 0x46007034  c.lt.s      $f14, $f0
    ctx->pc = 0x25c7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x25C7C0u;
    {
        const bool branch_taken_0x25c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c7c0) {
            ctx->pc = 0x25C820u;
            goto label_25c820;
        }
    }
    ctx->pc = 0x25C7C8u;
label_25c7c8:
    // 0x25c7c8: 0x46074834  c.lt.s      $f9, $f7
    ctx->pc = 0x25c7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7cc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x25C7CCu;
    {
        const bool branch_taken_0x25c7cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c7cc) {
            ctx->pc = 0x25C800u;
            goto label_25c800;
        }
    }
    ctx->pc = 0x25C7D4u;
    // 0x25c7d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c7d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c7d8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x25c7d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C7DCu;
    {
        const bool branch_taken_0x25c7dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c7dc) {
            ctx->pc = 0x25C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C7DCu;
            // 0x25c7e0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7E4u;
            goto label_25c7e4;
        }
    }
    ctx->pc = 0x25C7E4u;
label_25c7e4:
    // 0x25c7e4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x25c7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C7E8u;
    {
        const bool branch_taken_0x25c7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c7e8) {
            ctx->pc = 0x25C7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C7E8u;
            // 0x25c7ec: 0x46005ac7  neg.s       $f11, $f11 (Delay Slot)
            ctx->f[11] = FPU_NEG_S(ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7F0u;
            goto label_25c7f0;
        }
    }
    ctx->pc = 0x25C7F0u;
label_25c7f0:
    // 0x25c7f0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x25c7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c7f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25C7F4u;
    {
        const bool branch_taken_0x25c7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c7f4) {
            ctx->pc = 0x25C820u;
            goto label_25c820;
        }
    }
    ctx->pc = 0x25C7FCu;
    // 0x25c7fc: 0x0  nop
    ctx->pc = 0x25c7fcu;
    // NOP
label_25c800:
    // 0x25c800: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c804: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25c804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C808u;
    {
        const bool branch_taken_0x25c808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c808) {
            ctx->pc = 0x25C80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C808u;
            // 0x25c80c: 0x46005ac7  neg.s       $f11, $f11 (Delay Slot)
            ctx->f[11] = FPU_NEG_S(ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C810u;
            goto label_25c810;
        }
    }
    ctx->pc = 0x25C810u;
label_25c810:
    // 0x25c810: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x25c810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25c814: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C814u;
    {
        const bool branch_taken_0x25c814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c814) {
            ctx->pc = 0x25C818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C814u;
            // 0x25c818: 0x46005287  neg.s       $f10, $f10 (Delay Slot)
            ctx->f[10] = FPU_NEG_S(ctx->f[10]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C81Cu;
            goto label_25c81c;
        }
    }
    ctx->pc = 0x25C81Cu;
label_25c81c:
    // 0x25c81c: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x25c81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25c820:
    // 0x25c820: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25C820u;
    {
        const bool branch_taken_0x25c820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25c820) {
            ctx->pc = 0x25C824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C820u;
            // 0x25c824: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
            ctx->f[6] = FPU_NEG_S(ctx->f[6]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C828u;
            goto label_25c828;
        }
    }
    ctx->pc = 0x25C828u;
label_25c828:
    // 0x25c828: 0xe486000c  swc1        $f6, 0xC($a0)
    ctx->pc = 0x25c828u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x25c82c: 0xe48b0000  swc1        $f11, 0x0($a0)
    ctx->pc = 0x25c82cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x25c830: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x25c830u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x25c834: 0x3e00008  jr          $ra
    ctx->pc = 0x25C834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C834u;
        // 0x25c838: 0xe48c0008  swc1        $f12, 0x8($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C83Cu;
    // 0x25c83c: 0x0  nop
    ctx->pc = 0x25c83cu;
    // NOP
    ctx->pc = 0x25c840u;
}
